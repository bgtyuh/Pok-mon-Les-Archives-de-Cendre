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

## Conventions projet

- On ne versionne pas les artefacts lourds (`build/`, `.gba`, `.elf`, `.map`) via `.gitignore`.
- La ROM finale (`pokeemerald.gba`) peut rester locale pour test, sans etre commit.
- Les decisions techniques de scene doivent etre documentees dans `docs/integration/`.

## Prochaine etape d'integration

1. Valider que la base compile sur ta machine.
2. Creer/remplir `docs/integration/scene-index.md`.
3. Integrer les scenes par lot (par acte ou par map).
4. Mettre a jour flags/variables/tests a chaque lot.
