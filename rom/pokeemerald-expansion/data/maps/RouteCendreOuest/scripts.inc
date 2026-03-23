RouteCendreOuest_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RouteCendreOuest_OnFrame
	.byte 0

RouteCendreOuest_OnFrame:
	map_script_2 VAR_RBR_MAP_STATE, 0, RouteCendreOuest_EventScript_FirstEntry
	.2byte 0

RouteCendreOuest_EventScript_FirstEntry::
	setvar VAR_RBR_MAP_STATE, 1
	goto_if_set FLAG_SCN_RBR_ENTRY_DONE, RouteCendreOuest_EventScript_FirstEntryDone
	setflag FLAG_SCN_RBR_ENTRY_DONE
	setvar VAR_CENDRE_STORY_STAGE, 4

RouteCendreOuest_EventScript_FirstEntryDone::
	end

RouteCendreOuest_NPC_Observatrice::
	msgbox RouteCendreOuest_Text_Observatrice, MSGBOX_NPC
	end

RouteCendreOuest_NPC_Ouvrier::
	msgbox RouteCendreOuest_Text_Ouvrier, MSGBOX_NPC
	end

RouteCendreOuest_Sign_Entree::
	msgbox RouteCendreOuest_Text_SignEntree, MSGBOX_SIGN
	end

RouteCendreOuest_Sign_Travaux::
	msgbox RouteCendreOuest_Text_SignTravaux, MSGBOX_SIGN
	end

RouteCendreOuest_Text_Observatrice:
	.string "Le vent arrive de la faille de l'ouest.\n"
	.string "On entend les rails vibrer la nuit.$"

RouteCendreOuest_Text_Ouvrier:
	.string "On remet les balises une par une.\n"
	.string "Si un troncon lache, on evacue.$"

RouteCendreOuest_Text_SignEntree:
	.string "ROUTE CENDRE OUEST\n"
	.string "{RIGHT_ARROW} CENDREBOURG$"

RouteCendreOuest_Text_SignTravaux:
	.string "TRANSIT-SUR-RAIL\n"
	.string "{LEFT_ARROW} GARE PRINCIPALE$"
