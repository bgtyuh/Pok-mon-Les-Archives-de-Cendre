# Pokemon - Les Archives de Cendre

Repo d'integration entre:
- la bible narrative en Markdown;
- la base technique de la ROM hack (WSL `Ubuntu`, pas `Ubuntu-24.04`).

## Objectif

Ce depot sert de "point de fusion" entre:
1. Le contenu scenario/dialogues/ton (source narrative).
2. Le projet technique ROM hack deja commence (source technique).

L'objectif est de relier proprement le texte narratif aux scripts/events/maps du jeu.

## Etat d'acces actuel (depuis Codex)

- Acces OK aux dossiers Windows sous `C:\Users\zaidi\Documents\Projets Perso\GitHub Sync\...`
- Acces direct a `WSL Ubuntu` bloque dans cette session (`E_ACCESSDENIED`).

Conclusion: pour que je fasse l'integration complete, il faut copier/exporter la base WSL dans ce repo.

## Comment me donner tous les fichiers necessaires

### 1) Copier la source narrative ici

La bible narrative existe deja dans:
- `..\Pokemon-Hack-Rom\docs\narrative`

Commande PowerShell:

```powershell
New-Item -ItemType Directory -Force .\docs\narrative | Out-Null
robocopy "..\Pokemon-Hack-Rom\docs\narrative" ".\docs\narrative" /E
```

### 2) Exporter le projet WSL `Ubuntu` (recommande)

Depuis PowerShell (Windows), en remplacant `<CHEMIN_ROM_DANS_UBUNTU>`:

```powershell
New-Item -ItemType Directory -Force .\imports | Out-Null
wsl -d Ubuntu -- bash -lc "cd '<CHEMIN_ROM_DANS_UBUNTU>' && tar -czf /mnt/c/Users/zaidi/Documents/'Projets Perso'/'GitHub Sync'/'Pok-mon-Les-Archives-de-Cendre'/imports/rom-base-ubuntu.tar.gz ."
```

Puis extraire dans ce repo:

```powershell
New-Item -ItemType Directory -Force .\rom | Out-Null
tar -xzf .\imports\rom-base-ubuntu.tar.gz -C .\rom
```

### 3) Variante sans archive (copie directe)

Si tu preferes copier directement:

```powershell
wsl -d Ubuntu -- bash -lc "cp -a <CHEMIN_ROM_DANS_UBUNTU>/. /mnt/c/Users/zaidi/Documents/'Projets Perso'/'GitHub Sync'/'Pok-mon-Les-Archives-de-Cendre'/rom/"
```

## Arborescence cible

```text
.
|- README.md
|- AGENTS.md
|- docs/
|  |- narrative/              # source narrative canonique (copie du repo scenario)
|  `- integration/            # mapping scene -> map/script/flag/variable
|- rom/                       # base technique importee depuis WSL Ubuntu
`- imports/                   # archives temporaires de transfert
```

## Ce dont j'ai besoin pour lancer l'integration complete

- Le contenu complet du projet ROM hack venant de `Ubuntu`.
- Le chemin exact du projet dans Ubuntu (exemple: `~/projects/...`).
- La commande de build/test actuelle de la ROM (si elle existe).
- Les dependances/outils requis (devkit, toolchain, scripts maison).

## Plan d'integration (apres import)

1. Verifier la structure technique (`rom/`) et la commande de build.
2. Copier/normaliser la bible narrative dans `docs/narrative/`.
3. Creer un index de mapping scene -> script -> flags -> variables.
4. Integrer scene par scene avec QA narrative + QA technique.
5. Produire un suivi d'avancement par map et par acte.

## Important

- Utiliser la distribution `Ubuntu` (pas `Ubuntu-24.04`).
- Ne pas supprimer la source narrative: elle reste la reference de ton et de contenu.
