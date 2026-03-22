# AGENTS.md - rom/pokeemerald-expansion/src

## Scope

Ce fichier s'applique a `rom/pokeemerald-expansion/src/`.

## Principe

Le code C du moteur est la couche la plus sensible.
Ne modifier `src/` que si la solution ne peut pas rester dans les scripts/maps data.

## Priorite de choix

1. `data/maps/<Map>/scripts.inc`
2. `data/maps/<Map>/map.json`
3. `data/scripts/*.inc`
4. `src/*.c` (dernier recours)

## Fichiers a haut risque

- `new_game.c`
- `overworld.c`
- systemes de warp/save/load

Une erreur ici peut casser toute progression, pas seulement une scene.

## Regles pour modifications moteur

- Isoler les changements (petit diff, intention claire).
- Commenter uniquement les points non evidents.
- Conserver le comportement vanilla hors zones narratives custom.
- Verifier les APIs de progression:
  - `FlagSet/FlagClear/FlagGet`
  - `VarSet/VarGet`
  - `SetWarpDestination/WarpIntoMap`

## Cas demarrage de partie (projet actuel)

Si tu touches le spawn New Game:
- verifier map de depart;
- verifier flags/vars de bootstrap narratif;
- verifier que le joueur ne retombe pas dans un ancien flux (camion, map legacy, etc.).

## Tests minimum apres modif src

- Build ROM complet.
- New Game sur save vierge.
- Chargement d'une sauvegarde existante.
- Entree/sortie des maps affectees.
- Save/load pendant la sequence modifiee.

