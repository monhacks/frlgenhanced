static const u16 sSpeciesIdToCryId[] =
{
	[SPECIES_BULBASAUR] = CRY_BULBASAUR,
	[SPECIES_IVYSAUR] = CRY_IVYSAUR,
	[SPECIES_VENUSAUR] = CRY_VENUSAUR,
	[SPECIES_VENUSAUR_MEGA] = CRY_VENUSAUR_MEGA,
	[SPECIES_CHARMANDER] = CRY_CHARMANDER,
	[SPECIES_CHARMELEON] = CRY_CHARMELEON,
	[SPECIES_CHARIZARD] = CRY_CHARIZARD,
	[SPECIES_CHARIZARD_MEGA_X] = CRY_CHARIZARD_MEGA_X,
	[SPECIES_CHARIZARD_MEGA_Y] = CRY_CHARIZARD_MEGA_Y,
	[SPECIES_SQUIRTLE] = CRY_SQUIRTLE,
	[SPECIES_WARTORTLE] = CRY_WARTORTLE,
	[SPECIES_BLASTOISE] = CRY_BLASTOISE,
	[SPECIES_BLASTOISE_MEGA] = CRY_BLASTOISE_MEGA,
	[SPECIES_CATERPIE] = CRY_CATERPIE,
	[SPECIES_METAPOD] = CRY_METAPOD,
	[SPECIES_BUTTERFREE] = CRY_BUTTERFREE,
	[SPECIES_WEEDLE] = CRY_WEEDLE,
	[SPECIES_KAKUNA] = CRY_KAKUNA,
	[SPECIES_BEEDRILL] = CRY_BEEDRILL,
	[SPECIES_BEEDRILL_MEGA] = CRY_BEEDRILL_MEGA,
	[SPECIES_PIDGEY] = CRY_PIDGEY,
	[SPECIES_PIDGEOTTO] = CRY_PIDGEOTTO,
	[SPECIES_PIDGEOT] = CRY_PIDGEOT,
	[SPECIES_PIDGEOT_MEGA] = CRY_PIDGEOT_MEGA,
	[SPECIES_RATTATA] = CRY_RATTATA,
	[SPECIES_RATICATE] = CRY_RATICATE,
	[SPECIES_SPEAROW] = CRY_SPEAROW,
	[SPECIES_FEAROW] = CRY_FEAROW,
	[SPECIES_EKANS] = CRY_EKANS,
	[SPECIES_ARBOK] = CRY_ARBOK,
	[SPECIES_PIKACHU] = CRY_PIKACHU,
	[SPECIES_RAICHU] = CRY_RAICHU,
	[SPECIES_SANDSHREW] = CRY_SANDSHREW,
	[SPECIES_SANDSLASH] = CRY_SANDSLASH,
	[SPECIES_NIDORAN_F] = CRY_NIDORAN_F,
	[SPECIES_NIDORINA] = CRY_NIDORINA,
	[SPECIES_NIDOQUEEN] = CRY_NIDOQUEEN,
	[SPECIES_NIDORAN_M] = CRY_NIDORAN_M,
	[SPECIES_NIDORINO] = CRY_NIDORINO,
	[SPECIES_NIDOKING] = CRY_NIDOKING,
	[SPECIES_CLEFAIRY] = CRY_CLEFAIRY,
	[SPECIES_CLEFABLE] = CRY_CLEFABLE,
	[SPECIES_VULPIX] = CRY_VULPIX,
	[SPECIES_NINETALES] = CRY_NINETALES,
	[SPECIES_JIGGLYPUFF] = CRY_JIGGLYPUFF,
	[SPECIES_WIGGLYTUFF] = CRY_WIGGLYTUFF,
	[SPECIES_ZUBAT] = CRY_ZUBAT,
	[SPECIES_GOLBAT] = CRY_GOLBAT,
	[SPECIES_ODDISH] = CRY_ODDISH,
	[SPECIES_GLOOM] = CRY_GLOOM,
	[SPECIES_VILEPLUME] = CRY_VILEPLUME,
	[SPECIES_PARAS] = CRY_PARAS,
	[SPECIES_PARASECT] = CRY_PARASECT,
	[SPECIES_VENONAT] = CRY_VENONAT,
	[SPECIES_VENOMOTH] = CRY_VENOMOTH,
	[SPECIES_DIGLETT] = CRY_DIGLETT,
	[SPECIES_DUGTRIO] = CRY_DUGTRIO,
	[SPECIES_MEOWTH] = CRY_MEOWTH,
	[SPECIES_PERSIAN] = CRY_PERSIAN,
	[SPECIES_PSYDUCK] = CRY_PSYDUCK,
	[SPECIES_GOLDUCK] = CRY_GOLDUCK,
	[SPECIES_MANKEY] = CRY_MANKEY,
	[SPECIES_PRIMEAPE] = CRY_PRIMEAPE,
	[SPECIES_GROWLITHE] = CRY_GROWLITHE,
	[SPECIES_ARCANINE] = CRY_ARCANINE,
	[SPECIES_POLIWAG] = CRY_POLIWAG,
	[SPECIES_POLIWHIRL] = CRY_POLIWHIRL,
	[SPECIES_POLIWRATH] = CRY_POLIWRATH,
	[SPECIES_ABRA] = CRY_ABRA,
	[SPECIES_KADABRA] = CRY_KADABRA,
	[SPECIES_ALAKAZAM] = CRY_ALAKAZAM,
	[SPECIES_ALAKAZAM_MEGA] = CRY_ALAKAZAM_MEGA,
	[SPECIES_MACHOP] = CRY_MACHOP,
	[SPECIES_MACHOKE] = CRY_MACHOKE,
	[SPECIES_MACHAMP] = CRY_MACHAMP,
	[SPECIES_BELLSPROUT] = CRY_BELLSPROUT,
	[SPECIES_WEEPINBELL] = CRY_WEEPINBELL,
	[SPECIES_VICTREEBEL] = CRY_VICTREEBEL,
	[SPECIES_TENTACOOL] = CRY_TENTACOOL,
	[SPECIES_TENTACRUEL] = CRY_TENTACRUEL,
	[SPECIES_GEODUDE] = CRY_GEODUDE,
	[SPECIES_GRAVELER] = CRY_GRAVELER,
	[SPECIES_GOLEM] = CRY_GOLEM,
	[SPECIES_PONYTA] = CRY_PONYTA,
	[SPECIES_RAPIDASH] = CRY_RAPIDASH,
	[SPECIES_SLOWPOKE] = CRY_SLOWPOKE,
	[SPECIES_SLOWBRO] = CRY_SLOWBRO,
	[SPECIES_SLOWBRO_MEGA] = CRY_SLOWBRO_MEGA,
	[SPECIES_MAGNEMITE] = CRY_MAGNEMITE,
	[SPECIES_MAGNETON] = CRY_MAGNETON,
	[SPECIES_FARFETCHD] = CRY_FARFETCHD,
	[SPECIES_DODUO] = CRY_DODUO,
	[SPECIES_DODRIO] = CRY_DODRIO,
	[SPECIES_SEEL] = CRY_SEEL,
	[SPECIES_DEWGONG] = CRY_DEWGONG,
	[SPECIES_GRIMER] = CRY_GRIMER,
	[SPECIES_MUK] = CRY_MUK,
	[SPECIES_SHELLDER] = CRY_SHELLDER,
	[SPECIES_CLOYSTER] = CRY_CLOYSTER,
	[SPECIES_GASTLY] = CRY_GASTLY,
	[SPECIES_HAUNTER] = CRY_HAUNTER,
	[SPECIES_GENGAR] = CRY_GENGAR,
	[SPECIES_GENGAR_MEGA] = CRY_GENGAR_MEGA,
	[SPECIES_ONIX] = CRY_ONIX,
	[SPECIES_DROWZEE] = CRY_DROWZEE,
	[SPECIES_HYPNO] = CRY_HYPNO,
	[SPECIES_KRABBY] = CRY_KRABBY,
	[SPECIES_KINGLER] = CRY_KINGLER,
	[SPECIES_VOLTORB] = CRY_VOLTORB,
	[SPECIES_ELECTRODE] = CRY_ELECTRODE,
	[SPECIES_EXEGGCUTE] = CRY_EXEGGCUTE,
	[SPECIES_EXEGGUTOR] = CRY_EXEGGUTOR,
	[SPECIES_CUBONE] = CRY_CUBONE,
	[SPECIES_MAROWAK] = CRY_MAROWAK,
	[SPECIES_HITMONLEE] = CRY_HITMONLEE,
	[SPECIES_HITMONCHAN] = CRY_HITMONCHAN,
	[SPECIES_LICKITUNG] = CRY_LICKITUNG,
	[SPECIES_KOFFING] = CRY_KOFFING,
	[SPECIES_WEEZING] = CRY_WEEZING,
	[SPECIES_RHYHORN] = CRY_RHYHORN,
	[SPECIES_RHYDON] = CRY_RHYDON,
	[SPECIES_CHANSEY] = CRY_CHANSEY,
	[SPECIES_TANGELA] = CRY_TANGELA,
	[SPECIES_KANGASKHAN] = CRY_KANGASKHAN,
	[SPECIES_KANGASKHAN_MEGA] = CRY_KANGASKHAN_MEGA,
	[SPECIES_HORSEA] = CRY_HORSEA,
	[SPECIES_SEADRA] = CRY_SEADRA,
	[SPECIES_GOLDEEN] = CRY_GOLDEEN,
	[SPECIES_SEAKING] = CRY_SEAKING,
	[SPECIES_STARYU] = CRY_STARYU,
	[SPECIES_STARMIE] = CRY_STARMIE,
	[SPECIES_MR_MIME] = CRY_MR_MIME,
	[SPECIES_SCYTHER] = CRY_SCYTHER,
	[SPECIES_JYNX] = CRY_JYNX,
	[SPECIES_ELECTABUZZ] = CRY_ELECTABUZZ,
	[SPECIES_MAGMAR] = CRY_MAGMAR,
	[SPECIES_PINSIR] = CRY_PINSIR,
	[SPECIES_PINSIR_MEGA] = CRY_PINSIR_MEGA,
	[SPECIES_TAUROS] = CRY_TAUROS,
	[SPECIES_MAGIKARP] = CRY_MAGIKARP,
	[SPECIES_GYARADOS] = CRY_GYARADOS,
	[SPECIES_GYARADOS_MEGA] = CRY_GYARADOS_MEGA,
	[SPECIES_LAPRAS] = CRY_LAPRAS,
	[SPECIES_DITTO] = CRY_DITTO,
	[SPECIES_EEVEE] = CRY_EEVEE,
	[SPECIES_VAPOREON] = CRY_VAPOREON,
	[SPECIES_JOLTEON] = CRY_JOLTEON,
	[SPECIES_FLAREON] = CRY_FLAREON,
	[SPECIES_PORYGON] = CRY_PORYGON,
	[SPECIES_OMANYTE] = CRY_OMANYTE,
	[SPECIES_OMASTAR] = CRY_OMASTAR,
	[SPECIES_KABUTO] = CRY_KABUTO,
	[SPECIES_KABUTOPS] = CRY_KABUTOPS,
	[SPECIES_AERODACTYL] = CRY_AERODACTYL,
	[SPECIES_AERODACTYL_MEGA] = CRY_AERODACTYL_MEGA,
	[SPECIES_SNORLAX] = CRY_SNORLAX,
	[SPECIES_ARTICUNO] = CRY_ARTICUNO,
	[SPECIES_ZAPDOS] = CRY_ZAPDOS,
	[SPECIES_MOLTRES] = CRY_MOLTRES,
	[SPECIES_DRATINI] = CRY_DRATINI,
	[SPECIES_DRAGONAIR] = CRY_DRAGONAIR,
	[SPECIES_DRAGONITE] = CRY_DRAGONITE,
	[SPECIES_MEWTWO] = CRY_MEWTWO,
	[SPECIES_MEWTWO_MEGA_X] = CRY_MEWTWO_MEGA_X,
	[SPECIES_MEWTWO_MEGA_Y] = CRY_MEWTWO_MEGA_Y,
	[SPECIES_MEW] = CRY_MEW,
	[SPECIES_CHIKORITA] = CRY_CHIKORITA,
	[SPECIES_BAYLEEF] = CRY_BAYLEEF,
	[SPECIES_MEGANIUM] = CRY_MEGANIUM,
	[SPECIES_CYNDAQUIL] = CRY_CYNDAQUIL,
	[SPECIES_QUILAVA] = CRY_QUILAVA,
	[SPECIES_TYPHLOSION] = CRY_TYPHLOSION,
	[SPECIES_TOTODILE] = CRY_TOTODILE,
	[SPECIES_CROCONAW] = CRY_CROCONAW,
	[SPECIES_FERALIGATR] = CRY_FERALIGATR,
	[SPECIES_SENTRET] = CRY_SENTRET,
	[SPECIES_FURRET] = CRY_FURRET,
	[SPECIES_HOOTHOOT] = CRY_HOOTHOOT,
	[SPECIES_NOCTOWL] = CRY_NOCTOWL,
	[SPECIES_LEDYBA] = CRY_LEDYBA,
	[SPECIES_LEDIAN] = CRY_LEDIAN,
	[SPECIES_SPINARAK] = CRY_SPINARAK,
	[SPECIES_ARIADOS] = CRY_ARIADOS,
	[SPECIES_CROBAT] = CRY_CROBAT,
	[SPECIES_CHINCHOU] = CRY_CHINCHOU,
	[SPECIES_LANTURN] = CRY_LANTURN,
	[SPECIES_PICHU] = CRY_PICHU,
	[SPECIES_CLEFFA] = CRY_CLEFFA,
	[SPECIES_IGGLYBUFF] = CRY_IGGLYBUFF,
	[SPECIES_TOGEPI] = CRY_TOGEPI,
	[SPECIES_TOGETIC] = CRY_TOGETIC,
	[SPECIES_NATU] = CRY_NATU,
	[SPECIES_XATU] = CRY_XATU,
	[SPECIES_MAREEP] = CRY_MAREEP,
	[SPECIES_FLAAFFY] = CRY_FLAAFFY,
	[SPECIES_AMPHAROS] = CRY_AMPHAROS,
	[SPECIES_AMPHAROS_MEGA] = CRY_AMPHAROS_MEGA,
	[SPECIES_BELLOSSOM] = CRY_BELLOSSOM,
	[SPECIES_MARILL] = CRY_MARILL,
	[SPECIES_AZUMARILL] = CRY_AZUMARILL,
	[SPECIES_SUDOWOODO] = CRY_SUDOWOODO,
	[SPECIES_POLITOED] = CRY_POLITOED,
	[SPECIES_HOPPIP] = CRY_HOPPIP,
	[SPECIES_SKIPLOOM] = CRY_SKIPLOOM,
	[SPECIES_JUMPLUFF] = CRY_JUMPLUFF,
	[SPECIES_AIPOM] = CRY_AIPOM,
	[SPECIES_SUNKERN] = CRY_SUNKERN,
	[SPECIES_SUNFLORA] = CRY_SUNFLORA,
	[SPECIES_YANMA] = CRY_YANMA,
	[SPECIES_WOOPER] = CRY_WOOPER,
	[SPECIES_QUAGSIRE] = CRY_QUAGSIRE,
	[SPECIES_ESPEON] = CRY_ESPEON,
	[SPECIES_UMBREON] = CRY_UMBREON,
	[SPECIES_MURKROW] = CRY_MURKROW,
	[SPECIES_SLOWKING] = CRY_SLOWKING,
	[SPECIES_MISDREAVUS] = CRY_MISDREAVUS,
	[SPECIES_UNOWN] = CRY_UNOWN,
	[SPECIES_UNOWN_B] = CRY_UNOWN,
	[SPECIES_UNOWN_C] = CRY_UNOWN,
	[SPECIES_UNOWN_D] = CRY_UNOWN,
	[SPECIES_UNOWN_E] = CRY_UNOWN,
	[SPECIES_UNOWN_F] = CRY_UNOWN,
	[SPECIES_UNOWN_G] = CRY_UNOWN,
	[SPECIES_UNOWN_H] = CRY_UNOWN,
	[SPECIES_UNOWN_I] = CRY_UNOWN,
	[SPECIES_UNOWN_J] = CRY_UNOWN,
	[SPECIES_UNOWN_K] = CRY_UNOWN,
	[SPECIES_UNOWN_L] = CRY_UNOWN,
	[SPECIES_UNOWN_M] = CRY_UNOWN,
	[SPECIES_UNOWN_N] = CRY_UNOWN,
	[SPECIES_UNOWN_O] = CRY_UNOWN,
	[SPECIES_UNOWN_P] = CRY_UNOWN,
	[SPECIES_UNOWN_Q] = CRY_UNOWN,
	[SPECIES_UNOWN_R] = CRY_UNOWN,
	[SPECIES_UNOWN_S] = CRY_UNOWN,
	[SPECIES_UNOWN_T] = CRY_UNOWN,
	[SPECIES_UNOWN_U] = CRY_UNOWN,
	[SPECIES_UNOWN_V] = CRY_UNOWN,
	[SPECIES_UNOWN_W] = CRY_UNOWN,
	[SPECIES_UNOWN_X] = CRY_UNOWN,
	[SPECIES_UNOWN_Y] = CRY_UNOWN,
	[SPECIES_UNOWN_Z] = CRY_UNOWN,
	[SPECIES_UNOWN_EMARK] = CRY_UNOWN,
	[SPECIES_UNOWN_QMARK] = CRY_UNOWN,
	[SPECIES_WOBBUFFET] = CRY_WOBBUFFET,
	[SPECIES_GIRAFARIG] = CRY_GIRAFARIG,
	[SPECIES_PINECO] = CRY_PINECO,
	[SPECIES_FORRETRESS] = CRY_FORRETRESS,
	[SPECIES_DUNSPARCE] = CRY_DUNSPARCE,
	[SPECIES_GLIGAR] = CRY_GLIGAR,
	[SPECIES_STEELIX] = CRY_STEELIX,
	[SPECIES_STEELIX_MEGA] = CRY_STEELIX_MEGA,
	[SPECIES_SNUBBULL] = CRY_SNUBBULL,
	[SPECIES_GRANBULL] = CRY_GRANBULL,
	[SPECIES_QWILFISH] = CRY_QWILFISH,
	[SPECIES_SCIZOR] = CRY_SCIZOR,
	[SPECIES_SCIZOR_MEGA] = CRY_SCIZOR_MEGA,
	[SPECIES_SHUCKLE] = CRY_SHUCKLE,
	[SPECIES_HERACROSS] = CRY_HERACROSS,
	[SPECIES_HERACROSS_MEGA] = CRY_HERACROSS_MEGA,
	[SPECIES_SNEASEL] = CRY_SNEASEL,
	[SPECIES_TEDDIURSA] = CRY_TEDDIURSA,
	[SPECIES_URSARING] = CRY_URSARING,
	[SPECIES_SLUGMA] = CRY_SLUGMA,
	[SPECIES_MAGCARGO] = CRY_MAGCARGO,
	[SPECIES_SWINUB] = CRY_SWINUB,
	[SPECIES_PILOSWINE] = CRY_PILOSWINE,
	[SPECIES_CORSOLA] = CRY_CORSOLA,
	[SPECIES_REMORAID] = CRY_REMORAID,
	[SPECIES_OCTILLERY] = CRY_OCTILLERY,
	[SPECIES_DELIBIRD] = CRY_DELIBIRD,
	[SPECIES_MANTINE] = CRY_MANTINE,
	[SPECIES_SKARMORY] = CRY_SKARMORY,
	[SPECIES_HOUNDOUR] = CRY_HOUNDOUR,
	[SPECIES_HOUNDOOM] = CRY_HOUNDOOM,
	[SPECIES_HOUNDOOM_MEGA] = CRY_HOUNDOOM_MEGA,
	[SPECIES_KINGDRA] = CRY_KINGDRA,
	[SPECIES_PHANPY] = CRY_PHANPY,
	[SPECIES_DONPHAN] = CRY_DONPHAN,
	[SPECIES_PORYGON2] = CRY_PORYGON2,
	[SPECIES_STANTLER] = CRY_STANTLER,
	[SPECIES_SMEARGLE] = CRY_SMEARGLE,
	[SPECIES_TYROGUE] = CRY_TYROGUE,
	[SPECIES_HITMONTOP] = CRY_HITMONTOP,
	[SPECIES_SMOOCHUM] = CRY_SMOOCHUM,
	[SPECIES_ELEKID] = CRY_ELEKID,
	[SPECIES_MAGBY] = CRY_MAGBY,
	[SPECIES_MILTANK] = CRY_MILTANK,
	[SPECIES_BLISSEY] = CRY_BLISSEY,
	[SPECIES_RAIKOU] = CRY_RAIKOU,
	[SPECIES_ENTEI] = CRY_ENTEI,
	[SPECIES_SUICUNE] = CRY_SUICUNE,
	[SPECIES_LARVITAR] = CRY_LARVITAR,
	[SPECIES_PUPITAR] = CRY_PUPITAR,
	[SPECIES_TYRANITAR] = CRY_TYRANITAR,
	[SPECIES_TYRANITAR_MEGA] = CRY_TYRANITAR_MEGA,
	[SPECIES_LUGIA] = CRY_LUGIA,
	[SPECIES_HO_OH] = CRY_HO_OH,
	[SPECIES_CELEBI] = CRY_CELEBI,
	[SPECIES_TREECKO] = CRY_TREECKO,
	[SPECIES_GROVYLE] = CRY_GROVYLE,
	[SPECIES_SCEPTILE] = CRY_SCEPTILE,
	[SPECIES_SCEPTILE_MEGA] = CRY_SCEPTILE_MEGA,
	[SPECIES_TORCHIC] = CRY_TORCHIC,
	[SPECIES_COMBUSKEN] = CRY_COMBUSKEN,
	[SPECIES_BLAZIKEN] = CRY_BLAZIKEN,
	[SPECIES_BLAZIKEN_MEGA] = CRY_BLAZIKEN_MEGA,
	[SPECIES_MUDKIP] = CRY_MUDKIP,
	[SPECIES_MARSHTOMP] = CRY_MARSHTOMP,
	[SPECIES_SWAMPERT] = CRY_SWAMPERT,
	[SPECIES_SWAMPERT_MEGA] = CRY_SWAMPERT_MEGA,
	[SPECIES_POOCHYENA] = CRY_POOCHYENA,
	[SPECIES_MIGHTYENA] = CRY_MIGHTYENA,
	[SPECIES_ZIGZAGOON] = CRY_ZIGZAGOON,
	[SPECIES_LINOONE] = CRY_LINOONE,
	[SPECIES_WURMPLE] = CRY_WURMPLE,
	[SPECIES_SILCOON] = CRY_SILCOON,
	[SPECIES_BEAUTIFLY] = CRY_BEAUTIFLY,
	[SPECIES_CASCOON] = CRY_CASCOON,
	[SPECIES_DUSTOX] = CRY_DUSTOX,
	[SPECIES_LOTAD] = CRY_LOTAD,
	[SPECIES_LOMBRE] = CRY_LOMBRE,
	[SPECIES_LUDICOLO] = CRY_LUDICOLO,
	[SPECIES_SEEDOT] = CRY_SEEDOT,
	[SPECIES_NUZLEAF] = CRY_NUZLEAF,
	[SPECIES_SHIFTRY] = CRY_SHIFTRY,
	[SPECIES_TAILLOW] = CRY_TAILLOW,
	[SPECIES_SWELLOW] = CRY_SWELLOW,
	[SPECIES_WINGULL] = CRY_WINGULL,
	[SPECIES_PELIPPER] = CRY_PELIPPER,
	[SPECIES_RALTS] = CRY_RALTS,
	[SPECIES_KIRLIA] = CRY_KIRLIA,
	[SPECIES_GARDEVOIR] = CRY_GARDEVOIR,
	[SPECIES_GARDEVOIR_MEGA] = CRY_GARDEVOIR_MEGA,
	[SPECIES_SURSKIT] = CRY_SURSKIT,
	[SPECIES_MASQUERAIN] = CRY_MASQUERAIN,
	[SPECIES_SHROOMISH] = CRY_SHROOMISH,
	[SPECIES_BRELOOM] = CRY_BRELOOM,
	[SPECIES_SLAKOTH] = CRY_SLAKOTH,
	[SPECIES_VIGOROTH] = CRY_VIGOROTH,
	[SPECIES_SLAKING] = CRY_SLAKING,
	[SPECIES_NINCADA] = CRY_NINCADA,
	[SPECIES_NINJASK] = CRY_NINJASK,
	[SPECIES_SHEDINJA] = CRY_SHEDINJA,
	[SPECIES_WHISMUR] = CRY_WHISMUR,
	[SPECIES_LOUDRED] = CRY_LOUDRED,
	[SPECIES_EXPLOUD] = CRY_EXPLOUD,
	[SPECIES_MAKUHITA] = CRY_MAKUHITA,
	[SPECIES_HARIYAMA] = CRY_HARIYAMA,
	[SPECIES_AZURILL] = CRY_AZURILL,
	[SPECIES_NOSEPASS] = CRY_NOSEPASS,
	[SPECIES_SKITTY] = CRY_SKITTY,
	[SPECIES_DELCATTY] = CRY_DELCATTY,
	[SPECIES_SABLEYE] = CRY_SABLEYE,
	[SPECIES_SABLEYE_MEGA] = CRY_SABLEYE_MEGA,
	[SPECIES_MAWILE] = CRY_MAWILE,
	[SPECIES_MAWILE_MEGA] = CRY_MAWILE_MEGA,
	[SPECIES_ARON] = CRY_ARON,
	[SPECIES_LAIRON] = CRY_LAIRON,
	[SPECIES_AGGRON] = CRY_AGGRON,
	[SPECIES_AGGRON_MEGA] = CRY_AGGRON_MEGA,
	[SPECIES_MEDITITE] = CRY_MEDITITE,
	[SPECIES_MEDICHAM] = CRY_MEDICHAM,
	[SPECIES_MEDICHAM_MEGA] = CRY_MEDICHAM_MEGA,
	[SPECIES_ELECTRIKE] = CRY_ELECTRIKE,
	[SPECIES_MANECTRIC] = CRY_MANECTRIC,
	[SPECIES_MANECTRIC_MEGA] = CRY_MANECTRIC_MEGA,
	[SPECIES_PLUSLE] = CRY_PLUSLE,
	[SPECIES_MINUN] = CRY_MINUN,
	[SPECIES_VOLBEAT] = CRY_VOLBEAT,
	[SPECIES_ILLUMISE] = CRY_ILLUMISE,
	[SPECIES_ROSELIA] = CRY_ROSELIA,
	[SPECIES_GULPIN] = CRY_GULPIN,
	[SPECIES_SWALOT] = CRY_SWALOT,
	[SPECIES_CARVANHA] = CRY_CARVANHA,
	[SPECIES_SHARPEDO] = CRY_SHARPEDO,
	[SPECIES_SHARPEDO_MEGA] = CRY_SHARPEDO_MEGA,
	[SPECIES_WAILMER] = CRY_WAILMER,
	[SPECIES_WAILORD] = CRY_WAILORD,
	[SPECIES_NUMEL] = CRY_NUMEL,
	[SPECIES_CAMERUPT] = CRY_CAMERUPT,
	[SPECIES_CAMERUPT_MEGA] = CRY_CAMERUPT_MEGA,
	[SPECIES_TORKOAL] = CRY_TORKOAL,
	[SPECIES_SPOINK] = CRY_SPOINK,
	[SPECIES_GRUMPIG] = CRY_GRUMPIG,
	[SPECIES_SPINDA] = CRY_SPINDA,
	[SPECIES_TRAPINCH] = CRY_TRAPINCH,
	[SPECIES_VIBRAVA] = CRY_VIBRAVA,
	[SPECIES_FLYGON] = CRY_FLYGON,
	[SPECIES_CACNEA] = CRY_CACNEA,
	[SPECIES_CACTURNE] = CRY_CACTURNE,
	[SPECIES_SWABLU] = CRY_SWABLU,
	[SPECIES_ALTARIA] = CRY_ALTARIA,
	[SPECIES_ALTARIA_MEGA] = CRY_ALTARIA_MEGA,
	[SPECIES_ZANGOOSE] = CRY_ZANGOOSE,
	[SPECIES_SEVIPER] = CRY_SEVIPER,
	[SPECIES_LUNATONE] = CRY_LUNATONE,
	[SPECIES_SOLROCK] = CRY_SOLROCK,
	[SPECIES_BARBOACH] = CRY_BARBOACH,
	[SPECIES_WHISCASH] = CRY_WHISCASH,
	[SPECIES_CORPHISH] = CRY_CORPHISH,
	[SPECIES_CRAWDAUNT] = CRY_CRAWDAUNT,
	[SPECIES_BALTOY] = CRY_BALTOY,
	[SPECIES_CLAYDOL] = CRY_CLAYDOL,
	[SPECIES_LILEEP] = CRY_LILEEP,
	[SPECIES_CRADILY] = CRY_CRADILY,
	[SPECIES_ANORITH] = CRY_ANORITH,
	[SPECIES_ARMALDO] = CRY_ARMALDO,
	[SPECIES_FEEBAS] = CRY_FEEBAS,
	[SPECIES_MILOTIC] = CRY_MILOTIC,
	[SPECIES_CASTFORM_NORMAL] = CRY_CASTFORM,
	[SPECIES_CASTFORM_SUNNY] = CRY_CASTFORM,
	[SPECIES_CASTFORM_RAINY] = CRY_CASTFORM,
	[SPECIES_CASTFORM_SNOWY] = CRY_CASTFORM,
	[SPECIES_KECLEON] = CRY_KECLEON,
	[SPECIES_SHUPPET] = CRY_SHUPPET,
	[SPECIES_BANETTE] = CRY_BANETTE,
	[SPECIES_BANETTE_MEGA] = CRY_BANETTE_MEGA,
	[SPECIES_DUSKULL] = CRY_DUSKULL,
	[SPECIES_DUSCLOPS] = CRY_DUSCLOPS,
	[SPECIES_TROPIUS] = CRY_TROPIUS,
	[SPECIES_CHIMECHO] = CRY_CHIMECHO,
	[SPECIES_ABSOL] = CRY_ABSOL,
	[SPECIES_ABSOL_MEGA] = CRY_ABSOL_MEGA,
	[SPECIES_WYNAUT] = CRY_WYNAUT,
	[SPECIES_SNORUNT] = CRY_SNORUNT,
	[SPECIES_GLALIE] = CRY_GLALIE,
	[SPECIES_GLALIE_MEGA] = CRY_GLALIE_MEGA,
	[SPECIES_SPHEAL] = CRY_SPHEAL,
	[SPECIES_SEALEO] = CRY_SEALEO,
	[SPECIES_WALREIN] = CRY_WALREIN,
	[SPECIES_CLAMPERL] = CRY_CLAMPERL,
	[SPECIES_HUNTAIL] = CRY_HUNTAIL,
	[SPECIES_GOREBYSS] = CRY_GOREBYSS,
	[SPECIES_RELICANTH] = CRY_RELICANTH,
	[SPECIES_LUVDISC] = CRY_LUVDISC,
	[SPECIES_BAGON] = CRY_BAGON,
	[SPECIES_SHELGON] = CRY_SHELGON,
	[SPECIES_SALAMENCE] = CRY_SALAMENCE,
	[SPECIES_SALAMENCE_MEGA] = CRY_SALAMENCE_MEGA,
	[SPECIES_BELDUM] = CRY_BELDUM,
	[SPECIES_METANG] = CRY_METANG,
	[SPECIES_METAGROSS] = CRY_METAGROSS,
	[SPECIES_METAGROSS_MEGA] = CRY_METAGROSS_MEGA,
	[SPECIES_REGIROCK] = CRY_REGIROCK,
	[SPECIES_REGICE] = CRY_REGICE,
	[SPECIES_REGISTEEL] = CRY_REGISTEEL,
	[SPECIES_LATIAS] = CRY_LATIAS,
	[SPECIES_LATIAS_MEGA] = CRY_LATIAS_MEGA,
	[SPECIES_LATIOS] = CRY_LATIOS,
	[SPECIES_LATIOS_MEGA] = CRY_LATIOS_MEGA,
	[SPECIES_KYOGRE] = CRY_KYOGRE,
	[SPECIES_KYOGRE_PRIMAL] = CRY_KYOGRE_PRIMAL,
	[SPECIES_GROUDON] = CRY_GROUDON,
	[SPECIES_GROUDON_PRIMAL] = CRY_GROUDON_PRIMAL,
	[SPECIES_RAYQUAZA] = CRY_RAYQUAZA,
	[SPECIES_RAYQUAZA_MEGA] = CRY_RAYQUAZA_MEGA,
	[SPECIES_JIRACHI] = CRY_JIRACHI,
	[SPECIES_DEOXYS_NORMAL] = CRY_DEOXYS,
	[SPECIES_DEOXYS_ATTACK] = CRY_DEOXYS,
	[SPECIES_DEOXYS_DEFENSE] = CRY_DEOXYS,
	[SPECIES_DEOXYS_SPEED] = CRY_DEOXYS,
	[SPECIES_TURTWIG] = CRY_TURTWIG,
	[SPECIES_GROTLE] = CRY_GROTLE,
	[SPECIES_TORTERRA] = CRY_TORTERRA,
	[SPECIES_CHIMCHAR] = CRY_CHIMCHAR,
	[SPECIES_MONFERNO] = CRY_MONFERNO,
	[SPECIES_INFERNAPE] = CRY_INFERNAPE,
	[SPECIES_PIPLUP] = CRY_PIPLUP,
	[SPECIES_PRINPLUP] = CRY_PRINPLUP,
	[SPECIES_EMPOLEON] = CRY_EMPOLEON,
	[SPECIES_STARLY] = CRY_STARLY,
	[SPECIES_STARAVIA] = CRY_STARAVIA,
	[SPECIES_STARAPTOR] = CRY_STARAPTOR,
	[SPECIES_BIDOOF] = CRY_BIDOOF,
	[SPECIES_BIBAREL] = CRY_BIBAREL,
	[SPECIES_KRICKETOT] = CRY_KRICKETOT,
	[SPECIES_KRICKETUNE] = CRY_KRICKETUNE,
	[SPECIES_SHINX] = CRY_SHINX,
	[SPECIES_LUXIO] = CRY_LUXIO,
	[SPECIES_LUXRAY] = CRY_LUXRAY,
	[SPECIES_BUDEW] = CRY_BUDEW,
	[SPECIES_ROSERADE] = CRY_ROSERADE,
	[SPECIES_CRANIDOS] = CRY_CRANIDOS,
	[SPECIES_RAMPARDOS] = CRY_RAMPARDOS,
	[SPECIES_SHIELDON] = CRY_SHIELDON,
	[SPECIES_BASTIODON] = CRY_BASTIODON,
	[SPECIES_BURMY_PLANT_CLOAK] = CRY_BURMY,
	[SPECIES_BURMY_SANDY_CLOAK] = CRY_BURMY,
	[SPECIES_BURMY_TRASH_CLOAK] = CRY_BURMY,
	[SPECIES_WORMADAM_PLANT_CLOAK] = CRY_WORMADAM,
	[SPECIES_WORMADAM_SANDY_CLOAK] = CRY_WORMADAM,
	[SPECIES_WORMADAM_TRASH_CLOAK] = CRY_WORMADAM,
	[SPECIES_MOTHIM] = CRY_MOTHIM,
	[SPECIES_COMBEE] = CRY_COMBEE,
	[SPECIES_VESPIQUEN] = CRY_VESPIQUEN,
	[SPECIES_PACHIRISU] = CRY_PACHIRISU,
	[SPECIES_BUIZEL] = CRY_BUIZEL,
	[SPECIES_FLOATZEL] = CRY_FLOATZEL,
	[SPECIES_CHERUBI] = CRY_CHERUBI,
	[SPECIES_CHERRIM_OVERCAST] = CRY_CHERRIM,
	[SPECIES_CHERRIM_SUNSHINE] = CRY_CHERRIM,
	[SPECIES_SHELLOS_WEST_SEA] = CRY_SHELLOS,
	[SPECIES_SHELLOS_EAST_SEA] = CRY_SHELLOS,
	[SPECIES_GASTRODON_WEST_SEA] = CRY_GASTRODON,
	[SPECIES_GASTRODON_EAST_SEA] = CRY_GASTRODON,
	[SPECIES_AMBIPOM] = CRY_AMBIPOM,
	[SPECIES_DRIFLOON] = CRY_DRIFLOON,
	[SPECIES_DRIFBLIM] = CRY_DRIFBLIM,
	[SPECIES_BUNEARY] = CRY_BUNEARY,
	[SPECIES_LOPUNNY] = CRY_LOPUNNY,
	[SPECIES_LOPUNNY_MEGA] = CRY_LOPUNNY_MEGA,
	[SPECIES_MISMAGIUS] = CRY_MISMAGIUS,
	[SPECIES_HONCHKROW] = CRY_HONCHKROW,
	[SPECIES_GLAMEOW] = CRY_GLAMEOW,
	[SPECIES_PURUGLY] = CRY_PURUGLY,
	[SPECIES_CHINGLING] = CRY_CHINGLING,
	[SPECIES_STUNKY] = CRY_STUNKY,
	[SPECIES_SKUNTANK] = CRY_SKUNTANK,
	[SPECIES_BRONZOR] = CRY_BRONZOR,
	[SPECIES_BRONZONG] = CRY_BRONZONG,
	[SPECIES_BONSLY] = CRY_BONSLY,
	[SPECIES_MIME_JR] = CRY_MIME_JR,
	[SPECIES_HAPPINY] = CRY_HAPPINY,
	[SPECIES_CHATOT] = CRY_CHATOT,
	[SPECIES_SPIRITOMB] = CRY_SPIRITOMB,
	[SPECIES_GIBLE] = CRY_GIBLE,
	[SPECIES_GABITE] = CRY_GABITE,
	[SPECIES_GARCHOMP] = CRY_GARCHOMP,
	[SPECIES_GARCHOMP_MEGA] = CRY_GARCHOMP_MEGA,
	[SPECIES_MUNCHLAX] = CRY_MUNCHLAX,
	[SPECIES_RIOLU] = CRY_RIOLU,
	[SPECIES_LUCARIO] = CRY_LUCARIO,
	[SPECIES_LUCARIO_MEGA] = CRY_LUCARIO_MEGA,
	[SPECIES_HIPPOPOTAS] = CRY_HIPPOPOTAS,
	[SPECIES_HIPPOWDON] = CRY_HIPPOWDON,
	[SPECIES_SKORUPI] = CRY_SKORUPI,
	[SPECIES_DRAPION] = CRY_DRAPION,
	[SPECIES_CROAGUNK] = CRY_CROAGUNK,
	[SPECIES_TOXICROAK] = CRY_TOXICROAK,
	[SPECIES_CARNIVINE] = CRY_CARNIVINE,
	[SPECIES_FINNEON] = CRY_FINNEON,
	[SPECIES_LUMINEON] = CRY_LUMINEON,
	[SPECIES_MANTYKE] = CRY_MANTYKE,
	[SPECIES_SNOVER] = CRY_SNOVER,
	[SPECIES_ABOMASNOW] = CRY_ABOMASNOW,
	[SPECIES_ABOMASNOW_MEGA] = CRY_ABOMASNOW_MEGA,
	[SPECIES_WEAVILE] = CRY_WEAVILE,
	[SPECIES_MAGNEZONE] = CRY_MAGNEZONE,
	[SPECIES_LICKILICKY] = CRY_LICKILICKY,
	[SPECIES_RHYPERIOR] = CRY_RHYPERIOR,
	[SPECIES_TANGROWTH] = CRY_TANGROWTH,
	[SPECIES_ELECTIVIRE] = CRY_ELECTIVIRE,
	[SPECIES_MAGMORTAR] = CRY_MAGMORTAR,
	[SPECIES_TOGEKISS] = CRY_TOGEKISS,
	[SPECIES_YANMEGA] = CRY_YANMEGA,
	[SPECIES_LEAFEON] = CRY_LEAFEON,
	[SPECIES_GLACEON] = CRY_GLACEON,
	[SPECIES_GLISCOR] = CRY_GLISCOR,
	[SPECIES_MAMOSWINE] = CRY_MAMOSWINE,
	[SPECIES_PORYGON_Z] = CRY_PORYGON_Z,
	[SPECIES_GALLADE] = CRY_GALLADE,
	[SPECIES_GALLADE_MEGA] = CRY_GALLADE_MEGA,
	[SPECIES_PROBOPASS] = CRY_PROBOPASS,
	[SPECIES_DUSKNOIR] = CRY_DUSKNOIR,
	[SPECIES_FROSLASS] = CRY_FROSLASS,
	[SPECIES_ROTOM] = CRY_ROTOM,
	[SPECIES_ROTOM_HEAT] = CRY_ROTOM,
	[SPECIES_ROTOM_WASH] = CRY_ROTOM,
	[SPECIES_ROTOM_FROST] = CRY_ROTOM,
	[SPECIES_ROTOM_FAN] = CRY_ROTOM,
	[SPECIES_ROTOM_MOW] = CRY_ROTOM,
	[SPECIES_UXIE] = CRY_UXIE,
	[SPECIES_MESPRIT] = CRY_MESPRIT,
	[SPECIES_AZELF] = CRY_AZELF,
	[SPECIES_DIALGA] = CRY_DIALGA,
	[SPECIES_PALKIA] = CRY_PALKIA,
	[SPECIES_HEATRAN] = CRY_HEATRAN,
	[SPECIES_REGIGIGAS] = CRY_REGIGIGAS,
	[SPECIES_GIRATINA_ALTERED] = CRY_GIRATINA,
	[SPECIES_GIRATINA_ORIGIN] = CRY_GIRATINA,
	[SPECIES_CRESSELIA] = CRY_CRESSELIA,
	[SPECIES_PHIONE] = CRY_PHIONE,
	[SPECIES_MANAPHY] = CRY_MANAPHY,
	[SPECIES_DARKRAI] = CRY_DARKRAI,
	[SPECIES_SHAYMIN_LAND] = CRY_SHAYMIN_LAND,
	[SPECIES_SHAYMIN_SKY] = CRY_SHAYMIN_SKY,
	[SPECIES_ARCEUS_NORMAL] = CRY_ARCEUS,
	[SPECIES_ARCEUS_FIRE] = CRY_ARCEUS,
	[SPECIES_ARCEUS_WATER] = CRY_ARCEUS,
	[SPECIES_ARCEUS_ELECTRIC] = CRY_ARCEUS,
	[SPECIES_ARCEUS_GRASS] = CRY_ARCEUS,
	[SPECIES_ARCEUS_ICE] = CRY_ARCEUS,
	[SPECIES_ARCEUS_FIGHTING] = CRY_ARCEUS,
	[SPECIES_ARCEUS_POISON] = CRY_ARCEUS,
	[SPECIES_ARCEUS_GROUND] = CRY_ARCEUS,
	[SPECIES_ARCEUS_FLYING] = CRY_ARCEUS,
	[SPECIES_ARCEUS_PSYCHIC] = CRY_ARCEUS,
	[SPECIES_ARCEUS_BUG] = CRY_ARCEUS,
	[SPECIES_ARCEUS_ROCK] = CRY_ARCEUS,
	[SPECIES_ARCEUS_GHOST] = CRY_ARCEUS,
	[SPECIES_ARCEUS_DRAGON] = CRY_ARCEUS,
	[SPECIES_ARCEUS_DARK] = CRY_ARCEUS,
	[SPECIES_ARCEUS_STEEL] = CRY_ARCEUS,
	[SPECIES_ARCEUS_FAIRY] = CRY_ARCEUS,
	[SPECIES_VICTINI] = CRY_VICTINI,
	[SPECIES_SNIVY] = CRY_SNIVY,
	[SPECIES_SERVINE] = CRY_SERVINE,
	[SPECIES_SERPERIOR] = CRY_SERPERIOR,
	[SPECIES_TEPIG] = CRY_TEPIG,
	[SPECIES_PIGNITE] = CRY_PIGNITE,
	[SPECIES_EMBOAR] = CRY_EMBOAR,
	[SPECIES_OSHAWOTT] = CRY_OSHAWOTT,
	[SPECIES_DEWOTT] = CRY_DEWOTT,
	[SPECIES_SAMUROTT] = CRY_SAMUROTT,
	[SPECIES_PATRAT] = CRY_PATRAT,
	[SPECIES_WATCHOG] = CRY_WATCHOG,
	[SPECIES_LILLIPUP] = CRY_LILLIPUP,
	[SPECIES_HERDIER] = CRY_HERDIER,
	[SPECIES_STOUTLAND] = CRY_STOUTLAND,
	[SPECIES_PURRLOIN] = CRY_PURRLOIN,
	[SPECIES_LIEPARD] = CRY_LIEPARD,
	[SPECIES_PANSAGE] = CRY_PANSAGE,
	[SPECIES_SIMISAGE] = CRY_SIMISAGE,
	[SPECIES_PANSEAR] = CRY_PANSEAR,
	[SPECIES_SIMISEAR] = CRY_SIMISEAR,
	[SPECIES_PANPOUR] = CRY_PANPOUR,
	[SPECIES_SIMIPOUR] = CRY_SIMIPOUR,
	[SPECIES_MUNNA] = CRY_MUNNA,
	[SPECIES_MUSHARNA] = CRY_MUSHARNA,
	[SPECIES_PIDOVE] = CRY_PIDOVE,
	[SPECIES_TRANQUILL] = CRY_TRANQUILL,
	[SPECIES_UNFEZANT] = CRY_UNFEZANT,
	[SPECIES_BLITZLE] = CRY_BLITZLE,
	[SPECIES_ZEBSTRIKA] = CRY_ZEBSTRIKA,
	[SPECIES_ROGGENROLA] = CRY_ROGGENROLA,
	[SPECIES_BOLDORE] = CRY_BOLDORE,
	[SPECIES_GIGALITH] = CRY_GIGALITH,
	[SPECIES_WOOBAT] = CRY_WOOBAT,
	[SPECIES_SWOOBAT] = CRY_SWOOBAT,
	[SPECIES_DRILBUR] = CRY_DRILBUR,
	[SPECIES_EXCADRILL] = CRY_EXCADRILL,
	[SPECIES_AUDINO] = CRY_AUDINO,
	[SPECIES_AUDINO_MEGA] = CRY_AUDINO_MEGA,
	[SPECIES_TIMBURR] = CRY_TIMBURR,
	[SPECIES_GURDURR] = CRY_GURDURR,
	[SPECIES_CONKELDURR] = CRY_CONKELDURR,
	[SPECIES_TYMPOLE] = CRY_TYMPOLE,
	[SPECIES_PALPITOAD] = CRY_PALPITOAD,
	[SPECIES_SEISMITOAD] = CRY_SEISMITOAD,
	[SPECIES_THROH] = CRY_THROH,
	[SPECIES_SAWK] = CRY_SAWK,
	[SPECIES_SEWADDLE] = CRY_SEWADDLE,
	[SPECIES_SWADLOON] = CRY_SWADLOON,
	[SPECIES_LEAVANNY] = CRY_LEAVANNY,
	[SPECIES_VENIPEDE] = CRY_VENIPEDE,
	[SPECIES_WHIRLIPEDE] = CRY_WHIRLIPEDE,
	[SPECIES_SCOLIPEDE] = CRY_SCOLIPEDE,
	[SPECIES_COTTONEE] = CRY_COTTONEE,
	[SPECIES_WHIMSICOTT] = CRY_WHIMSICOTT,
	[SPECIES_PETILIL] = CRY_PETILIL,
	[SPECIES_LILLIGANT] = CRY_LILLIGANT,
	[SPECIES_BASCULIN_RED_STRIPED] = CRY_BASCULIN,
	[SPECIES_BASCULIN_BLUE_STRIPED] = CRY_BASCULIN,
	[SPECIES_SANDILE] = CRY_SANDILE,
	[SPECIES_KROKOROK] = CRY_KROKOROK,
	[SPECIES_KROOKODILE] = CRY_KROOKODILE,
	[SPECIES_DARUMAKA] = CRY_DARUMAKA,
	[SPECIES_DARMANITAN_STANDARD_MODE] = CRY_DARMANITAN,
	[SPECIES_DARMANITAN_ZEN_MODE] = CRY_DARMANITAN,
	[SPECIES_MARACTUS] = CRY_MARACTUS,
	[SPECIES_DWEBBLE] = CRY_DWEBBLE,
	[SPECIES_CRUSTLE] = CRY_CRUSTLE,
	[SPECIES_SCRAGGY] = CRY_SCRAGGY,
	[SPECIES_SCRAFTY] = CRY_SCRAFTY,
	[SPECIES_SIGILYPH] = CRY_SIGILYPH,
	[SPECIES_YAMASK] = CRY_YAMASK,
	[SPECIES_COFAGRIGUS] = CRY_COFAGRIGUS,
	[SPECIES_TIRTOUGA] = CRY_TIRTOUGA,
	[SPECIES_CARRACOSTA] = CRY_CARRACOSTA,
	[SPECIES_ARCHEN] = CRY_ARCHEN,
	[SPECIES_ARCHEOPS] = CRY_ARCHEOPS,
	[SPECIES_TRUBBISH] = CRY_TRUBBISH,
	[SPECIES_GARBODOR] = CRY_GARBODOR,
	[SPECIES_ZORUA] = CRY_ZORUA,
	[SPECIES_ZOROARK] = CRY_ZOROARK,
	[SPECIES_MINCCINO] = CRY_MINCCINO,
	[SPECIES_CINCCINO] = CRY_CINCCINO,
	[SPECIES_GOTHITA] = CRY_GOTHITA,
	[SPECIES_GOTHORITA] = CRY_GOTHORITA,
	[SPECIES_GOTHITELLE] = CRY_GOTHITELLE,
	[SPECIES_SOLOSIS] = CRY_SOLOSIS,
	[SPECIES_DUOSION] = CRY_DUOSION,
	[SPECIES_REUNICLUS] = CRY_REUNICLUS,
	[SPECIES_DUCKLETT] = CRY_DUCKLETT,
	[SPECIES_SWANNA] = CRY_SWANNA,
	[SPECIES_VANILLITE] = CRY_VANILLITE,
	[SPECIES_VANILLISH] = CRY_VANILLISH,
	[SPECIES_VANILLUXE] = CRY_VANILLUXE,
	[SPECIES_DEERLING_SPRING] = CRY_DEERLING,
	[SPECIES_SAWSBUCK_SPRING] = CRY_SAWSBUCK,
	[SPECIES_DEERLING_SUMMER] = CRY_DEERLING,
	[SPECIES_SAWSBUCK_SUMMER] = CRY_SAWSBUCK,
	[SPECIES_DEERLING_AUTUMN] = CRY_DEERLING,
	[SPECIES_SAWSBUCK_AUTUMN] = CRY_SAWSBUCK,
	[SPECIES_DEERLING_WINTER] = CRY_DEERLING,
	[SPECIES_SAWSBUCK_WINTER] = CRY_SAWSBUCK,
	[SPECIES_EMOLGA] = CRY_EMOLGA,
	[SPECIES_KARRABLAST] = CRY_KARRABLAST,
	[SPECIES_ESCAVALIER] = CRY_ESCAVALIER,
	[SPECIES_FOONGUS] = CRY_FOONGUS,
	[SPECIES_AMOONGUSS] = CRY_AMOONGUSS,
	[SPECIES_FRILLISH] = CRY_FRILLISH,
	[SPECIES_JELLICENT] = CRY_JELLICENT,
	[SPECIES_ALOMOMOLA] = CRY_ALOMOMOLA,
	[SPECIES_JOLTIK] = CRY_JOLTIK,
	[SPECIES_GALVANTULA] = CRY_GALVANTULA,
	[SPECIES_FERROSEED] = CRY_FERROSEED,
	[SPECIES_FERROTHORN] = CRY_FERROTHORN,
	[SPECIES_KLINK] = CRY_KLINK,
	[SPECIES_KLANG] = CRY_KLANG,
	[SPECIES_KLINKLANG] = CRY_KLINKLANG,
	[SPECIES_TYNAMO] = CRY_TYNAMO,
	[SPECIES_EELEKTRIK] = CRY_EELEKTRIK,
	[SPECIES_EELEKTROSS] = CRY_EELEKTROSS,
	[SPECIES_ELGYEM] = CRY_ELGYEM,
	[SPECIES_BEHEEYEM] = CRY_BEHEEYEM,
	[SPECIES_LITWICK] = CRY_LITWICK,
	[SPECIES_LAMPENT] = CRY_LAMPENT,
	[SPECIES_CHANDELURE] = CRY_CHANDELURE,
	[SPECIES_AXEW] = CRY_AXEW,
	[SPECIES_FRAXURE] = CRY_FRAXURE,
	[SPECIES_HAXORUS] = CRY_HAXORUS,
	[SPECIES_CUBCHOO] = CRY_CUBCHOO,
	[SPECIES_BEARTIC] = CRY_BEARTIC,
	[SPECIES_CRYOGONAL] = CRY_CRYOGONAL,
	[SPECIES_SHELMET] = CRY_SHELMET,
	[SPECIES_ACCELGOR] = CRY_ACCELGOR,
	[SPECIES_STUNFISK] = CRY_STUNFISK,
	[SPECIES_MIENFOO] = CRY_MIENFOO,
	[SPECIES_MIENSHAO] = CRY_MIENSHAO,
	[SPECIES_DRUDDIGON] = CRY_DRUDDIGON,
	[SPECIES_GOLETT] = CRY_GOLETT,
	[SPECIES_GOLURK] = CRY_GOLURK,
	[SPECIES_PAWNIARD] = CRY_PAWNIARD,
	[SPECIES_BISHARP] = CRY_BISHARP,
	[SPECIES_BOUFFALANT] = CRY_BOUFFALANT,
	[SPECIES_RUFFLET] = CRY_RUFFLET,
	[SPECIES_BRAVIARY] = CRY_BRAVIARY,
	[SPECIES_VULLABY] = CRY_VULLABY,
	[SPECIES_MANDIBUZZ] = CRY_MANDIBUZZ,
	[SPECIES_HEATMOR] = CRY_HEATMOR,
	[SPECIES_DURANT] = CRY_DURANT,
	[SPECIES_DEINO] = CRY_DEINO,
	[SPECIES_ZWEILOUS] = CRY_ZWEILOUS,
	[SPECIES_HYDREIGON] = CRY_HYDREIGON,
	[SPECIES_LARVESTA] = CRY_LARVESTA,
	[SPECIES_VOLCARONA] = CRY_VOLCARONA,
	[SPECIES_COBALION] = CRY_COBALION,
	[SPECIES_TERRAKION] = CRY_TERRAKION,
	[SPECIES_VIRIZION] = CRY_VIRIZION,
	[SPECIES_TORNADUS_INCARNATE] = CRY_TORNADUS_INCARNATE,
	[SPECIES_TORNADUS_THERIAN] = CRY_TORNADUS_THERIAN,
	[SPECIES_THUNDURUS_INCARNATE] = CRY_THUNDURUS_INCARNATE,
	[SPECIES_THUNDURUS_THERIAN] = CRY_THUNDURUS_THERIAN,
	[SPECIES_RESHIRAM] = CRY_RESHIRAM,
	[SPECIES_ZEKROM] = CRY_ZEKROM,
	[SPECIES_LANDORUS_INCARNATE] = CRY_LANDORUS_INCARNATE,
	[SPECIES_LANDORUS_THERIAN] = CRY_LANDORUS_THERIAN,
	[SPECIES_KYUREM] = CRY_KYUREM,
	[SPECIES_KYUREM_WHITE] = CRY_KYUREM_WHITE,
	[SPECIES_KYUREM_BLACK] = CRY_KYUREM_BLACK,
	[SPECIES_KELDEO_ORDINARY] = CRY_KELDEO,
	[SPECIES_KELDEO_RESOLUTE] = CRY_KELDEO,
	[SPECIES_MELOETTA_ARIA] = CRY_MELOETTA,
	[SPECIES_MELOETTA_PIROUETTE] = CRY_MELOETTA,
	[SPECIES_GENESECT] = CRY_GENESECT,
	[SPECIES_GENESECT_DOUSE_DRIVE] = CRY_GENESECT,
	[SPECIES_GENESECT_SHOCK_DRIVE] = CRY_GENESECT,
	[SPECIES_GENESECT_BURN_DRIVE] = CRY_GENESECT,
	[SPECIES_GENESECT_CHILL_DRIVE] = CRY_GENESECT,
	[SPECIES_CHESPIN] = CRY_CHESPIN,
	[SPECIES_QUILLADIN] = CRY_QUILLADIN,
	[SPECIES_CHESNAUGHT] = CRY_CHESNAUGHT,
	[SPECIES_FENNEKIN] = CRY_FENNEKIN,
	[SPECIES_BRAIXEN] = CRY_BRAIXEN,
	[SPECIES_DELPHOX] = CRY_DELPHOX,
	[SPECIES_FROAKIE] = CRY_FROAKIE,
	[SPECIES_FROGADIER] = CRY_FROGADIER,
	[SPECIES_GRENINJA] = CRY_GRENINJA,
	[SPECIES_BUNNELBY] = CRY_BUNNELBY,
	[SPECIES_DIGGERSBY] = CRY_DIGGERSBY,
	[SPECIES_FLETCHLING] = CRY_FLETCHLING,
	[SPECIES_FLETCHINDER] = CRY_FLETCHINDER,
	[SPECIES_TALONFLAME] = CRY_TALONFLAME,
	[SPECIES_SCATTERBUG] = CRY_SCATTERBUG,
	[SPECIES_SPEWPA] = CRY_SPEWPA,
	[SPECIES_VIVILLON_ICY_SNOW] = CRY_VIVILLON,
	[SPECIES_VIVILLON_POLAR] = CRY_VIVILLON,
	[SPECIES_VIVILLON_TUNDRA] = CRY_VIVILLON,
	[SPECIES_VIVILLON_CONTINENTAL] = CRY_VIVILLON,
	[SPECIES_VIVILLON_GARDEN] = CRY_VIVILLON,
	[SPECIES_VIVILLON_ELEGANT] = CRY_VIVILLON,
	[SPECIES_VIVILLON_MEADOW] = CRY_VIVILLON,
	[SPECIES_VIVILLON_MODERN] = CRY_VIVILLON,
	[SPECIES_VIVILLON_MARINE] = CRY_VIVILLON,
	[SPECIES_VIVILLON_ARCHIPELAGO] = CRY_VIVILLON,
	[SPECIES_VIVILLON_HIGH_PLAINS] = CRY_VIVILLON,
	[SPECIES_VIVILLON_SANDSTORM] = CRY_VIVILLON,
	[SPECIES_VIVILLON_RIVER] = CRY_VIVILLON,
	[SPECIES_VIVILLON_MONSOON] = CRY_VIVILLON,
	[SPECIES_VIVILLON_SAVANNA] = CRY_VIVILLON,
	[SPECIES_VIVILLON_SUN] = CRY_VIVILLON,
	[SPECIES_VIVILLON_OCEAN] = CRY_VIVILLON,
	[SPECIES_VIVILLON_JUNGLE] = CRY_VIVILLON,
	[SPECIES_VIVILLON_FANCY] = CRY_VIVILLON,
	[SPECIES_VIVILLON_POKE_BALL] = CRY_VIVILLON,
	[SPECIES_LITLEO] = CRY_LITLEO,
	[SPECIES_PYROAR] = CRY_PYROAR,
	[SPECIES_FLABEBE_RED_FLOWER] = CRY_FLABEBE,
	[SPECIES_FLABEBE_YELLOW_FLOWER] = CRY_FLABEBE,
	[SPECIES_FLABEBE_ORANGE_FLOWER] = CRY_FLABEBE,
	[SPECIES_FLABEBE_BLUE_FLOWER] = CRY_FLABEBE,
	[SPECIES_FLABEBE_WHITE_FLOWER] = CRY_FLABEBE,
	[SPECIES_FLOETTE_RED_FLOWER] = CRY_FLOETTE,
	[SPECIES_FLOETTE_YELLOW_FLOWER] = CRY_FLOETTE,
	[SPECIES_FLOETTE_ORANGE_FLOWER] = CRY_FLOETTE,
	[SPECIES_FLOETTE_BLUE_FLOWER] = CRY_FLOETTE,
	[SPECIES_FLOETTE_WHITE_FLOWER] = CRY_FLOETTE,
	[SPECIES_FLOETTE_ETERNAL_FLOWER] = CRY_FLOETTE_ETERNAL_FLOWER,
	[SPECIES_FLORGES_RED_FLOWER] = CRY_FLORGES,
	[SPECIES_FLORGES_YELLOW_FLOWER] = CRY_FLORGES,
	[SPECIES_FLORGES_ORANGE_FLOWER] = CRY_FLORGES,
	[SPECIES_FLORGES_BLUE_FLOWER] = CRY_FLORGES,
	[SPECIES_FLORGES_WHITE_FLOWER] = CRY_FLORGES,
	[SPECIES_SKIDDO] = CRY_SKIDDO,
	[SPECIES_GOGOAT] = CRY_GOGOAT,
	[SPECIES_PANCHAM] = CRY_PANCHAM,
	[SPECIES_PANGORO] = CRY_PANGORO,
	[SPECIES_FURFROU_NATURAL] = CRY_FURFROU,
	[SPECIES_FURFROU_HEART_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_STAR_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_DIAMOND_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_DEBUTANTE_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_MATRON_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_DANDY_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_LA_REINE_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_KABUKI_TRIM] = CRY_FURFROU,
	[SPECIES_FURFROU_PHARAOH_TRIM] = CRY_FURFROU,
	[SPECIES_ESPURR] = CRY_ESPURR,
	[SPECIES_MEOWSTIC_MALE] = CRY_MEOWSTIC,
	[SPECIES_MEOWSTIC_FEMALE] = CRY_MEOWSTIC,
	[SPECIES_HONEDGE] = CRY_HONEDGE,
	[SPECIES_DOUBLADE] = CRY_DOUBLADE,
	[SPECIES_AEGISLASH_SHIELD] = CRY_AEGISLASH,
	[SPECIES_AEGISLASH_BLADE] = CRY_AEGISLASH,
	[SPECIES_SPRITZEE] = CRY_SPRITZEE,
	[SPECIES_AROMATISSE] = CRY_AROMATISSE,
	[SPECIES_SWIRLIX] = CRY_SWIRLIX,
	[SPECIES_SLURPUFF] = CRY_SLURPUFF,
	[SPECIES_INKAY] = CRY_INKAY,
	[SPECIES_MALAMAR] = CRY_MALAMAR,
	[SPECIES_BINACLE] = CRY_BINACLE,
	[SPECIES_BARBARACLE] = CRY_BARBARACLE,
	[SPECIES_SKRELP] = CRY_SKRELP,
	[SPECIES_DRAGALGE] = CRY_DRAGALGE,
	[SPECIES_CLAUNCHER] = CRY_CLAUNCHER,
	[SPECIES_CLAWITZER] = CRY_CLAWITZER,
	[SPECIES_HELIOPTILE] = CRY_HELIOPTILE,
	[SPECIES_HELIOLISK] = CRY_HELIOLISK,
	[SPECIES_TYRUNT] = CRY_TYRUNT,
	[SPECIES_TYRANTRUM] = CRY_TYRANTRUM,
	[SPECIES_AMAURA] = CRY_AMAURA,
	[SPECIES_AURORUS] = CRY_AURORUS,
	[SPECIES_SYLVEON] = CRY_SYLVEON,
	[SPECIES_HAWLUCHA] = CRY_HAWLUCHA,
	[SPECIES_DEDENNE] = CRY_DEDENNE,
	[SPECIES_CARBINK] = CRY_CARBINK,
	[SPECIES_GOOMY] = CRY_GOOMY,
	[SPECIES_SLIGGOO] = CRY_SLIGGOO,
	[SPECIES_GOODRA] = CRY_GOODRA,
	[SPECIES_KLEFKI] = CRY_KLEFKI,
	[SPECIES_PHANTUMP] = CRY_PHANTUMP,
	[SPECIES_TREVENANT] = CRY_TREVENANT,
	[SPECIES_PUMPKABOO_AVERAGE] = CRY_PUMPKABOO,
	[SPECIES_PUMPKABOO_SMALL] = CRY_PUMPKABOO,
	[SPECIES_PUMPKABOO_LARGE] = CRY_PUMPKABOO,
	[SPECIES_PUMPKABOO_SUPER] = CRY_PUMPKABOO_SUPER,
	[SPECIES_GOURGEIST_AVERAGE] = CRY_GOURGEIST,
	[SPECIES_GOURGEIST_SMALL] = CRY_GOURGEIST,
	[SPECIES_GOURGEIST_LARGE] = CRY_GOURGEIST,
	[SPECIES_GOURGEIST_SUPER] = CRY_GOURGEIST_SUPER,
	[SPECIES_BERGMITE] = CRY_BERGMITE,
	[SPECIES_AVALUGG] = CRY_AVALUGG,
	[SPECIES_NOIBAT] = CRY_NOIBAT,
	[SPECIES_NOIVERN] = CRY_NOIVERN,
	[SPECIES_XERNEAS_NEUTRAL] = CRY_XERNEAS,
	[SPECIES_XERNEAS_ACTIVE] = CRY_XERNEAS,
	[SPECIES_YVELTAL] = CRY_YVELTAL,
	[SPECIES_ZYGARDE] = CRY_ZYGARDE,
	[SPECIES_DIANCIE] = CRY_DIANCIE,
	[SPECIES_DIANCIE_MEGA] = CRY_DIANCIE_MEGA,
	[SPECIES_HOOPA_CONFINED] = CRY_HOOPA_CONFINED,
	[SPECIES_HOOPA_UNBOUND] = CRY_HOOPA_UNBOUND,
	[SPECIES_VOLCANION] = CRY_VOLCANION,
	[SPECIES_EGG] = CRY_COUNT,
};
