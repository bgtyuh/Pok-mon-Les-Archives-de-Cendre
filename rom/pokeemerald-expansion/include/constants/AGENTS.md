# AGENTS.md - rom/pokeemerald-expansion/include/constants

## Scope

Ce fichier s'applique a `rom/pokeemerald-expansion/include/constants/`.

## Mission locale

Maintenir des constantes stables et lisibles sans casser les save states.

## Flags narratifs

Fichier principal: `flags.h`.

Regles:
- Ajouter des aliases narratifs sur des flags explicitement inutilises.
- Ne pas renumeroter des flags existants.
- Eviter de deplacer des blocs entiers de constantes.
- Conserver des commentaires clairs sur le mapping alias -> slot.

Convention projet en code:
- `FLAG_SCN_<ZONE>_<SCENE>_DONE`
- optionnel: `FLAG_SCN_<ZONE>_<SCENE>_READY`

## Vars narratives

Fichier principal: `vars.h`.

Regles:
- Utiliser des `VAR_UNUSED_*` documentes comme base d'alias.
- Ne pas ecraser des vars deja utilisees ailleurs.
- Conserver les vars transverses du projet:
  - `VAR_REL_ADMIN`
  - `VAR_REL_DISS`
  - `VAR_LISTEN`
  - `VAR_REPAIR`
  - `VAR_CENDRE_STORY_STAGE`

## Synchronisation doc obligatoire

Chaque ajout/modification ici doit mettre a jour:
- `docs/integration/scene-flags.md`
- `docs/integration/variables-et-declencheurs.md`
- `docs/integration/scene-index.md` (si impact scene)

## Verification anti collision

Avant merge:
1. Rechercher les usages du flag/var (`rg`).
2. Verifier qu'aucune autre scene ne reutilise le meme slot avec un autre sens.
3. Build + test chemin minimal de progression.

