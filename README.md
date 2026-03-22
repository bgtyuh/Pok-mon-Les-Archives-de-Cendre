# Pokemon - Les Archives de Cendre

Depot principal de la ROM hack:
- bible narrative en Markdown;
- base technique `pokeemerald-expansion` importee depuis WSL `Ubuntu`.

## Etat actuel

- Narratif importe dans `docs/narrative/`.
- Base ROM importee dans `rom/pokeemerald-expansion/`.
- Le `.git` imbrique de `pokeemerald-expansion` a ete retire pour eviter les conflits avec ce depot.
- Le dossier `imports/` n'est plus necessaire et a ete retire.

## Difference entre `narrative` et `integration`

- `docs/narrative/` = ce qu'on veut raconter (lore, scenario, dialogues, ton, mise en scene).
- `docs/integration/` = comment on l'implante techniquement (flags, variables, map-by-map, checklist, suivi QA).

En clair:
- `narrative` repond a "quoi ecrire ?"
- `integration` repond a "comment le faire tourner dans la ROM ?"

## Structure du projet

```text
.
|- README.md
|- AGENTS.md
|- .gitignore
|- docs/
|  |- narrative/
|  `- integration/
`- rom/
   `- pokeemerald-expansion/
```

## Build ROM (base technique)

Le coeur technique est dans:
- `rom/pokeemerald-expansion`

Commande standard:

```powershell
cd .\rom\pokeemerald-expansion
make -j4
```

Prerequis toolchain: voir
- `rom/pokeemerald-expansion/INSTALL.md`
- `rom/pokeemerald-expansion/docs/install/...`

## Build automatise depuis PowerShell (recommande)

Script inclus:
- `scripts/build-wsl.ps1`

Commande standard:

```powershell
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1
```

Ce script:
1. synchronise `.\rom\pokeemerald-expansion` vers `/home/zaidi/decomps/pokeemerald-expansion`;
2. build dans WSL (`Ubuntu`);
3. copie `pokeemerald.gba` vers `.\rom\pokeemerald-expansion\pokeemerald.gba`.

La synchro est en mode miroir (en priorite avec `rsync --delete`, sinon fallback `cp`).
Le but est de garder Windows et WSL dans le meme etat avant chaque build.

Options utiles:

```powershell
# Changer distro/path WSL
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -Distro Ubuntu -WslProjectPath /home/zaidi/decomps/pokeemerald-expansion

# Build sans synchro prealable (si tu sais ce que tu fais)
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -SkipSync

# Build seulement, sans copie de ROM
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -SkipCopy

# Desactiver la verification post-sync (non recommande)
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -SkipVerify

# Activer une synchro stricte par checksum (plus lent)
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -StrictChecksum

# Contournement: build direct depuis le dossier Windows monte dans WSL (pas de sync/copy)
powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1 -BuildFromWindowsMount
```

## Conventions projet

- On ne versionne pas les artefacts lourds (`build/`, `.gba`, `.elf`, `.map`) via `.gitignore`.
- La ROM finale (`pokeemerald.gba`) peut rester locale pour test, sans etre commit.
- Les decisions techniques de scene doivent etre documentees dans `docs/integration/`.

## Prochaine etape d'integration

1. Valider que la base compile sur ta machine.
2. Creer/remplir `docs/integration/scene-index.md`.
3. Integrer les scenes par lot (par acte ou par map).
4. Mettre a jour flags/variables/tests a chaque lot.
