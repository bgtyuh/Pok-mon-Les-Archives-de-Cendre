# Observatoire des Cendres

## Pré-scène
- SCENE_ID: OBSERVATOIRE_DES_CENDRES
- MAP: OBSERVATOIRE_SALLE_TERMINAUX
- TRIGGER: ACTIVATE_TERMINAL_CHAIN
- PREVIOUS_SCENE: CONVOI_17_REVELATION
- NEXT_SCENE: FINAL_CHOICE_SETUP

## Blocage initial
- PLAYER_LOCK
- CAMERA_CENTER_TERMINAL_01
- SFX_TERMINAL_HUM
- MUSIC_OBSERVATORY_LOW_START
- PAUSE_SHORT

## Position des personnages
- PLAYER_POS: allée centrale, face au terminal 1
- RIVAL_POS: 1 tuile derrière le joueur, légèrement à droite
- FRENE_POS: terminal 2, face à l'écran principal
- VALCE_POS: entrée nord, hors champ au début
- ILYAN_POS: entrée nord-ouest, hors champ au début
- HEATRAN_SEAL_POS: profondeur est, visible au fond de la salle
- ZYGARDE_CELLS_POS: fissures périphériques, activation conditionnelle

## Caméra
- CAMERA_FOCUS_TERMINAL_01
- CAMERA_CUT_TERMINAL_02
- CAMERA_PAN_TO_FRENE
- CAMERA_PULL_BACK_WIDE avant l'entrée de Valce et Ilyan
- CAMERA_SPLIT_BLOCKING_LEFT_RIGHT pour opposer les deux camps
- CAMERA_PAN_DEEP_EAST sur le sceau d'Heatran
- CAMERA_TILT_DOWN fissures au sol si Zygarde est présent

## Rythme des boîtes de dialogue
- DIALOGUE_ARCHIVE_AUDIO: débit régulier, une consigne technique par boîte
- PAUSE_SHORT entre chaque lecture de terminal
- DIALOGUE_FRENE: calme contrôlé, boîtes de 2 à 3 lignes
- DIALOGUE_VALCE: diction précise, pauses nettes avant chaque objection
- DIALOGUE_ILYAN: plus rapide, coupe directe sur les répliques de contradiction
- DIALOGUE_RIVAL: réaction courte pour relancer la compréhension joueur

## Silences
- PAUSE_MEDIUM après chaque archive audio
- PAUSE_LONG après « nous nous sommes habitués à vivre de cette façon »
- SILENCE_CUT_TERMINAL_HUM avant l'apparition d'Heatran au fond du cadre
- PAUSE_SHORT avant la réplique du rival
- PAUSE_LONG si Zygarde apparaît

## Effets sonores
- SFX_TERMINAL_BEEP
- SFX_ARCHIVE_STATIC
- SFX_DOOR_HEAVY_OPEN pour Valce et Ilyan
- SFX_FOOTSTEP_STONE_REVERB
- SFX_HEATRAN_SEAL_RUMBLE
- SFX_CRACK_GLOW si Zygarde est présent
- SFX_LOW_WIND_INTERIOR pour la salle vide

## Musique
- MUSIC_OBSERVATORY_LOW_START en exploration contrôlée
- MUSIC_LAYER_ARCHIVE_PULSE sous les terminaux
- MUSIC_FADE_LOW sous l'explication de Frêne
- MUSIC_TENSION_DUAL_START à l'entrée de Valce et Ilyan
- MUSIC_DROP_TO_DRONE sur la ligne d'archive concernant Heatran
- MUSIC_ZYGARDE_MOTIF_SOFT si conditions remplies
- MUSIC_HOLD unresolved jusqu'au choix final

## Mouvements de PNJ
- NPC_RIVAL_STEP_FORWARD au premier terminal
- NPC_FRENE_TURN_PLAYER après les archives
- NPC_VALCE_STEP_IN_SLOW
- NPC_ILYAN_STEP_IN_FAST
- NPC_VALCE_STOP_LEFT_LANE
- NPC_ILYAN_STOP_RIGHT_LANE
- NPC_RIVAL_LOOK_LEFT_RIGHT entre les deux positions
- NPC_FRENE_STEP_TOWARD_CENTER pendant la médiation
- NPC_HEATRAN_SEAL_PULSE_LOOP
- NPC_ZYGARDE_CELLS_SWIRL_SLOW si présent

## Moments d'interruption
- INTERRUPT_ON_TERMINAL_ACTIVATE pour chaque archive
- INTERRUPT_DIALOGUE_FRENE by door open SFX
- INTERRUPT_ALL_IDLE on Heatran seal rumble
- INTERRUPT_PLAYER_INPUT until confrontation block ends
- CONDITIONAL_INTERRUPT_ZYGARDE after Frêne line if alliance conditions met

## Transition avant combat
- PRE_BATTLE_TRANSITION_NONE for archive phase
- IF_BOSS_BATTLE_TRIGGERED_LATER then CAMERA_SHAKE_LIGHT plus MUSIC_TENSION_DUAL_START
- FLAG_SET: OBSERVATORY_TRUTH_COMPLETE
- SCREEN_FADE_NONE to preserve confrontation continuity

## Transition après combat / après scène
- CAMERA_CENTER_PLAYER
- PAUSE_SHORT
- NPC_VALCE_AND_ILYAN_HOLD for branch setup
- PLAYER_UNLOCK_TEMP_FOR_CHOICE_APPROACH
- FLAG_SET: FINAL_CHOICE_READY
- SCENE_END_WITH_DOOR_TO_CHOICE_CHAMBER
