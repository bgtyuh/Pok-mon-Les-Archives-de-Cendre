Cendrebourg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Cendrebourg_OnTransition
	.byte 0

Cendrebourg_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

Cendrebourg_NPC_Rival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_Rival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_Rival_StartBattle
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Cendrebourg_NPC_Rival_BeforeStarter_PlayerMale
	goto_if_eq VAR_RESULT, FEMALE, Cendrebourg_NPC_Rival_BeforeStarter_PlayerFemale
	end

Cendrebourg_NPC_Rival_BeforeStarter_PlayerMale::
	msgbox Cendrebourg_Text_Rival_BeforeStarter_PlayerMale, MSGBOX_NPC
	end

Cendrebourg_NPC_Rival_BeforeStarter_PlayerFemale::
	msgbox Cendrebourg_Text_Rival_BeforeStarter_PlayerFemale, MSGBOX_NPC
	end

Cendrebourg_NPC_Rival_StartBattle::
	lock
	faceplayer
	setrespawn HEAL_LOCATION_CENDREBOURG_PLAYER_HOUSE
	msgbox Cendrebourg_Text_Rival_AfterStarter, MSGBOX_DEFAULT
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Cendrebourg_RivalBattle_Maelle
	goto_if_eq VAR_RESULT, FEMALE, Cendrebourg_RivalBattle_Mael
	release
	end

Cendrebourg_RivalBattle_Maelle::
	switch VAR_STARTER_MON
	case 0, Cendrebourg_RivalBattle_Maelle_Treecko
	case 1, Cendrebourg_RivalBattle_Maelle_Torchic
	case 2, Cendrebourg_RivalBattle_Maelle_Mudkip
	goto Cendrebourg_RivalBattle_Maelle_Treecko

Cendrebourg_RivalBattle_Maelle_Treecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_Maelle_Torchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_Maelle_Mudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_Mael::
	switch VAR_STARTER_MON
	case 0, Cendrebourg_RivalBattle_Mael_Treecko
	case 1, Cendrebourg_RivalBattle_Mael_Torchic
	case 2, Cendrebourg_RivalBattle_Mael_Mudkip
	goto Cendrebourg_RivalBattle_Mael_Treecko

Cendrebourg_RivalBattle_Mael_Treecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_Mael_Torchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_Mael_Mudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Cendrebourg_Text_Rival_DefeatBattle
	goto Cendrebourg_RivalBattle_End

Cendrebourg_RivalBattle_End::
	setflag FLAG_SCN_CBG_FIRST_BATTLE_DONE
	setflag FLAG_SCN_CBG_SQUARE_DONE
	setvar VAR_CENDRE_STORY_STAGE, 3
	setrespawn HEAL_LOCATION_CENDREBOURG_PLAYER_HOUSE
	msgbox Cendrebourg_Text_Rival_AfterBattle, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Cendrebourg_Movement_Rival_LeaveSquare
	waitmovement 0
	release
	end

Cendrebourg_NPC_Rival_AfterBattle::
	msgbox Cendrebourg_Text_Rival_PostBattle_Free, MSGBOX_NPC
	end

Cendrebourg_NPC_ParentRival::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_NPC_ParentRival_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_NPC_ParentRival_AfterStarter
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Cendrebourg_NPC_ParentRival_BeforeStarter_PlayerMale
	goto_if_eq VAR_RESULT, FEMALE, Cendrebourg_NPC_ParentRival_BeforeStarter_PlayerFemale
	end

Cendrebourg_NPC_ParentRival_BeforeStarter_PlayerMale::
	msgbox Cendrebourg_Text_ParentRival_BeforeStarter_PlayerMale, MSGBOX_NPC
	end

Cendrebourg_NPC_ParentRival_BeforeStarter_PlayerFemale::
	msgbox Cendrebourg_Text_ParentRival_BeforeStarter_PlayerFemale, MSGBOX_NPC
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

Cendrebourg_Movement_Rival_LeaveSquare:
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Cendrebourg_Text_Rival_BeforeStarter_PlayerMale:
	.string "Te voila.\n"
	.string "La professeure Frene nous attend au labo.$"

Cendrebourg_Text_Rival_BeforeStarter_PlayerFemale:
	.string "Te voila.\n"
	.string "La professeure Frene nous attend au labo.$"

Cendrebourg_Text_Rival_AfterStarter:
	.string "On a chacun notre partenaire.\n"
	.string "Premier duel, ici, sur la place.$"

Cendrebourg_Text_Rival_DefeatBattle:
	.string "Tu t'en sors bien...$"

Cendrebourg_Text_Rival_AfterBattle:
	.string "OK, tu gagnes ce premier duel.\n"
	.string "Je reviendrai mieux prepare.$"

Cendrebourg_Text_Rival_PostBattle_Free:
	.string "La prochaine fois, je te tiens.\n"
	.string "Compte sur moi.$"

Cendrebourg_Text_ParentRival_BeforeStarter_PlayerMale:
	.string "Mon enfant est motivee,\n"
	.string "mais elle fonce un peu trop vite.$"

Cendrebourg_Text_ParentRival_BeforeStarter_PlayerFemale:
	.string "Mon enfant est motive,\n"
	.string "mais il fonce un peu trop vite.$"

Cendrebourg_Text_ParentRival_AfterStarter:
	.string "Merci d'etre passes au labo.\n"
	.string "Prenez le temps d'apprendre.$"

Cendrebourg_Text_ParentRival_AfterBattle:
	.string "Vous avez fait votre premier vrai duel.\n"
	.string "Restez prudents sur la route.$"

Cendrebourg_Text_Voisine_BeforeStarter:
	.string "Le vent tourne aujourd'hui.\n"
	.string "C'est un bon jour pour commencer.$"

Cendrebourg_Text_Voisine_AfterStarter:
	.string "Ton partenaire t'observe deja.\n"
	.string "Avancez ensemble, pas trop vite.$"

Cendrebourg_Text_Voisine_AfterBattle:
	.string "On a entendu votre duel\n"
	.string "jusque dans les maisons.$"

Cendrebourg_Text_Facteur_BeforeStarter:
	.string "Le courrier part a l'aube.\n"
	.string "Si tu pars, pars leger.$"

Cendrebourg_Text_Facteur_AfterStarter:
	.string "Un carnet, un partenaire, et la route.\n"
	.string "C'est un bon debut.$"

Cendrebourg_Text_Facteur_AfterBattle:
	.string "Depuis le duel, tout le monde\n"
	.string "parle de vous deux.$"

Cendrebourg_Text_Enfant_BeforeStarter:
	.string "Si tu vois un Pokemon rare,\n"
	.string "decris-le moi bien !$"

Cendrebourg_Text_Enfant_AfterStarter:
	.string "Ton partenaire est trop classe !\n"
	.string "Tu me le presents ?$"

Cendrebourg_Text_Enfant_AfterBattle:
	.string "Votre duel etait super rapide !\n"
	.string "J'ai presque rate la fin.$"

Cendrebourg_Text_GardeRail_BeforeStarter:
	.string "Acces au rail ferme.\n"
	.string "Passe d'abord au labo Frene.$"

Cendrebourg_Text_GardeRail_AfterStarter:
	.string "Regle locale: duel de depart,\n"
	.string "puis sortie autorisee.$"

Cendrebourg_Text_GardeRail_AfterBattle:
	.string "Passage valide.\n"
	.string "Bonne route.$"

Cendrebourg_Text_Boulangere_BeforeStarter:
	.string "Prends de quoi manger avant de partir.\n"
	.string "L'aventure ne pardonne pas la faim.$"

Cendrebourg_Text_Boulangere_AfterStarter:
	.string "Premier partenaire, premiere journee.\n"
	.string "Pense a souffler entre deux combats.$"

Cendrebourg_Text_Boulangere_AfterBattle:
	.string "Un duel, ca vide vite l'estomac.\n"
	.string "Passe prendre du pain avant de partir.$"

Cendrebourg_Text_JeuneAdulte_BeforeStarter:
	.string "Le premier depart marque toujours\n"
	.string "une aventure complete.$"

Cendrebourg_Text_JeuneAdulte_AfterStarter:
	.string "Alors, le labo de Frene ?\n"
	.string "Vous etes prets pour la suite ?$"

Cendrebourg_Text_JeuneAdulte_AfterBattle:
	.string "Beau premier duel.\n"
	.string "Gardez ce calme sur la route.$"

Cendrebourg_Text_VieilHomme_BeforeStarter:
	.string "Ecoute avant d'agir.\n"
	.string "La route parle souvent la premiere.$"

Cendrebourg_Text_VieilHomme_AfterStarter:
	.string "Un bon binome se construit\n"
	.string "pas a pas.$"

Cendrebourg_Text_VieilHomme_AfterBattle:
	.string "Ton regard a deja change.\n"
	.string "Tu vois plus loin.$"

Cendrebourg_Text_Skitty_BeforeStarter:
	.string "Skitty: myaou.\n"
	.string "Skitty te suit du regard.$"

Cendrebourg_Text_Skitty_AfterStarter:
	.string "Skitty: myaoo.\n"
	.string "Skitty tourne autour de vous.$"

Cendrebourg_Text_Skitty_AfterBattle:
	.string "Skitty: mrrr.\n"
	.string "Skitty se frotte a ta jambe.$"

Cendrebourg_Text_Sign_Municipal:
	.string "CENDREBOURG\n"
	.string "Village de cendre et de vent.$"

Cendrebourg_Text_Sign_Wood:
	.string "Un tas de bois sec.\n"
	.string "La poussiere colle a tout ici.$"

Cendrebourg_Text_Sign_Lab:
	.string "LABO DE LA PROFESSEURE FRENE\n"
	.string "ENTREE PRINCIPALE$"

Cendrebourg_Text_Sign_Rail:
	.string "RAIL SECONDAIRE\n"
	.string "ACCES REGULE.$"
