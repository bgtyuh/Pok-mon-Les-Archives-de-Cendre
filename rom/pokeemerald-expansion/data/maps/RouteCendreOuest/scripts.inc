RouteCendreOuest_MapScripts::
	.byte 0

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
	.string "ZONE EN TRAVAUX\n"
	.string "Progression au-dela de ce point reportee.$"
