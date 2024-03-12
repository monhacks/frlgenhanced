const u8 gTrainerClassNames[][13] = {
    [TRAINER_CLASS_NONE]                = _("{PKMN} Trainer"),
    [TRAINER_CLASS_PKMN_TRAINER_UNUSED] = _("{PKMN} Trainer"),
    [TRAINER_CLASS_AQUA_LEADER]         = _("Aqua Leader"),
    [TRAINER_CLASS_TEAM_AQUA]           = _("Team Aqua"),
    [TRAINER_CLASS_RS_AROMA_LADY]       = _("Aroma Lady"),
    [TRAINER_CLASS_RS_RUIN_MANIAC]      = _("Ruin Maniac"),
    [TRAINER_CLASS_INTERVIEWER]         = _("Interviewer"),
    [TRAINER_CLASS_RS_TUBER_F]          = _("Tuber"),
    [TRAINER_CLASS_RS_TUBER_M]          = _("Tuber"),
    [TRAINER_CLASS_RS_COOLTRAINER]      = _("Cool Trainer"),
    [TRAINER_CLASS_HEX_MANIAC]          = _("Hex Maniac"),
    [TRAINER_CLASS_RS_LADY]             = _("Lady"),
    [TRAINER_CLASS_RS_BEAUTY]           = _("Beauty"),
    [TRAINER_CLASS_RICH_BOY]            = _("Rich Boy"),
    [TRAINER_CLASS_RS_POKEMANIAC]       = _("Pokémaniac"),
    [TRAINER_CLASS_RS_SWIMMER_M]        = _("Swimmer♂"),
    [TRAINER_CLASS_RS_BLACK_BELT]       = _("Black Belt"),
    [TRAINER_CLASS_GUITARIST]           = _("Guitarist"),
    [TRAINER_CLASS_KINDLER]             = _("Kindler"),
    [TRAINER_CLASS_RS_CAMPER]           = _("Camper"),
    [TRAINER_CLASS_BUG_MANIAC]          = _("Bug Maniac"),
    [TRAINER_CLASS_RS_PSYCHIC]          = _("Psychic"),
    [TRAINER_CLASS_RS_GENTLEMAN]        = _("Gentleman"),
    [TRAINER_CLASS_RS_ELITE_FOUR]       = _("Elite Four"),
    [TRAINER_CLASS_RS_LEADER]           = _("Leader"),
    [TRAINER_CLASS_SCHOOL_KID]          = _("School Kid"),
    [TRAINER_CLASS_SR_AND_JR]           = _("Sr. and Jr."),
    [TRAINER_CLASS_POKEFAN]             = _("Pokéfan"),
    [TRAINER_CLASS_EXPERT]              = _("Expert"),
    [TRAINER_CLASS_RS_YOUNGSTER]        = _("Youngster"),
    [TRAINER_CLASS_RS_CHAMPION]         = _("Champion"),
    [TRAINER_CLASS_RS_FISHERMAN]        = _("Fisherman"),
    [TRAINER_CLASS_TRIATHLETE]          = _("Triathlete"),
    [TRAINER_CLASS_DRAGON_TAMER]        = _("Dragon Tamer"),
    [TRAINER_CLASS_RS_BIRD_KEEPER]      = _("Bird Keeper"),
    [TRAINER_CLASS_NINJA_BOY]           = _("Ninja Boy"),
    [TRAINER_CLASS_BATTLE_GIRL]         = _("Battle Girl"),
    [TRAINER_CLASS_PARASOL_LADY]        = _("Parasol Lady"),
    [TRAINER_CLASS_RS_SWIMMER_F]        = _("Swimmer♀"),
    [TRAINER_CLASS_RS_PICNICKER]        = _("Picnicker"),
    [TRAINER_CLASS_RS_TWINS]            = _("Twins"),
    [TRAINER_CLASS_RS_SAILOR]           = _("Sailor"),
    [TRAINER_CLASS_BOARDER]             = _("Boarder"),
    [TRAINER_CLASS_COLLECTOR]           = _("Collector"),
    [TRAINER_CLASS_PKMN_TRAINER]        = _("{PKMN} Trainer"),
    [TRAINER_CLASS_RS_PKMN_BREEDER]     = _("{PKMN} Breeder"),
    [TRAINER_CLASS_RS_PKMN_RANGER]      = _("{PKMN} Ranger"),
    [TRAINER_CLASS_MAGMA_LEADER]        = _("Magma Leader"),
    [TRAINER_CLASS_TEAM_MAGMA]          = _("Team Magma"),
    [TRAINER_CLASS_RS_LASS]             = _("Lass"),
    [TRAINER_CLASS_RS_BUG_CATCHER]      = _("Bug Catcher"),
    [TRAINER_CLASS_RS_HIKER]            = _("Hiker"),
    [TRAINER_CLASS_RS_YOUNG_COUPLE]     = _("Young Couple"),
    [TRAINER_CLASS_OLD_COUPLE]          = _("Old Couple"),
    [TRAINER_CLASS_RS_SIS_AND_BRO]      = _("Sis and Bro"),
    [TRAINER_CLASS_AQUA_ADMIN]          = _("Aqua Admin"),
    [TRAINER_CLASS_MAGMA_ADMIN]         = _("Magma Admin"),
    [TRAINER_CLASS_YOUNGSTER]           = _("Youngster"),
    [TRAINER_CLASS_BUG_CATCHER]         = _("Bug Catcher"),
    [TRAINER_CLASS_LASS]                = _("Lass"),
    [TRAINER_CLASS_SAILOR]              = _("Sailor"),
    [TRAINER_CLASS_CAMPER]              = _("Camper"),
    [TRAINER_CLASS_PICNICKER]           = _("Picnicker"),
    [TRAINER_CLASS_POKEMANIAC]          = _("Pokémaniac"),
    [TRAINER_CLASS_SUPER_NERD]          = _("Super Nerd"),
    [TRAINER_CLASS_HIKER]               = _("Hiker"),
    [TRAINER_CLASS_BIKER]               = _("Biker"),
    [TRAINER_CLASS_BURGLAR]             = _("Burglar"),
    [TRAINER_CLASS_ENGINEER]            = _("Engineer"),
    [TRAINER_CLASS_FISHERMAN]           = _("Fisherman"),
    [TRAINER_CLASS_SWIMMER_M]           = _("Swimmer♂"),
    [TRAINER_CLASS_CUE_BALL]            = _("Cue Ball"),
    [TRAINER_CLASS_GAMER]               = _("Gamer"),
    [TRAINER_CLASS_BEAUTY]              = _("Beauty"),
    [TRAINER_CLASS_SWIMMER_F]           = _("Swimmer♀"),
    [TRAINER_CLASS_PSYCHIC]             = _("Psychic"),
    [TRAINER_CLASS_ROCKER]              = _("Rocker"),
    [TRAINER_CLASS_JUGGLER]             = _("Juggler"),
    [TRAINER_CLASS_TAMER]               = _("Tamer"),
    [TRAINER_CLASS_BIRD_KEEPER]         = _("Bird Keeper"),
    [TRAINER_CLASS_BLACK_BELT]          = _("Black Belt"),
    [TRAINER_CLASS_RIVAL_EARLY]         = _("Rival"),
    [TRAINER_CLASS_SCIENTIST]           = _("Scientist"),
    [TRAINER_CLASS_BOSS]                = _("Boss"),
    [TRAINER_CLASS_LEADER]              = _("Leader"),
    [TRAINER_CLASS_TEAM_ROCKET]         = _("Team Rocket"),
    [TRAINER_CLASS_COOLTRAINER]         = _("Cool Trainer"),
    [TRAINER_CLASS_ELITE_FOUR]          = _("Elite Four"),
    [TRAINER_CLASS_GENTLEMAN]           = _("Gentleman"),
    [TRAINER_CLASS_RIVAL_LATE]          = _("Rival"),
    [TRAINER_CLASS_CHAMPION]            = _("Champion"),
    [TRAINER_CLASS_CHANNELER]           = _("Channeler"),
    [TRAINER_CLASS_TWINS]               = _("Twins"),
    [TRAINER_CLASS_COOL_COUPLE]         = _("Cool Couple"),
    [TRAINER_CLASS_YOUNG_COUPLE]        = _("Young Couple"),
    [TRAINER_CLASS_CRUSH_KIN]           = _("Crush Kin"),
    [TRAINER_CLASS_SIS_AND_BRO]         = _("Sis and Bro"),
    [TRAINER_CLASS_PKMN_PROF]           = _("{PKMN} PROF."),
    [TRAINER_CLASS_PLAYER]              = _("PLAYER"),
    [TRAINER_CLASS_CRUSH_GIRL]          = _("Crush Girl"),
    [TRAINER_CLASS_TUBER]               = _("Tuber"),
    [TRAINER_CLASS_PKMN_BREEDER]        = _("{PKMN} Breeder"),
    [TRAINER_CLASS_PKMN_RANGER]         = _("{PKMN} Ranger"),
    [TRAINER_CLASS_AROMA_LADY]          = _("Aroma Lady"),
    [TRAINER_CLASS_RUIN_MANIAC]         = _("Ruin Maniac"),
    [TRAINER_CLASS_LADY]                = _("Lady"),
    [TRAINER_CLASS_PAINTER]             = _("Painter"),
};
