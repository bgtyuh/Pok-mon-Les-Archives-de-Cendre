Cendrebourg_RivalHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Cendrebourg_RivalHouse_OnTransition
	.byte 0

Cendrebourg_RivalHouse_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

Cendrebourg_RivalHouse_NPC_Rival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_RivalHouse_NPC_Rival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_RivalHouse_NPC_Rival_AfterStarter
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Cendrebourg_RivalHouse_NPC_Rival_BeforeStarter_PlayerMale
	goto_if_eq VAR_RESULT, FEMALE, Cendrebourg_RivalHouse_NPC_Rival_BeforeStarter_PlayerFemale
	end

Cendrebourg_RivalHouse_NPC_Rival_BeforeStarter_PlayerMale::
	msgbox Cendrebourg_RivalHouse_Text_Rival_BeforeStarter_PlayerMale, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Rival_BeforeStarter_PlayerFemale::
	msgbox Cendrebourg_RivalHouse_Text_Rival_BeforeStarter_PlayerFemale, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Rival_AfterStarter::
	msgbox Cendrebourg_RivalHouse_Text_Rival_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Rival_AfterBattle::
	msgbox Cendrebourg_RivalHouse_Text_Rival_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Parent::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_RivalHouse_NPC_Parent_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_RivalHouse_NPC_Parent_AfterStarter
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Cendrebourg_RivalHouse_NPC_Parent_BeforeStarter_PlayerMale
	goto_if_eq VAR_RESULT, FEMALE, Cendrebourg_RivalHouse_NPC_Parent_BeforeStarter_PlayerFemale
	end

Cendrebourg_RivalHouse_NPC_Parent_BeforeStarter_PlayerMale::
	msgbox Cendrebourg_RivalHouse_Text_Parent_BeforeStarter_PlayerMale, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Parent_BeforeStarter_PlayerFemale::
	msgbox Cendrebourg_RivalHouse_Text_Parent_BeforeStarter_PlayerFemale, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Parent_AfterStarter::
	msgbox Cendrebourg_RivalHouse_Text_Parent_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_NPC_Parent_AfterBattle::
	msgbox Cendrebourg_RivalHouse_Text_Parent_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_RivalHouse_Sign_Frame::
	msgbox Cendrebourg_RivalHouse_Text_Sign_Frame, MSGBOX_SIGN
	end

Cendrebourg_RivalHouse_Sign_Desk::
	msgbox Cendrebourg_RivalHouse_Text_Sign_Desk, MSGBOX_SIGN
	end

Cendrebourg_RivalHouse_Text_Rival_BeforeStarter_PlayerMale:
	.string "Ah, te voila.\n"
	.string "On file au labo ?$"

Cendrebourg_RivalHouse_Text_Rival_BeforeStarter_PlayerFemale:
	.string "Ah, te voila.\n"
	.string "On file au labo ?$"

Cendrebourg_RivalHouse_Text_Rival_AfterStarter:
	.string "Parfait, on est prets.\n"
	.string "Premier duel sur la place.$"

Cendrebourg_RivalHouse_Text_Rival_AfterBattle:
	.string "Ce duel m'a bien recadre.\n"
	.string "Au prochain, je serai pret.$"

Cendrebourg_RivalHouse_Text_Parent_BeforeStarter_PlayerMale:
	.string "Mon enfant est motivee,\n"
	.string "mais elle part toujours trop vite.$"

Cendrebourg_RivalHouse_Text_Parent_BeforeStarter_PlayerFemale:
	.string "Mon enfant est motive,\n"
	.string "mais il part toujours trop vite.$"

Cendrebourg_RivalHouse_Text_Parent_AfterStarter:
	.string "Bon reflexe d'etre passes au labo.\n"
	.string "Prenez votre temps sur la route.$"

Cendrebourg_RivalHouse_Text_Parent_AfterBattle:
	.string "Le premier duel est fait.\n"
	.string "Vous etes bien lances.$"

Cendrebourg_RivalHouse_Text_Sign_Frame:
	.string "Une photo de classe du college.\n"
	.string "Plusieurs visages manquent.$"

Cendrebourg_RivalHouse_Text_Sign_Desk:
	.string "Un bureau en desordre.\n"
	.string "Des plans de route griffonnes.$"
