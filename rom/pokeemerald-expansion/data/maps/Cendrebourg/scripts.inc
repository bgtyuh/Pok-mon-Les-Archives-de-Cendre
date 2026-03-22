Cendrebourg_MapScripts::
	.byte 0

// ===========================
// CENDREBOURG - scripts
// ===========================

Cendrebourg_Sign_Municipal::
    msgbox gText_CendrebourgSign, MSGBOX_SIGN
    end

Cendrebourg_Sign_Lab::
    msgbox gText_CendrebourgSignLab, MSGBOX_SIGN
    end

Cendrebourg_Sign_Wood::
    msgbox gText_CendrebourgSignWood, MSGBOX_SIGN
    msgbox gText_CendrebourgSignWoodAfter, MSGBOX_NPC
    end

Cendrebourg_NPC_VieilHomme::
    msgbox gText_CendrebourgOldMan, MSGBOX_NPC
    end

Cendrebourg_NPC_JeuneAdulte::
    msgbox gText_CendrebourgYoungAdult, MSGBOX_NPC
    end

Cendrebourg_NPC_PokemonDuJeuneAdulte::
    msgbox gText_CendrebourgYoungAdultsPokemon, MSGBOX_NPC
    end


// ---------------------------
// Texts
// ---------------------------

gText_CendrebourgSign::
    .string "CENDREBOURG\n"
    .string "Ville modele de reconstruction.$"

gText_CendrebourgSignWood::
    .string "CENDREBOURG\n"
    .string "Ville traditionnelle.$"

gText_CendrebourgSignLab::
    .string "Laboratoire du prof Myrrhe.$"

gText_CendrebourgSignWoodAfter::
    .string "Ce panneau denote un peu\n"
    .string "Il a l air vieux et est\l"
    .string "un peu efface...$"

gText_CendrebourgOldMan::
    .string "Avant, il y avait une boutique ici.\n"
    .string "...\l"
    .string "Enfin, je crois.$"

gText_CendrebourgYoungAdult::
    .string "Il est tres obeissant.\n"
    .string "On dit que c’est mieux comme ça.$"

gText_CendrebourgYoungAdultsPokemon::
    .string "Skiii !$"
