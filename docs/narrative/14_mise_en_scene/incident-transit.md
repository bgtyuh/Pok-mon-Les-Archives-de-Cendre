# Incident Transit

## Pré-scène
- SCENE_ID: INCIDENT_TRANSIT
- MAP: TRANSIT_SUR_RAIL_VOIE_SECONDAIRE
- TRIGGER: PLAYER_EXIT_GYM_CORRIDOR
- NEXT_SCENE: ORME_POST_INCIDENT_OPTIONAL

## Blocage initial
- PLAYER_LOCK
- CAMERA_CENTER_PLAYER
- NPC_ORME_FACE_DOWN
- NPC_RIVAL_FACE_RIGHT
- MUSIC_DUCK_LOW
- SFX_DISTANT_RAIL
- PAUSE_SHORT

## Position des personnages
- PLAYER_POS: quai central, 2 tuiles au sud de la bifurcation
- RIVAL_POS: 1 tuile à droite du joueur, orienté nord
- ORME_POS: 4 tuiles au nord, entre le joueur et la voie secondaire
- AGENT_FLUX_01_POS: passerelle gauche, orienté est
- AGENT_FLUX_02_POS: passerelle droite, orienté ouest
- POKEMON_PANIQUES_GROUP_POS: voie secondaire nord, dispersion en arc de cercle
- CIVILS_GROUP_POS: quai ouest, recul en ligne brisée

## Caméra
- CAMERA_PAN_UP_MEDIUM
- CAMERA_SHAKE_LIGHT
- CAMERA_FOCUS_POKEMON_GROUP
- PAUSE_SHORT
- CAMERA_PAN_DOWN_TO_ORME
- CAMERA_HOLD

## Rythme des boîtes de dialogue
- DIALOGUE_BOX_SPEED_FAST: vacarme initial, phrases courtes d'alerte
- DIALOGUE_ORME: 2 lignes maximum par boîte
- PAUSE_SHORT entre chaque ordre d'Orme
- DIALOGUE_RIVAL: débit haché, une question par boîte
- DIALOGUE_AGENT_FLUX: ton neutre, une seule boîte sans ellipse

## Silences
- PAUSE_SHORT après le premier cri hors-champ
- PAUSE_MEDIUM après « On fait quoi ? »
- PAUSE_LONG juste avant le protocole d'apaisement
- SILENCE_CUT_ALL_AMBIENCE pendant l'onde
- PAUSE_MEDIUM après le retour au calme

## Effets sonores
- SFX_RAIL_SCREECH
- SFX_POKEMON_PANIC_LAYER
- SFX_CROWD_GASP
- SFX_ORME_WHISTLE
- SFX_PSY_WAVE
- SFX_AMBIENCE_DROP
- SFX_SINGLE_METAL_TICK au retour du silence

## Musique
- MUSIC_TRANSIT_TENSION_START au début du mouvement de foule
- MUSIC_DUCK_LOW pendant les ordres d'Orme
- MUSIC_STOP_ON_WAVE au déclenchement du protocole
- PAUSE_SHORT
- MUSIC_RESUME_TRANSIT_LOW après « Incident contenu »
- MUSIC_FADE_OUT avant la sortie vers la périphérie

## Mouvements de PNJ
- NPC_CIVIL_GROUP_STEP_BACK
- NPC_ORME_STEP_FORWARD
- NPC_ORME_ARM_BLOCK
- NPC_RIVAL_STEP_FORWARD
- NPC_ORME_STEP_SIDE_BLOCK_RIVAL
- NPC_AGENT_FLUX_01_STEP_IN
- NPC_AGENT_FLUX_02_STEP_IN
- NPC_POKEMON_GROUP_PACE_RANDOM
- NPC_POKEMON_GROUP_FREEZE_ON_WAVE
- NPC_CIVIL_GROUP_RESUME_PATH_SLOW après l'incident

## Moments d'interruption
- INTERRUPT_ON_SFX_RAIL_SCREECH
- INTERRUPT_DIALOGUE_RIVAL when panic reaches frame
- INTERRUPT_ALL_MOVEMENT for 12 frames before psy wave
- INTERRUPT_PLAYER_INPUT until scene end
- OPTIONAL_INTERRUPT_IF_PLAYER_TALKS_ORME after main scene

## Transition avant combat
- NO_BATTLE_TRANSITION
- FLAG_SET: INCIDENT_TRANSIT_VIEWED
- HEAL_CHECK_OPTIONAL si l'arène vient d'être terminée
- SCREEN_FADE_NONE pour garder la continuité du quai

## Transition après combat / après scène
- CAMERA_RETURN_PLAYER
- NPC_RIVAL_TURN_PLAYER
- DIALOGUE_PLAYER_THOUGHT_BOX_SLOW
- PAUSE_SHORT
- ORME_EXIT_NORTH
- NPC_CIVIL_GROUP_CLEAR_PATH
- PLAYER_UNLOCK
- FLAG_SET: TRANSIT_PERIPHERY_ROUTE_OPEN
- SCENE_END_WALK_AND_TALK vers la périphérie
