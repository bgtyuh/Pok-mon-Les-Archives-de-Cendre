Cendrebourg_MapScripts::
	.byte 0

Cendrebourg_NPC_Rival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Rival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Rival_AfterStarter
	msgbox Cendrebourg_Text_Rival_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Rival_AfterStarter::
	msgbox Cendrebourg_Text_Rival_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Rival_AfterBattle::
	msgbox Cendrebourg_Text_Rival_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_ParentRival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_ParentRival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_ParentRival_AfterStarter
	msgbox Cendrebourg_Text_ParentRival_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_ParentRival_AfterStarter::
	msgbox Cendrebourg_Text_ParentRival_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_ParentRival_AfterBattle::
	msgbox Cendrebourg_Text_ParentRival_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_Voisine::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Voisine_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Voisine_AfterStarter
	msgbox Cendrebourg_Text_Voisine_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Voisine_AfterStarter::
	msgbox Cendrebourg_Text_Voisine_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Voisine_AfterBattle::
	msgbox Cendrebourg_Text_Voisine_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_Facteur::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Facteur_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Facteur_AfterStarter
	msgbox Cendrebourg_Text_Facteur_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Facteur_AfterStarter::
	msgbox Cendrebourg_Text_Facteur_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Facteur_AfterBattle::
	msgbox Cendrebourg_Text_Facteur_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_Enfant::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Enfant_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Enfant_AfterStarter
	msgbox Cendrebourg_Text_Enfant_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Enfant_AfterStarter::
	msgbox Cendrebourg_Text_Enfant_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Enfant_AfterBattle::
	msgbox Cendrebourg_Text_Enfant_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_GardeRail::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_GardeRail_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_GardeRail_AfterStarter
	msgbox Cendrebourg_Text_GardeRail_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_GardeRail_AfterStarter::
	msgbox Cendrebourg_Text_GardeRail_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_GardeRail_AfterBattle::
	msgbox Cendrebourg_Text_GardeRail_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_Boulangere::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Boulangere_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Boulangere_AfterStarter
	msgbox Cendrebourg_Text_Boulangere_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Boulangere_AfterStarter::
	msgbox Cendrebourg_Text_Boulangere_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Boulangere_AfterBattle::
	msgbox Cendrebourg_Text_Boulangere_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_JeuneAdulte::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_JeuneAdulte_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_JeuneAdulte_AfterStarter
	msgbox Cendrebourg_Text_JeuneAdulte_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_JeuneAdulte_AfterStarter::
	msgbox Cendrebourg_Text_JeuneAdulte_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_JeuneAdulte_AfterBattle::
	msgbox Cendrebourg_Text_JeuneAdulte_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_VieilHomme::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_VieilHomme_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_VieilHomme_AfterStarter
	msgbox Cendrebourg_Text_VieilHomme_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_VieilHomme_AfterStarter::
	msgbox Cendrebourg_Text_VieilHomme_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_VieilHomme_AfterBattle::
	msgbox Cendrebourg_Text_VieilHomme_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_NPC_Skitty::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Skitty_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Skitty_AfterStarter
	msgbox Cendrebourg_Text_Skitty_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Skitty_AfterStarter::
	msgbox Cendrebourg_Text_Skitty_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_NPC_Skitty_AfterBattle::
	msgbox Cendrebourg_Text_Skitty_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_Sign_Municipal::
	msgbox Cendrebourg_Text_Sign_Municipal, MSGBOX_SIGN
	end

Cendrebourg_Sign_Wood::
	msgbox Cendrebourg_Text_Sign_Wood, MSGBOX_SIGN
	end

Cendrebourg_Sign_Lab::
	msgbox Cendrebourg_Text_Sign_Lab, MSGBOX_SIGN
	end

Cendrebourg_Sign_Rail::
	msgbox Cendrebourg_Text_Sign_Rail, MSGBOX_SIGN
	end

Cendrebourg_Text_Rival_BeforeStarter:
	.string "Ah, quand meme.\n"
	.string "J'allais partir sans toi.$"

Cendrebourg_Text_Rival_AfterStarter:
	.string "Tu as ton partenaire ?\n"
	.string "On se fait un duel avant la route.$"

Cendrebourg_Text_Rival_AfterBattle:
	.string "Ton premier duel etait propre.\n"
	.string "Garde cette lucidite.$"

Cendrebourg_Text_ParentRival_BeforeStarter:
	.string "Ne l'ecoute pas trop.\n"
	.string "Il/Elle fait le malin par stress.$"

Cendrebourg_Text_ParentRival_AfterStarter:
	.string "Deux jeunes avec des Pokemon,\n"
	.string "cela change toute la rue.$"

Cendrebourg_Text_ParentRival_AfterBattle:
	.string "Le rail semble calme.\n"
	.string "C'est souvent la que ca trompe.$"

Cendrebourg_Text_Voisine_BeforeStarter:
	.string "Alors, c'est aujourd'hui ?\n"
	.string "Reviens avec tes deux chaussures.$"

Cendrebourg_Text_Voisine_AfterStarter:
	.string "Le vent s'est range ce matin.\n"
	.string "Profitez-en pour partir.$"

Cendrebourg_Text_Voisine_AfterBattle:
	.string "On vous entend deja parler de Transit.\n"
	.string "Le monde va vite.$"

Cendrebourg_Text_Facteur_BeforeStarter:
	.string "Les nouvelles arrivent vite.\n"
	.string "La verite prend le vieux rail.$"

Cendrebourg_Text_Facteur_AfterStarter:
	.string "Je fais la tournee jusqu'au rail.\n"
	.string "Apres, les sacs partent en ville.$"

Cendrebourg_Text_Facteur_AfterBattle:
	.string "Depuis votre duel, tout le monde\n"
	.string "me demande des nouvelles.$"

Cendrebourg_Text_Enfant_BeforeStarter:
	.string "Si tu vois un Pokemon rare,\n"
	.string "dessine-le dans ton carnet !$"

Cendrebourg_Text_Enfant_AfterStarter:
	.string "Vous avez deja vos Pokemon ?\n"
	.string "Je veux voir le plus mignon.$"

Cendrebourg_Text_Enfant_AfterBattle:
	.string "Ton rival a perdu mais il souriait.\n"
	.string "C'etait bizarre et cool.$"

Cendrebourg_Text_GardeRail_BeforeStarter:
	.string "Zone rail reservee.\n"
	.string "Passe d'abord au labo.$"

Cendrebourg_Text_GardeRail_AfterStarter:
	.string "Premier passage valide.\n"
	.string "Restez sur l'itineraire prevu.$"

Cendrebourg_Text_GardeRail_AfterBattle:
	.string "Bonne route, les jeunes.\n"
	.string "Et gardez les yeux ouverts.$"

Cendrebourg_Text_Boulangere_BeforeStarter:
	.string "Prends quelque chose avant de partir.\n"
	.string "L'aventure aime les ventres pleins.$"

Cendrebourg_Text_Boulangere_AfterStarter:
	.string "Tu as la tete de quelqu'un\n"
	.string "qui oublie de manger.$"

Cendrebourg_Text_Boulangere_AfterBattle:
	.string "Bouge, mange, dors.\n"
	.string "La route pardonne moins que le village.$"

Cendrebourg_Text_JeuneAdulte_BeforeStarter:
	.string "Moi aussi je partirai un jour.\n"
	.string "Pas aujourd'hui, mais j'y pense.$"

Cendrebourg_Text_JeuneAdulte_AfterStarter:
	.string "Alors, le labo, c'etait comment ?\n"
	.string "Frene n'a pas ete trop severe ?$"

Cendrebourg_Text_JeuneAdulte_AfterBattle:
	.string "Ton badge viendra vite si tu gardes\n"
	.string "cette energie.$"

Cendrebourg_Text_VieilHomme_BeforeStarter:
	.string "La route parait calme ce matin.\n"
	.string "Mefie-toi surtout des coins trop calmes.$"

Cendrebourg_Text_VieilHomme_AfterStarter:
	.string "Ecoute les gens sur la route.\n"
	.string "Tenir debout, c'est deja parler.$"

Cendrebourg_Text_VieilHomme_AfterBattle:
	.string "Tu as pris l'air de la route.\n"
	.string "Ca fatigue, mais ca reveille.$"

Cendrebourg_Text_Skitty_BeforeStarter:
	.string "Skitty: myaou.\n"
	.string "Il garde un oeil sur vous.$"

Cendrebourg_Text_Skitty_AfterStarter:
	.string "Skitty: myaoo.\n"
	.string "Il tourne autour du rival.$"

Cendrebourg_Text_Skitty_AfterBattle:
	.string "Skitty: mrrr.\n"
	.string "Il se frotte contre ta jambe.$"

Cendrebourg_Text_Sign_Municipal:
	.string "CENDREBOURG\n"
	.string "Village de cendre et de vent.$"

Cendrebourg_Text_Sign_Wood:
	.string "Un tas de bois sec.\n"
	.string "La poussiere colle a tout.$"

Cendrebourg_Text_Sign_Lab:
	.string "LABO DE LA PROFESSEURE FRENE$"

Cendrebourg_Text_Sign_Rail:
	.string "RAIL SECONDAIRE\n"
	.string "Circulation regulee.$"
