TransitSurRail_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TransitSurRail_OnFrame
	.byte 0

TransitSurRail_OnFrame:
	map_script_2 VAR_TSR_MAP_STATE, 0, TransitSurRail_EventScript_FirstArrival
	.2byte 0

TransitSurRail_EventScript_FirstArrival::
	setvar VAR_TSR_MAP_STATE, 1
	goto_if_set FLAG_SCN_TSR_ARRIVAL_DONE, TransitSurRail_EventScript_FirstArrivalDone
	lockall
	msgbox TransitSurRail_Text_PublicAnnouncement, MSGBOX_DEFAULT
	msgbox TransitSurRail_Text_RivalArrivalEcho, MSGBOX_DEFAULT
	setflag FLAG_SCN_TSR_ARRIVAL_DONE
	setvar VAR_CENDRE_STORY_STAGE, 5
	releaseall
	end

TransitSurRail_EventScript_FirstArrivalDone::
	end

TransitSurRail_NPC_Controleuse::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Controleuse_AfterBadge
	msgbox TransitSurRail_Text_Controleuse_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Controleuse_AfterBadge::
	msgbox TransitSurRail_Text_Controleuse_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Voyageur::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Voyageur_AfterBadge
	msgbox TransitSurRail_Text_Voyageur_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Voyageur_AfterBadge::
	msgbox TransitSurRail_Text_Voyageur_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Enfant::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Enfant_AfterBadge
	msgbox TransitSurRail_Text_Enfant_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Enfant_AfterBadge::
	msgbox TransitSurRail_Text_Enfant_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Vendeuse::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Vendeuse_AfterBadge
	msgbox TransitSurRail_Text_Vendeuse_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Vendeuse_AfterBadge::
	msgbox TransitSurRail_Text_Vendeuse_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Soigneur::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Soigneur_AfterBadge
	msgbox TransitSurRail_Text_Soigneur_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Soigneur_AfterBadge::
	msgbox TransitSurRail_Text_Soigneur_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Orme::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Orme_AfterBadge
	msgbox TransitSurRail_Text_Orme_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Orme_AfterBadge::
	msgbox TransitSurRail_Text_Orme_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Armand::
	goto_if_set FLAG_BADGE01_GET, TransitSurRail_NPC_Armand_AfterBadge
	msgbox TransitSurRail_Text_Armand_BeforeBadge, MSGBOX_NPC
	end

TransitSurRail_NPC_Armand_AfterBadge::
	msgbox TransitSurRail_Text_Armand_AfterBadge, MSGBOX_NPC
	end

TransitSurRail_Sign_City::
	msgbox TransitSurRail_Text_Sign_City, MSGBOX_SIGN
	end

TransitSurRail_Sign_Station::
	msgbox TransitSurRail_Text_Sign_Station, MSGBOX_SIGN
	end

TransitSurRail_Text_PublicAnnouncement:
	.string "Bienvenue a Transit-sur-Rail.\n"
	.string "Merci de limiter les arrets inutiles.$"

TransitSurRail_Text_RivalArrivalEcho:
	.string "Cette ville veut que tout circule.\n"
	.string "Meme le silence.$"

TransitSurRail_Text_Controleuse_BeforeBadge:
	.string "Quand tout roule,\n"
	.string "les gens posent moins de questions.$"

TransitSurRail_Text_Controleuse_AfterBadge:
	.string "Vous etes les jeunes du badge ?\n"
	.string "Vous avez vu la vitrine ou l'arriere-scene ?$"

TransitSurRail_Text_Voyageur_BeforeBadge:
	.string "Ici, meme attendre\n"
	.string "donne l'impression d'etre en retard.$"

TransitSurRail_Text_Voyageur_AfterBadge:
	.string "Quand on gagne ici, on repart fier.\n"
	.string "Quand on regarde trop, on repart secoue.$"

TransitSurRail_Text_Enfant_BeforeBadge:
	.string "Maman dit qu'ici faut marcher\n"
	.string "comme si on savait toujours ou on va.$"

TransitSurRail_Text_Enfant_AfterBadge:
	.string "Pourquoi les annonces parlent doux\n"
	.string "quand tout le monde est presse ?$"

TransitSurRail_Text_Vendeuse_BeforeBadge:
	.string "Soins, cartes, capsules anti-poussiere.\n"
	.string "Pour le reste, debrouillez-vous.$"

TransitSurRail_Text_Vendeuse_AfterBadge:
	.string "Depuis l'incident de voie,\n"
	.string "les visiteurs posent plus de questions.$"

TransitSurRail_Text_Soigneur_BeforeBadge:
	.string "Vos Pokemon sont fatigues,\n"
	.string "mais ca va passer.$"

TransitSurRail_Text_Soigneur_AfterBadge:
	.string "Ici on dit fatigue d'adaptation.\n"
	.string "Moi je dis: sale journee.$"

TransitSurRail_Text_Orme_BeforeBadge:
	.string "Vous etes les jeunes de Cendrebourg ?\n"
	.string "Frene dit que vous regardez partout.$"

TransitSurRail_Text_Orme_AfterBadge:
	.string "Avant, on disait incident.\n"
	.string "Maintenant, ils disent ecart.$"

TransitSurRail_Text_Armand_BeforeBadge:
	.string "Une ville, c'est une equipe.\n"
	.string "Je cherche le mouvement propre.$"

TransitSurRail_Text_Armand_AfterBadge:
	.string "Bien joue.\n"
	.string "Tu ne fonces pas betement.$"

TransitSurRail_Text_Sign_City:
	.string "TRANSIT-SUR-RAIL\n"
	.string "Ville de passage permanent.$"

TransitSurRail_Text_Sign_Station:
	.string "GARE PRINCIPALE\n"
	.string "QUAIS DE TRANSFERT$"
