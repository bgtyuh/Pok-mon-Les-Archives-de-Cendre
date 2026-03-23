MyrrhesLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MyrrhesLab_OnTransition
	.byte 0

MyrrhesLab_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

MyrrhesLab_NPC_ProfesseureFrene::
	lock
	faceplayer
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, MyrrhesLab_EventScript_Prof_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, MyrrhesLab_EventScript_Prof_AfterStarter
	msgbox MyrrhesLab_Text_Prof_Intro_1, MSGBOX_DEFAULT
	msgbox MyrrhesLab_Text_Prof_Intro_2, MSGBOX_DEFAULT
	msgbox MyrrhesLab_Text_Prof_Intro_3, MSGBOX_DEFAULT
	goto MyrrhesLab_EventScript_ChooseStarter_Begin

MyrrhesLab_EventScript_Prof_AfterStarter::
	msgbox MyrrhesLab_Text_Prof_AfterStarter, MSGBOX_DEFAULT
	release
	end

MyrrhesLab_EventScript_Prof_AfterBattle::
	msgbox MyrrhesLab_Text_Prof_AfterBattle, MSGBOX_DEFAULT
	release
	end

MyrrhesLab_EventScript_ChooseStarter_Begin::
	msgbox MyrrhesLab_Text_ChooseStarter_Prompt, MSGBOX_DEFAULT
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox MyrrhesLab_Text_ChooseStarter_Treecko, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MyrrhesLab_EventScript_GiveTreecko
	hidemonpic
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox MyrrhesLab_Text_ChooseStarter_Torchic, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MyrrhesLab_EventScript_GiveTorchic
	hidemonpic
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox MyrrhesLab_Text_ChooseStarter_Mudkip, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MyrrhesLab_EventScript_GiveMudkip
	hidemonpic
	msgbox MyrrhesLab_Text_ChooseStarter_TakeTime, MSGBOX_DEFAULT
	release
	end

MyrrhesLab_EventScript_GiveTreecko::
	hidemonpic
	setvar VAR_STARTER_MON, 0
	givemon SPECIES_TREECKO, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MyrrhesLab_EventScript_ReceiveTreecko
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MyrrhesLab_EventScript_ReceiveTreeckoToPC
	goto Common_EventScript_NoMoreRoomForPokemon

MyrrhesLab_EventScript_GiveTorchic::
	hidemonpic
	setvar VAR_STARTER_MON, 1
	givemon SPECIES_TORCHIC, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MyrrhesLab_EventScript_ReceiveTorchic
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MyrrhesLab_EventScript_ReceiveTorchicToPC
	goto Common_EventScript_NoMoreRoomForPokemon

MyrrhesLab_EventScript_GiveMudkip::
	hidemonpic
	setvar VAR_STARTER_MON, 2
	givemon SPECIES_MUDKIP, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MyrrhesLab_EventScript_ReceiveMudkip
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MyrrhesLab_EventScript_ReceiveMudkipToPC
	goto Common_EventScript_NoMoreRoomForPokemon

MyrrhesLab_EventScript_ReceiveTreecko::
	msgbox MyrrhesLab_Text_ReceivedTreecko, MSGBOX_DEFAULT
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_ReceiveTorchic::
	msgbox MyrrhesLab_Text_ReceivedTorchic, MSGBOX_DEFAULT
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_ReceiveMudkip::
	msgbox MyrrhesLab_Text_ReceivedMudkip, MSGBOX_DEFAULT
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_ReceiveTreeckoToPC::
	msgbox MyrrhesLab_Text_ReceivedTreecko, MSGBOX_DEFAULT
	call Common_EventScript_TransferredToPC
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_ReceiveTorchicToPC::
	msgbox MyrrhesLab_Text_ReceivedTorchic, MSGBOX_DEFAULT
	call Common_EventScript_TransferredToPC
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_ReceiveMudkipToPC::
	msgbox MyrrhesLab_Text_ReceivedMudkip, MSGBOX_DEFAULT
	call Common_EventScript_TransferredToPC
	goto MyrrhesLab_EventScript_StarterFinalize

MyrrhesLab_EventScript_StarterFinalize::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_SCN_CBG_LAB_STARTER_DONE
	setrespawn HEAL_LOCATION_CENDREBOURG_PLAYER_HOUSE
	setvar VAR_CENDRE_STORY_STAGE, 2
	msgbox MyrrhesLab_Text_StarterFinalize, MSGBOX_DEFAULT
	release
	end

MyrrhesLab_NPC_Rival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, MyrrhesLab_NPC_Rival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, MyrrhesLab_NPC_Rival_AfterStarter
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, MyrrhesLab_NPC_Rival_BeforeStarter_PlayerMale
	goto_if_eq VAR_RESULT, FEMALE, MyrrhesLab_NPC_Rival_BeforeStarter_PlayerFemale
	end

MyrrhesLab_NPC_Rival_BeforeStarter_PlayerMale::
	msgbox MyrrhesLab_Text_Rival_BeforeStarter_PlayerMale, MSGBOX_NPC
	end

MyrrhesLab_NPC_Rival_BeforeStarter_PlayerFemale::
	msgbox MyrrhesLab_Text_Rival_BeforeStarter_PlayerFemale, MSGBOX_NPC
	end

MyrrhesLab_NPC_Rival_AfterStarter::
	msgbox MyrrhesLab_Text_Rival_AfterStarter, MSGBOX_NPC
	end

MyrrhesLab_NPC_Rival_AfterBattle::
	msgbox MyrrhesLab_Text_Rival_AfterBattle, MSGBOX_NPC
	end

MyrrhesLab_NPC_Assistante::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, MyrrhesLab_NPC_Assistante_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, MyrrhesLab_NPC_Assistante_AfterStarter
	msgbox MyrrhesLab_Text_Assistante_BeforeStarter, MSGBOX_NPC
	end

MyrrhesLab_NPC_Assistante_AfterStarter::
	msgbox MyrrhesLab_Text_Assistante_AfterStarter, MSGBOX_NPC
	end

MyrrhesLab_NPC_Assistante_AfterBattle::
	msgbox MyrrhesLab_Text_Assistante_AfterBattle, MSGBOX_NPC
	end

MyrrhesLab_Sign_Machine::
	msgbox MyrrhesLab_Text_Sign_Machine, MSGBOX_SIGN
	end

MyrrhesLab_Sign_Bookshelf::
	msgbox MyrrhesLab_Text_Sign_Bookshelf, MSGBOX_SIGN
	end

MyrrhesLab_Sign_PC::
	msgbox MyrrhesLab_Text_Sign_PC, MSGBOX_SIGN
	end

MyrrhesLab_Sign_Notes::
	msgbox MyrrhesLab_Text_Sign_Notes, MSGBOX_SIGN
	end

MyrrhesLab_Text_Prof_Intro_1:
	.string "Bienvenue au labo.\n"
	.string "Approchez, je vous ecoute.$"

MyrrhesLab_Text_Prof_Intro_2:
	.string "Ici, on apprend a observer\n"
	.string "avant de conclure.$"

MyrrhesLab_Text_Prof_Intro_3:
	.string "Le premier partenaire compte.\n"
	.string "Choisis celui qui te ressemble.$"

MyrrhesLab_Text_ChooseStarter_Prompt:
	.string "Regarde-les bien.\n"
	.string "Le bon choix doit te sembler naturel.$"

MyrrhesLab_Text_ChooseStarter_Treecko:
	.string "Tu choisis ARCKO,\n"
	.string "le starter PLANTE ?$"

MyrrhesLab_Text_ChooseStarter_Torchic:
	.string "Tu choisis POUSSIFEU,\n"
	.string "le starter FEU ?$"

MyrrhesLab_Text_ChooseStarter_Mudkip:
	.string "Tu choisis GOBOU,\n"
	.string "le starter EAU ?$"

MyrrhesLab_Text_ChooseStarter_TakeTime:
	.string "Prends ton temps.\n"
	.string "On ne choisit pas au hasard.$"

MyrrhesLab_Text_ReceivedTreecko:
	.string "{PLAYER} recoit ARCKO.$"

MyrrhesLab_Text_ReceivedTorchic:
	.string "{PLAYER} recoit POUSSIFEU.$"

MyrrhesLab_Text_ReceivedMudkip:
	.string "{PLAYER} recoit GOBOU.$"

MyrrhesLab_Text_StarterFinalize:
	.string "Voici ton Carnet d'Archive.\n"
	.string "Note ce que tu vois sur le terrain.$"

MyrrhesLab_Text_Prof_AfterStarter:
	.string "Fais un duel d'essai sur la place,\n"
	.string "puis reviens me voir.$"

MyrrhesLab_Text_Prof_AfterBattle:
	.string "Bien joue.\n"
	.string "Tu peux maintenant quitter Cendrebourg.$"

MyrrhesLab_Text_Rival_BeforeStarter_PlayerMale:
	.string "Toujours indecis ?\n"
	.string "Respire, puis choisis.$"

MyrrhesLab_Text_Rival_BeforeStarter_PlayerFemale:
	.string "Toujours indecise ?\n"
	.string "Respire, puis choisis.$"

MyrrhesLab_Text_Rival_AfterStarter:
	.string "Parfait, on est prets.\n"
	.string "Premier duel sur la place.$"

MyrrhesLab_Text_Rival_AfterBattle:
	.string "Bien joue... mais je m'adapte vite.\n"
	.string "Au prochain, je te surprends.$"

MyrrhesLab_Text_Assistante_BeforeStarter:
	.string "La professeure Frene prefere\n"
	.string "les choix assumes aux choix rapides.$"

MyrrhesLab_Text_Assistante_AfterStarter:
	.string "Note ce que tu observes,\n"
	.string "pas seulement ce qu'on te dit.$"

MyrrhesLab_Text_Assistante_AfterBattle:
	.string "Belle synchronisation au premier duel.\n"
	.string "C'est un excellent debut.$"

MyrrhesLab_Text_Sign_Machine:
	.string "Un analyseur de donnees terrain.\n"
	.string "Il tourne encore en mode test.$"

MyrrhesLab_Text_Sign_Bookshelf:
	.string "Des dossiers sur les routes,\n"
	.string "les rails et les habitats.$"

MyrrhesLab_Text_Sign_PC:
	.string "Terminal de recherche.\n"
	.string "Acces reserve au personnel.$"

MyrrhesLab_Text_Sign_Notes:
	.string "Notes de Frene:\n"
	.string "'Le contexte change tout.'$"
