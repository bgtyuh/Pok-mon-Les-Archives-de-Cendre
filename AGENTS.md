# AGENTS.md

## Mission du projet

Ce repo assemble deux sources:
1. `docs/narrative/` -> scenario, dialogues, ton, structure des actes.
2. `rom/` -> implementation technique de la ROM hack.

Le but des agents IA est de transformer le narratif en scripts jouables sans casser la base technique.

## Regles prioritaires

- La bible narrative est la source de verite pour l'histoire et le ton.
- Toute scene implementee doit etre tracable (scene, map, trigger, flags, variables).
- Ne jamais modifier ou supprimer du contenu utilisateur sans demande explicite.
- Eviter toute regression de build, de progression ou de logique de flags.
- Utiliser la base WSL `Ubuntu` comme source technique (pas `Ubuntu-24.04`).

## Structure attendue

- `docs/narrative/` : contenu narratif canonique.
- `docs/integration/` : documents de pont narratif <-> technique.
- `rom/` : code/scripts/maps de la ROM.
- `imports/` : fichiers temporaires de transfert.

## Conventions de nommage

- ID de scene: `SCN_ZONE_NOM` (exemple: `SCN_FLUXIA_ARCHIVES_REVELATION`).
- Flag de completion scene: `FLG_<ID>_DONE`.
- Flag de disponibilite: `FLG_<ID>_READY`.
- Variables relationnelles conservees si deja en place (ex: `REL_ADMIN`, `REL_DISS`, `LISTEN`, `REPAIR`).

## Workflow obligatoire par scene

1. Lire la scene source dans `docs/narrative/`.
2. Definir map, trigger, pre-requis, variantes.
3. Implementer le script event dans `rom/`.
4. Declarer ou mettre a jour flags/variables utilises.
5. Tester:
   - chemin minimal;
   - au moins 3 profils narratifs (Admin, Dissidents, Alliance) si applicable;
   - revisite map apres scene.
6. Documenter la scene dans `docs/integration/scene-index.md`.

## Definition de termine

Une scene est "done" seulement si:
- script implemente et declencheable en jeu;
- flags/variables coherents;
- pas de soft-lock;
- variantes critiques verifiees;
- documentation d'integration mise a jour.

## Fichiers d'integration a maintenir

Quand ces fichiers n'existent pas encore, les creer:
- `docs/integration/scene-index.md` (table scene -> map -> script -> flags -> variables -> tests).
- `docs/integration/flags.md` (inventaire des flags et conditions).
- `docs/integration/test-matrix.md` (cas de test narratifs et techniques).

## Bonnes pratiques de commit

- Commits petits, atomiques, explicites.
- 1 commit = 1 objectif logique (ex: une scene ou un bloc coherent).
- Dans chaque commit: resumer "quoi" et "pourquoi".
- Ne pas inclure de fichiers temporaires d'outillage.

## Escalade

Escalader au mainteneur avant de continuer si:
- deux sources se contredisent (narratif vs technique);
- une migration de structure lourde est necessaire;
- un choix impacte plusieurs maps/actes sans precedent clair.
