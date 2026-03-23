PlayerHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse_OnFrame
	.byte 0

PlayerHouse_OnFrame:
	map_script_2 VAR_TEMP_0, 0, PlayerHouse_EventScript_BootstrapIntro
	.2byte 0

PlayerHouse_EventScript_BootstrapIntro::
	goto_if_set FLAG_SCN_CBG_WAKE_DONE, PlayerHouse_EventScript_DisableBootstrap
	setvar VAR_TEMP_0, 1
	msgbox PlayerHouse_Text_MotherWake_1, MSGBOX_DEFAULT
	msgbox PlayerHouse_Text_MotherWake_2, MSGBOX_DEFAULT
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PlayerHouse_EventScript_MotherWake_RivalFemale
	call_if_eq VAR_RESULT, FEMALE, PlayerHouse_EventScript_MotherWake_RivalMale
	setflag FLAG_SCN_CBG_WAKE_DONE
	setvar VAR_CENDRE_STORY_STAGE, 1
	addvar VAR_LISTEN, 1
	end

PlayerHouse_EventScript_DisableBootstrap::
	setvar VAR_TEMP_0, 1
	end

PlayerHouse_EventScript_MotherWake_RivalFemale::
	msgbox PlayerHouse_Text_MotherWake_3_PlayerMale, MSGBOX_DEFAULT
	return

PlayerHouse_EventScript_MotherWake_RivalMale::
	msgbox PlayerHouse_Text_MotherWake_3_PlayerFemale, MSGBOX_DEFAULT
	return

PlayerHouse_NPC_Mother::
	msgbox PlayerHouse_Text_MotherAfterWake, MSGBOX_NPC
	end

PlayerHouse_Text_MotherWake_1:
	.string "Tu es deja leve ?\n"
	.string "J'allais venir te tirer du lit.$"

PlayerHouse_Text_MotherWake_2:
	.string "Habille-toi et file voir\n"
	.string "la professeure Frene au labo.$"

PlayerHouse_Text_MotherWake_3_PlayerMale:
	.string "Ta voisine ne va pas tarder\n"
	.string "a passer te chercher.$"

PlayerHouse_Text_MotherWake_3_PlayerFemale:
	.string "Ton voisin ne va pas tarder\n"
	.string "a passer te chercher.$"

PlayerHouse_Text_MotherAfterWake:
	.string "Ne tarde pas, le labo t'attend.\n"
	.string "Bonne chance.$"
