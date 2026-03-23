RouteCendre1_MapScripts::
	.byte 0

RouteCendre1_NPC_Garde::
	msgbox RouteCendre1_Text_Garde, MSGBOX_NPC
	end

RouteCendre1_Sign_Entree::
	msgbox RouteCendre1_Text_SignEntree, MSGBOX_SIGN
	end

RouteCendre1_Sign_Nord::
	msgbox RouteCendre1_Text_SignNord, MSGBOX_SIGN
	end

RouteCendre1_Text_Garde:
	.string "Route Cendre 1, premiere sortie.\n"
	.string "Reste prudent, la zone est encore instable.$"

RouteCendre1_Text_SignEntree:
	.string "ROUTE CENDRE 1\n"
	.string "{DOWN_ARROW} CENDREBOURG$"

RouteCendre1_Text_SignNord:
	.string "Vers le nord: secteur en cours\n"
	.string "de balisage.$"
