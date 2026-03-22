# Choix Final

## Pré-scène
- SCENE_ID: CHOIX_FINAL
- MAP: CHAMBRE_DECISION_CENDRAL
- TRIGGER: STEP_ON_DECISION_RING
- PREVIOUS_SCENE: OBSERVATOIRE_DES_CENDRES
- NEXT_SCENE: ROUTE_ENDING_BRANCH

## Blocage initial
- PLAYER_LOCK
- CAMERA_CENTER_RING
- MUSIC_FINAL_DECISION_START
- SFX_LOW_CORE_HUM
- PAUSE_SHORT

## Position des personnages
- PLAYER_POS: centre de l'anneau de décision, face nord
- RIVAL_POS: sud immédiat, hors de l'anneau, face au joueur
- VALCE_POS: plate-forme ouest, posture fermée
- ILYAN_POS: plate-forme est, posture tendue
- FRENE_POS: nord central, entre les deux sans les rejoindre
- ZYGARDE_PRESENCE_POS: arrière-plan circulaire, conditionnel pour l'Alliance

## Caméra
- CAMERA_WIDE_SYMMETRY au démarrage
- CAMERA_PAN_LEFT_TO_VALCE pour l'option Sceau
- CAMERA_PAN_RIGHT_TO_ILYAN pour l'option Flamme
- CAMERA_CENTER_FRENE pour l'option Alliance
- CAMERA_SLOW_PUSH_IN sur le joueur avant validation
- CAMERA_HOLD_LONG après le choix

## Rythme des boîtes de dialogue
- DIALOGUE_RIVAL_OPENING: ton grave, une question par boîte
- DIALOGUE_VALCE: rythme lent, institutionnel, pauses courtes entre les propositions
- DIALOGUE_ILYAN: rythme plus rapide, impératif, boîtes courtes
- DIALOGUE_FRENE: débit calme, 3 à 4 segments mesurés
- PLAYER_CHOICE_MENU_OPEN après une pause franche
- RIVAL_RESPONSE_POST_CHOICE: une boîte immédiate, une boîte de retombée

## Silences
- PAUSE_MEDIUM après l'ouverture du rival
- PAUSE_SHORT avant chaque prise de parole de camp
- PAUSE_LONG avant l'ouverture du menu de choix
- SILENCE_CUT_MUSIC_HALF_SECOND au moment de la validation
- PAUSE_LONG après la réaction du rival

## Effets sonores
- SFX_CHAMBER_REVERB
- SFX_CLOTH_SHIFT_LOW pour les changements de posture
- SFX_MENU_OPEN_DECISION
- SFX_CHOICE_CONFIRM_HEAVY
- SFX_ZYGARDE_PULSE_SOFT si Alliance
- SFX_SEAL_TONE_LOW si Sceau
- SFX_FLAME_SPARK_LOW si Flamme

## Musique
- MUSIC_FINAL_DECISION_START en boucle retenue
- MUSIC_FADE_LOW sous chaque plaidoyer
- MUSIC_STING_SEAL sur validation Sceau
- MUSIC_STING_FLAME sur validation Flamme
- MUSIC_STING_ALLIANCE sur validation Alliance
- MUSIC_HOLD_POST_CHOICE pendant la réaction du rival
- MUSIC_FADE_TO_ROUTE_THEME selon branche choisie

## Mouvements de PNJ
- NPC_RIVAL_STEP_BACK au lancement du plaidoyer Valce
- NPC_VALCE_STEP_FORWARD_ONCE
- NPC_ILYAN_STEP_FORWARD_ONCE
- NPC_FRENE_STEP_CENTER when Alliance speaks
- NPC_RIVAL_TURN_TO_SPEAKER each option
- NPC_PLAYER_TURN_BY_CHOICE_TARGET après sélection
- NPC_ZYGARDE_GLOW_SOFT si Alliance
- NPC_VALCE_LOWER_HEAD si rejeté
- NPC_ILYAN_CLENCH_FIST si rejeté

## Moments d'interruption
- INTERRUPT_PLAYER_INPUT until choice menu opens
- INTERRUPT_DIALOGUE_CHAIN between each option block
- INTERRUPT_MUSIC_FOR_CONFIRM at selection frame
- INTERRUPT_ALL_MOVEMENT for 10 frames after choice confirm
- CONDITIONAL_INTERRUPT_ZYGARDE_VISUAL only on Alliance route

## Transition avant combat
- IF_ROUTE_REQUIRES_BATTLE then
  - SCREEN_FLASH_ROUTE_COLOR
  - MUSIC_FADE_OUT_FAST
  - CAMERA_SHAKE_LIGHT
  - BATTLE_TRANSITION_CUSTOM_ROUTE
- ELSE
  - NO_BATTLE_TRANSITION
- FLAG_SET: FINAL_CHOICE_LOCKED

## Transition après combat / après scène
- IF_POST_CHOICE_BATTLE_WON then HEAL_OR_STABILIZE_PARTY
- CAMERA_RETURN_PLAYER
- NPC_RIVAL_FINAL_REACTION
- PLAYER_UNLOCK
- FLAG_SET: ENDING_BRANCH_SELECTED
- SCENE_FADE_OUT_TO_EPILOGUE
