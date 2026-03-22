# AGENTS.md - rom/pokeemerald-expansion

## Scope

Ce fichier s'applique a tout `rom/pokeemerald-expansion/`.
Les AGENTS.md plus bas dans l'arborescence ont priorite locale.

## Mission locale

Transformer le narratif en contenu jouable sans casser:
- la compilation;
- la progression;
- les flags/vars;
- les warps.

## Sources de verite (repo racine)

- `docs/narrative/` pour le canon narratif.
- `docs/integration/` pour l'implementation canonique.
- `rom/pokeemerald-expansion/` pour le code ROM.

## Regles absolues

- Ne jamais recreer de depot Git imbrique dans ce dossier.
- Ne pas versionner d'artefacts de build: `build/`, `*.gba`, `*.elf`, `*.map`, `*.sav`.
- Preferer des changements atomiques par scene.
- Toute scene implementee doit mettre a jour `docs/integration/` dans le meme lot.

## Ou modifier quoi

- Dialogues, triggers map, NPC: `data/maps/<Map>/scripts.inc` et `data/maps/<Map>/map.json`.
- Inclusion des scripts map dans le binaire: `data/event_scripts.s`.
- Flags/vars narratifs: `include/constants/flags.h` et `include/constants/vars.h`.
- Logique moteur (a toucher en dernier recours): `src/`.

## Workflow minimal par scene

1. Lire la scene dans `docs/narrative/`.
2. Verifier/mettre a jour `docs/integration/scene-index.md`.
3. Implementer code/script/map.
4. Mettre a jour `scene-flags.md`, `variables-et-declencheurs.md`, `map-by-map.md`.
5. Mettre a jour `test-matrix.md`.
6. Build et test in-game.

## Build et verification

Depuis le repo racine (Windows + WSL):
- `powershell -ExecutionPolicy Bypass -File .\scripts\build-wsl.ps1`

Depuis ce dossier (Linux/WSL):
- `make -j$(nproc)`

Tests minimaux:
- nouvelle partie;
- reprise d'une sauvegarde existante;
- re-entree/sortie de map;
- save/load autour des nouvelles scenes.

