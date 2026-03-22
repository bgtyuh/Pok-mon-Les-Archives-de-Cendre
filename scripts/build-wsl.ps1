param(
    [string]$Distro = "Ubuntu",
    [string]$WslProjectPath = "/home/zaidi/decomps/pokeemerald-expansion",
    [switch]$SkipSync,
    [switch]$SkipCopy,
    [switch]$SkipVerify,
    [switch]$StrictChecksum,
    [switch]$BuildFromWindowsMount
)

$ErrorActionPreference = "Stop"

$repoRoot = Split-Path -Parent $PSScriptRoot
$sourceDirWindows = Join-Path $repoRoot "rom\pokeemerald-expansion"

# Chemin Windows -> WSL force en dur (demande utilisateur).
$sourceDirWsl = "/mnt/c/Users/zaidi/Documents/Projets Perso/GitHub Sync/Pok-mon-Les-Archives-de-Cendre/rom/pokeemerald-expansion"

if (-not (Test-Path $sourceDirWindows)) {
    throw "Source introuvable: $sourceDirWindows"
}

function Convert-WindowsPathToWsl {
    param([Parameter(Mandatory = $true)][string]$Path)

    $resolved = (Resolve-Path $Path).Path
    $drive = $resolved.Substring(0, 1).ToLowerInvariant()
    $rest = $resolved.Substring(2) -replace "\\", "/"
    return "/mnt/$drive$rest"
}

function Invoke-WslScript {
    param(
        [Parameter(Mandatory = $true)][string[]]$Lines,
        [Parameter(Mandatory = $true)][string]$ErrorMessage
    )

    $tmp = Join-Path $env:TEMP ("build-wsl-" + [guid]::NewGuid().ToString("N") + ".sh")
    $content = ($Lines -join "`n") + "`n"
    [System.IO.File]::WriteAllText($tmp, $content, [System.Text.UTF8Encoding]::new($false))
    $tmpWsl = Convert-WindowsPathToWsl -Path $tmp

    & wsl -d $Distro -- bash $tmpWsl | Out-Host
    $code = [int]$LASTEXITCODE

    Remove-Item $tmp -Force -ErrorAction SilentlyContinue

    if ($code -ne 0) {
        throw "$ErrorMessage (exit code $code)."
    }
}

$doSync = -not $SkipSync
$doCopy = -not $SkipCopy
$effectiveBuildPath = $WslProjectPath

if ($BuildFromWindowsMount) {
    $doSync = $false
    $doCopy = $false
    $effectiveBuildPath = $sourceDirWsl
}

if ($BuildFromWindowsMount) {
    Write-Host "[1/3] Sync ignoree (build direct sur le dossier Windows monte dans WSL)."
}
elseif ($doSync) {
    Write-Host "[1/3] Sync Windows -> WSL"

    $syncFlags = if ($StrictChecksum) { "-a --checksum --delete" } else { "-a --delete" }

    $syncLines = @(
        "set -euo pipefail",
        "SRC='$sourceDirWsl'",
        "DST='$WslProjectPath'",
        'echo SOURCE_PATH:$SRC',
        'echo DEST_PATH:$DST',
        '[ -d "$SRC" ] || { echo SOURCE_PATH_MISSING; exit 14; }',
        'mkdir -p "$DST"',
        'if command -v rsync >/dev/null 2>&1; then',
        "  rsync $syncFlags --exclude '.git/' --exclude 'build/' --exclude '*.gba' --exclude '*.elf' --exclude '*.map' --exclude '*.sav' --exclude 'porymap.user.cfg' `"`$SRC`"/ `"`$DST`"/",
        'else',
        '  find "$DST" -mindepth 1 -maxdepth 1 ! -name ".git" -exec rm -rf {} +',
        '  cp -a "$SRC"/. "$DST"/',
        '  rm -rf "$DST"/build',
        '  rm -f "$DST"/*.gba "$DST"/*.elf "$DST"/*.map "$DST"/*.sav "$DST"/porymap.user.cfg',
        'fi',
        '[ -f "$DST/Makefile" ] || { echo DEST_MAKEFILE_MISSING_AFTER_SYNC; exit 17; }'
    )
    Invoke-WslScript -Lines $syncLines -ErrorMessage "La synchronisation Windows -> WSL a echoue"

    if (-not $SkipVerify) {
        Write-Host "      Verification sync (rapide)..."
        $verifyLines = @(
            "set -euo pipefail",
            "SRC='$sourceDirWsl'",
            "DST='$WslProjectPath'",
            '[ -f "$DST/Makefile" ] || { echo VERIFY_FAIL_MAKEFILE; exit 15; }',
            'cmp -s "$SRC/src/new_game.c" "$DST/src/new_game.c" || { echo VERIFY_FAIL_SAMPLE_FILE; exit 16; }',
            'echo VERIFY_OK'
        )
        Invoke-WslScript -Lines $verifyLines -ErrorMessage "La verification de synchronisation Windows -> WSL a echoue"
    }
    else {
        Write-Host "      Verification sync ignoree (--SkipVerify)."
    }
}
else {
    Write-Host "[1/3] Sync ignoree (--SkipSync)."
}

Write-Host "[2/3] Build WSL"
Write-Host "      Build path (WSL): $effectiveBuildPath"

$buildLines = @(
    "set -euo pipefail",
    "BUILD_PATH='$effectiveBuildPath'",
    'echo BUILD_PATH:$BUILD_PATH',
    '[ -d "$BUILD_PATH" ] || { echo BUILD_PATH_NOT_FOUND; exit 12; }',
    '[ -f "$BUILD_PATH/Makefile" ] || { echo MAKEFILE_NOT_FOUND_AT_PATH; ls -la "$BUILD_PATH" | sed -n "1,40p"; exit 13; }',
    'cd "$BUILD_PATH"',
    'echo PWD:$(pwd)',
    'make -j$(nproc)'
)
Invoke-WslScript -Lines $buildLines -ErrorMessage "Le build a echoue dans WSL"

if ($BuildFromWindowsMount) {
    Write-Host "[3/3] Copy ignoree (ROM deja construite dans le dossier Windows)."
    $romBuilt = Join-Path $sourceDirWindows "pokeemerald.gba"
    if (Test-Path $romBuilt) {
        $romInfo = Get-Item $romBuilt
        Write-Host ("      ROM Windows timestamp: {0:yyyy-MM-dd HH:mm:ss} | size: {1} bytes" -f $romInfo.LastWriteTime, $romInfo.Length)
    }
}
elseif ($doCopy) {
    Write-Host "[3/3] Copy ROM to Windows repo"
    $srcRomWsl = "$WslProjectPath/pokeemerald.gba"
    $dstRomWsl = "$sourceDirWsl/pokeemerald.gba"

    $copyLines = @(
        "set -euo pipefail",
        "SRC_ROM='$srcRomWsl'",
        "DST_ROM='$dstRomWsl'",
        '[ -f "$SRC_ROM" ] || { echo BUILD_ROM_MISSING; exit 18; }',
        'cp -f --remove-destination "$SRC_ROM" "$DST_ROM"',
        'touch -m "$DST_ROM"',
        'SRC_SUM=$(sha256sum "$SRC_ROM" | cut -d " " -f1)',
        'DST_SUM=$(sha256sum "$DST_ROM" | cut -d " " -f1)',
        '[ "$SRC_SUM" = "$DST_SUM" ] || { echo ROM_COPY_HASH_MISMATCH; exit 10; }',
        'echo ROM_SHA256:$DST_SUM'
    )
    Invoke-WslScript -Lines $copyLines -ErrorMessage "La copie de pokeemerald.gba a echoue"

    $romWindows = Join-Path $sourceDirWindows "pokeemerald.gba"
    if (Test-Path $romWindows) {
        $romInfo = Get-Item $romWindows
        Write-Host ("      ROM Windows timestamp: {0:yyyy-MM-dd HH:mm:ss} | size: {1} bytes" -f $romInfo.LastWriteTime, $romInfo.Length)
    }
    Write-Host "OK: ROM copiee dans $sourceDirWindows\pokeemerald.gba"
}
else {
    Write-Host "[3/3] Copie ignoree (--SkipCopy). Build termine."
}
