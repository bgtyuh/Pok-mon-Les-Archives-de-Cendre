# Scene index

Table de suivi de l'integration des scenes.

| Scene ID | Source narrative | Map/script cible | Flags | Variables | Statut | Notes |
|---|---|---|---|---|---|---|
| SCN_CBG_WAKE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/PlayerHouse/scripts.inc + rom/pokeemerald-expansion/src/new_game.c | FLAG_SCN_CBG_WAKE_DONE | VAR_CENDRE_STORY_STAGE, VAR_LISTEN | READY_FOR_QA | Hard start: New Game spawn direct a Cendrebourg et seed les effets de la scene wake |
| SCN_CBG_RIVAL_HOME | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/scripts.inc + map maison rival | FLAG_SCN_CBG_RIVAL_HOME_DONE | VAR_CENDRE_STORY_STAGE | TODO | A brancher quand la maison rival est definie |
| SCN_CBG_SQUARE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/scripts.inc | FLAG_SCN_CBG_SQUARE_DONE | VAR_LISTEN | IN_PROGRESS | Premier jet PNJ/signes implemente dans Cendrebourg; cutscene place + flag DONE encore a brancher |
| SCN_CBG_LAB_STARTER | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/MyrrhesLab/scripts.inc | FLAG_SCN_CBG_LAB_STARTER_DONE | VAR_STARTER_MON, VAR_CENDRE_STORY_STAGE | TODO | Choix starter + carnet |
| SCN_CBG_FIRST_BATTLE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/scripts.inc | FLAG_SCN_CBG_FIRST_BATTLE_DONE | VAR_REL_ADMIN, VAR_REL_DISS | TODO | Duel rival de fin de sequence |
| SCN_CBG_EXIT | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | route de sortie Cendrebourg | FLAG_SCN_CBG_EXIT_DONE | VAR_CENDRE_STORY_STAGE | TODO | Verrou sortie puis depart route |

## Statuts recommandes

- `TODO` : pas commence
- `IN_PROGRESS` : implementation en cours
- `READY_FOR_QA` : script termine, test en attente
- `DONE` : valide techniquement et narrativement
