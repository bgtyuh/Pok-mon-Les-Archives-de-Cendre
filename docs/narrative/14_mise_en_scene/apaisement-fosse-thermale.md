# Apaisement Fosse Thermale

## Pré-scène
- SCENE_ID: APAISEMENT_FOSSE_THERMALE
- MAP: FOSSE_THERMALE_CHAMBRE_CENTRALE
- TRIGGER: FLOOR_QUAKE_TRIGGER
- PREVIOUS_SCENE: EXPLORATION_FOSSE
- NEXT_SCENE: ILYAN_DENONCE_SYSTEME

## Blocage initial
- PLAYER_LOCK
- CAMERA_CENTER_PLAYER
- SFX_RUMBLE_LOOP
- CAMERA_SHAKE_MEDIUM
- MUSIC_THERMAL_ALERT_START
- PAUSE_SHORT

## Position des personnages
- PLAYER_POS: plate-forme sud, face au bassin central
- RIVAL_POS: 1 tuile derrière le joueur, orienté nord
- EDA_POS: passerelle est, près de la vanne d'urgence
- ILYAN_POS: corniche ouest, surplombant la fosse
- AGENT_FLUX_POS: plate-forme nord, devant la console de sécurité
- OUVRIERS_GROUP_POS: autour du bassin, formation éclatée
- POKEMON_ASSISTANCE_POS: proches des grilles, agitation circulaire

## Caméra
- CAMERA_PAN_UP_FAST vers le bassin lors de la secousse
- CAMERA_SHAKE_HEAVY pendant 24 frames
- CAMERA_FOCUS_EDA quand elle crie « Non ! »
- CAMERA_CUT_AGENT_FLUX
- CAMERA_FLASH_WHITE_SOFT au passage de l'onde
- CAMERA_PULL_BACK_WIDE pour montrer toute la fosse figée

## Rythme des boîtes de dialogue
- DIALOGUE_BOX_SPEED_FAST pour les réactions de crise
- DIALOGUE_EDA: boîtes courtes, exclamatives, sans description additionnelle
- DIALOGUE_AGENT_FLUX: diction mécanique, boîte unique
- DIALOGUE_ILYAN: ralentir après l'onde, laisser respirer chaque phrase
- PAUSE_SHORT entre les segments de la tirade finale d'Ilyan

## Silences
- PAUSE_SHORT après la secousse initiale
- PAUSE_MEDIUM entre l'ordre de l'agent et la protestation d'Eda
- SILENCE_CUT_MUSIC sur l'onde d'Uxie
- PAUSE_LONG pendant le plan large des ouvriers calmés
- PAUSE_MEDIUM avant la pensée du joueur

## Effets sonores
- SFX_LAVA_BUBBLE_HEAVY
- SFX_METAL_STRAIN
- SFX_CROWD_PANIC_MUFFLED
- SFX_STEAM_BURST
- SFX_PSY_WAVE_DEEP
- SFX_HEARTBEAT_SINGLE au vide post-apaisement
- SFX_CHAIN_SETTLE après le retour du calme

## Musique
- MUSIC_THERMAL_ALERT_START dès la secousse
- MUSIC_LAYER_PERCUSSION_UP pendant la panique
- MUSIC_STOP_ON_WAVE au protocole d'apaisement
- PAUSE_SHORT
- MUSIC_AMBIENT_EMPTY_START après l'onde
- MUSIC_FADE_LOW sous la tirade d'Ilyan
- MUSIC_RESUME_EXPLORATION_DARK à la fin de scène

## Mouvements de PNJ
- NPC_WORKER_GROUP_RUN_RANDOM
- NPC_POKEMON_ASSISTANCE_TUG_BACK
- NPC_RIVAL_STEP_FORWARD
- NPC_EDA_STEP_FORWARD x2
- NPC_EDA_REACH_OUT
- NPC_AGENT_FLUX_RAISE_DEVICE
- NPC_ALL_FREEZE_ON_WAVE
- NPC_ILYAN_STEP_DOWN_SLOW après le silence
- NPC_WORKER_GROUP_RESUME_IDLE_SLOW avec regards vides

## Moments d'interruption
- INTERRUPT_ON_FLOOR_QUAKE
- INTERRUPT_EDA_DIALOGUE by psy wave visual
- INTERRUPT_ALL_ANIMATION for 16 frames after wave
- INTERRUPT_PLAYER_INPUT until Ilyan finishes speaking
- INTERRUPT_AMBIENT_LOOP replace with empty reverb after wave

## Transition avant combat
- NO_BATTLE_TRANSITION dans cette scène principale
- IF_BATTLE_TRIGGER_FOLLOWS then BATTLE_TRANSITION_DELAYED_AFTER_DIALOGUE
- SCREEN_FLASH_WHITE_SOFT à la place d'un flash de combat
- FLAG_SET: FOSSE_APAISEMENT_WITNESSED

## Transition après combat / après scène
- CAMERA_RETURN_PLAYER
- DIALOGUE_PLAYER_THOUGHT_BOX_SLOW
- PAUSE_SHORT
- NPC_RIVAL_TURN_PLAYER
- PATH_OPEN_TO_EXIT_NORTH
- PLAYER_UNLOCK
- FLAG_SET: EDA_ILYAN_BRANCH_AVAILABLE
- SCENE_END_WITH_LOW_AMBIENCE
