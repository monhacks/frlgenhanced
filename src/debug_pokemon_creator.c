// Port of Watanabe Debug Menu -> Create Pokémon Menu
/* TODO Known Bugs and Todo List:
    * Nickname length can't be changed
Things that are not implemented yet, or bugs that are caused by unimplemented features:
    * PP are not recalculated when editing PP Up count or moves.
    * Only one of the sleep and toxic counter should be visible and editable at one time, but only if the status is sleep or toxic respectively. (This does not take the separate indexes for these two values into consideration.)
    * Language, Origin Game, Met Location, Ball, and Nature (the unused separate index) should be drawn with their names next to them.
    * If the Pokérus Strain is 0, the Days indexes should not be accessible.
    * Setting "Egg" from Off to On should also update "Egg2", but setting "Egg2" to Off should NOT update "Egg". Also, setting "Egg" to Off should NOT update "Egg2".
    * Add a "Bad Egg" index as an alternate value for "Present".
    * In edit mode, pressing Select should reset that value; in mode 0, to default; else to that of the mon being edited.
    * If the mon being created would be Shiny, draw a star next to the nickname.
    * Dynamic max values:
        * PP (With max PP for that move including PP Up boosts)
        * Current HP (with max HP)
        * EXP (with EXP at level 100 for that species)
    * Binary and octal display modes
    * Draw the mon's icon next to the species
    * An actual cursor (instead of just highlighting the selected option)
*/
#include "global.h"
#include "battle_main.h"
#include "data.h"
#include "debug.h"
#include "item.h"
#include "list_menu.h"
#include "main.h"
#include "menu.h"
#include "mini_printf.h"
#include "new_menu_helpers.h"
#include "pokemon.h"
#include "pokemon_summary_screen.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "gba/isagbprint.h"
#include "constants/battle.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/region_map_sections.h"
#include "constants/songs.h"

#if DEBUGGING
static void DebugPkmnCreator_Init_SetDefaults(void);
static void DebugPkmnCreator_Init_SetDefaults(void);
static void DebugPkmnCreator_Init_SetNewMonData(bool8 setMoves);
static void DebugPkmnCreator_PopulateDataStruct(void);
static void DebugPkmnCreator_Redraw(void);
static void DebugPkmnCreator_EditModeRedraw(u32, u8);
static void DebugPkmnCreator_ProcessInput(u8);
static void DebugPkmnCreator_EditModeProcessInput(u8);
static u8 DebugPkmnCreator_GiveToPlayer(void);

static const u8 Str_Species[] = _("Species");
static const u8 Str_Personality[] = _("PID/Nature/Gender");
static const u8 Str_TrainerID[] = _("TID/SID/OT Gender");
static const u8 Str_SecretID[] = _("SID");
static const u8 Str_OT[] = _("OT Name");
static const u8 Str_Nick[] = _("Nickname");
static const u8 Str_Gender[] = _("Gender");
static const u8 Str_Nature[] = _("Nature");
static const u8 Str_Egg[] = _("Egg");
static const u8 Str_Egg2[] = _("Egg2");
static const u8 Str_HasSpecies[] = _("Present");
static const u8 Str_Language[] = _("Language");
static const u8 Str_Game[] = _("Origin Game");
static const u8 Str_Item[] = _("Held Item");
static const u8 Str_Level[] = _("Level");
static const u8 Str_EXP[] = _("Experience/Level");
static const u8 Str_Ability[] = _("Ability");
static const u8 Str_Friendship[] = _("Friendship");
static const u8 Str_MetLevel[] = _("Met Level");
static const u8 Str_MetLocation[] = _("Met Location");
static const u8 Str_Ball[] = _("Ball");
static const u8 Str_PKrus[] = _("{PK}Rus Id/Dura/Left");
static const u8 Str_HP[] = _("HP");
static const u8 Str_Atk[] = _("Atk");
static const u8 Str_Def[] = _("Def");
static const u8 Str_Spe[] = _("Spe");
static const u8 Str_SpA[] = _("SpA");
static const u8 Str_SpD[] = _("SpD");
static const u8 Str_HP_IV_EV[] = _("HP IV/EV/Now/Max");
static const u8 Str_Atk_IV_EV[] = _("Atk IV/EV/Res");
static const u8 Str_Def_IV_EV[] = _("Def IV/EV/Res");
static const u8 Str_Spe_IV_EV[] = _("Spd IV/EV/Res");
static const u8 Str_SpA_IV_EV[] = _("Sp. Atk IV/EV/Res");
static const u8 Str_SpD_IV_EV[] = _("Sp. Def IV/EV/Res");
static const u8 Str_EV[] = _("EV");
static const u8 Str_IV[] = _("IV");
static const u8 Str_Current[] = _("Current");
static const u8 Str_Status[] = _("Status");
static const u8 Str_Cool[] = _("Cool");
static const u8 Str_Cute[] = _("Cute");
static const u8 Str_Tough[] = _("Tough");
static const u8 Str_Beauty[] = _("Beauty");
static const u8 Str_Smart[] = _("Smart");
static const u8 Str_Sheen[] = _("Sheen");
static const u8 Str_Fateful[] = _("Fateful");
static const u8 Str_Fateful2[] = _("Unused Ribbons");
static const u8 Str_CoolRibbon[] = _("Cool Ribbons");
static const u8 Str_CuteRibbon[] = _("Cute Ribbons");
static const u8 Str_ToughRibbon[] = _("Tough Ribbons");
static const u8 Str_BeautyRibbon[] = _("Beauty Ribbons");
static const u8 Str_SmartRibbon[] = _("Smart Ribbons");
static const u8 Str_ChampRibbon[] = _("Champion Ribbon");
static const u8 Str_WinRibbon[] = _("Winning Ribbon");
static const u8 Str_VictoryRibbon[] = _("Victory Ribbon");
static const u8 Str_ArtistRibbon[] = _("Artist Ribbon");
static const u8 Str_EffortRibbon[] = _("Effort Ribbon");
static const u8 Str_GiftRibbon[] = _("Gift Ribbons");
static const u8 Str_Move[] = _("Move");
static const u8 Str_PP[] = _("PP");
static const u8 Str_PPUp[] = _("PP Up");

static const u8 Str_On[] = _("On");
static const u8 Str_Off[] = _("Off");
static const u8 Str_HexPrefix[] = _("0x");

static const u8 Str_Header_Create[] = _("{COLOR GREEN}Create Pokémon");
static const u8 Str_Header_Edit[] = _("{COLOR GREEN}Edit Pokémon");
static const u8 Str_Header2[] = _("{START_BUTTON} Save & exit {DPAD_LEFTRIGHT} Page");

static const u8 Str_DefaultOTName[8] = _("Debug-E");

static const u8 Str_Page[] = _("Page: {STR_VAR_1}");
static const u8 Str_Slot[] = _("Slot: {STR_VAR_1}");

static const u8 Str_StringVars[] = _("{STR_VAR_1}{STR_VAR_3}");
static const u8 Str_Spacer1[] = _(": {CLEAR_TO 100}");
static const u8 Str_CursorColor[] = _("{COLOR GREEN}");
static const u8 Str_Cursor2Color[] = _("{COLOR DARK_GRAY}{HIGHLIGHT LIGHT_BLUE}");
static const u8 Str_CursorColorOff[] = _("{HIGHLIGHT WHITE}{COLOR GREEN}");
static const u8 Str_JpnCharset[] = _("{JPN}");

static const u8 Str_Genderless[] = _("-");
static const u8 Str_Male[] = _("♂");
static const u8 Str_Female[] = _("♀");
static const u8 *const GenderIndexes[3] = {
    Str_Male,
    Str_Female,
    Str_Genderless
};

static const u8 Str_Empty[] = _("");
static const u8 Str_isShiny[] = _("{TRIANGLE}");
static const u8 *const IsShinyIndex[2] = {
    Str_Empty,
    Str_isShiny
};

static const u8 Str_None[] = _("---");
static const u8 Str_Psn[] = _("PSN");
static const u8 Str_Par[] = _("PAR");
static const u8 Str_Brn[] = _("BRN");
static const u8 Str_Slp[] = _("SLP");
static const u8 Str_Frz[] = _("FRZ");
static const u8 Str_Psn2[] = _("PSN2");

static const u8 *const StatusIndexes[7] = {
    Str_None,
    Str_Psn,
    Str_Par,
    Str_Brn,
    Str_Slp,
    Str_Frz,
    Str_Psn2
};

struct EditPokemonStruct {
    const u8* text;
    u32 mode;
    u32 min;
    u32 max;
    u32 initial;
    u16 SetMonDataParam;
    u16 digitCount;
};

enum {
    EDIT_NULL,
    EDIT_NORMAL,
    EDIT_READONLY,
    EDIT_STRING,
    EDIT_BOOL,
    EDIT_HEX,
};

enum {
    VAL_SPECIES,
    VAL_PID,
    VAL_TID,
    VAL_SID,
    VAL_OT,
    VAL_OT_GENDER,
    VAL_NICK,
    VAL_PKMN_GENDER,
    VAL_NATURE,
    VAL_EGG,
    VAL_EGG2,
    VAL_HASSPECIES,
    VAL_LANGUAGE,
    VAL_GAME,
    VAL_ITEM,
    VAL_LEVEL,
    VAL_EXP,
    VAL_ABILITY,
    VAL_FRIENDSHIP,
    VAL_METLVL,
    VAL_METLOCATATION,
    VAL_BALL,
    VAL_PKRUS_STRAIN,
    VAL_PKRUS_DAYS_DEF,
    VAL_PKRUS_DAYS_LEFT,
    VAL_HP_CURRENT,
    VAL_HP_MAX,
    VAL_ATK,
    VAL_DEF,
    VAL_SPEED,
    VAL_SPATK,
    VAL_SPDEF,
    VAL_HP_IV,
    VAL_ATK_IV,
    VAL_DEF_IV,
    VAL_SPEED_IV,
    VAL_SPATK_IV,
    VAL_SPDEF_IV,
    VAL_HP_EV,
    VAL_ATK_EV,
    VAL_DEF_EV,
    VAL_SPEED_EV,
    VAL_SPATK_EV,
    VAL_SPDEF_EV,
    VAL_COOL,
    VAL_CUTE,
    VAL_BEAUTY,
    VAL_SMART,
    VAL_TOUGH,
    VAL_SHEEN,
    VAL_STATUS,
    VAL_SLEEP_TIMER,
    VAL_PSN2_TIMER,
    VAL_RIBBON_CHAMPRIBBON,
    VAL_RIBBON_WINRIBBON,
    VAL_RIBBON_VICTORYRIBBON,
    VAL_RIBBON_ARTISTRIBBON,
    VAL_RIBBON_EFFORTRIBBON,
    VAL_RIBBON_COOLRIBBON,
    VAL_RIBBON_CUTERIBBON,
    VAL_RIBBON_BEAUTYRIBBON,
    VAL_RIBBON_SMARTRIBBON,
    VAL_RIBBON_TOUGHRIBBON,
    VAL_RIBBON_GIFTRIBBON,
    VAL_RIBBON_FATEFUL,
    VAL_RIBBON_FATEFUL2,
    VAL_MOVE_1,
    VAL_MOVE_2,
    VAL_MOVE_3,
    VAL_MOVE_4,
    VAL_MOVE_1_PP,
    VAL_MOVE_2_PP,
    VAL_MOVE_3_PP,
    VAL_MOVE_4_PP,
    VAL_MOVE_1_PPUP,
    VAL_MOVE_2_PPUP,
    VAL_MOVE_3_PPUP,
    VAL_MOVE_4_PPUP,
    VAL_IS_SHINY,
};

#define PAGE_COUNT 7

// text, mode, min value, max value, initial value, SetMonDataParam, digitCount
static const struct EditPokemonStruct DebugPkmnCreator_Options[] =
{
        [VAL_SPECIES]              = {Str_Species, EDIT_NORMAL, 1, NUM_SPECIES-1, SPECIES_BULBASAUR, MON_DATA_SPECIES, 4},
        [VAL_PID]                  = {Str_Personality, EDIT_HEX, 0, 0xffffffff, 0, MON_DATA_PERSONALITY, 8},
        [VAL_TID]                  = {Str_TrainerID, EDIT_NORMAL, 0, 0xffff, 0, MON_DATA_OT_ID, 5},
        [VAL_SID]                  = {Str_SecretID, EDIT_NORMAL, 0, 0xffff, 0, MON_DATA_OT_ID, 5}, // SID
        [VAL_OT]                   = {Str_OT, EDIT_STRING, 0, 0, 0, MON_DATA_OT_NAME, PLAYER_NAME_LENGTH}, // We can't set a default here because the saveblock pointer can change.
        [VAL_OT_GENDER]            = {Str_Gender, EDIT_NORMAL, 0, 1, 0, MON_DATA_OT_GENDER, 1},
        [VAL_NICK]                 = {Str_Nick, EDIT_STRING, 0, 0, 0, MON_DATA_NICKNAME, POKEMON_NAME_LENGTH},
        [VAL_PKMN_GENDER]           = {Str_Gender, EDIT_READONLY, 0, 2, 0, MON_DATA_PERSONALITY, 1},
        [VAL_NATURE]               = {Str_Nature, EDIT_READONLY, 0, 24, 0, MON_DATA_PERSONALITY, 2},
        [VAL_EGG]                  = {Str_Egg, EDIT_BOOL, 0, 1, 0, MON_DATA_IS_EGG, 1},
        [VAL_EGG2]                 = {Str_Egg2, EDIT_BOOL, 0, 1, 0, MON_DATA_SANITY_IS_EGG, 1},
        [VAL_HASSPECIES]           = {Str_HasSpecies, EDIT_BOOL, 0, 1, 1, MON_DATA_SANITY_HAS_SPECIES, 1},
        [VAL_LANGUAGE]             = {Str_Language, EDIT_NORMAL, 0, NUM_LANGUAGES - 1, GAME_LANGUAGE, MON_DATA_LANGUAGE, 2},
        [VAL_GAME]                 = {Str_Game, EDIT_NORMAL, 0, 49, GAME_VERSION, MON_DATA_MET_GAME, 2}, // 45 = Shield
        [VAL_ITEM]                 = {Str_Item, EDIT_NORMAL, 0, ITEMS_COUNT - 1, 0, MON_DATA_HELD_ITEM, 3},
        [VAL_LEVEL]                = {Str_Level, EDIT_NORMAL, 0, 100, 10, MON_DATA_LEVEL, 3},
        [VAL_EXP]                  = {Str_EXP, EDIT_NORMAL, 0, 1640000, 1000, MON_DATA_EXP, 7},
        [VAL_ABILITY]              = {Str_Ability, EDIT_NORMAL, 0, 2, 0, MON_DATA_ABILITY_NUM, 1},
        [VAL_FRIENDSHIP]           = {Str_Friendship, EDIT_NORMAL, 0, 255, 0, MON_DATA_FRIENDSHIP, 3},
        [VAL_METLVL]               = {Str_MetLevel, EDIT_NORMAL, 0, 100, 10, MON_DATA_MET_LEVEL, 3}, // 0 instead of 1 because 0 means hatched from an Egg
        [VAL_METLOCATATION]        = {Str_MetLocation, EDIT_NORMAL, 0, 65535, MAPSEC_LITTLEROOT_TOWN, MON_DATA_MET_LOCATION, 5},
        // [VAL_BALL]                 = {Str_Ball, EDIT_NORMAL, 0, LAST_BALL, ITEM_POKE_BALL, MON_DATA_POKEBALL, 2},
        [VAL_BALL]                 = {Str_Ball, EDIT_NORMAL, 0, ITEM_PREMIER_BALL, ITEM_POKE_BALL, MON_DATA_POKEBALL, 2},
        [VAL_PKRUS_STRAIN]         = {Str_PKrus, EDIT_NORMAL, 0, 3, 0, MON_DATA_POKERUS, 1}, // 4 different "strains"
        [VAL_PKRUS_DAYS_DEF]       = {Str_PKrus, EDIT_NORMAL, 1, 4, 1, MON_DATA_POKERUS, 1}, // "default" days until cured
        [VAL_PKRUS_DAYS_LEFT]      = {Str_PKrus, EDIT_NORMAL, 0, 7, 0, MON_DATA_POKERUS, 1}, // Days until cured
        // Current stats
        [VAL_HP_CURRENT]           = {Str_HP, EDIT_NORMAL, 0, 999, 0, MON_DATA_HP, 3},
        [VAL_HP_MAX]               = {Str_HP, EDIT_READONLY, 0, 999, 0, MON_DATA_MAX_HP, 3},
        [VAL_ATK]                  = {Str_Atk, EDIT_READONLY, 0, 999, 0, MON_DATA_ATK, 3},
        [VAL_DEF]                  = {Str_Def, EDIT_READONLY, 0, 999, 0, MON_DATA_DEF, 3},
        [VAL_SPEED]                = {Str_Spe, EDIT_READONLY, 0, 999, 0, MON_DATA_SPEED, 3},
        [VAL_SPATK]                = {Str_SpA, EDIT_READONLY, 0, 999, 0, MON_DATA_SPATK, 3},
        [VAL_SPDEF]                = {Str_SpD, EDIT_READONLY, 0, 999, 0, MON_DATA_SPDEF, 3},
        // IVs
        [VAL_HP_IV]                = {Str_HP_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_HP_IV, 2},
        [VAL_ATK_IV]               = {Str_Atk_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_ATK_IV, 2},
        [VAL_DEF_IV]               = {Str_Def_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_DEF_IV, 2},
        [VAL_SPEED_IV]             = {Str_Spe_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_SPEED_IV, 2},
        [VAL_SPATK_IV]             = {Str_SpA_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_SPATK_IV, 2},
        [VAL_SPDEF_IV]             = {Str_SpD_IV_EV, EDIT_NORMAL, 0, 31, 0, MON_DATA_SPDEF_IV, 2},
        // EVs
        [VAL_HP_EV]                = {Str_HP_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_HP_EV, 3},
        [VAL_ATK_EV]               = {Str_Atk_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_ATK_EV, 3},
        [VAL_DEF_EV]               = {Str_Def_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_DEF_EV, 3},
        [VAL_SPEED_EV]             = {Str_Spe_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_SPEED_EV, 3},
        [VAL_SPATK_EV]             = {Str_SpA_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_SPATK_EV, 3},
        [VAL_SPDEF_EV]             = {Str_SpD_IV_EV, EDIT_NORMAL, 0, 255, 0, MON_DATA_SPDEF_EV, 3},
        // Contest Stats
        [VAL_COOL]                 = {Str_Cool, EDIT_NORMAL, 0, 255, 0, MON_DATA_COOL, 3},
        [VAL_CUTE]                 = {Str_Cute, EDIT_NORMAL, 0, 255, 0, MON_DATA_CUTE, 3},
        [VAL_BEAUTY]               = {Str_Beauty, EDIT_NORMAL, 0, 255, 0, MON_DATA_BEAUTY, 3},
        [VAL_SMART]                = {Str_Smart, EDIT_NORMAL, 0, 255, 0, MON_DATA_SMART, 3},
        [VAL_TOUGH]                = {Str_Tough, EDIT_NORMAL, 0, 255, 0, MON_DATA_TOUGH, 3},
        [VAL_SHEEN]                = {Str_Sheen, EDIT_NORMAL, 0, 255, 0, MON_DATA_SHEEN, 3},
        [VAL_STATUS]               = {Str_Status, EDIT_NORMAL, 0, 6, 0, MON_DATA_STATUS, 1},
        [VAL_SLEEP_TIMER]          = {Str_Slp, EDIT_NORMAL, 0, 7, 0, MON_DATA_STATUS, 1}, // sleep timer
        [VAL_PSN2_TIMER]           = {Str_Psn2, EDIT_NORMAL, 0, 15, 0, MON_DATA_STATUS, 2}, // badly poisoned timer
        // Ribbons
        [VAL_RIBBON_CHAMPRIBBON]   = {Str_ChampRibbon, EDIT_BOOL, 0, 1, 0, MON_DATA_CHAMPION_RIBBON, 1},
        [VAL_RIBBON_WINRIBBON]     = {Str_WinRibbon, EDIT_BOOL, 0, 1, 0, MON_DATA_WINNING_RIBBON, 1},
        [VAL_RIBBON_VICTORYRIBBON] = {Str_VictoryRibbon, EDIT_BOOL, 0, 1, 0, MON_DATA_VICTORY_RIBBON, 1},
        [VAL_RIBBON_ARTISTRIBBON]  = {Str_ArtistRibbon, EDIT_BOOL, 0, 1, 0, MON_DATA_ARTIST_RIBBON, 1},
        [VAL_RIBBON_EFFORTRIBBON]  = {Str_EffortRibbon, EDIT_BOOL, 0, 1, 0, MON_DATA_EFFORT_RIBBON, 1},
        [VAL_RIBBON_COOLRIBBON]    = {Str_CoolRibbon, EDIT_NORMAL, 0, 3, 0, MON_DATA_COOL_RIBBON, 1},
        [VAL_RIBBON_CUTERIBBON]    = {Str_CuteRibbon, EDIT_NORMAL, 0, 3, 0, MON_DATA_CUTE_RIBBON, 1},
        [VAL_RIBBON_BEAUTYRIBBON]  = {Str_BeautyRibbon, EDIT_NORMAL, 0, 3, 0, MON_DATA_BEAUTY_RIBBON, 1},
        [VAL_RIBBON_SMARTRIBBON]   = {Str_SmartRibbon, EDIT_NORMAL, 0, 3, 0, MON_DATA_SMART_RIBBON, 1},
        [VAL_RIBBON_TOUGHRIBBON]   = {Str_ToughRibbon, EDIT_NORMAL, 0, 3, 0, MON_DATA_TOUGH_RIBBON, 1},
        [VAL_RIBBON_GIFTRIBBON]    = {Str_GiftRibbon, EDIT_HEX, 0, 127, 0, MON_DATA_MARINE_RIBBON, 2},
        [VAL_RIBBON_FATEFUL]       = {Str_Fateful, EDIT_BOOL, 0, 1, 0, MON_DATA_MODERN_FATEFUL_ENCOUNTER, 1},
        [VAL_RIBBON_FATEFUL2]      = {Str_Fateful2, EDIT_NORMAL, 0, 3, 0, MON_DATA_UNUSED_RIBBONS, 1},
        // Move data
        [VAL_MOVE_1]               = {Str_Move, EDIT_NORMAL, 0, MOVES_COUNT - 1, MOVE_POUND, MON_DATA_MOVE1, 3},
        [VAL_MOVE_2]               = {Str_Move, EDIT_NORMAL, 0, MOVES_COUNT - 1, 0, MON_DATA_MOVE2, 3},
        [VAL_MOVE_3]               = {Str_Move, EDIT_NORMAL, 0, MOVES_COUNT - 1, 0, MON_DATA_MOVE3, 3},
        [VAL_MOVE_4]               = {Str_Move, EDIT_NORMAL, 0, MOVES_COUNT - 1, 0, MON_DATA_MOVE4, 3},
        [VAL_MOVE_1_PP]            = {Str_PP, EDIT_NORMAL, 0, 99, 40, MON_DATA_PP1, 2},
        [VAL_MOVE_2_PP]            = {Str_PP, EDIT_NORMAL, 0, 99, 40, MON_DATA_PP2, 2},
        [VAL_MOVE_3_PP]            = {Str_PP, EDIT_NORMAL, 0, 99, 40, MON_DATA_PP3, 2},
        [VAL_MOVE_4_PP]            = {Str_PP, EDIT_NORMAL, 0, 99, 40, MON_DATA_PP4, 2},
        [VAL_MOVE_1_PPUP]          = {Str_PPUp, EDIT_NORMAL, 0, 3, 0, MON_DATA_PP_BONUSES, 1},
        [VAL_MOVE_2_PPUP]          = {Str_PPUp, EDIT_NORMAL, 0, 3, 0, MON_DATA_PP_BONUSES, 1},
        [VAL_MOVE_3_PPUP]          = {Str_PPUp, EDIT_NORMAL, 0, 3, 0, MON_DATA_PP_BONUSES, 1},
        [VAL_MOVE_4_PPUP]          = {Str_PPUp, EDIT_NORMAL, 0, 3, 0, MON_DATA_PP_BONUSES, 1},
        [VAL_IS_SHINY]             = {Str_Nature, EDIT_READONLY, 0, 1, 0, MON_DATA_PERSONALITY, 1},
};

#define EDIT_OPTION_COUNT ARRAY_COUNT(DebugPkmnCreator_Options)

static const u8 DebugPkmnCreator_Pages[PAGE_COUNT + 1][7] =
{
    {VAL_SPECIES, VAL_LEVEL, VAL_TID, VAL_PID, VAL_NICK, VAL_OT, 0xFF},
    {VAL_STATUS, VAL_FRIENDSHIP, VAL_PKRUS_STRAIN, VAL_EGG, VAL_EGG2, VAL_HASSPECIES, 0xFF},
    {VAL_MOVE_1, VAL_MOVE_2, VAL_MOVE_3, VAL_MOVE_4, VAL_ITEM, VAL_ABILITY, 0xFF},
    {VAL_HP_IV, VAL_ATK_IV, VAL_DEF_IV, VAL_SPEED_IV, VAL_SPATK_IV, VAL_SPDEF_IV, 0xFF},
    {VAL_COOL, VAL_CUTE, VAL_BEAUTY, VAL_SMART, VAL_TOUGH, VAL_SHEEN, 0xFF},
    {VAL_RIBBON_COOLRIBBON, VAL_RIBBON_CUTERIBBON, VAL_RIBBON_BEAUTYRIBBON, VAL_RIBBON_SMARTRIBBON, VAL_RIBBON_TOUGHRIBBON, VAL_RIBBON_ARTISTRIBBON, 0xFF},
    {VAL_RIBBON_CHAMPRIBBON, VAL_RIBBON_WINRIBBON, VAL_RIBBON_VICTORYRIBBON, VAL_RIBBON_EFFORTRIBBON, VAL_RIBBON_GIFTRIBBON, VAL_RIBBON_FATEFUL, 0xFF},
    {VAL_LANGUAGE, VAL_GAME, VAL_METLVL, VAL_METLOCATATION, VAL_BALL, VAL_RIBBON_FATEFUL2, 0xFF},
};

static const u8 DebugPkmnCreator_AltIndexes[PAGE_COUNT + 1][6][3] =
{
    {
        {VAL_PKMN_GENDER, 0xFF, 0xFF},
        {VAL_EXP, 0xFF, 0xFF},
        {VAL_SID, VAL_OT_GENDER, 0xFF},
        {VAL_NATURE, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {VAL_PKRUS_DAYS_DEF, VAL_PKRUS_DAYS_LEFT, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {VAL_MOVE_1_PP, VAL_MOVE_1_PPUP, 0xFF},
        {VAL_MOVE_2_PP, VAL_MOVE_2_PPUP, 0xFF},
        {VAL_MOVE_3_PP, VAL_MOVE_3_PPUP, 0xFF},
        {VAL_MOVE_4_PP, VAL_MOVE_4_PPUP, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {VAL_HP_EV, VAL_HP_CURRENT, VAL_HP_MAX},
        {VAL_ATK_EV, VAL_ATK, 0xFF},
        {VAL_DEF_EV, VAL_DEF, 0xFF},
        {VAL_SPEED_EV, VAL_SPEED, 0xFF},
        {VAL_SPATK_EV, VAL_SPATK, 0xFF},
        {VAL_SPDEF_EV, VAL_SPDEF, 0xFF},
    },
    {
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
    {
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
        {0xFF, 0xFF, 0xFF},
    },
};

struct PokemonCreator
{
    struct Pokemon mon;
    struct Pokemon* monBeingEdited;
    u16 index;
    u16 mode;
    u32 data[EDIT_OPTION_COUNT];
    u8 currentPage;
    u8 selectedOption;
    u8 headerWindowId;
    u8 menuWindowId;
};

static EWRAM_DATA struct PokemonCreator sDebugPkmnCreatorData = {0};
static EWRAM_DATA u8 DebugPkmnCreator_NameBuffer[16] = {0};
static EWRAM_DATA u32 DebugPkmnCreator_editingVal[4] = {0};

static const struct WindowTemplate DebugPkmnCreator_HeaderWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 2,
    .baseBlock = 1,
    .paletteNum = 15
};

static const struct WindowTemplate DebugPkmnCreator_FullScreenWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 14,
    .baseBlock = 57,
    .paletteNum = 15
};


/*
    Mode List:
    *  0 - Add to party
    *  1 - Edit party
    *  2 - Edit PC Box
    *  3 - Edit enemy party (usable as a sandbox)
    *  4 - Edit enemy party for debug battle
    *  5 - Edit party for debug battle
    *  6 - Add to enemy party (Unused)
    *  7 - Testing mode (Don't alter parties)
    *  8 - Testing mode (use first mon as template)
    *  9 - For battle debug menu: Edit enemy party
    * 10 - For battle debug menu: Edit enemy party as specified index
*/
void DebugPkmnCreator_Init(u8 mode, u8 index)
{
    struct Pokemon* mons;
    u32 i;
    sDebugPkmnCreatorData.mode = mode;
    switch (mode) {
    case 0:
    case 6:
        mons = &gEnemyParty[0];
        ZeroMonData(mons); // Is this really necessary?
        ZeroMonData(&sDebugPkmnCreatorData.mon);
        sDebugPkmnCreatorData.monBeingEdited = mons;
        sDebugPkmnCreatorData.index = 0;
        break;
    case 1:
    case 5: // used in Debug Battle
        mons = &gPlayerParty[sDebugPkmnCreatorData.index];
        if (mode == 1) 
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
        sDebugPkmnCreatorData.monBeingEdited = mons;
        break;
    case 2:
        mons = (struct Pokemon*) &gPokemonStoragePtr->boxes[0][sDebugPkmnCreatorData.index];
        CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct BoxPokemon));
        CalculateMonStats(&sDebugPkmnCreatorData.mon);
        sDebugPkmnCreatorData.monBeingEdited = mons;
        break;
    case 3:
    case 4: // used in Debug Battle
        mons = &gEnemyParty[sDebugPkmnCreatorData.index];
        if (mode == 3)
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
        sDebugPkmnCreatorData.monBeingEdited = mons;
        break;
    case 7:
    case 8:
    default:
        if (mode == 8)
            CopyMon(&sDebugPkmnCreatorData.mon, &gPlayerParty[0], sizeof(struct Pokemon));
        else
            ZeroMonData(&sDebugPkmnCreatorData.mon);
        sDebugPkmnCreatorData.monBeingEdited = &sDebugPkmnCreatorData.mon;
        sDebugPkmnCreatorData.index = 0;
        break;
    case 9: // Add to enemy party
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gEnemyParty[i], MON_DATA_SANITY_HAS_SPECIES))
                continue;
            else
                break;
        }
        if (i >= PARTY_SIZE)
            return;
        mons = &gEnemyParty[i];
        ZeroMonData(mons); // Is this really necessary?
        ZeroMonData(&sDebugPkmnCreatorData.mon);
        sDebugPkmnCreatorData.monBeingEdited = mons;
        sDebugPkmnCreatorData.index = i;
        break;
    case 10: // Edit enemy party at index
        sDebugPkmnCreatorData.index = index;
        mons = &gEnemyParty[sDebugPkmnCreatorData.index];
        CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
        sDebugPkmnCreatorData.monBeingEdited = mons;
        break;
    }
    // Set default data
    if (mode == 0 || mode == 6 || mode == 7 || mode == 9)
    {
        SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_OT_NAME, Str_DefaultOTName);
        DebugPkmnCreator_Init_SetDefaults();
    }
    // Populate the editor data
    DebugPkmnCreator_PopulateDataStruct();
    // Draw the editor menu
    LoadStdWindowFrameGfx();
    sDebugPkmnCreatorData.headerWindowId = AddWindow(&DebugPkmnCreator_HeaderWindowTemplate);
    DrawStdWindowFrame(sDebugPkmnCreatorData.headerWindowId, FALSE);
    CopyWindowToVram(sDebugPkmnCreatorData.headerWindowId, 3);
    AddTextPrinterParameterized(sDebugPkmnCreatorData.headerWindowId, 1, mode == 0 ? Str_Header_Create : Str_Header_Edit, 0, 0, 0, NULL);
    AddTextPrinterParameterized(sDebugPkmnCreatorData.headerWindowId, 0, Str_Header2, 105, 0, 0, NULL);
    sDebugPkmnCreatorData.menuWindowId = AddWindow(&DebugPkmnCreator_FullScreenWindowTemplate);
    DrawStdWindowFrame(sDebugPkmnCreatorData.menuWindowId, FALSE);
    CopyWindowToVram(sDebugPkmnCreatorData.menuWindowId, 3);
    DebugPkmnCreator_Redraw();
    CreateTask(DebugPkmnCreator_ProcessInput, 10);
}

static void DebugPkmnCreator_Init_SetDefaults(void)
{
    u32 i;
    for (i = 0; i < EDIT_OPTION_COUNT; i++)
    {
        switch (i)
        {
        default:
            sDebugPkmnCreatorData.data[i] = DebugPkmnCreator_Options[i].initial;
            break;
        case VAL_PID:
            sDebugPkmnCreatorData.data[i] = Random32();
            break;
        case VAL_TID:
            sDebugPkmnCreatorData.data[i] = (*(u32*) &gSaveBlock2Ptr->playerTrainerId) & 0xffff;
            break;
        case VAL_SID:
            sDebugPkmnCreatorData.data[i] = (*(u32*) &gSaveBlock2Ptr->playerTrainerId) >> 16;
            break;
        case VAL_EXP:
            sDebugPkmnCreatorData.data[i] = gExperienceTables[gSpeciesInfo[DebugPkmnCreator_Options[0].initial].growthRate][DebugPkmnCreator_Options[15].initial];
            break;
        }
    }
    DebugPkmnCreator_Init_SetNewMonData(TRUE);
}

static void DebugPkmnCreator_Init_SetNewMonData(bool8 setMoves)
{
    struct Pokemon* mons = &sDebugPkmnCreatorData.mon;
    u32 data, i, j, k;
    // Buffer the OT name
    StringCopyN(DebugPkmnCreator_NameBuffer, mons->box.otName, PLAYER_NAME_LENGTH);
    data = (sDebugPkmnCreatorData.data[3] << 16) | sDebugPkmnCreatorData.data[2];
    CreateMon(mons, sDebugPkmnCreatorData.data[0], sDebugPkmnCreatorData.data[15], 32, 1, sDebugPkmnCreatorData.data[1], OT_ID_PRESET, data);
    SetMonData(mons, MON_DATA_OT_NAME, DebugPkmnCreator_NameBuffer);
    data = ((sDebugPkmnCreatorData.data[23] - 1) & 3) << 6;
    data |= (sDebugPkmnCreatorData.data[22] & 3) << 4;
    data |= (sDebugPkmnCreatorData.data[24] & 0xf);
    SetMonData(mons, MON_DATA_POKERUS, &data);
    for (i = 0; i < EDIT_OPTION_COUNT; i++)
    {
        switch (i)
        {
        default:
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        // All these should already be set (or will be set later)
        case VAL_SPECIES ... VAL_OT: // PID, TID, OT
        case VAL_NICK ... VAL_NATURE: // Nickname, gender, nature
        case VAL_LEVEL:
        case VAL_PKRUS_STRAIN ... VAL_PKRUS_DAYS_LEFT: // Pokérus
        case VAL_HP_MAX ... VAL_SPDEF: // Current stats
        case VAL_MOVE_1_PPUP ... VAL_MOVE_3_PPUP:
        case VAL_IS_SHINY:
            break;
        // Only set after initial generation
        case VAL_OT_GENDER:
        case VAL_FRIENDSHIP: // Friendship (will always default to the base friendship of the default species)
        case VAL_METLOCATATION:
        case VAL_HP_CURRENT:
            if (!setMoves)
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        case VAL_ABILITY:
            if (setMoves)
            {
                if (gSpeciesInfo[sDebugPkmnCreatorData.data[0]].abilities[1])
                {
                    data = sDebugPkmnCreatorData.data[1] & 1;
                    SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
                }
                break;
            }
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        case VAL_SPDEF_IV: // IVs
            if (setMoves)
            {
                data = Random32();
                SetMonData(mons, MON_DATA_IVS, &data);
                break;
            }
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        case VAL_STATUS:
            j = sDebugPkmnCreatorData.data[i];
            switch (j)
            {
            case 0:
            default:
                data = 0;
                break;
            case 1:
                data = STATUS1_POISON;
                break;
            case 2:
                data = STATUS1_PARALYSIS;
                break;
            case 3:
                data = STATUS1_BURN;
                break;
            case 4:
                data = 3;
                break;
            case 5:
                data = STATUS1_FREEZE;
                break;
            case 6:
                data = STATUS1_TOXIC_POISON;
                break;
            }
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            break;
        case VAL_SLEEP_TIMER:
            if (sDebugPkmnCreatorData.data[50] == 4)
            {
                data = sDebugPkmnCreatorData.data[i];
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            }
            break;
        case VAL_PSN2_TIMER:
            if (sDebugPkmnCreatorData.data[i] == 6)
            {
                data = sDebugPkmnCreatorData.data[i] << 8 | STATUS1_TOXIC_POISON;
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            }
            break;
        case VAL_RIBBON_GIFTRIBBON:
            data = sDebugPkmnCreatorData.data[i];
            for (j = 0; j < 7; j++)
            {
                k = data & 1;
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam + j, &k);
                data >>= 1;
            }
            break;
        case VAL_MOVE_4: // Moves
            if (setMoves)
            {
                GiveMonInitialMoveset(mons);
                break;
            }
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        case VAL_MOVE_4_PPUP: // PP Up count (74 through 76 are set too)
            data = 0;
            for (j = 0; j < 4; j++)
            {
                data <<= 2;
                data |= (sDebugPkmnCreatorData.data[74 + j] & 3);
            }
            SetMonData(mons, DebugPkmnCreator_Options[74].SetMonDataParam, &data);
            break;
        }
    }
    if (setMoves) MonRestorePP(mons);
    CalculateMonStats(mons);
}

static void DebugPkmnCreator_SetMonData(void)
{
    struct Pokemon* mons = &sDebugPkmnCreatorData.mon;
    u32 data, i, j, k;
    data = ((sDebugPkmnCreatorData.data[23] - 1) & 3) << 6;
    data |= (sDebugPkmnCreatorData.data[22] & 3) << 4;
    data |= (sDebugPkmnCreatorData.data[24] & 0xf);
    SetMonData(mons, MON_DATA_POKERUS, &data);
    for (i = 0; i < EDIT_OPTION_COUNT; i++)
    {
        switch (i)
        {
        default:
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &sDebugPkmnCreatorData.data[i]);
            break;
        case VAL_SPECIES ... VAL_OT: // PID and TID, leave alone. 0 is species, which we handle in a different function
        case VAL_NICK ... VAL_NATURE: // Nickname (4) and OT name, set by the actual editor; 7-8 are gender and nature (readonly)
        case VAL_LEVEL: // Level (set by CalculateMonStats)
        case VAL_PKRUS_STRAIN ... VAL_PKRUS_DAYS_LEFT: // Pokérus (set above)
        case VAL_HP_MAX ... VAL_SPATK: // Current stats (readonly). 31 calls CalculateMonStats
        case VAL_MOVE_1_PPUP ... VAL_MOVE_3_PPUP: // PP Up counts (77 sets all at once)
        case VAL_IS_SHINY:
            break;
        case 31: // Stats (and level)
            CalculateMonStats(mons);
            break;
        case 50: // Status
            j = sDebugPkmnCreatorData.data[i];
            switch (j)
            {
            case 0:
            default:
                data = 0;
                break;
            case 1:
                data = STATUS1_POISON;
                break;
            case 2:
                data = STATUS1_PARALYSIS;
                break;
            case 3:
                data = STATUS1_BURN;
                break;
            case 4:
                data = 3;
                break;
            case 5:
                data = STATUS1_FREEZE;
                break;
            case 6:
                data = STATUS1_TOXIC_POISON;
                break;
            }
            SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            break;
        case 51: // Sleep counter
            if (sDebugPkmnCreatorData.data[50] == 4)
            {
                data = sDebugPkmnCreatorData.data[i];
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            }
            break;
        case 52: // Toxic counter
            if (sDebugPkmnCreatorData.data[i] == 6)
            {
                data = sDebugPkmnCreatorData.data[i] << 8 | STATUS1_TOXIC_POISON;
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, &data);
            }
            break;
        case 63: // Gift ribbons
            data = sDebugPkmnCreatorData.data[i];
            for (j = 0; j < 7; j++)
            {
                k = data & 1;
                SetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam + j, &k);
                data >>= 1;
            }
            break;
        case 77: // PP Up count (74 through 76 are set too)
            data = 0;
            for (j = 0; j < 4; j++)
            {
                data <<= 2;
                data |= (sDebugPkmnCreatorData.data[77 - j] & 3);
            }
            SetMonData(mons, DebugPkmnCreator_Options[74].SetMonDataParam, &data);
            break;
        }
    }
}

static void DebugPkmnCreator_PopulateDataStruct(void)
{
    struct Pokemon* mons = &sDebugPkmnCreatorData.mon;
    u32 data, i, j;
    for (i = 0; i < EDIT_OPTION_COUNT; i++)
    {
        switch (i)
        {
        default:
            sDebugPkmnCreatorData.data[i] = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            break;
        case VAL_TID:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            sDebugPkmnCreatorData.data[i] = data & 0xffff;
            break;
        case VAL_SID:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            sDebugPkmnCreatorData.data[i] = data >> 16;
            break;
        case VAL_OT:
            sDebugPkmnCreatorData.data[i] = (u32) &mons->box.otName;
            break;
        case VAL_NICK:
            sDebugPkmnCreatorData.data[i] = (u32) &mons->box.nickname;
            break;
        case VAL_PKMN_GENDER:
            data = GetMonGender(mons);
            if (data == MON_FEMALE)
                data = 1;
            else if (data == MON_GENDERLESS)
                data = 2;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_NATURE:
            sDebugPkmnCreatorData.data[i] = GetNature(mons, FALSE);
            break;
        case VAL_PKRUS_STRAIN:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            data &= 0x30;
            data >>= 4;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_PKRUS_DAYS_DEF:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            data &= 0xc0;
            data >>= 6;
            sDebugPkmnCreatorData.data[i] = data + 1;
            break;
        case VAL_PKRUS_DAYS_LEFT:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            data &= 0xf;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_STATUS:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            if (data & STATUS1_SLEEP)
                data = 4;
            else if (data & STATUS1_POISON)
                data = 1;
            else if (data & STATUS1_BURN)
                data = 3;
            else if (data & STATUS1_FREEZE)
                data = 5;
            else if (data & STATUS1_PARALYSIS)
                data = 2;
            else if (data & STATUS1_TOXIC_POISON)
                data = 6;
            else data = 0;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_SLEEP_TIMER:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            data &= STATUS1_SLEEP;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_PSN2_TIMER:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            data >>= 8;
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_RIBBON_GIFTRIBBON:
            data = 0;
            for (j = 0; j < 7; j++)
            {
                data <<= 1;
                data |= GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam - 1 + (7 - j), NULL);
            }
            sDebugPkmnCreatorData.data[i] = data;
            break;
        case VAL_MOVE_1_PPUP ... VAL_MOVE_4_PPUP:
            data = GetMonData(mons, DebugPkmnCreator_Options[i].SetMonDataParam, NULL);
            j = (i - 74) * 2;
            data >>= j;
            sDebugPkmnCreatorData.data[i] = data & 3;
            break;
        case VAL_IS_SHINY:
            //GetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_PERSONALITY)
            sDebugPkmnCreatorData.data[i] = IsShinyOtIdPersonality(sDebugPkmnCreatorData.data[VAL_OT], sDebugPkmnCreatorData.data[VAL_PID]);
            break;
        }
    }
}

// Draw Functions
static void DebugPkmnCreator_Redraw(void)
{
    u32 i;
    u32 x = 0;
    u32 y = 0;
    u8* bufferPosition;
    const u8* page = DebugPkmnCreator_Pages[sDebugPkmnCreatorData.currentPage];
    const struct EditPokemonStruct* data;
    u8 index;
    ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.currentPage + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar2, Str_Page);
    AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 0, gStringVar2, x, y, 0, NULL);
    if ((sDebugPkmnCreatorData.mode >= 1 && sDebugPkmnCreatorData.mode <= 5) || sDebugPkmnCreatorData.mode == 10) {
        x = 100;
        ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.index + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
        StringExpandPlaceholders(gStringVar2, Str_Slot);
        AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 0, gStringVar2, x, y, 0, NULL);
        x = 0;
    }
    y += 16;
    for (i = 0; i < 6; i++)
    {
        bufferPosition = gStringVar2;
        index = page[i];
        if (index == 0xFF) break;
        if (i == sDebugPkmnCreatorData.selectedOption)
        {
            // Color the currently selected option green
            bufferPosition = StringCopy(bufferPosition, Str_CursorColor);
        }
        data = &DebugPkmnCreator_Options[index];
        switch (index)
        {
        default:
            switch (data->mode)
            {
            case EDIT_NORMAL:
            case EDIT_READONLY:
            default:
                ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
                break;
            case EDIT_HEX:
                ConvertUIntToHexStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
                break;
            case EDIT_NULL:
                break;
            case EDIT_BOOL:
                StringCopy(gStringVar1, sDebugPkmnCreatorData.data[index] ? Str_On : Str_Off);
                break;
            case EDIT_STRING:
                StringCopyN(gStringVar1, (u8*) sDebugPkmnCreatorData.data[index], data->digitCount);
                // Pokémon names can sometimes be unterminated, so add an extra terminator here
                gStringVar1[data->digitCount] = EOS;
                break;
            }
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            if (data->mode == EDIT_HEX)
            {
                bufferPosition = StringCopy(bufferPosition, Str_HexPrefix);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            break;
        case VAL_SPECIES:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 140;
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gSpeciesNames[sDebugPkmnCreatorData.data[index]], x, y, 0, NULL);
            break;
        case VAL_LEVEL:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 140;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_EXP], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_EXP].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;
        case VAL_TID:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 140;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_SID], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_SID].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            x = 180;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, GenderIndexes[sDebugPkmnCreatorData.data[VAL_OT_GENDER]], x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, GenderIndexes[sDebugPkmnCreatorData.data[VAL_OT_GENDER]], x, y, 0, NULL);
            break;
        case VAL_PID:
            ConvertUIntToHexStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            bufferPosition = StringCopy(bufferPosition, Str_HexPrefix);
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 160;
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gNatureNamePointers[sDebugPkmnCreatorData.data[8]], x, y, 0, NULL);
            x = 208;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, GenderIndexes[sDebugPkmnCreatorData.data[VAL_PKMN_GENDER]], x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, GenderIndexes[sDebugPkmnCreatorData.data[VAL_PKMN_GENDER]], x, y, 0, NULL);
            x = 214;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, IsShinyIndex[sDebugPkmnCreatorData.data[VAL_IS_SHINY]], x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, IsShinyIndex[sDebugPkmnCreatorData.data[VAL_IS_SHINY]], x, y, 0, NULL);
            break;
        case VAL_OT_GENDER:
        case VAL_PKMN_GENDER:
            StringCopy(gStringVar1, GenderIndexes[sDebugPkmnCreatorData.data[index]]);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            break;
        case VAL_GAME:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 130;
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gText_ThreeHyphens, x, y, 0, NULL);
            break;
        case VAL_ITEM:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 145;
            CopyItemName(sDebugPkmnCreatorData.data[index], gStringVar1);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;
        case VAL_ABILITY:
            StringCopy(gStringVar1, gAbilityNames[GetAbilityBySpecies(sDebugPkmnCreatorData.data[0], sDebugPkmnCreatorData.data[index])]);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            break;
        case VAL_METLOCATATION:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 130;
            GetMapName_HandleVersion(gStringVar1, sDebugPkmnCreatorData.data[index], sDebugPkmnCreatorData.data[13]);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;
        case VAL_BALL:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 130;
            CopyItemName(sDebugPkmnCreatorData.data[index], gStringVar1);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;
        case VAL_STATUS:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 130;
            StringCopy(gStringVar1, StatusIndexes[sDebugPkmnCreatorData.data[index]]);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;			
        case VAL_MOVE_1 ... VAL_MOVE_4:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                *bufferPosition = CHAR_SPACE;
                bufferPosition++;
                *bufferPosition = CHAR_1 + (index - 66);
                bufferPosition++;
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 120;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[70 + (index - 66)], STR_CONV_MODE_LEADING_ZEROS, 2);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            x = 136;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[74 + (index - 66)], STR_CONV_MODE_LEADING_ZEROS, 1);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            x = 144;
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gMoveNames[sDebugPkmnCreatorData.data[index]], x, y, 0, NULL);
            break;
        case VAL_PKRUS_STRAIN:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 140;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_PKRUS_DAYS_DEF], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_PKRUS_DAYS_DEF].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            x = 180;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_PKRUS_DAYS_LEFT], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_PKRUS_DAYS_LEFT].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            break;
        case VAL_HP_IV ... VAL_SPDEF_IV:
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            if (data->text != NULL)
            {
                bufferPosition = StringCopy(bufferPosition, data->text);
                bufferPosition = StringCopy(bufferPosition, Str_Spacer1);
            }
            *gStringVar3 = EOS;
            StringExpandPlaceholders(bufferPosition, Str_StringVars);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);

            x = 136;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index + 6], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_HP_MAX].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            x = 172;
            ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[index - 6], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_HP_MAX].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            if (index == VAL_HP_IV)
            {
                x = 172;
                ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_HP_CURRENT], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_HP_MAX].digitCount);
                // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
                AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
                x = 208;
                ConvertIntToDecimalStringN(gStringVar1, sDebugPkmnCreatorData.data[VAL_HP_MAX], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_HP_MAX].digitCount);
                // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar1, x, y, 0, NULL);
                AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar1, x, y, 0, NULL);
            }
            break;
        }
        x = 0;
        y+= 16;
        /* TODO: Add non-default cases:
            * PID (is shiny)
            * Status (sleep/toxic counter)
            * Language (language name)
        */
    }
}

static void DebugPkmnCreator_EditModeRedraw(u32 digit, u8 editIndex)
{
    u32 x = 100;
    u32 y = sDebugPkmnCreatorData.selectedOption * 2 * 8 + 16;
    u32 i = 0;
    u8* bufferPosition = gStringVar2;
    const u8* page = DebugPkmnCreator_Pages[sDebugPkmnCreatorData.currentPage];
    const struct EditPokemonStruct* data;
    u8 index;
    u32 digitToHighlight;

    if (editIndex != 0 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 1] != 0xFF)
    {
        index = DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 1];
        x += 5 * 8 * editIndex;
    }
    else
        index = page[sDebugPkmnCreatorData.selectedOption];

    data = &DebugPkmnCreator_Options[index];

    switch (index)
    {
    default:
        switch (data->mode)
        {
        case EDIT_NORMAL:
        default:
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
            ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            break;
        case EDIT_HEX:
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
            ConvertUIntToHexStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
            bufferPosition = StringCopy(bufferPosition, Str_CursorColor);
            bufferPosition = StringCopy(bufferPosition, Str_HexPrefix);
            break;
        case EDIT_NULL:
            return; // Haha, don't even make the effort...
        case EDIT_BOOL:
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 24, 16);
            bufferPosition = StringCopy(bufferPosition, Str_Cursor2Color);
            bufferPosition = StringCopy(bufferPosition, DebugPkmnCreator_editingVal[editIndex] ? Str_On : Str_Off);
            *bufferPosition = EOS;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            return;
        case EDIT_STRING:
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
            StringCopyN(gStringVar1, DebugPkmnCreator_NameBuffer, data->digitCount);
            break;
        }
        break;
    case VAL_SPECIES:
        // Same as the default case, except we draw more data here
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 140;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 72, 16);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gSpeciesNames[DebugPkmnCreator_editingVal[editIndex]], x, y, 0, NULL);
            x = 100; // Reset for the actual species number
        }
        break;
    case VAL_LEVEL:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            //u32 newExp = gExperienceTables[gBaseStats[sDebugPkmnCreatorData.data[VAL_SPECIES]].growthRate][DebugPkmnCreator_editingVal[editIndex]];
            x = 140;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            ConvertIntToDecimalStringN(gStringVar2, sDebugPkmnCreatorData.data[VAL_EXP], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_EXP].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_TID:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 140;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            ConvertIntToDecimalStringN(gStringVar2, sDebugPkmnCreatorData.data[VAL_SID], STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_SID].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 180;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, GenderIndexes[sDebugPkmnCreatorData.data[VAL_OT_GENDER]], x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, GenderIndexes[sDebugPkmnCreatorData.data[VAL_OT_GENDER]], x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_PID:
        if (editIndex == 0) {
            u32 pid = DebugPkmnCreator_editingVal[editIndex];
            u16 nature = GetNatureFromPersonality(pid);
            u8 gender = GetGenderFromSpeciesAndPersonality(sDebugPkmnCreatorData.data[VAL_SPECIES], pid);
            u8 isSihny = IsShinyOtIdPersonality(sDebugPkmnCreatorData.data[VAL_OT], pid);
            if (gender == MON_FEMALE) 
                gender = 1;
            else if (gender == MON_GENDERLESS) 
                gender = 2;
            x = 160;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gNatureNamePointers[nature], x, y, 0, NULL);
            x = 208;
            StringCopy(gStringVar2, GenderIndexes[gender]);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 214;
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, IsShinyIndex[isSihny], x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, IsShinyIndex[isSihny], x, y, 0, NULL);
            x = 100;
        }
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 60, 16);
        ConvertUIntToHexStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        bufferPosition = StringCopy(bufferPosition, Str_CursorColor);
        bufferPosition = StringCopy(bufferPosition, Str_HexPrefix);
        break;
    case VAL_OT_GENDER:
    case VAL_PKMN_GENDER:
        if (editIndex != 0 && page[sDebugPkmnCreatorData.selectedOption] == 0)
            x = 204;
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 8, 16);
        bufferPosition = StringCopy(bufferPosition, Str_Cursor2Color);
        bufferPosition = StringCopy(bufferPosition, GenderIndexes[DebugPkmnCreator_editingVal[editIndex]]);
        *bufferPosition = EOS;
        // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
        AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
        return;
    case VAL_GAME:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 130;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gText_ThreeHyphens, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_ITEM:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 145;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            CopyItemName(DebugPkmnCreator_editingVal[editIndex], gStringVar2);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_ABILITY:
        if (editIndex != 0 && page[sDebugPkmnCreatorData.selectedOption] == 0)
            x = 204;
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
        bufferPosition = StringCopy(bufferPosition, Str_Cursor2Color);
        bufferPosition = StringCopy(bufferPosition, gAbilityNames[GetAbilityBySpecies(sDebugPkmnCreatorData.data[0], DebugPkmnCreator_editingVal[editIndex])]);
        *bufferPosition = EOS;
        // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
        AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
        return;
    case VAL_METLOCATATION:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 130;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            GetMapName_HandleVersion(gStringVar2, DebugPkmnCreator_editingVal[editIndex], sDebugPkmnCreatorData.data[13]);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_BALL:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 130;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            CopyItemName(DebugPkmnCreator_editingVal[editIndex], gStringVar2);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_STATUS:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 130;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            CopyItemName(DebugPkmnCreator_editingVal[editIndex], gStringVar2);
            StringCopy(gStringVar2, StatusIndexes[DebugPkmnCreator_editingVal[editIndex]]);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_HP_EV ... VAL_SPDEF_EV:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        x = 136;
        break;
    case VAL_HP_CURRENT:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        x = 172;
        break;
    case VAL_MOVE_1 ... VAL_MOVE_4:
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6 - 4, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        if (editIndex == 0)
        {
            x = 144;
            // TODO: Fill all the way to the end?
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 120, 16);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gMoveNames[DebugPkmnCreator_editingVal[editIndex]], x, y, 0, NULL);
            x = 100;
        }
        break;
    case VAL_MOVE_1_PP ... VAL_MOVE_4_PP:
        x = 120;
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        break;
    case VAL_MOVE_1_PPUP ... VAL_MOVE_4_PPUP:
        if (TRUE)
        {
            u16 move = sDebugPkmnCreatorData.data[index - 8];
            u8 basePP = gBattleMoves[move].pp;
            basePP = basePP + ((basePP * 20 * DebugPkmnCreator_editingVal[editIndex]) / 100);

            x = 120;
            FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, DebugPkmnCreator_Options[VAL_MOVE_1_PP].digitCount * 6, 16);
            ConvertIntToDecimalStringN(gStringVar2, basePP, STR_CONV_MODE_LEADING_ZEROS, DebugPkmnCreator_Options[VAL_MOVE_1_PP].digitCount);
            // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
            AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
        }
        x = 136;
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        ConvertIntToDecimalStringN(gStringVar1, DebugPkmnCreator_editingVal[editIndex], STR_CONV_MODE_LEADING_ZEROS, data->digitCount);
        break;
    }

    bufferPosition = StringCopy(bufferPosition, Str_CursorColor);
    digitToHighlight = data->mode == EDIT_STRING ? digit : data->digitCount - digit - 1;
    for (i = 0; i < data->digitCount; i++)
    {
        if (i == digitToHighlight)
            bufferPosition = StringCopy(bufferPosition, Str_Cursor2Color);
        *bufferPosition = gStringVar1[i];
        bufferPosition++;
        if (i == digitToHighlight)
            bufferPosition = StringCopy(bufferPosition, Str_CursorColorOff);
    }
    *bufferPosition = EOS;
    // AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, FONT_NARROW, gStringVar2, x, y, 0, NULL);
    AddTextPrinterParameterized(sDebugPkmnCreatorData.menuWindowId, 1, gStringVar2, x, y, 0, NULL);
    /* TODO Re-print the following data once edited:
        * PID (is shiny)
        * Status (sleep/toxic counter)
        * Language (language name)
    */
}



static void DebugPkmnCreator_ProcessInput(u8 taskid)
{
    u16 keys = gMain.newKeys;
    struct Task* task = &gTasks[taskid];
    struct Pokemon* mons;

    if (keys & DPAD_LEFT) // Switch Pages
    {
        if (sDebugPkmnCreatorData.currentPage > 0)
            sDebugPkmnCreatorData.currentPage--;
        else
            sDebugPkmnCreatorData.currentPage = PAGE_COUNT;
        FillWindowPixelBuffer(sDebugPkmnCreatorData.menuWindowId, 0x11);
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & DPAD_RIGHT) // Switch Pages
    {
        if (sDebugPkmnCreatorData.currentPage < PAGE_COUNT)
            sDebugPkmnCreatorData.currentPage++;
        else
            sDebugPkmnCreatorData.currentPage = 0;
        FillWindowPixelBuffer(sDebugPkmnCreatorData.menuWindowId, 0x11);
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & DPAD_UP) // Switch Entry
    {
        if (sDebugPkmnCreatorData.selectedOption > 0)
            sDebugPkmnCreatorData.selectedOption--;
        else
            sDebugPkmnCreatorData.selectedOption = 5;
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & DPAD_DOWN) // Switch Entry
    {
        if (sDebugPkmnCreatorData.selectedOption < 5)
            sDebugPkmnCreatorData.selectedOption++;
        else
            sDebugPkmnCreatorData.selectedOption = 0;
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & L_BUTTON) // Switch Pokemon e.g. in Box or Party (not used on ADD)
    {
        // This check is much simpler than the one below it...
        if (sDebugPkmnCreatorData.index <= 0) return;
        sDebugPkmnCreatorData.index--;
        switch (sDebugPkmnCreatorData.mode)
        {
        case 2:
            // We can technically select slot 404 of box 1 (actually box 13 slot 14) but it's still valid behavior provided the max index was set properly above.
            mons = (struct Pokemon*) &gPokemonStoragePtr->boxes[0][sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct BoxPokemon));
            CalculateMonStats(&sDebugPkmnCreatorData.mon);
            break;
        case 1:
        case 5:
            mons = &gPlayerParty[sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
            break;
        case 3:
        case 4:
        case 10:
            mons = &gEnemyParty[sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
            break;
        default:
            break;
        }
        DebugPkmnCreator_PopulateDataStruct();
        FillWindowPixelBuffer(sDebugPkmnCreatorData.menuWindowId, 0x11);
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & R_BUTTON) // Switch Pokemon e.g. in Box or Party (not used on ADD)
    {
        u32 max_index;
        switch (sDebugPkmnCreatorData.mode)
        {
        case 0:
        case 6 ... 8:
        default:
            return;
        case 1:
        case 3 ... 5:
        case 10:
            max_index = PARTY_SIZE;
            break;
        case 2:
            max_index = TOTAL_BOXES_COUNT * IN_BOX_COUNT;
            break;
        }
        if (sDebugPkmnCreatorData.index >= max_index - 1) return;
        sDebugPkmnCreatorData.index++;
        switch (sDebugPkmnCreatorData.mode)
        {
        case 2:
            mons = (struct Pokemon*) &gPokemonStoragePtr->boxes[0][sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct BoxPokemon));
            CalculateMonStats(&sDebugPkmnCreatorData.mon);
            break;
        case 1:
        case 5:
            mons = &gPlayerParty[sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
            break;
        case 3:
        case 4:
        case 10:
            mons = &gEnemyParty[sDebugPkmnCreatorData.index];
            sDebugPkmnCreatorData.monBeingEdited = mons;
            CopyMon(&sDebugPkmnCreatorData.mon, mons, sizeof(struct Pokemon));
            break;
        }
        DebugPkmnCreator_PopulateDataStruct();
        FillWindowPixelBuffer(sDebugPkmnCreatorData.menuWindowId, 0x11);
        DebugPkmnCreator_Redraw();
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & B_BUTTON) // Close window
    {
        ClearStdWindowAndFrame(sDebugPkmnCreatorData.headerWindowId, TRUE);
        RemoveWindow(sDebugPkmnCreatorData.headerWindowId);
        ClearStdWindowAndFrame(sDebugPkmnCreatorData.menuWindowId, TRUE);
        RemoveWindow(sDebugPkmnCreatorData.menuWindowId);
        DestroyTask(taskid);
        
        if (sDebugPkmnCreatorData.mode == 9 || sDebugPkmnCreatorData.mode == 10)
            Debug_ReShowBattleDebugMenu();
        else
        {
            ScriptContext_Enable();
            PlaySE(SE_SELECT);
        }
        return;
    }
    if (keys & SELECT_BUTTON) // TODO: Re-randomize the PID and IVs, or if OT is selected, toggle OT gender
    {
        return;
    }
    if (keys & A_BUTTON) // Enter Edit Mode
    {
        u32 i;
        u8 index = DebugPkmnCreator_Pages[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption];
        if (DebugPkmnCreator_Options[index].mode != EDIT_NULL && DebugPkmnCreator_Options[index].mode != EDIT_READONLY)
        {
            DebugPkmnCreator_editingVal[0] = sDebugPkmnCreatorData.data[index];
            if (DebugPkmnCreator_Options[index].mode == EDIT_STRING)
            {
                StringCopyN(DebugPkmnCreator_NameBuffer, (u8*) DebugPkmnCreator_editingVal[0], 16);
                DebugPkmnCreator_NameBuffer[DebugPkmnCreator_Options[index].digitCount] = EOS;
            }
            else
            {
                for (i = 1; i < 4; i++)
                {
                    if (DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][i - 1] == 0xFF) 
                        break;
                    DebugPkmnCreator_editingVal[i] = sDebugPkmnCreatorData.data[DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][i - 1]];
                }
            }
            task->data[0] = 0;
            task->data[1] = 0;
            DebugPkmnCreator_EditModeRedraw(task->data[0], task->data[1]);
            task->func = DebugPkmnCreator_EditModeProcessInput;
            PlaySE(SE_SELECT);
        }
        return;
    }
    if (keys & START_BUTTON) // Confirm changes and add/edit Pokemon
    {
        DebugPkmnCreator_SetMonData();
        // TODO: Add a confirmation prompt
        if (DebugPkmnCreator_GiveToPlayer() != MON_CANT_GIVE)
            PlaySE(SE_EXP_MAX);
        else
            PlaySE(SE_BOO);

        ClearStdWindowAndFrame(sDebugPkmnCreatorData.headerWindowId, TRUE);
        RemoveWindow(sDebugPkmnCreatorData.headerWindowId);
        ClearStdWindowAndFrame(sDebugPkmnCreatorData.menuWindowId, TRUE);
        RemoveWindow(sDebugPkmnCreatorData.menuWindowId);
        DestroyTask(taskid);
        if (sDebugPkmnCreatorData.mode == 9 || sDebugPkmnCreatorData.mode == 10)
            Debug_ReShowBattleDebugMenu();
        else
            ScriptContext_Enable();
        return;
    }
}

static const u32 powersOf10[10] = {
    1,
    10,
    100,
    1000,
    10000,
    100000,
    1000000,
    10000000,
    100000000,
    1000000000,
};

static void DebugPkmnCreator_EditModeProcessInput(u8 taskid)
{
    u16 keys = gMain.newKeys;
    u16 heldKeys = gMain.newAndRepeatedKeys;
    struct Task* task = &gTasks[taskid];
    u32 i, j, min, max, index, indexBeingEdited;
    u32 z = 0;

    u16 digit = task->data[0];
    u16 editIndex = task->data[1];

    u32 x = 100;
    u32 y = sDebugPkmnCreatorData.selectedOption * 2 * 8 + 16;

    const struct EditPokemonStruct* data;
    const u8* page = DebugPkmnCreator_Pages[sDebugPkmnCreatorData.currentPage];

    if (editIndex != 0 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 1] != 0xFF) 
        index = DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 1];
    else
        index = page[sDebugPkmnCreatorData.selectedOption];

    data = &DebugPkmnCreator_Options[index];

    switch (index)
    {
    default:
        min = data->min;
        max = data->max;
        break;
    }

    if (keys & B_BUTTON) // Leave Edit Mode
    {
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, 124, 16);
        DebugPkmnCreator_Redraw();
        task->func = DebugPkmnCreator_ProcessInput;
        PlaySE(SE_SELECT);
        return;
    }

    if (keys & (A_BUTTON | START_BUTTON)) // Confirm current changes
    {
        if (data->mode == EDIT_STRING)
            StringCopyN((u8*) sDebugPkmnCreatorData.data[index], DebugPkmnCreator_NameBuffer, data->digitCount);
        else
        {
            for (i = 0; i < 4; i++)
            {
                if (i != 0)
                    indexBeingEdited = DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][i - 1];
                else 
                    indexBeingEdited = index;
                
                // Skip if: no entry, no value change or readonly value
                if (indexBeingEdited == 0xFF)
                    continue;
                if (sDebugPkmnCreatorData.data[indexBeingEdited] == DebugPkmnCreator_editingVal[i])
                    continue;
                data = &DebugPkmnCreator_Options[indexBeingEdited];
                if (data->mode == EDIT_READONLY)
                    continue;

                sDebugPkmnCreatorData.data[indexBeingEdited] = DebugPkmnCreator_editingVal[i];
                switch (indexBeingEdited)
                {
                default:
                    DebugPkmnCreator_SetMonData();
                    DebugPkmnCreator_PopulateDataStruct();
                    break;
                case VAL_SPECIES:
                    DebugPkmnCreator_SetMonData();
                    SetMonData(&sDebugPkmnCreatorData.mon, data->SetMonDataParam, &DebugPkmnCreator_editingVal[i]);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_NICKNAME, gSpeciesNames[DebugPkmnCreator_editingVal[i]]);
                    // Clear moves
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_MOVE1, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_MOVE2, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_MOVE3, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_MOVE4, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_PP1, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_PP2, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_PP3, &z);
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_PP4, &z);
                    GiveMonInitialMoveset(&sDebugPkmnCreatorData.mon);
                    // preserve level
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[DebugPkmnCreator_editingVal[i]].growthRate][sDebugPkmnCreatorData.data[15]]);
                    CalculateMonStats(&sDebugPkmnCreatorData.mon);
                    // preserve sanity bit
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_SANITY_HAS_SPECIES, &sDebugPkmnCreatorData.data[11]);
                    DebugPkmnCreator_PopulateDataStruct();
                    break;
                case VAL_PID ... VAL_SID:
                    DebugPkmnCreator_Init_SetNewMonData(FALSE);
                    DebugPkmnCreator_PopulateDataStruct();
                    break;
                case VAL_LEVEL:
                    SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[sDebugPkmnCreatorData.data[VAL_SPECIES]].growthRate][sDebugPkmnCreatorData.data[VAL_LEVEL]]);
                    CalculateMonStats(&sDebugPkmnCreatorData.mon);
                    DebugPkmnCreator_PopulateDataStruct();
                    DebugPkmnCreator_editingVal[0] = sDebugPkmnCreatorData.data[VAL_LEVEL];
                    DebugPkmnCreator_editingVal[1] = sDebugPkmnCreatorData.data[VAL_EXP];
                    break;
                case VAL_EXP:
                    SetMonData(&sDebugPkmnCreatorData.mon, data->SetMonDataParam, &DebugPkmnCreator_editingVal[i]);
                    CalculateMonStats(&sDebugPkmnCreatorData.mon);
                    DebugPkmnCreator_PopulateDataStruct();
                    break;
                case VAL_HP_IV ... VAL_SPDEF_EV:
                    if (indexBeingEdited == VAL_HP_IV || indexBeingEdited == VAL_HP_EV)
                    {
                        u16 maxHp;
                        SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_HP_IV, &DebugPkmnCreator_editingVal[0]);
                        SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_HP_EV, &DebugPkmnCreator_editingVal[1]);
                        CalculateMonStats(&sDebugPkmnCreatorData.mon);
                        maxHp = GetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_MAX_HP, NULL);
                        sDebugPkmnCreatorData.data[VAL_HP_CURRENT] = maxHp;
                        SetMonData(&sDebugPkmnCreatorData.mon, MON_DATA_HP, &maxHp);
                        DebugPkmnCreator_editingVal[2] = maxHp;
                        DebugPkmnCreator_PopulateDataStruct();
                        i = 4;
                        break;
                    }
                    
                    SetMonData(&sDebugPkmnCreatorData.mon, data->SetMonDataParam, &DebugPkmnCreator_editingVal[i]);
                    CalculateMonStats(&sDebugPkmnCreatorData.mon);
                    DebugPkmnCreator_PopulateDataStruct();
                    break;
                }
            }
        }
        FillWindowPixelRect(sDebugPkmnCreatorData.menuWindowId, 0x11, x, y, data->digitCount * 6, 16);
        DebugPkmnCreator_Redraw();
        task->func = DebugPkmnCreator_ProcessInput;
        PlaySE(SE_SELECT);
        return;
    }
    if (heldKeys & DPAD_UP) // Change selected value
    {
        if (index == 1) // PID does have a min/max, but they cover the entire 32-bit value range.
        {
            DebugPkmnCreator_editingVal[editIndex] += (1 << (4 * digit));
            DebugPkmnCreator_EditModeRedraw(digit, editIndex);
            PlaySE(SE_SELECT);
            return;
        }
        switch (data->mode)
        {
        case EDIT_NORMAL:
        default:
            if (DebugPkmnCreator_editingVal[editIndex] + powersOf10[digit] > max)
                DebugPkmnCreator_editingVal[editIndex] = data->min;
            else
                DebugPkmnCreator_editingVal[editIndex] += powersOf10[digit];
            break;
        case EDIT_NULL:
        case EDIT_READONLY:
            return;
        case EDIT_BOOL:
            if (DebugPkmnCreator_editingVal[editIndex]) return;
            DebugPkmnCreator_editingVal[editIndex] = TRUE;
            break;
        case EDIT_HEX:
            if (DebugPkmnCreator_editingVal[editIndex] + (1 << (4 * digit)) > max)
                DebugPkmnCreator_editingVal[editIndex] = data->min;
            else
                DebugPkmnCreator_editingVal[editIndex] += (1 << (4 * digit));
            break;
        case EDIT_STRING:
            DebugPkmnCreator_NameBuffer[digit]++;
            DebugPkmnCreator_NameBuffer[digit] &= 0xFF;
            if (DebugPkmnCreator_NameBuffer[digit] >= CHAR_DYNAMIC)
                DebugPkmnCreator_NameBuffer[digit] = EOS;
            else if (DebugPkmnCreator_NameBuffer[digit] >= CHAR_DYNAMIC && DebugPkmnCreator_NameBuffer[digit] < EOS)
                DebugPkmnCreator_NameBuffer[digit] = 0;
            break;
        }
        DebugPkmnCreator_EditModeRedraw(digit, editIndex);
        PlaySE(SE_SELECT);
        return;
    }
    if (heldKeys & DPAD_DOWN) // Change selected value
    {
        if (index == 1)
        {
            DebugPkmnCreator_editingVal[editIndex] -= (1 << (4 * digit));
            DebugPkmnCreator_EditModeRedraw(digit, editIndex);
            PlaySE(SE_SELECT);
            return;
        }
        switch (data->mode)
        {
        case EDIT_NORMAL:
        default:
            if ((s32) (DebugPkmnCreator_editingVal[editIndex] - powersOf10[digit]) < (s32) min)
                DebugPkmnCreator_editingVal[editIndex] = data->max;
            else
                DebugPkmnCreator_editingVal[editIndex] -= powersOf10[digit];
            break;
        case EDIT_NULL:
        case EDIT_READONLY:
            return;
        case EDIT_BOOL:
            if (!DebugPkmnCreator_editingVal[editIndex]) return;
            DebugPkmnCreator_editingVal[editIndex] = FALSE;
            break;
        case EDIT_HEX:
            if ((s32) (DebugPkmnCreator_editingVal[editIndex] - (1 << (4 * digit))) < (s32) min)
                DebugPkmnCreator_editingVal[editIndex] = data->max;
            else
                DebugPkmnCreator_editingVal[editIndex] -= (1 << (4 * digit));
            break;
        case EDIT_STRING:
            DebugPkmnCreator_NameBuffer[digit]--;
            DebugPkmnCreator_NameBuffer[digit] &= 0xFF;
            if (DebugPkmnCreator_NameBuffer[digit] >= CHAR_DYNAMIC && DebugPkmnCreator_NameBuffer[digit] < EOS)
                DebugPkmnCreator_NameBuffer[digit] = CHAR_DYNAMIC - 1;
            break;
        }
        DebugPkmnCreator_EditModeRedraw(digit, editIndex);
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & DPAD_LEFT) // Change selected digit
    {
        if (data->mode == EDIT_STRING)
        {
            if ((s16) (digit - 1) < 0)
            {
                if ((editIndex != 0 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 2] != 0xFF) || editIndex == 1)
                {
                    DebugPkmnCreator_EditModeRedraw(data->digitCount, editIndex);
                    digit = DebugPkmnCreator_Options[DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex]].digitCount - 1;
                    editIndex--;
                }
                else
                    return;
            }
            else 
                digit--;
        }
        else
        {
            if (digit >= data->digitCount - 1)
            {
                if ((editIndex != 0 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex - 2] != 0xFF) || editIndex == 1)
                {
                    DebugPkmnCreator_EditModeRedraw(data->digitCount, editIndex);
                    digit = 0;
                    editIndex--;
                }
                else 
                    return;
            }
            else 
                digit++;
        }
        DebugPkmnCreator_EditModeRedraw(digit, editIndex);
        task->data[0] = digit;
        task->data[1] = editIndex;
        PlaySE(SE_SELECT);
        return;
    }
    if (keys & DPAD_RIGHT) // Change selected digit
    {
        if (data->mode == EDIT_STRING)
        {
            if (digit >= data->digitCount - 1)
            {
                if (editIndex + 1 < 4 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex] != 0xFF)
                {
                    DebugPkmnCreator_EditModeRedraw(data->digitCount, editIndex);
                    digit = 0;
                    editIndex++;
                }
                else
                    return;
            }
            else
                digit++;
        }
        else 
        {
            if ((s16) (digit - 1) < 0) 
            {
                if (editIndex + 1 < 4 && DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex] != 0xFF && DebugPkmnCreator_Options[DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex]].mode != EDIT_READONLY)
                {
                    DebugPkmnCreator_EditModeRedraw(data->digitCount, editIndex);
                    digit = DebugPkmnCreator_Options[DebugPkmnCreator_AltIndexes[sDebugPkmnCreatorData.currentPage][sDebugPkmnCreatorData.selectedOption][editIndex]].digitCount - 1;
                    editIndex++;
                }
                else
                    return;
            }
            else
                digit--;
        }
        DebugPkmnCreator_EditModeRedraw(digit, editIndex);
        task->data[0] = digit;
        task->data[1] = editIndex;
        PlaySE(SE_SELECT);
        return;
    }
    // TODO: Select resets the value to default
}

// This is basically a copy of GiveMonToPlayer, except without setting the OT details to the player's.
static u8 DebugPkmnCreator_GiveToPlayer(void)
{
    u32 i;
    struct Pokemon* mon = &sDebugPkmnCreatorData.mon;
    switch (sDebugPkmnCreatorData.mode)
    {
    case 0:
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == 0)
                break;
        }

        if (i >= PARTY_SIZE)
            return SendMonToPC(mon);

        CopyMon(&gPlayerParty[i], mon, sizeof(*mon));
        gPlayerPartyCount = i + 1;
        return MON_GIVEN_TO_PARTY;
    case 1:
    case 3 ... 5:
    case 10:
        CopyMon(sDebugPkmnCreatorData.monBeingEdited, mon, sizeof(struct Pokemon));
        return MON_GIVEN_TO_PARTY;
    case 2:
        CopyMon(sDebugPkmnCreatorData.monBeingEdited, mon, sizeof(struct BoxPokemon));
        return MON_GIVEN_TO_PC;
    case 6:
    case 9:
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gEnemyParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
                break;
        }

        if (i >= PARTY_SIZE)
            return MON_CANT_GIVE;

        CopyMon(&gEnemyParty[i], mon, sizeof(*mon));
        gEnemyPartyCount = i + 1;
        return MON_GIVEN_TO_PARTY;
    case 7:
    case 8:
    default:
        return MON_CANT_GIVE;
    }
}

#endif