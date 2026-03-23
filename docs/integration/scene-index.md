# Scene index

Table de suivi de l'integration des scenes.

| Scene ID | Source narrative | Map/script cible | Flags | Variables | Statut | Notes |
|---|---|---|---|---|---|---|
| SCN_CBG_WAKE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/PlayerHouse/scripts.inc + rom/pokeemerald-expansion/src/new_game.c | FLAG_SCN_CBG_WAKE_DONE | VAR_CENDRE_STORY_STAGE, VAR_LISTEN | READY_FOR_QA | Hard start: New Game spawn direct a Cendrebourg et seed les effets de la scene wake |
| SCN_CBG_RIVAL_HOME | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg_RivalHouse/scripts.inc | FLAG_SCN_CBG_RIVAL_HOME_DONE | VAR_CENDRE_STORY_STAGE | IN_PROGRESS | Maison rival jouable (dialogues nettoyes, variantes sexe joueur, interactions decor), flag DONE narratif encore a brancher |
| SCN_CBG_SQUARE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/scripts.inc | FLAG_SCN_CBG_SQUARE_DONE | VAR_LISTEN | IN_PROGRESS | Dialogues Cendrebourg re-ecrits pour coherence, PNJ ext utilises en elevation 3 (fix superposition toits), duel toujours one-shot |
| SCN_CBG_LAB_STARTER | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/MyrrhesLab/scripts.inc | FLAG_SCN_CBG_LAB_STARTER_DONE | VAR_STARTER_MON, VAR_CENDRE_STORY_STAGE | IN_PROGRESS | Labo branche (professeure, rival, assistante, choix starter, carnet) avec texte clarifie et variantes sexe joueur |
| SCN_CBG_FIRST_BATTLE | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/scripts.inc | FLAG_SCN_CBG_FIRST_BATTLE_DONE | VAR_REL_ADMIN, VAR_REL_DISS | IN_PROGRESS | Duel rival one-shot implemente en place centrale avec branch trainer par sexe + starter, puis deplacement de la rivale en fin de scene |
| SCN_CBG_EXIT | docs/narrative/09_script-integral/acte_1/01_intro_cendrebourg.md | rom/pokeemerald-expansion/data/maps/Cendrebourg/map.json + rom/pokeemerald-expansion/data/maps/RouteCendre1/map.json + rom/pokeemerald-expansion/data/maps/RouteCendreOuest/map.json | FLAG_SCN_CBG_EXIT_DONE | VAR_CENDRE_STORY_STAGE | IN_PROGRESS | Connexions monde Cendrebourg -> Route Cendre 1 (nord) et Route Cendre Ouest (ouest) ajoutees, prototypes jouables |

## Statuts recommandes

- `TODO` : pas commence
- `IN_PROGRESS` : implementation en cours
- `READY_FOR_QA` : script termine, test en attente
- `DONE` : valide techniquement et narrativement
