# AGENTS.md - rom/pokeemerald-expansion/data

## Scope

Ce fichier s'applique a `rom/pokeemerald-expansion/data/` et sous-dossiers,
sauf si un AGENTS.md plus specifique existe.

## Rappel important

Le dossier `data/` contient a la fois:
- des sources editees a la main;
- des fichiers auto-generes au build.

Ne pas confondre les deux.

## Fichiers auto-generes (ne pas editer a la main)

Pour les maps:
- `data/maps/*/events.inc`
- `data/maps/*/header.inc`
- `data/maps/*/connections.inc`
- `data/maps/events.inc`
- `data/maps/headers.inc`
- `data/maps/connections.inc`
- `data/maps/groups.inc`

Pour les layouts:
- `data/layouts/layouts.inc`
- `data/layouts/layouts_table.inc`

## Sources a editer

- Topologie/events map: `data/maps/<Map>/map.json`
- Scripts/texte map: `data/maps/<Map>/scripts.inc`
- Groupes de maps: `data/maps/map_groups.json`
- Layouts: `data/layouts/layouts.json` + `data/layouts/<Layout>/map.bin|border.bin`
- Inclusion des scripts map: `data/event_scripts.s`

## Regle critique: inclusion des scripts map

Un `scripts.inc` non inclus dans `data/event_scripts.s` ne sera pas compile.
Quand une nouvelle map custom est ajoutee, verifier l'existence de:
- `.include "data/maps/<Map>/scripts.inc"` dans `data/event_scripts.s`.

## Checklist ajout de map custom

1. Creer `data/maps/<Map>/map.json` et `scripts.inc`.
2. Ajouter la map au bon groupe dans `data/maps/map_groups.json`.
3. Ajouter le layout dans `data/layouts/layouts.json` si necessaire.
4. Ajouter l'include du script dans `data/event_scripts.s`.
5. Build complet.
6. Tester warp entree/sortie + interactions.
7. Documenter dans `docs/integration/`.

