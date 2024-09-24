#define UNOWN_FRONT_COORDS(frontWidth, frontHeight)       \
    {                                                     \
        .size = MON_COORDS_SIZE(frontWidth, frontHeight), \
        .y_offset = 16,                                   \
    }

#define ARCEUS_FRONT_COORDS              \
    {                                    \
        .size = MON_COORDS_SIZE(64, 64), \
        .y_offset = 0,                   \
    }

#define GENESECT_FRONT_COORDS            \
    {                                    \
        .size = MON_COORDS_SIZE(56, 64), \
        .y_offset = 0,                   \
    }

#define VIVILLON_FRONT_COORDS            \
	{                                    \
        .size = MON_COORDS_SIZE(64, 64), \
        .y_offset = 0,                   \
	}

#define FLABEBE_FRONT_COORDS             \
	{                                    \
        .size = MON_COORDS_SIZE(48, 56), \
        .y_offset = 6,                   \
	}

#define FLOETTE_FRONT_COORDS             \
	{                                    \
        .size = MON_COORDS_SIZE(48, 64), \
        .y_offset = 3,                   \
	}

#define FLORGES_FRONT_COORDS             \
	{                                    \
        .size = MON_COORDS_SIZE(64, 64), \
        .y_offset = 0,                   \
	}

#define FURFROU_FRONT_COORDS(frontWidth, frontYOffset) \
    {                                                  \
        .size = MON_COORDS_SIZE(frontWidth, 64),       \
        .y_offset = frontYOffset,                      \
    }

const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BULBASAUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_VENUSAUR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_CHARMANDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CATERPIE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_METAPOD] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEDLE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_KAKUNA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_PIDGEY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RATTATA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_RATICATE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_SPEAROW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_FEAROW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_EKANS] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_ARBOK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_PIKACHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_RAICHU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_NIDORINA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_NIDORAN_M] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_NIDORINO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NIDOKING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_CLEFAIRY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_VULPIX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_NINETALES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIGGLYPUFF] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_ZUBAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_GOLBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ODDISH] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_GLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_PARAS] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_PARASECT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_VENONAT] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 11,
    },
    [SPECIES_VENOMOTH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_DIGLETT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_MEOWTH] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_PERSIAN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_GOLDUCK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MANKEY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 14,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GROWLITHE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_ARCANINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_POLIWAG] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ABRA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_KADABRA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ALAKAZAM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_MACHOP] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_MACHOKE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MACHAMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 15,
    },
    [SPECIES_WEEPINBELL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VICTREEBEL] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TENTACRUEL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_GEODUDE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_GRAVELER] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_GOLEM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_PONYTA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = MON_COORDS_SIZE(40, 24),
        .y_offset = 22,
    },
    [SPECIES_MAGNETON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_DODUO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_DODRIO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SEEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_DEWGONG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SHELLDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GASTLY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_HAUNTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GENGAR] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_ONIX] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HYPNO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_KRABBY] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_KINGLER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_VOLTORB] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CUBONE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_MAROWAK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 13,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 7,
    },
    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_CHANSEY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_TANGELA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HORSEA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_SEADRA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SEAKING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    [SPECIES_MR_MIME] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_SCYTHER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_JYNX] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_MAGMAR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_PINSIR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },
    [SPECIES_GYARADOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 13,
    },
    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_PORYGON] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_OMANYTE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_OMASTAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KABUTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SNORLAX] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ZAPDOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_MOLTRES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_DRATINI] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_DRAGONITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEW] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 13,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_QUILAVA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TOTODILE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 4,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 19,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 11,
    },
    [SPECIES_PICHU] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 20,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_AZUMARILL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_JUMPLUFF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_QUAGSIRE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN] = UNOWN_FRONT_COORDS(24, 40),
    [SPECIES_WOBBUFFET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 13,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_DONPHAN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_HITMONTOP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELEBI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 17,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 15,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEDOT] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 16,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TAILLOW] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_WINGULL] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 24,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_MAKUHITA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEDITITE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 18,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SHARPEDO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 9,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 12,
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 17,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SOLROCK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 6,
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ANORITH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASTFORM_NORMAL] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_SNORUNT] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_GOREBYSS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },
    [SPECIES_LUVDISC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 24,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SALAMENCE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_METANG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_REGISTEEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_LATIAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_DEOXYS_NORMAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_TURTWIG] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GROTLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_TORTERRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHIMCHAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_MONFERNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_INFERNAPE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PIPLUP] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_PRINPLUP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_EMPOLEON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_STARLY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_STARAVIA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_STARAPTOR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_BIDOOF] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_BIBAREL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_KRICKETOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_KRICKETUNE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SHINX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_LUXIO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_LUXRAY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_BUDEW] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_ROSERADE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRANIDOS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_RAMPARDOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SHIELDON] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_BASTIODON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_BURMY_PLANT_CLOAK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 13,
    },
    [SPECIES_WORMADAM_PLANT_CLOAK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
	[SPECIES_MOTHIM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 12,
    },
    [SPECIES_COMBEE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 16,
    },
    [SPECIES_VESPIQUEN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_PACHIRISU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 12,
    },
    [SPECIES_BUIZEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_FLOATZEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHERUBI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_CHERRIM_OVERCAST] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 8,
    },
    [SPECIES_SHELLOS_WEST_SEA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GASTRODON_WEST_SEA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_AMBIPOM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_DRIFLOON] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_DRIFBLIM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_BUNEARY] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 9,
    },
    [SPECIES_LOPUNNY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MISMAGIUS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_HONCHKROW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_GLAMEOW] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_PURUGLY] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CHINGLING] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STUNKY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 13,
    },
    [SPECIES_SKUNTANK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BRONZOR] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BRONZONG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BONSLY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_MIME_JR] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 9,
    },
    [SPECIES_HAPPINY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_CHATOT] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SPIRITOMB] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIBLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_GABITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GARCHOMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUNCHLAX] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_RIOLU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_LUCARIO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HIPPOPOTAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_HIPPOWDON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SKORUPI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DRAPION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_CROAGUNK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_TOXICROAK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_CARNIVINE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_FINNEON] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_LUMINEON] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MANTYKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_SNOVER] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ABOMASNOW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WEAVILE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MAGNEZONE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKILICKY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_RHYPERIOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TANGROWTH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_ELECTIVIRE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MAGMORTAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TOGEKISS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_YANMEGA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_LEAFEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_GLACEON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_GLISCOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_MAMOSWINE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_PORYGON_Z] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_GALLADE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_PROBOPASS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_DUSKNOIR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FROSLASS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ROTOM] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_UXIE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MESPRIT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_AZELF] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_DIALGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PALKIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HEATRAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_REGIGIGAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_GIRATINA_ALTERED] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CRESSELIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PHIONE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_MANAPHY] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DARKRAI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SHAYMIN_LAND] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_ARCEUS_NORMAL] = ARCEUS_FRONT_COORDS,
    [SPECIES_VICTINI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    [SPECIES_SNIVY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_SERVINE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_SERPERIOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TEPIG] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 15,
    },
    [SPECIES_PIGNITE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_EMBOAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_OSHAWOTT] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_DEWOTT] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_SAMUROTT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PATRAT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_WATCHOG] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 2,
    },
    [SPECIES_LILLIPUP] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_HERDIER] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_STOUTLAND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PURRLOIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_LIEPARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_PANSAGE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SIMISAGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PANSEAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SIMISEAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PANPOUR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SIMIPOUR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MUNNA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_MUSHARNA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_PIDOVE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_TRANQUILL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_UNFEZANT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_BLITZLE] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_ZEBSTRIKA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ROGGENROLA] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_BOLDORE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GIGALITH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_WOOBAT] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_SWOOBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_DRILBUR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_EXCADRILL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AUDINO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_TIMBURR] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_GURDURR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CONKELDURR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_TYMPOLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_PALPITOAD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SEISMITOAD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_THROH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SAWK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SEWADDLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SWADLOON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 12,
    },
    [SPECIES_LEAVANNY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_VENIPEDE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_WHIRLIPEDE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_SCOLIPEDE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_COTTONEE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_WHIMSICOTT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PETILIL] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_LILLIGANT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BASCULIN_RED_STRIPED] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_SANDILE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_KROKOROK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_KROOKODILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DARUMAKA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_DARMANITAN_STANDARD_MODE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MARACTUS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DWEBBLE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_CRUSTLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SCRAGGY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SCRAFTY] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SIGILYPH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_YAMASK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_COFAGRIGUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TIRTOUGA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_CARRACOSTA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ARCHEN] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_ARCHEOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_TRUBBISH] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_GARBODOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ZORUA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_ZOROARK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MINCCINO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_CINCCINO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GOTHITA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_GOTHORITA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOTHITELLE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_SOLOSIS] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_DUOSION] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_REUNICLUS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_DUCKLETT] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_SWANNA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_VANILLITE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_VANILLISH] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 5,
    },
    [SPECIES_VANILLUXE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_DEERLING_SPRING] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_SAWSBUCK_SPRING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_EMOLGA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 17,
    },
    [SPECIES_KARRABLAST] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 13,
    },
    [SPECIES_ESCAVALIER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FOONGUS] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_AMOONGUSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_FRILLISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_JELLICENT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ALOMOMOLA] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 0,
    },
    [SPECIES_JOLTIK] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_GALVANTULA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_FERROSEED] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_FERROTHORN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_KLINK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_KLANG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_KLINKLANG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TYNAMO] =
    {
        .size = MON_COORDS_SIZE(40, 24),
        .y_offset = 22,
    },
    [SPECIES_EELEKTRIK] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 6,
    },
    [SPECIES_EELEKTROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_ELGYEM] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_BEHEEYEM] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LITWICK] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_LAMPENT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_CHANDELURE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_AXEW] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_FRAXURE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_HAXORUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CUBCHOO] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_BEARTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CRYOGONAL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SHELMET] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_ACCELGOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_STUNFISK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 14,
    },
    [SPECIES_MIENFOO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MIENSHAO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DRUDDIGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_GOLETT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GOLURK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PAWNIARD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_BISHARP] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_BOUFFALANT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_RUFFLET] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_BRAVIARY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_VULLABY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MANDIBUZZ] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_HEATMOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_DURANT] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_DEINO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_ZWEILOUS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_HYDREIGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVESTA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 13,
    },
    [SPECIES_VOLCARONA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_COBALION] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_TERRAKION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_VIRIZION] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_TORNADUS_INCARNATE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RESHIRAM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ZEKROM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LANDORUS_INCARNATE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_KYUREM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_KELDEO_ORDINARY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MELOETTA_ARIA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GENESECT] = GENESECT_FRONT_COORDS,
    [SPECIES_CHESPIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_QUILLADIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_CHESNAUGHT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FENNEKIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_BRAIXEN] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 4,
    },
    [SPECIES_DELPHOX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FROAKIE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_FROGADIER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_GRENINJA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BUNNELBY] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 5,
    },
    [SPECIES_DIGGERSBY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_FLETCHLING] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_FLETCHINDER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TALONFLAME] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
	[SPECIES_SCATTERBUG] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
	[SPECIES_SPEWPA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_VIVILLON_ICY_SNOW] = VIVILLON_FRONT_COORDS,
    [SPECIES_LITLEO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_PYROAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLABEBE_RED_FLOWER] = FLABEBE_FRONT_COORDS,
    [SPECIES_FLOETTE_RED_FLOWER] = FLOETTE_FRONT_COORDS,
    [SPECIES_FLORGES_RED_FLOWER] = FLORGES_FRONT_COORDS,
    [SPECIES_SKIDDO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOGOAT] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_PANCHAM] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 12,
    },
    [SPECIES_PANGORO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FURFROU_NATURAL] = FURFROU_FRONT_COORDS(48, 3),
    [SPECIES_ESPURR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_MEOWSTIC_MALE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_HONEDGE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DOUBLADE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AEGISLASH_SHIELD] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SPRITZEE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_AROMATISSE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SWIRLIX] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SLURPUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_INKAY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 14,
    },
    [SPECIES_MALAMAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BINACLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_BARBARACLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SKRELP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_DRAGALGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CLAUNCHER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_CLAWITZER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 10,
    },
    [SPECIES_HELIOPTILE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_HELIOLISK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TYRUNT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TYRANTRUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AMAURA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 5,
    },
    [SPECIES_AURORUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SYLVEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_HAWLUCHA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_DEDENNE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_CARBINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_GOOMY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_SLIGGOO] =
    {
        .size = MON_COORDS_SIZE(32, 64),
        .y_offset = 6,
    },
    [SPECIES_GOODRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KLEFKI] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 4,
    },
    [SPECIES_PHANTUMP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TREVENANT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_BERGMITE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_AVALUGG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_NOIBAT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_NOIVERN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_YVELTAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ZYGARDE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DIANCIE] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_HOOPA_CONFINED] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VOLCANION] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

	// Mega Forms
    [SPECIES_VENUSAUR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLASTOISE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BEEDRILL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PIDGEOT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SLOWBRO_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_GENGAR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 7,
    },
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PINSIR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_GYARADOS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AERODACTYL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_AMPHAROS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_STEELIX_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SCIZOR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HERACROSS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TYRANITAR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SCEPTILE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SWAMPERT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SABLEYE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_MAWILE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 5,
    },
    [SPECIES_AGGRON_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEDICHAM_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MANECTRIC_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SHARPEDO_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CAMERUPT_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ALTARIA_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BANETTE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ABSOL_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GLALIE_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SALAMENCE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_METAGROSS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIOS_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LOPUNNY_MEGA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_GARCHOMP_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUCARIO_MEGA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_GALLADE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AUDINO_MEGA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 6,
    },
    [SPECIES_DIANCIE_MEGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_GROUDON_PRIMAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

	// Alt Forms
    [SPECIES_UNOWN_B] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_C] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_D] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_E] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_F] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_G] = UNOWN_FRONT_COORDS(24, 40),
    [SPECIES_UNOWN_H] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_I] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_J] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_K] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_L] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_M] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_N] = UNOWN_FRONT_COORDS(32, 24),
    [SPECIES_UNOWN_O] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_P] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_Q] = UNOWN_FRONT_COORDS(32, 24),
    [SPECIES_UNOWN_R] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_S] = UNOWN_FRONT_COORDS(32, 40),
    [SPECIES_UNOWN_T] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_U] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_V] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_W] = UNOWN_FRONT_COORDS(32, 32),
    [SPECIES_UNOWN_X] = UNOWN_FRONT_COORDS(24, 24),
    [SPECIES_UNOWN_Y] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_Z] = UNOWN_FRONT_COORDS(24, 32),
    [SPECIES_UNOWN_EMARK] = UNOWN_FRONT_COORDS(24, 40),
    [SPECIES_UNOWN_QMARK] = UNOWN_FRONT_COORDS(24, 40),
    [SPECIES_CASTFORM_SUNNY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_CASTFORM_RAINY] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_CASTFORM_SNOWY] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 8,
    },
    [SPECIES_DEOXYS_ATTACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_DEFENSE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DEOXYS_SPEED] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 12,
    },
    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 8,
    },
    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 10,
    },
    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 10,
    },
    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ROTOM_HEAT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_ROTOM_WASH] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_ROTOM_FROST] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },
    [SPECIES_ROTOM_FAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 8,
    },
    [SPECIES_ROTOM_MOW] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_GIRATINA_ORIGIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SHAYMIN_SKY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ARCEUS_FIRE] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_WATER] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_GRASS] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_ICE] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_POISON] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_GROUND] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_FLYING] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_PSYCHIC] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_BUG] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_ROCK] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_GHOST] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_DRAGON] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_DARK] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_STEEL] = ARCEUS_FRONT_COORDS,
    [SPECIES_ARCEUS_FAIRY] = ARCEUS_FRONT_COORDS,
    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_DARMANITAN_ZEN_MODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_DEERLING_SUMMER] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_DEERLING_AUTUMN] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_DEERLING_WINTER] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SAWSBUCK_WINTER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TORNADUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_THUNDURUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_LANDORUS_THERIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KYUREM_WHITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KYUREM_BLACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KELDEO_RESOLUTE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GENESECT_DOUSE_DRIVE] = GENESECT_FRONT_COORDS,
    [SPECIES_GENESECT_SHOCK_DRIVE] = GENESECT_FRONT_COORDS,
    [SPECIES_GENESECT_BURN_DRIVE] = GENESECT_FRONT_COORDS,
    [SPECIES_GENESECT_CHILL_DRIVE] = GENESECT_FRONT_COORDS,
    [SPECIES_VIVILLON_POLAR] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_TUNDRA] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_CONTINENTAL] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_GARDEN] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_ELEGANT] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_MEADOW] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_MODERN] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_MARINE] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_ARCHIPELAGO] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_HIGH_PLAINS] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_SANDSTORM] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_RIVER] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_MONSOON] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_SAVANNA] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_SUN] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_OCEAN] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_JUNGLE] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_FANCY] = VIVILLON_FRONT_COORDS,
    [SPECIES_VIVILLON_POKE_BALL] = VIVILLON_FRONT_COORDS,
    [SPECIES_FLABEBE_YELLOW_FLOWER] = FLABEBE_FRONT_COORDS,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = FLABEBE_FRONT_COORDS,
    [SPECIES_FLABEBE_BLUE_FLOWER] = FLABEBE_FRONT_COORDS,
    [SPECIES_FLABEBE_WHITE_FLOWER] = FLABEBE_FRONT_COORDS,
    [SPECIES_FLOETTE_YELLOW_FLOWER] = FLOETTE_FRONT_COORDS,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = FLOETTE_FRONT_COORDS,
    [SPECIES_FLOETTE_BLUE_FLOWER] = FLOETTE_FRONT_COORDS,
    [SPECIES_FLOETTE_WHITE_FLOWER] = FLOETTE_FRONT_COORDS,
    [SPECIES_FLOETTE_ETERNAL_FLOWER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_FLORGES_YELLOW_FLOWER] = FLORGES_FRONT_COORDS,
    [SPECIES_FLORGES_ORANGE_FLOWER] = FLORGES_FRONT_COORDS,
    [SPECIES_FLORGES_BLUE_FLOWER] = FLORGES_FRONT_COORDS,
    [SPECIES_FLORGES_WHITE_FLOWER] = FLORGES_FRONT_COORDS,
    [SPECIES_FURFROU_HEART_TRIM] = FURFROU_FRONT_COORDS(56, 2),
    [SPECIES_FURFROU_STAR_TRIM] = FURFROU_FRONT_COORDS(56, 2),
    [SPECIES_FURFROU_DIAMOND_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_FURFROU_DEBUTANTE_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_FURFROU_MATRON_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_FURFROU_DANDY_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_FURFROU_LA_REINE_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_FURFROU_KABUKI_TRIM] = FURFROU_FRONT_COORDS(56, 2),
    [SPECIES_FURFROU_PHARAOH_TRIM] = FURFROU_FRONT_COORDS(48, 2),
    [SPECIES_MEOWSTIC_FEMALE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_AEGISLASH_BLADE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PUMPKABOO_SMALL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_PUMPKABOO_LARGE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_PUMPKABOO_SUPER] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_GOURGEIST_SMALL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 5,
    },
    [SPECIES_GOURGEIST_LARGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_GOURGEIST_SUPER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_XERNEAS_ACTIVE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOOPA_UNBOUND] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

	// Egg
	[SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
    },
};
