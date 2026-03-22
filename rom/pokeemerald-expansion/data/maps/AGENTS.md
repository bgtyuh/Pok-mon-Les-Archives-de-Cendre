# AGENTS.md - rom/pokeemerald-expansion/data/maps

## Scope

Ce fichier s'applique a `rom/pokeemerald-expansion/data/maps/` et sous-dossiers.

## Structure standard d'une map

Chaque map contient en general:
- `map.json` (source de verite map/events/warps/bg events);
- `scripts.inc` (scripts, dialogues, labels);
- `events.inc` (auto-gen, ne pas editer);
- `header.inc` (auto-gen, ne pas editer);
- `connections.inc` (auto-gen, ne pas editer).

## Edit matrix

- Modifier `map.json` pour:
  - object events;
  - warp events;
  - coord/bg events;
  - metadata (music, map_type, region_map_section, etc.).
- Modifier `scripts.inc` pour:
  - logique de scene;
  - dialogues;
  - conditions flags/vars.
- Ne jamais modifier `events.inc`, `header.inc`, `connections.inc` a la main.

## Convention scripts

- Labels explicites: `MapName_NPC_Name`, `MapName_EventScript_*`.
- Dialogues en `.string "...$"`.
- Utiliser `\n` pour les retours de ligne.
- Garder les textes en ASCII simple pour eviter les problemes d'encodage.

## Flags/vars et progression

- Ordre de checks recommande:
  - scene deja terminee (`*_DONE`);
  - scene intermediaire (`*_READY` ou equivalent);
  - fallback dialogue par defaut.
- Eviter les retriggers infinis:
  - setflag au bon moment;
  - sortie de script claire (`end`).

## Warps et anti soft-lock

- Verifier les coordonnees de spawn:
  - pas sur NPC;
  - pas sur collision bloquante;
  - pas sur une case warp instantanee involontaire.
- Tester au minimum:
  - entree map depuis chaque warp;
  - sortie map;
  - save/load au milieu de la zone.

## Cas special de ce projet

- Le flux de demarrage hard-start passe par `src/new_game.c`.
- Les scripts du camion (`InsideOfTruck`) peuvent encore influencer les retours dynamiques.
- Toute modif de debut de jeu doit verifier:
  - spawn New Game;
  - etat des flags/vars de prelude;
  - acces a Cendrebourg, PlayerHouse, MyrrhesLab.

