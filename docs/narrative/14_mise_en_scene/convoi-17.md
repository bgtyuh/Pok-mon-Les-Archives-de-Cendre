# Convoi 17

## Pré-scène
- SCENE_ID: CONVOI_17_REVELATION
- MAP: SITE_DERAILLEMENT_CONVOI_17
- TRIGGER: INTERACT_TWISTED_PLATE
- PREVIOUS_SCENE: INVESTIGATION_ARCHIVES
- NEXT_SCENE: FRENE_CONFESSION

## Blocage initial
- PLAYER_LOCK
- CAMERA_CENTER_PLATE
- MUSIC_MINIMAL_DRONE_START
- SFX_WIND_ASH
- PAUSE_SHORT

## Position des personnages
- PLAYER_POS: devant la plaque tordue, face nord
- RIVAL_POS: 1 tuile à gauche du joueur, face nord-est
- ORME_POS: wagon effondré à droite, légèrement en retrait
- FRENE_POS: entrée sud du site, hors champ au début
- OMBRES_EQUIPE_TERRAIN_POS: silhouettes fixes près des débris, si flashback visuel utilisé
- ARCHIVE_PROJECTOR_POS: caisse technique au centre du wagon brisé

## Caméra
- CAMERA_CLOSE_ON_PLATE
- CAMERA_PAN_RIGHT_TO_ORME
- CAMERA_HOLD
- CAMERA_PULL_BACK_MEDIUM pour inclure joueur et rival
- CAMERA_SLOW_PUSH_IN sur Orme pendant la révélation
- CAMERA_PAN_SOUTH_TO_FRENE lors de son entrée

## Rythme des boîtes de dialogue
- DIALOGUE_BOX_SPEED_SLOW pour la lecture de plaque
- PAUSE_SHORT après « transfert prioritaire »
- DIALOGUE_RIVAL: ironie brève, une coupe nette après chaque question
- DIALOGUE_ORME: rythme grave, laisser une pause entre chaque information
- DIALOGUE_FRENE: débit posé, boîtes plus longues, pas d'effet mélodramatique

## Silences
- PAUSE_MEDIUM après la lecture de la plaque
- PAUSE_SHORT après la réaction du rival
- PAUSE_LONG avant « Y avait des survivants »
- SILENCE_KEEP_WIND_ONLY sous l'aveu de Frêne
- PAUSE_LONG après la dernière ligne de Frêne

## Effets sonores
- SFX_METAL_CREAK_LIGHT
- SFX_DISTANT_WAGON_CLINK
- SFX_ARCHIVE_PROJECTOR_ON si archive affichée
- SFX_PAPER_RUSTLE_LOW
- SFX_WIND_ASH_LOOP
- SFX_FOOTSTEP_ASH pour l'entrée de Frêne

## Musique
- MUSIC_MINIMAL_DRONE_START au focus sur la plaque
- MUSIC_FADE_LOWER sous la révélation d'Orme
- MUSIC_MEMORY_PAD_START à l'entrée de Frêne
- MUSIC_HOLD_NO_PERCUSSION pendant son aveu
- MUSIC_FADE_OUT_SLOW en fin de scène

## Mouvements de PNJ
- NPC_RIVAL_LEAN_IN
- NPC_RIVAL_STEP_BACK après la mention des survivants
- NPC_ORME_STEP_OUT_FROM_WAGON
- NPC_ORME_LOOK_DOWN
- NPC_FRENE_STEP_FORWARD_SLOW x3
- NPC_FRENE_STOP_AT_EDGE_OF_LIGHT
- NPC_PLAYER_TURN_SOUTH à l'entrée de Frêne
- NPC_RIVAL_TURN_SOUTH

## Moments d'interruption
- INTERRUPT_ON_PLATE_INTERACT
- INTERRUPT_RIVAL_LINE by Orme stepping into frame
- INTERRUPT_MUSIC_PERCUSSION none, garder tension sourde
- INTERRUPT_PLAYER_INPUT until Frêne finishes confession
- OPTIONAL_INTERRUPT_FLASHBACK_OVERLAY entre la révélation d'Orme et l'entrée de Frêne

## Transition avant combat
- NO_BATTLE_TRANSITION
- IF_HOSTILE_ENCOUNTER_PRECEDED then MUSIC_RESET_TO_MINIMAL_DRONE
- SCREEN_FADE_NONE pour préserver la continuité du site
- FLAG_SET: CONVOI_17_TRUTH_REVEALED

## Transition après combat / après scène
- CAMERA_RETURN_PLAYER
- PAUSE_SHORT
- NPC_ORME_EXIT_EAST_OPTIONAL
- NPC_FRENE_HOLD_POSITION pour dialogue additionnel
- PLAYER_UNLOCK
- FLAG_SET: OBSERVATOIRE_ACCESS_PROGRESS
- SCENE_END_FADE_TO_FIELD_AMBIENCE
