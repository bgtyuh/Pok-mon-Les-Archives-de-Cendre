# Test matrix

Matrice minimale de QA pour chaque lot de scenes.

| Test ID | Profil joueur | Route | Condition | Resultat attendu | Statut |
|---|---|---|---|---|---|
| TST_CBG_WAKE_01 | Nouveau joueur | Tronc commun | New game -> PlayerHouse | Les 3 msgbox intro se jouent 1 seule fois | TODO |
| TST_CBG_WAKE_02 | Revisite immediate | Tronc commun | Reentrer dans PlayerHouse | Plus de cutscene auto, seulement dialogue PNJ mere | TODO |
| TST_CBG_WAKE_03 | Save/load | Tronc commun | Save apres intro puis reload | FLAG_SCN_CBG_WAKE_DONE conserve | TODO |
| TST_BOOT_01 | Hard start New Game | Tronc commun | Nouvelle partie -> spawn initial | Spawn direct en Cendrebourg (pas InsideOfTruck), FLAG_SCN_CBG_WAKE_DONE=1, VAR_CENDRE_STORY_STAGE=1, VAR_LISTEN=1 | TODO |
| TST_CBG_TOWN_01 | Cendrebourg avant starter | Tronc commun | FLAG_SCN_CBG_LAB_STARTER_DONE=0 et FLAG_SCN_CBG_FIRST_BATTLE_DONE=0 | PNJ et panneaux de Cendrebourg affichent les variantes pre-labo | TODO |
| TST_CBG_TOWN_02 | Cendrebourg apres starter | Tronc commun | FLAG_SCN_CBG_LAB_STARTER_DONE=1 et FLAG_SCN_CBG_FIRST_BATTLE_DONE=0 | PNJ Cendrebourg passent sur les variantes post-labo | TODO |
| TST_CBG_TOWN_03 | Cendrebourg apres premier duel | Tronc commun | FLAG_SCN_CBG_FIRST_BATTLE_DONE=1 | PNJ Cendrebourg passent sur les variantes post-duel, pas de retrigger scenario | TODO |
| TST_MIN_PATH_01 | Progression minimale | Tronc commun | Nouveau save | Pas de blocage, trigger principal OK | TODO |
| TST_ADMIN_01 | Pro-admin | Pre-final | Variables admin hautes | Dialogues/flags conformes admin | TODO |
| TST_DISS_01 | Pro-dissidents | Pre-final | Variables diss hautes | Dialogues/flags conformes dissidents | TODO |
| TST_ALLIANCE_01 | Equilibre/alliance | Pre-final | Variables mixtes | Chemin alliance disponible | TODO |
| TST_REVISIT_01 | Revisite map | Post-scene | Sortie + retour map | Pas de retrigger indesire | TODO |
| TST_SAVELOAD_01 | Robustesse | N/A | Save/load apres scene | Etat script conserve | TODO |

## Consigne

Ne pas marquer une scene `DONE` tant que les lignes de test pertinentes ne sont pas passees.
