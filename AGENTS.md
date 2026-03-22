# AGENTS.md

## Mission

Transformer la bible narrative en contenu jouable dans `pokeemerald-expansion` sans casser la progression, les flags, ni la compilation.

## Source de verite

- Narratif canonique: `docs/narrative/`
- Integration technique canonique: `docs/integration/`
- Code ROM: `rom/pokeemerald-expansion/`

## Regles absolues

- Ne jamais reintroduire un depot Git imbrique dans `rom/pokeemerald-expansion/`.
- Ne jamais supprimer du contenu narratif sans validation explicite du mainteneur.
- Eviter les regressions de flags, de warps, de scripts map, et de progression.
- Toute scene implementee doit etre documentee dans `docs/integration/`.

## Separation narrative vs integration

- `docs/narrative/`: intentions, textes, ton, structure dramatique.
- `docs/integration/`: implementation concrete:
  - `scene-flags.md`
  - `variables-et-declencheurs.md`
  - `map-by-map.md`
  - `checklist-integration.md`
  - `scene-index.md`
  - `test-matrix.md`

## Conventions de nommage

- Scene ID: `SCN_ZONE_NOM`
- Flag precondition: `FLG_<SCENE_ID>_READY`
- Flag completion: `FLG_<SCENE_ID>_DONE`
- Variables transverses: conserver les noms existants (`REL_ADMIN`, `REL_DISS`, `LISTEN`, `REPAIR`, etc.)

## Workflow de travail

1. Lire la scene dans `docs/narrative/`.
2. Mapper la scene dans `docs/integration/scene-index.md`.
3. Implementer dans `rom/pokeemerald-expansion/` (script + map + triggers).
4. Mettre a jour flags/variables/map-by-map.
5. Tester les cas critiques (min path + variantes narratives).
6. Mettre a jour `docs/integration/test-matrix.md`.

## Definition of done (scene)

- Trigger fonctionnel en jeu.
- Flags et variables coherents.
- Pas de soft-lock ni loop de trigger.
- Variantes principales testees.
- Documentation integration mise a jour.

## Hygiene Git

- Commits atomiques.
- Pas d'artefacts de build en commit (`build/`, `.gba`, `.elf`, `.map`).
- Conserver les changements lisibles et traces par scene.

## Escalade

Stop et demander validation si:
- contradiction entre intention narrative et contrainte technique;
- refactor massif de structure map/script;
- impact transversal sur plusieurs actes a la fois.
