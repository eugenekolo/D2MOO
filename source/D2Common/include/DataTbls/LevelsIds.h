#pragma once 

enum D2C_Levels
{
	LEVEL_NONE = 0,
	LEVEL_ROGUEENCAMPMENT = 1,
	LEVEL_BLOODMOOR,
	LEVEL_COLDPLAINS,
	LEVEL_STONYFIELD,
	LEVEL_DARKWOOD,
	LEVEL_BLACKMARSH,
	LEVEL_TAMOEHIGHLAND,
	LEVEL_DENOFEVIL,
	LEVEL_CAVELEV1,
	LEVEL_UNDERGROUNDPASSAGELEV1,
	LEVEL_HOLELEV1,
	LEVEL_PITLEV1,
	LEVEL_CAVELEV2,
	LEVEL_UNDERGROUNDPASSAGELEV2,
	LEVEL_HOLELEV2,
	LEVEL_PITLEV2,
	LEVEL_BURIALGROUNDS,
	LEVEL_CRYPT,
	LEVEL_MAUSOLEUM,
	LEVEL_FORGOTTENTOWER,
	LEVEL_TOWERCELLARLEV1,
	LEVEL_TOWERCELLARLEV2,
	LEVEL_TOWERCELLARLEV3,
	LEVEL_TOWERCELLARLEV4,
	LEVEL_TOWERCELLARLEV5,
	LEVEL_MONASTERYGATE,
	LEVEL_OUTERCLOISTER,
	LEVEL_BARRACKS,
	LEVEL_JAILLEV1,
	LEVEL_JAILLEV2,
	LEVEL_JAILLEV3,
	LEVEL_INNERCLOISTER,
	LEVEL_CATHEDRAL,
	LEVEL_CATACOMBSLEV1,
	LEVEL_CATACOMBSLEV2,
	LEVEL_CATACOMBSLEV3,
	LEVEL_CATACOMBSLEV4,
	LEVEL_TRISTRAM,
	LEVEL_MOOMOOFARM,
	LEVEL_LUTGHOLEIN,
	LEVEL_ROCKYWASTE,
	LEVEL_DRYHILLS,
	LEVEL_FAROASIS,
	LEVEL_LOSTCITY,
	LEVEL_VALLEYOFSNAKES,
	LEVEL_CANYONOFTHEMAGI,
	LEVEL_SEWERSLEV1,
	LEVEL_SEWERSLEV2,
	LEVEL_SEWERSLEV3,
	LEVEL_HAREMLEV1,
	LEVEL_HAREMLEV2,
	LEVEL_PALACECELLARLEV1,
	LEVEL_PALACECELLARLEV2,
	LEVEL_PALACECELLARLEV3,
	LEVEL_STONYTOMBLEV1,
	LEVEL_HALLSOFTHEDEADLEV1,
	LEVEL_HALLSOFTHEDEADLEV2,
	LEVEL_CLAWVIPERTEMPLELEV1,
	LEVEL_STONYTOMBLEV2,
	LEVEL_HALLSOFTHEDEADLEV3,
	LEVEL_CLAWVIPERTEMPLELEV2,
	LEVEL_MAGGOTLAIRLEV1,
	LEVEL_MAGGOTLAIRLEV2,
	LEVEL_MAGGOTLAIRLEV3,
	LEVEL_ANCIENTTUNNELS,
	LEVEL_TALRASHASTOMB1,
	LEVEL_TALRASHASTOMB2,
	LEVEL_TALRASHASTOMB3,
	LEVEL_TALRASHASTOMB4,
	LEVEL_TALRASHASTOMB5,
	LEVEL_TALRASHASTOMB6,
	LEVEL_TALRASHASTOMB7,
	LEVEL_DURIELSLAIR,
	LEVEL_ARCANESANCTUARY,
	LEVEL_KURASTDOCKTOWN,
	LEVEL_SPIDERFOREST,
	LEVEL_GREATMARSH,
	LEVEL_FLAYERJUNGLE,
	LEVEL_LOWERKURAST,
	LEVEL_KURASTBAZAAR,
	LEVEL_UPPERKURAST,
	LEVEL_KURASTCAUSEWAY,
	LEVEL_TRAVINCAL,
	LEVEL_SPIDERCAVE,
	LEVEL_SPIDERCAVERN,
	LEVEL_SWAMPYPITLEV1,
	LEVEL_SWAMPYPITLEV2,
	LEVEL_FLAYERDUNGEONLEV1,
	LEVEL_FLAYERDUNGEONLEV2,
	LEVEL_SWAMPYPITLEV3,
	LEVEL_FLAYERDUNGEONLEV3,
	LEVEL_SEWERSA3LEV1,
	LEVEL_SEWERSA3LEV2,
	LEVEL_RUINEDTEMPLE,
	LEVEL_DISUSEDFANE,
	LEVEL_FORGOTTENRELIQUARY,
	LEVEL_FORGOTTENTEMPLE,
	LEVEL_RUINEDFANE,
	LEVEL_DISUSEDRELIQUARY,
	LEVEL_DURANCEOFHATELEV1,
	LEVEL_DURANCEOFHATELEV2,
	LEVEL_DURANCEOFHATELEV3,
	LEVEL_THEPANDEMONIUMFORTRESS,
	LEVEL_OUTERSTEPPES,
	LEVEL_PLAINSOFDESPAIR,
	LEVEL_CITYOFTHEDAMNED,
	LEVEL_RIVEROFFLAME,
	LEVEL_CHAOSSANCTUM,
	LEVEL_HARROGATH,
	LEVEL_BLOODYFOOTHILLS,
	LEVEL_ID_ACT5_BARRICADE_1,
	LEVEL_ARREATPLATEAU,
	LEVEL_CRYSTALIZEDCAVERNLEV1,
	LEVEL_CELLAROFPITY,
	LEVEL_CRYSTALIZEDCAVERNLEV2,
	LEVEL_ECHOCHAMBER,
	LEVEL_TUNDRAWASTELANDS,
	LEVEL_GLACIALCAVESLEV1,
	LEVEL_GLACIALCAVESLEV2,
	LEVEL_ROCKYSUMMIT,
	LEVEL_NIHLATHAKSTEMPLE,
	LEVEL_HALLSOFANGUISH,
	LEVEL_HALLSOFDEATHSCALLING,
	LEVEL_HALLSOFVAUGHT,
	LEVEL_HELL1,
	LEVEL_HELL2,
	LEVEL_HELL3,
	LEVEL_THEWORLDSTONEKEEPLEV1,
	LEVEL_THEWORLDSTONEKEEPLEV2,
	LEVEL_THEWORLDSTONEKEEPLEV3,
	LEVEL_THRONEOFDESTRUCTION,
	LEVEL_THEWORLDSTONECHAMBER
};

enum D2C_LvlPrestIds
{
	LVLPREST_NONE, // PRESET_DEF_NONE in the original game
	LVLPREST_ACT1_TOWN_1,
	LVLPREST_ACT1_TOWN_1_TRANSITION_E,
	LVLPREST_ACT1_TOWN_1_TRANSITION_S,
	LVLPREST_ACT1_WILD_BORDER_1,
	LVLPREST_ACT1_WILD_BORDER_2,
	LVLPREST_ACT1_WILD_BORDER_3,
	LVLPREST_ACT1_WILD_BORDER_4,
	LVLPREST_ACT1_WILD_BORDER_5,
	LVLPREST_ACT1_WILD_BORDER_6,
	LVLPREST_ACT1_WILD_BORDER_7,
	LVLPREST_ACT1_WILD_BORDER_8,
	LVLPREST_ACT1_WILD_BORDER_9,
	LVLPREST_ACT1_WILD_BORDER_10,
	LVLPREST_ACT1_WILD_BORDER_11,
	LVLPREST_ACT1_WILD_BORDER_12,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_2,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_3,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_5,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_6A,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_6B,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_6C,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_7,
	LVLPREST_ACT1_WILD_CLIFF_BORDER_10,
	LVLPREST_ACT1_WILD_CLIFF_CAVE_RIGHT,
	LVLPREST_ACT1_WILD_CLIFF_CAVE_LEFT,
	LVLPREST_ACT1_RIVER_UPPER,
	LVLPREST_ACT1_RIVER_LOWER,
	LVLPREST_ACT1_BRIDGE,
	LVLPREST_ACT1_STONE_FILL_1,
	LVLPREST_ACT1_STONE_FILL_2,
	LVLPREST_ACT1_CORRAL_FILL,
	LVLPREST_ACT1_FENCE_FILL_1,
	LVLPREST_ACT1_FENCE_FILL_2,
	LVLPREST_ACT1_FENCE_FILL_3,
	LVLPREST_ACT1_FENCE_FILL_4,
	LVLPREST_ACT1_FENCE_FILL_5,
	LVLPREST_ACT1_FENCE_FILL_6,
	LVLPREST_ACT1_SWAMP_FILL_1,
	LVLPREST_ACT1_SWAMP_FILL_2,
	LVLPREST_ACT1_TREE_FILL,
	LVLPREST_ACT1_RUIN,
	LVLPREST_ACT1_FALLEN_CAMP_1,
	LVLPREST_ACT1_FALLEN_CAMP_2,
	LVLPREST_ACT1_FALLEN_CAMP_BISHIBOSH,
	LVLPREST_ACT1_CAMP,
	LVLPREST_ACT1_POND,
	LVLPREST_ACT1_COTTAGES_1,
	LVLPREST_ACT1_COTTAGES_2,
	LVLPREST_ACT1_COTTAGES_3,
	LVLPREST_ACT1_BIVOUAC,
	LVLPREST_ACT1_CAVE_ENTRANCE,
	LVLPREST_ACT1_DOE_ENTRANCE,
	LVLPREST_ACT1_CAVE_W,
	LVLPREST_ACT1_CAVE_E,
	LVLPREST_ACT1_CAVE_EW,
	LVLPREST_ACT1_CAVE_S,
	LVLPREST_ACT1_CAVE_SW,
	LVLPREST_ACT1_CAVE_SE,
	LVLPREST_ACT1_CAVE_SEW,
	LVLPREST_ACT1_CAVE_N,
	LVLPREST_ACT1_CAVE_NW,
	LVLPREST_ACT1_CAVE_NE,
	LVLPREST_ACT1_CAVE_NEW,
	LVLPREST_ACT1_CAVE_NS,
	LVLPREST_ACT1_CAVE_NSW,
	LVLPREST_ACT1_CAVE_NSE,
	LVLPREST_ACT1_CAVE_NSEW,
	LVLPREST_ACT1_CAVE_THEME_W,
	LVLPREST_ACT1_CAVE_THEME_E,
	LVLPREST_ACT1_CAVE_THEME_EW,
	LVLPREST_ACT1_CAVE_THEME_S,
	LVLPREST_ACT1_CAVE_THEME_SW,
	LVLPREST_ACT1_CAVE_THEME_SE,
	LVLPREST_ACT1_CAVE_THEME_SEW,
	LVLPREST_ACT1_CAVE_THEME_N,
	LVLPREST_ACT1_CAVE_THEME_NW,
	LVLPREST_ACT1_CAVE_THEME_NE,
	LVLPREST_ACT1_CAVE_THEME_NEW,
	LVLPREST_ACT1_CAVE_THEME_NS,
	LVLPREST_ACT1_CAVE_THEME_NSW,
	LVLPREST_ACT1_CAVE_THEME_NSE,
	LVLPREST_ACT1_CAVE_THEME_NSEW,
	LVLPREST_ACT1_CAVE_PREV_W,
	LVLPREST_ACT1_CAVE_PREV_E,
	LVLPREST_ACT1_CAVE_PREV_S,
	LVLPREST_ACT1_CAVE_PREV_N,
	LVLPREST_ACT1_CAVE_NEXT_W,
	LVLPREST_ACT1_CAVE_NEXT_E,
	LVLPREST_ACT1_CAVE_NEXT_S,
	LVLPREST_ACT1_CAVE_NEXT_N,
	LVLPREST_ACT1_CAVE_DOWN_W,
	LVLPREST_ACT1_CAVE_DOWN_E,
	LVLPREST_ACT1_CAVE_DOWN_S,
	LVLPREST_ACT1_CAVE_DOWN_N,
	LVLPREST_ACT1_CAVE_DEN_OF_EVIL_W,
	LVLPREST_ACT1_CAVE_DEN_OF_EVIL_E,
	LVLPREST_ACT1_CAVE_DEN_OF_EVIL_S,
	LVLPREST_ACT1_CAVE_DEN_OF_EVIL_N,
	LVLPREST_ACT1_CAVE_COLDCROW_W,
	LVLPREST_ACT1_CAVE_COLDCROW_E,
	LVLPREST_ACT1_CAVE_COLDCROW_S,
	LVLPREST_ACT1_CAVE_COLDCROW_N,
	LVLPREST_ACT1_CAVE_TREASURE_1,
	LVLPREST_ACT1_CAVE_TREASURE_2,
	LVLPREST_ACT1_CAVE_TREASURE_3,
	LVLPREST_ACT1_CAVE_TREASURE_4,
	LVLPREST_ACT1_CAVE_TREASURE_5,
	LVLPREST_ACT1_GRAVEYARD,
	LVLPREST_ACT1_CRYPT_W,
	LVLPREST_ACT1_CRYPT_E,
	LVLPREST_ACT1_CRYPT_EW,
	LVLPREST_ACT1_CRYPT_S,
	LVLPREST_ACT1_CRYPT_SW,
	LVLPREST_ACT1_CRYPT_SE,
	LVLPREST_ACT1_CRYPT_SEW,
	LVLPREST_ACT1_CRYPT_N,
	LVLPREST_ACT1_CRYPT_NW,
	LVLPREST_ACT1_CRYPT_NE,
	LVLPREST_ACT1_CRYPT_NEW,
	LVLPREST_ACT1_CRYPT_NS,
	LVLPREST_ACT1_CRYPT_NSW,
	LVLPREST_ACT1_CRYPT_NSE,
	LVLPREST_ACT1_CRYPT_NSEW,
	LVLPREST_ACT1_CRYPT_THEME_W,
	LVLPREST_ACT1_CRYPT_THEME_E,
	LVLPREST_ACT1_CRYPT_THEME_EW,
	LVLPREST_ACT1_CRYPT_THEME_S,
	LVLPREST_ACT1_CRYPT_THEME_SW,
	LVLPREST_ACT1_CRYPT_THEME_SE,
	LVLPREST_ACT1_CRYPT_THEME_SEW,
	LVLPREST_ACT1_CRYPT_THEME_N,
	LVLPREST_ACT1_CRYPT_THEME_NW,
	LVLPREST_ACT1_CRYPT_THEME_NE,
	LVLPREST_ACT1_CRYPT_THEME_NEW,
	LVLPREST_ACT1_CRYPT_THEME_NS,
	LVLPREST_ACT1_CRYPT_THEME_NSW,
	LVLPREST_ACT1_CRYPT_THEME_NSE,
	LVLPREST_ACT1_CRYPT_THEME_NSEW,
	LVLPREST_ACT1_CRYPT_PREV_W,
	LVLPREST_ACT1_CRYPT_PREV_E,
	LVLPREST_ACT1_CRYPT_PREV_S,
	LVLPREST_ACT1_CRYPT_PREV_N,
	LVLPREST_ACT1_CRYPT_NEXT_W,
	LVLPREST_ACT1_CRYPT_NEXT_E,
	LVLPREST_ACT1_CRYPT_NEXT_S,
	LVLPREST_ACT1_CRYPT_NEXT_N,
	LVLPREST_ACT1_CRYPT_BONEBREAK_W,
	LVLPREST_ACT1_CRYPT_BONEBREAK_E,
	LVLPREST_ACT1_CRYPT_BONEBREAK_S,
	LVLPREST_ACT1_CRYPT_BONEBREAK_N,
	LVLPREST_ACT1_CRYPT_CHEST_W,
	LVLPREST_ACT1_CRYPT_CHEST_E,
	LVLPREST_ACT1_CRYPT_CHEST_S,
	LVLPREST_ACT1_CRYPT_CHEST_N,
	LVLPREST_ACT1_CRYPT_PORTAL_W,
	LVLPREST_ACT1_CRYPT_PORTAL_E,
	LVLPREST_ACT1_CRYPT_PORTAL_S,
	LVLPREST_ACT1_CRYPT_PORTAL_N,
	LVLPREST_ACT1_CRYPT_COUNTESS_X,
	LVLPREST_ACT1_CAIRN_STONES,
	LVLPREST_ACT1_INIFUS,
	LVLPREST_ACT1_TOWER_TOME,
	LVLPREST_ACT1_TOWER_1,
	LVLPREST_ACT1_TOWER_2,
	LVLPREST_ACT1_MON_FRONT,
	LVLPREST_ACT1_COURTYARD_1,
	LVLPREST_ACT1_BARRACKS_COURT_CONNECT,
	LVLPREST_ACT1_BARRACKS_W,
	LVLPREST_ACT1_BARRACKS_E,
	LVLPREST_ACT1_BARRACKS_EW,
	LVLPREST_ACT1_BARRACKS_S,
	LVLPREST_ACT1_BARRACKS_SW,
	LVLPREST_ACT1_BARRACKS_SE,
	LVLPREST_ACT1_BARRACKS_SEW,
	LVLPREST_ACT1_BARRACKS_N,
	LVLPREST_ACT1_BARRACKS_NW,
	LVLPREST_ACT1_BARRACKS_NE,
	LVLPREST_ACT1_BARRACKS_NEW,
	LVLPREST_ACT1_BARRACKS_NS,
	LVLPREST_ACT1_BARRACKS_NSW,
	LVLPREST_ACT1_BARRACKS_NSE,
	LVLPREST_ACT1_BARRACKS_NSEW,
	LVLPREST_ACT1_BARRACKS_THEME_W,
	LVLPREST_ACT1_BARRACKS_THEME_E,
	LVLPREST_ACT1_BARRACKS_THEME_EW,
	LVLPREST_ACT1_BARRACKS_THEME_S,
	LVLPREST_ACT1_BARRACKS_THEME_SW,
	LVLPREST_ACT1_BARRACKS_THEME_SE,
	LVLPREST_ACT1_BARRACKS_THEME_SEW,
	LVLPREST_ACT1_BARRACKS_THEME_N,
	LVLPREST_ACT1_BARRACKS_THEME_NW,
	LVLPREST_ACT1_BARRACKS_THEME_NE,
	LVLPREST_ACT1_BARRACKS_THEME_NEW,
	LVLPREST_ACT1_BARRACKS_THEME_NS,
	LVLPREST_ACT1_BARRACKS_THEME_NSW,
	LVLPREST_ACT1_BARRACKS_THEME_NSE,
	LVLPREST_ACT1_BARRACKS_THEME_NSEW,
	LVLPREST_ACT1_BARRACKS_NEXT_W,
	LVLPREST_ACT1_BARRACKS_NEXT_E,
	LVLPREST_ACT1_BARRACKS_NEXT_S,
	LVLPREST_ACT1_BARRACKS_NEXT_N,
	LVLPREST_ACT1_BARRACKS_FORGE_W,
	LVLPREST_ACT1_BARRACKS_FORGE_E,
	LVLPREST_ACT1_BARRACKS_FORGE_S,
	LVLPREST_ACT1_BARRACKS_FORGE_N,
	LVLPREST_ACT1_JAIL_W,
	LVLPREST_ACT1_JAIL_E,
	LVLPREST_ACT1_JAIL_EW,
	LVLPREST_ACT1_JAIL_S,
	LVLPREST_ACT1_JAIL_SW,
	LVLPREST_ACT1_JAIL_SE,
	LVLPREST_ACT1_JAIL_SEW,
	LVLPREST_ACT1_JAIL_N,
	LVLPREST_ACT1_JAIL_NW,
	LVLPREST_ACT1_JAIL_NE,
	LVLPREST_ACT1_JAIL_NEW,
	LVLPREST_ACT1_JAIL_NS,
	LVLPREST_ACT1_JAIL_NSW,
	LVLPREST_ACT1_JAIL_NSE,
	LVLPREST_ACT1_JAIL_NSEW,
	LVLPREST_ACT1_JAIL_THEME_W,
	LVLPREST_ACT1_JAIL_THEME_E,
	LVLPREST_ACT1_JAIL_THEME_EW,
	LVLPREST_ACT1_JAIL_THEME_S,
	LVLPREST_ACT1_JAIL_THEME_SW,
	LVLPREST_ACT1_JAIL_THEME_SE,
	LVLPREST_ACT1_JAIL_THEME_SEW,
	LVLPREST_ACT1_JAIL_THEME_N,
	LVLPREST_ACT1_JAIL_THEME_NW,
	LVLPREST_ACT1_JAIL_THEME_NE,
	LVLPREST_ACT1_JAIL_THEME_NEW,
	LVLPREST_ACT1_JAIL_THEME_NS,
	LVLPREST_ACT1_JAIL_THEME_NSW,
	LVLPREST_ACT1_JAIL_THEME_NSE,
	LVLPREST_ACT1_JAIL_THEME_NSEW,
	LVLPREST_ACT1_JAIL_PREV_W,
	LVLPREST_ACT1_JAIL_PREV_E,
	LVLPREST_ACT1_JAIL_PREV_S,
	LVLPREST_ACT1_JAIL_PREV_N,
	LVLPREST_ACT1_JAIL_NEXT_W,
	LVLPREST_ACT1_JAIL_NEXT_E,
	LVLPREST_ACT1_JAIL_NEXT_S,
	LVLPREST_ACT1_JAIL_NEXT_N,
	LVLPREST_ACT1_JAIL_CATH_W,
	LVLPREST_ACT1_JAIL_CATH_E,
	LVLPREST_ACT1_JAIL_CATH_S,
	LVLPREST_ACT1_JAIL_CATH_N,
	LVLPREST_ACT1_JAIL_WAYPOINT_W,
	LVLPREST_ACT1_JAIL_WAYPOINT_E,
	LVLPREST_ACT1_JAIL_WAYPOINT_S,
	LVLPREST_ACT1_JAIL_WAYPOINT_N,
	LVLPREST_ACT1_JAIL_PITSPAWN_W,
	LVLPREST_ACT1_JAIL_PITSPAWN_E,
	LVLPREST_ACT1_JAIL_PITSPAWN_S,
	LVLPREST_ACT1_JAIL_PITSPAWN_N,
	LVLPREST_ACT1_COURTYARD_2,
	LVLPREST_ACT1_CATHEDRAL,
	LVLPREST_ACT1_CATACOMBS_W,
	LVLPREST_ACT1_CATACOMBS_E,
	LVLPREST_ACT1_CATACOMBS_EW,
	LVLPREST_ACT1_CATACOMBS_S,
	LVLPREST_ACT1_CATACOMBS_SW,
	LVLPREST_ACT1_CATACOMBS_SE,
	LVLPREST_ACT1_CATACOMBS_SEW,
	LVLPREST_ACT1_CATACOMBS_N,
	LVLPREST_ACT1_CATACOMBS_NW,
	LVLPREST_ACT1_CATACOMBS_NE,
	LVLPREST_ACT1_CATACOMBS_NEW,
	LVLPREST_ACT1_CATACOMBS_NS,
	LVLPREST_ACT1_CATACOMBS_NSW,
	LVLPREST_ACT1_CATACOMBS_NSE,
	LVLPREST_ACT1_CATACOMBS_NSEW,
	LVLPREST_ACT1_CATACOMBS_THEME_W,
	LVLPREST_ACT1_CATACOMBS_THEME_E,
	LVLPREST_ACT1_CATACOMBS_THEME_EW,
	LVLPREST_ACT1_CATACOMBS_THEME_S,
	LVLPREST_ACT1_CATACOMBS_THEME_SW,
	LVLPREST_ACT1_CATACOMBS_THEME_SE,
	LVLPREST_ACT1_CATACOMBS_THEME_SEW,
	LVLPREST_ACT1_CATACOMBS_THEME_N,
	LVLPREST_ACT1_CATACOMBS_THEME_NW,
	LVLPREST_ACT1_CATACOMBS_THEME_NE,
	LVLPREST_ACT1_CATACOMBS_THEME_NEW,
	LVLPREST_ACT1_CATACOMBS_THEME_NS,
	LVLPREST_ACT1_CATACOMBS_THEME_NSW,
	LVLPREST_ACT1_CATACOMBS_THEME_NSE,
	LVLPREST_ACT1_CATACOMBS_THEME_NSEW,
	LVLPREST_ACT1_CATACOMBS_PREV_EW,
	LVLPREST_ACT1_CATACOMBS_PREV_NS,
	LVLPREST_ACT1_CATACOMBS_PREV_NSEW,
	LVLPREST_ACT1_CATACOMBS_NEXT_W,
	LVLPREST_ACT1_CATACOMBS_NEXT_E,
	LVLPREST_ACT1_CATACOMBS_NEXT_S,
	LVLPREST_ACT1_CATACOMBS_NEXT_N,
	LVLPREST_ACT1_CATACOMBS_WAYPOINT_W,
	LVLPREST_ACT1_CATACOMBS_WAYPOINT_E,
	LVLPREST_ACT1_CATACOMBS_WAYPOINT_S,
	LVLPREST_ACT1_CATACOMBS_WAYPOINT_N,
	LVLPREST_ACT1_ANDARIEL,
	LVLPREST_ACT1_TRISTRAM,
	LVLPREST_ACT2_TOWN,
	LVLPREST_ACT2_SEWER_W,
	LVLPREST_ACT2_SEWER_E,
	LVLPREST_ACT2_SEWER_EW,
	LVLPREST_ACT2_SEWER_S,
	LVLPREST_ACT2_SEWER_SW,
	LVLPREST_ACT2_SEWER_SE,
	LVLPREST_ACT2_SEWER_SEW,
	LVLPREST_ACT2_SEWER_N,
	LVLPREST_ACT2_SEWER_NW,
	LVLPREST_ACT2_SEWER_NE,
	LVLPREST_ACT2_SEWER_NEW,
	LVLPREST_ACT2_SEWER_NS,
	LVLPREST_ACT2_SEWER_NSW,
	LVLPREST_ACT2_SEWER_NSE,
	LVLPREST_ACT2_SEWER_NSEW,
	LVLPREST_ACT2_SEWER_THEME_W,
	LVLPREST_ACT2_SEWER_THEME_E,
	LVLPREST_ACT2_SEWER_THEME_EW,
	LVLPREST_ACT2_SEWER_THEME_S,
	LVLPREST_ACT2_SEWER_THEME_SW,
	LVLPREST_ACT2_SEWER_THEME_SE,
	LVLPREST_ACT2_SEWER_THEME_SEW,
	LVLPREST_ACT2_SEWER_THEME_N,
	LVLPREST_ACT2_SEWER_THEME_NW,
	LVLPREST_ACT2_SEWER_THEME_NE,
	LVLPREST_ACT2_SEWER_THEME_NEW,
	LVLPREST_ACT2_SEWER_THEME_NS,
	LVLPREST_ACT2_SEWER_THEME_NSW,
	LVLPREST_ACT2_SEWER_THEME_NSE,
	LVLPREST_ACT2_SEWER_THEME_NSEW,
	LVLPREST_ACT2_SEWER_PREV_W,
	LVLPREST_ACT2_SEWER_PREV_E,
	LVLPREST_ACT2_SEWER_PREV_S,
	LVLPREST_ACT2_SEWER_PREV_N,
	LVLPREST_ACT2_SEWER_PREV_NS,
	LVLPREST_ACT2_SEWER_NEXT_W,
	LVLPREST_ACT2_SEWER_NEXT_E,
	LVLPREST_ACT2_SEWER_NEXT_S,
	LVLPREST_ACT2_SEWER_NEXT_N,
	LVLPREST_ACT2_SEWER_RADAMENTS_LAIR_W,
	LVLPREST_ACT2_SEWER_RADAMENTS_LAIR_E,
	LVLPREST_ACT2_SEWER_RADAMENTS_LAIR_S,
	LVLPREST_ACT2_SEWER_RADAMENTS_LAIR_N,
	LVLPREST_ACT2_SEWER_WAYPOINT_W,
	LVLPREST_ACT2_SEWER_WAYPOINT_E,
	LVLPREST_ACT2_SEWER_WAYPOINT_S,
	LVLPREST_ACT2_SEWER_WAYPOINT_N,
	LVLPREST_ACT2_SEWER_CHEST_W,
	LVLPREST_ACT2_SEWER_CHEST_E,
	LVLPREST_ACT2_SEWER_CHEST_S,
	LVLPREST_ACT2_SEWER_CHEST_N,
	LVLPREST_ACT2_HAREM,
	LVLPREST_ACT2_CORRUPT_HAREM_NE,
	LVLPREST_ACT2_CORRUPT_HAREM_SE,
	LVLPREST_ACT2_CORRUPT_HAREM_SW,
	LVLPREST_ACT2_CORRUPT_HAREM_NW,
	LVLPREST_ACT2_BASEMENT_NE,
	LVLPREST_ACT2_BASEMENT_SE,
	LVLPREST_ACT2_BASEMENT_SW,
	LVLPREST_ACT2_BASEMENT_NW,
	LVLPREST_ACT2_DESERT_TRANSITION_W,
	LVLPREST_ACT2_DESERT_TRANSITION_N,
	LVLPREST_ACT2_DESERT_BORDER_1,
	LVLPREST_ACT2_DESERT_BORDER_2,
	LVLPREST_ACT2_DESERT_BORDER_3,
	LVLPREST_ACT2_DESERT_BORDER_4,
	LVLPREST_ACT2_DESERT_BORDER_5,
	LVLPREST_ACT2_DESERT_BORDER_6,
	LVLPREST_ACT2_DESERT_BORDER_7,
	LVLPREST_ACT2_DESERT_BORDER_8,
	LVLPREST_ACT2_DESERT_BORDER_9,
	LVLPREST_ACT2_DESERT_BORDER_10,
	LVLPREST_ACT2_DESERT_BORDER_11,
	LVLPREST_ACT2_DESERT_BORDER_12,
	LVLPREST_ACT2_DESERT_CLIFF_RIGHT_ENDS,
	LVLPREST_ACT2_DESERT_CLIFF_RIGHT_WALL,
	LVLPREST_ACT2_DESERT_CLIFF_RIGHT_PATH,
	LVLPREST_ACT2_DESERT_CLIFF_LEFT_ENDS,
	LVLPREST_ACT2_DESERT_CLIFF_LEFT_WALL,
	LVLPREST_ACT2_DESERT_CLIFF_LEFT_PATH,
	LVLPREST_ACT2_DESERT_CLIFF_TOP,
	LVLPREST_ACT2_DESERT_CLIFF_RIGHT_KING_TOMB,
	LVLPREST_ACT2_DESERT_CLIFF_RIGHT_KING_ENDS,
	LVLPREST_ACT2_DESERT_CLIFF_LEFT_KING_TOMB,
	LVLPREST_ACT2_DESERT_CLIFF_LEFT_KING_ENDS,
	LVLPREST_ACT2_DESERT_CLIFF_TOP_KING_TOMB,
	LVLPREST_ACT2_DESERT_TOMB_1,
	LVLPREST_ACT2_DESERT_TOMB_2,
	LVLPREST_ACT2_DESERT_LAIR_1,
	LVLPREST_ACT2_DESERT_LAIR_2,
	LVLPREST_ACT2_DESERT_VALLEY_RUIN_1,
	LVLPREST_ACT2_DESERT_VALLEY_RUIN_2,
	LVLPREST_ACT2_DESERT_VALLEY_WARP,
	LVLPREST_ACT2_DESERT_OASIS_1,
	LVLPREST_ACT2_DESERT_OASIS_2,
	LVLPREST_ACT2_DESERT_OASIS_3,
	LVLPREST_ACT2_DESERT_FILL_MESA_1,
	LVLPREST_ACT2_DESERT_FILL_HEAD_1,
	LVLPREST_ACT2_DESERT_FILL_HEAD_2,
	LVLPREST_ACT2_DESERT_FILL_BONE_1,
	LVLPREST_ACT2_DESERT_FILL_BONE_2,
	LVLPREST_ACT2_DESERT_FILL_WAGON_1,
	LVLPREST_ACT2_DESERT_FILL_BERMS_1,
	LVLPREST_ACT2_DESERT_FILL_BERMS_2,
	LVLPREST_ACT2_DESERT_FILL_BERMS_3,
	LVLPREST_ACT2_DESERT_FILL_BERMS_4,
	LVLPREST_ACT2_DESERT_RUINS_16X16,
	LVLPREST_ACT2_DESERT_RUINS_16X08,
	LVLPREST_ACT2_DESERT_RUINS_08X16,
	LVLPREST_ACT2_DESERT_RUINS_08X08,
	LVLPREST_ACT2_DESERT_RUINS_SEWER,
	LVLPREST_ACT2_DESERT_RUINS_ELDER,
	LVLPREST_ACT2_TOMB_W,
	LVLPREST_ACT2_TOMB_E,
	LVLPREST_ACT2_TOMB_EW,
	LVLPREST_ACT2_TOMB_S,
	LVLPREST_ACT2_TOMB_SW,
	LVLPREST_ACT2_TOMB_SE,
	LVLPREST_ACT2_TOMB_SEW,
	LVLPREST_ACT2_TOMB_N,
	LVLPREST_ACT2_TOMB_NW,
	LVLPREST_ACT2_TOMB_NE,
	LVLPREST_ACT2_TOMB_NEW,
	LVLPREST_ACT2_TOMB_NS,
	LVLPREST_ACT2_TOMB_NSW,
	LVLPREST_ACT2_TOMB_NSE,
	LVLPREST_ACT2_TOMB_NSEW,
	LVLPREST_ACT2_TOMB_THEME_W,
	LVLPREST_ACT2_TOMB_THEME_E,
	LVLPREST_ACT2_TOMB_THEME_EW,
	LVLPREST_ACT2_TOMB_THEME_S,
	LVLPREST_ACT2_TOMB_THEME_SW,
	LVLPREST_ACT2_TOMB_THEME_SE,
	LVLPREST_ACT2_TOMB_THEME_SEW,
	LVLPREST_ACT2_TOMB_THEME_N,
	LVLPREST_ACT2_TOMB_THEME_NW,
	LVLPREST_ACT2_TOMB_THEME_NE,
	LVLPREST_ACT2_TOMB_THEME_NEW,
	LVLPREST_ACT2_TOMB_THEME_NS,
	LVLPREST_ACT2_TOMB_THEME_NSW,
	LVLPREST_ACT2_TOMB_THEME_NSE,
	LVLPREST_ACT2_TOMB_THEME_NSEW,
	LVLPREST_ACT2_TOMB_PREV_SEW,
	LVLPREST_ACT2_TOMB_PREV_NEW,
	LVLPREST_ACT2_TOMB_PREV_NSW,
	LVLPREST_ACT2_TOMB_PREV_NSE,
	LVLPREST_ACT2_TOMB_NEXT_W,
	LVLPREST_ACT2_TOMB_NEXT_E,
	LVLPREST_ACT2_TOMB_NEXT_S,
	LVLPREST_ACT2_TOMB_NEXT_N,
	LVLPREST_ACT2_TOMB_TREASURE_W,
	LVLPREST_ACT2_TOMB_TREASURE_E,
	LVLPREST_ACT2_TOMB_TREASURE_S,
	LVLPREST_ACT2_TOMB_TREASURE_N,
	LVLPREST_ACT2_TOMB_CUBE_W,
	LVLPREST_ACT2_TOMB_CUBE_E,
	LVLPREST_ACT2_TOMB_CUBE_S,
	LVLPREST_ACT2_TOMB_CUBE_N,
	LVLPREST_ACT2_TOMB_TALRASHA_W,
	LVLPREST_ACT2_TOMB_TALRASHA_E,
	LVLPREST_ACT2_TOMB_TALRASHA_S,
	LVLPREST_ACT2_TOMB_TALRASHA_N,
	LVLPREST_ACT2_TOMB_LEATHERARM_W,
	LVLPREST_ACT2_TOMB_LEATHERARM_E,
	LVLPREST_ACT2_TOMB_LEATHERARM_S,
	LVLPREST_ACT2_TOMB_LEATHERARM_N,
	LVLPREST_ACT2_TOMB_KAA_W,
	LVLPREST_ACT2_TOMB_KAA_E,
	LVLPREST_ACT2_TOMB_KAA_S,
	LVLPREST_ACT2_TOMB_KAA_N,
	LVLPREST_ACT2_TOMB_CHEST_W,
	LVLPREST_ACT2_TOMB_CHEST_E,
	LVLPREST_ACT2_TOMB_CHEST_S,
	LVLPREST_ACT2_TOMB_CHEST_N,
	LVLPREST_ACT2_TOMB_WAYPOINT_W,
	LVLPREST_ACT2_TOMB_WAYPOINT_E,
	LVLPREST_ACT2_TOMB_WAYPOINT_S,
	LVLPREST_ACT2_TOMB_WAYPOINT_N,
	LVLPREST_ACT2_TOMB_TAINTED_SUN_X,
	LVLPREST_ACT2_DURIELS_LAIR,
	LVLPREST_ACT2_LAIR_W,
	LVLPREST_ACT2_LAIR_E,
	LVLPREST_ACT2_LAIR_EW,
	LVLPREST_ACT2_LAIR_S,
	LVLPREST_ACT2_LAIR_SW,
	LVLPREST_ACT2_LAIR_SE,
	LVLPREST_ACT2_LAIR_SEW,
	LVLPREST_ACT2_LAIR_N,
	LVLPREST_ACT2_LAIR_NW,
	LVLPREST_ACT2_LAIR_NE,
	LVLPREST_ACT2_LAIR_NEW,
	LVLPREST_ACT2_LAIR_NS,
	LVLPREST_ACT2_LAIR_NSW,
	LVLPREST_ACT2_LAIR_NSE,
	LVLPREST_ACT2_LAIR_NSEW,
	LVLPREST_ACT2_LAIR_PREV_W,
	LVLPREST_ACT2_LAIR_PREV_E,
	LVLPREST_ACT2_LAIR_PREV_S,
	LVLPREST_ACT2_LAIR_PREV_N,
	LVLPREST_ACT2_LAIR_NEXT_W,
	LVLPREST_ACT2_LAIR_NEXT_E,
	LVLPREST_ACT2_LAIR_NEXT_S,
	LVLPREST_ACT2_LAIR_NEXT_N,
	LVLPREST_ACT2_LAIR_TREASURE_W,
	LVLPREST_ACT2_LAIR_TREASURE_E,
	LVLPREST_ACT2_LAIR_TREASURE_S,
	LVLPREST_ACT2_LAIR_TREASURE_N,
	LVLPREST_ACT2_LAIR_TIGHT_SPOT_S,
	LVLPREST_ACT2_ARCANE_W,
	LVLPREST_ACT2_ARCANE_E,
	LVLPREST_ACT2_ARCANE_EW,
	LVLPREST_ACT2_ARCANE_S,
	LVLPREST_ACT2_ARCANE_SW,
	LVLPREST_ACT2_ARCANE_SE,
	LVLPREST_ACT2_ARCANE_SEW,
	LVLPREST_ACT2_ARCANE_N,
	LVLPREST_ACT2_ARCANE_NW,
	LVLPREST_ACT2_ARCANE_NE,
	LVLPREST_ACT2_ARCANE_NEW,
	LVLPREST_ACT2_ARCANE_NS,
	LVLPREST_ACT2_ARCANE_NSW,
	LVLPREST_ACT2_ARCANE_NSE,
	LVLPREST_ACT2_ARCANE_NSEW,
	LVLPREST_ACT2_ARCANE_SUMMONER_W,
	LVLPREST_ACT2_ARCANE_SUMMONER_E,
	LVLPREST_ACT2_ARCANE_SUMMONER_S,
	LVLPREST_ACT2_ARCANE_SUMMONER_N,
	LVLPREST_ACT3_TOWN,
	LVLPREST_ACT3_JUNGLE_W,
	LVLPREST_ACT3_JUNGLE_E,
	LVLPREST_ACT3_JUNGLE_EW,
	LVLPREST_ACT3_JUNGLE_S,
	LVLPREST_ACT3_JUNGLE_SW,
	LVLPREST_ACT3_JUNGLE_SE,
	LVLPREST_ACT3_JUNGLE_SEW,
	LVLPREST_ACT3_JUNGLE_N,
	LVLPREST_ACT3_JUNGLE_NW,
	LVLPREST_ACT3_JUNGLE_NE,
	LVLPREST_ACT3_JUNGLE_NEW,
	LVLPREST_ACT3_JUNGLE_NS,
	LVLPREST_ACT3_JUNGLE_NSW,
	LVLPREST_ACT3_JUNGLE_NSE,
	LVLPREST_ACT3_JUNGLE_NSEW,
	LVLPREST_ACT3_JUNGLE_W_E,
	LVLPREST_ACT3_JUNGLE_W_S,
	LVLPREST_ACT3_JUNGLE_W_N,
	LVLPREST_ACT3_JUNGLE_E_W,
	LVLPREST_ACT3_JUNGLE_E_S,
	LVLPREST_ACT3_JUNGLE_E_N,
	LVLPREST_ACT3_JUNGLE_EW_S,
	LVLPREST_ACT3_JUNGLE_EW_N,
	LVLPREST_ACT3_JUNGLE_S_W,
	LVLPREST_ACT3_JUNGLE_S_E,
	LVLPREST_ACT3_JUNGLE_S_N,
	LVLPREST_ACT3_JUNGLE_SW_E,
	LVLPREST_ACT3_JUNGLE_SW_N,
	LVLPREST_ACT3_JUNGLE_SE_W,
	LVLPREST_ACT3_JUNGLE_SE_N,
	LVLPREST_ACT3_JUNGLE_SEW_N,
	LVLPREST_ACT3_JUNGLE_N_W,
	LVLPREST_ACT3_JUNGLE_N_E,
	LVLPREST_ACT3_JUNGLE_N_S,
	LVLPREST_ACT3_JUNGLE_NW_E,
	LVLPREST_ACT3_JUNGLE_NW_S,
	LVLPREST_ACT3_JUNGLE_NE_W,
	LVLPREST_ACT3_JUNGLE_NE_S,
	LVLPREST_ACT3_JUNGLE_NEW_S,
	LVLPREST_ACT3_JUNGLE_NS_W,
	LVLPREST_ACT3_JUNGLE_NS_E,
	LVLPREST_ACT3_JUNGLE_NSW_E,
	LVLPREST_ACT3_JUNGLE_NSE_W,
	LVLPREST_ACT3_JUNGLE_HEAD,
	LVLPREST_ACT3_JUNGLE_TAIL,
	LVLPREST_ACT3_CLEARING_WEBBY_W,
	LVLPREST_ACT3_CLEARING_WEBBY_E,
	LVLPREST_ACT3_CLEARING_WEBBY_EW,
	LVLPREST_ACT3_CLEARING_WEBBY_S,
	LVLPREST_ACT3_CLEARING_WEBBY_SW,
	LVLPREST_ACT3_CLEARING_WEBBY_SE,
	LVLPREST_ACT3_CLEARING_WEBBY_N,
	LVLPREST_ACT3_CLEARING_WEBBY_NW,
	LVLPREST_ACT3_CLEARING_WEBBY_NE,
	LVLPREST_ACT3_CLEARING_WEBBY_NS,
	LVLPREST_ACT3_CLEARING_BOGGY_W,
	LVLPREST_ACT3_CLEARING_BOGGY_E,
	LVLPREST_ACT3_CLEARING_BOGGY_EW,
	LVLPREST_ACT3_CLEARING_BOGGY_S,
	LVLPREST_ACT3_CLEARING_BOGGY_SW,
	LVLPREST_ACT3_CLEARING_BOGGY_SE,
	LVLPREST_ACT3_CLEARING_BOGGY_N,
	LVLPREST_ACT3_CLEARING_BOGGY_NW,
	LVLPREST_ACT3_CLEARING_BOGGY_NE,
	LVLPREST_ACT3_CLEARING_BOGGY_NS,
	LVLPREST_ACT3_CLEARING_PYGMY_W,
	LVLPREST_ACT3_CLEARING_PYGMY_E,
	LVLPREST_ACT3_CLEARING_PYGMY_EW,
	LVLPREST_ACT3_CLEARING_PYGMY_S,
	LVLPREST_ACT3_CLEARING_PYGMY_SW,
	LVLPREST_ACT3_CLEARING_PYGMY_SE,
	LVLPREST_ACT3_CLEARING_PYGMY_N,
	LVLPREST_ACT3_CLEARING_PYGMY_NW,
	LVLPREST_ACT3_CLEARING_PYGMY_NE,
	LVLPREST_ACT3_CLEARING_PYGMY_NS,
	LVLPREST_ACT3_SLUMS_BORDER_N,
	LVLPREST_ACT3_SLUMS_BORDER_S,
	LVLPREST_ACT3_SLUMS_BORDER_E,
	LVLPREST_ACT3_SLUMS_BORDER_W,
	LVLPREST_ACT3_SLUMS_BORDER_NE,
	LVLPREST_ACT3_SLUMS_BORDER_NW,
	LVLPREST_ACT3_SLUMS_BORDER_SE,
	LVLPREST_ACT3_SLUMS_BORDER_SW,
	LVLPREST_ACT3_SLUMS_GATE_N,
	LVLPREST_ACT3_SLUMS_GATE_S,
	LVLPREST_ACT3_SLUMS_08X08,
	LVLPREST_ACT3_SLUMS_08X16,
	LVLPREST_ACT3_SLUMS_16X08,
	LVLPREST_ACT3_SLUMS_16X16,
	LVLPREST_ACT3_BURBS_BORDER_N,
	LVLPREST_ACT3_BURBS_BORDER_S,
	LVLPREST_ACT3_BURBS_BORDER_E,
	LVLPREST_ACT3_BURBS_BORDER_W,
	LVLPREST_ACT3_BURBS_BORDER_NE,
	LVLPREST_ACT3_BURBS_BORDER_NW,
	LVLPREST_ACT3_BURBS_BORDER_SE,
	LVLPREST_ACT3_BURBS_BORDER_SW,
	LVLPREST_ACT3_BURBS_GATE_N,
	LVLPREST_ACT3_BURBS_GATE_S,
	LVLPREST_ACT3_BURBS_SEWER,
	LVLPREST_ACT3_BURBS_TEMPLE,
	LVLPREST_ACT3_BURBS_WAYPOINT,
	LVLPREST_ACT3_BURBS_08X08,
	LVLPREST_ACT3_BURBS_08X16,
	LVLPREST_ACT3_BURBS_16X08,
	LVLPREST_ACT3_BURBS_16X16,
	LVLPREST_ACT3_METRO_BORDER_N,
	LVLPREST_ACT3_METRO_BORDER_S,
	LVLPREST_ACT3_METRO_BORDER_E,
	LVLPREST_ACT3_METRO_BORDER_W,
	LVLPREST_ACT3_METRO_BORDER_NE,
	LVLPREST_ACT3_METRO_BORDER_NW,
	LVLPREST_ACT3_METRO_BORDER_SE,
	LVLPREST_ACT3_METRO_BORDER_SW,
	LVLPREST_ACT3_METRO_GATE_N,
	LVLPREST_ACT3_METRO_GATE_S,
	LVLPREST_ACT3_METRO_SEWER,
	LVLPREST_ACT3_METROTEMPLE,
	LVLPREST_ACT3_METRO_08X08,
	LVLPREST_ACT3_METRO_08X16,
	LVLPREST_ACT3_METRO_16X08,
	LVLPREST_ACT3_METRO_16X16,
	LVLPREST_ACT3_BRIDGE,
	LVLPREST_ACT3_TRAVINCAL_NW,
	LVLPREST_ACT3_TRAVINCAL_N,
	LVLPREST_ACT3_TRAVINCAL_NE,
	LVLPREST_ACT3_TRAVINCAL_SW,
	LVLPREST_ACT3_TRAVINCAL_S,
	LVLPREST_ACT3_TRAVINCAL_SE,
	LVLPREST_ACT3_SPIDER_SW,
	LVLPREST_ACT3_SPIDER_SE,
	LVLPREST_ACT3_SPIDER_NW,
	LVLPREST_ACT3_SPIDER_NE,
	LVLPREST_ACT3_SPIDER_CHEST_NW,
	LVLPREST_ACT3_SPIDER_CHEST_NE,
	LVLPREST_ACT3_DUNGEON_W,
	LVLPREST_ACT3_DUNGEON_E,
	LVLPREST_ACT3_DUNGEON_EW,
	LVLPREST_ACT3_DUNGEON_S,
	LVLPREST_ACT3_DUNGEON_SW,
	LVLPREST_ACT3_DUNGEON_SE,
	LVLPREST_ACT3_DUNGEON_SEW,
	LVLPREST_ACT3_DUNGEON_N,
	LVLPREST_ACT3_DUNGEON_NW,
	LVLPREST_ACT3_DUNGEON_NE,
	LVLPREST_ACT3_DUNGEON_NEW,
	LVLPREST_ACT3_DUNGEON_NS,
	LVLPREST_ACT3_DUNGEON_NSW,
	LVLPREST_ACT3_DUNGEON_NSE,
	LVLPREST_ACT3_DUNGEON_NSEW,
	LVLPREST_ACT3_DUNGEON_THEME_W,
	LVLPREST_ACT3_DUNGEON_THEME_E,
	LVLPREST_ACT3_DUNGEON_THEME_EW,
	LVLPREST_ACT3_DUNGEON_THEME_S,
	LVLPREST_ACT3_DUNGEON_THEME_SW,
	LVLPREST_ACT3_DUNGEON_THEME_SE,
	LVLPREST_ACT3_DUNGEON_THEME_SEW,
	LVLPREST_ACT3_DUNGEON_THEME_N,
	LVLPREST_ACT3_DUNGEON_THEME_NW,
	LVLPREST_ACT3_DUNGEON_THEME_NE,
	LVLPREST_ACT3_DUNGEON_THEME_NEW,
	LVLPREST_ACT3_DUNGEON_THEME_NS,
	LVLPREST_ACT3_DUNGEON_THEME_NSW,
	LVLPREST_ACT3_DUNGEON_THEME_NSE,
	LVLPREST_ACT3_DUNGEON_THEME_NSEW,
	LVLPREST_ACT3_DUNGEON_PREV_W,
	LVLPREST_ACT3_DUNGEON_PREV_E,
	LVLPREST_ACT3_DUNGEON_PREV_S,
	LVLPREST_ACT3_DUNGEON_PREV_N,
	LVLPREST_ACT3_DUNGEON_NEXT_W,
	LVLPREST_ACT3_DUNGEON_NEXT_E,
	LVLPREST_ACT3_DUNGEON_NEXT_S,
	LVLPREST_ACT3_DUNGEON_NEXT_N,
	LVLPREST_ACT3_DUNGEON_TREASURE_1,
	LVLPREST_ACT3_DUNGEON_TREASURE_2,
	LVLPREST_ACT3_SEWER_W,
	LVLPREST_ACT3_SEWER_E,
	LVLPREST_ACT3_SEWER_EW,
	LVLPREST_ACT3_SEWER_S,
	LVLPREST_ACT3_SEWER_SW,
	LVLPREST_ACT3_SEWER_SE,
	LVLPREST_ACT3_SEWER_SEW,
	LVLPREST_ACT3_SEWER_N,
	LVLPREST_ACT3_SEWER_NW,
	LVLPREST_ACT3_SEWER_NE,
	LVLPREST_ACT3_SEWER_NEW,
	LVLPREST_ACT3_SEWER_NS,
	LVLPREST_ACT3_SEWER_NSW,
	LVLPREST_ACT3_SEWER_NSE,
	LVLPREST_ACT3_SEWER_NSEW,
	LVLPREST_ACT3_SEWER_THEME_W,
	LVLPREST_ACT3_SEWER_THEME_E,
	LVLPREST_ACT3_SEWER_THEME_EW,
	LVLPREST_ACT3_SEWER_THEME_S,
	LVLPREST_ACT3_SEWER_THEME_SW,
	LVLPREST_ACT3_SEWER_THEME_SE,
	LVLPREST_ACT3_SEWER_THEME_SEW,
	LVLPREST_ACT3_SEWER_THEME_N,
	LVLPREST_ACT3_SEWER_THEME_NW,
	LVLPREST_ACT3_SEWER_THEME_NE,
	LVLPREST_ACT3_SEWER_THEME_NEW,
	LVLPREST_ACT3_SEWER_THEME_NS,
	LVLPREST_ACT3_SEWER_THEME_NSW,
	LVLPREST_ACT3_SEWER_THEME_NSE,
	LVLPREST_ACT3_SEWER_THEME_NSEW,
	LVLPREST_ACT3_SEWER_PREV_SW,
	LVLPREST_ACT3_SEWER_PREV_SE,
	LVLPREST_ACT3_SEWER_PREV_NW,
	LVLPREST_ACT3_SEWER_PREV_NE,
	LVLPREST_ACT3_SEWER_DRAIN_W,
	LVLPREST_ACT3_SEWER_DRAIN_E,
	LVLPREST_ACT3_SEWER_DRAIN_S,
	LVLPREST_ACT3_SEWER_DRAIN_N,
	LVLPREST_ACT3_SEWER_CHEST_W,
	LVLPREST_ACT3_SEWER_CHEST_E,
	LVLPREST_ACT3_SEWER_CHEST_S,
	LVLPREST_ACT3_SEWER_CHEST_N,
	LVLPREST_ACT3_SEWER_TREASURE_X,
	LVLPREST_ACT3_TEMPLE_1,
	LVLPREST_ACT3_TEMPLE_2,
	LVLPREST_ACT3_TEMPLE_3,
	LVLPREST_ACT3_TEMPLE_4,
	LVLPREST_ACT3_TEMPLE_5,
	LVLPREST_ACT3_TEMPLE_6,
	LVLPREST_ACT3_MEPHISTO_W,
	LVLPREST_ACT3_MEPHISTO_E,
	LVLPREST_ACT3_MEPHISTO_EW,
	LVLPREST_ACT3_MEPHISTO_S,
	LVLPREST_ACT3_MEPHISTO_SW,
	LVLPREST_ACT3_MEPHISTO_SE,
	LVLPREST_ACT3_MEPHISTO_SEW,
	LVLPREST_ACT3_MEPHISTO_N,
	LVLPREST_ACT3_MEPHISTO_NW,
	LVLPREST_ACT3_MEPHISTO_NE,
	LVLPREST_ACT3_MEPHISTO_NEW,
	LVLPREST_ACT3_MEPHISTO_NS,
	LVLPREST_ACT3_MEPHISTO_NSW,
	LVLPREST_ACT3_MEPHISTO_NSE,
	LVLPREST_ACT3_MEPHISTO_NSEW,
	LVLPREST_ACT3_MEPHISTO_THEME_W,
	LVLPREST_ACT3_MEPHISTO_THEME_E,
	LVLPREST_ACT3_MEPHISTO_THEME_EW,
	LVLPREST_ACT3_MEPHISTO_THEME_S,
	LVLPREST_ACT3_MEPHISTO_THEME_SW,
	LVLPREST_ACT3_MEPHISTO_THEME_SE,
	LVLPREST_ACT3_MEPHISTO_THEME_SEW,
	LVLPREST_ACT3_MEPHISTO_THEME_N,
	LVLPREST_ACT3_MEPHISTO_THEME_NW,
	LVLPREST_ACT3_MEPHISTO_THEME_NE,
	LVLPREST_ACT3_MEPHISTO_THEME_NEW,
	LVLPREST_ACT3_MEPHISTO_THEME_NS,
	LVLPREST_ACT3_MEPHISTO_THEME_NSW,
	LVLPREST_ACT3_MEPHISTO_THEME_NSE,
	LVLPREST_ACT3_MEPHISTO_THEME_NSEW,
	LVLPREST_ACT3_MEPHISTO_PREV_W,
	LVLPREST_ACT3_MEPHISTO_PREV_E,
	LVLPREST_ACT3_MEPHISTO_PREV_S,
	LVLPREST_ACT3_MEPHISTO_PREV_N,
	LVLPREST_ACT3_MEPHISTO_NEXT_W,
	LVLPREST_ACT3_MEPHISTO_NEXT_E,
	LVLPREST_ACT3_MEPHISTO_NEXT_S,
	LVLPREST_ACT3_MEPHISTO_NEXT_N,
	LVLPREST_ACT3_MEPHISTO_WAYPOINT_W,
	LVLPREST_ACT3_MEPHISTO_WAYPOINT_E,
	LVLPREST_ACT3_MEPHISTO_WAYPOINT_S,
	LVLPREST_ACT3_MEPHISTO_WAYPOINT_N,
	LVLPREST_ACT3_MEPHISTO_COMPLEX,
	LVLPREST_ACT4_FORTRESS,
	LVLPREST_ACT4_FORTRESS_TRANSITION,
	LVLPREST_ACT4_MESA_BORDER_1,
	LVLPREST_ACT4_MESA_BORDER_2,
	LVLPREST_ACT4_MESA_BORDER_3,
	LVLPREST_ACT4_MESA_BORDER_4,
	LVLPREST_ACT4_MESA_BORDER_5,
	LVLPREST_ACT4_MESA_BORDER_6,
	LVLPREST_ACT4_MESA_BORDER_7,
	LVLPREST_ACT4_MESA_BORDER_8,
	LVLPREST_ACT4_MESA_BORDER_9,
	LVLPREST_ACT4_MESA_BORDER_10,
	LVLPREST_ACT4_MESA_BORDER_11,
	LVLPREST_ACT4_MESA_BORDER_12,
	LVLPREST_ACT4_MESA_WARP,
	LVLPREST_ACT4_MESA_1_24X24,
	LVLPREST_ACT4_MESA_1_16X16,
	LVLPREST_ACT4_MESA_1_16X08,
	LVLPREST_ACT4_MESA_1_08X16,
	LVLPREST_ACT4_MESA_1_08X08,
	LVLPREST_ACT4_MESA_2_24X24,
	LVLPREST_ACT4_MESA_2_16X16,
	LVLPREST_ACT4_MESA_2_16X08,
	LVLPREST_ACT4_MESA_2_08X16,
	LVLPREST_ACT4_MESA_2_08X08,
	LVLPREST_ACT4_MESA_2_IZUAL,
	LVLPREST_ACT4_MESA_3_24X24,
	LVLPREST_ACT4_MESA_3_16X16,
	LVLPREST_ACT4_MESA_3_16X08,
	LVLPREST_ACT4_MESA_3_08X16,
	LVLPREST_ACT4_MESA_3_08X08,
	LVLPREST_ACT4_PITS_1_16X16,
	LVLPREST_ACT4_PITS_1_16X08,
	LVLPREST_ACT4_PITS_1_08X16,
	LVLPREST_ACT4_PITS_1_08X08,
	LVLPREST_ACT4_PITS_2_16X16,
	LVLPREST_ACT4_PITS_2_16X08,
	LVLPREST_ACT4_PITS_2_08X16,
	LVLPREST_ACT4_PITS_2_08X08,
	LVLPREST_ACT4_LAVA_X,
	LVLPREST_ACT4_LAVA_W,
	LVLPREST_ACT4_LAVA_E,
	LVLPREST_ACT4_LAVA_EW,
	LVLPREST_ACT4_LAVA_S,
	LVLPREST_ACT4_LAVA_SW,
	LVLPREST_ACT4_LAVA_SE,
	LVLPREST_ACT4_LAVA_SEW,
	LVLPREST_ACT4_LAVA_N,
	LVLPREST_ACT4_LAVA_NW,
	LVLPREST_ACT4_LAVA_NE,
	LVLPREST_ACT4_LAVA_NEW,
	LVLPREST_ACT4_LAVA_NS,
	LVLPREST_ACT4_LAVA_NSW,
	LVLPREST_ACT4_LAVA_NSE,
	LVLPREST_ACT4_LAVA_NSEW,
	LVLPREST_ACT4_LAVA_WARP_N,
	LVLPREST_ACT4_LAVA_FORGE_W,
	LVLPREST_ACT4_LAVA_FORGE_E,
	LVLPREST_ACT4_BRIDGE_1,
	LVLPREST_ACT4_BRIDGE_2,
	LVLPREST_ACT4_DIABLO_ENTRY,
	LVLPREST_ACT4_DIABLO_ARM_W,
	LVLPREST_ACT4_DIABLO_ARM_E,
	LVLPREST_ACT4_DIABLO_ARM_S,
	LVLPREST_ACT4_DIABLO_ARM_N,
	LVLPREST_ACT4_DIABLO_HEART,
	LVLPREST_ACT5_TOWN,
	LVLPREST_ACT5_TEMPLE_FINAL_ROOM,
	LVLPREST_ACT5_SIEGE_TO_TOWN,
	LVLPREST_ACT5_SIEGE_STRIP_1,
	LVLPREST_ACT5_SIEGE_STRIP_2,
	LVLPREST_ACT5_SIEGE_STRIP_3,
	LVLPREST_ACT5_SIEGE_STRIP_4,
	LVLPREST_ACT5_SIEGE_STRIP_5,
	LVLPREST_ACT5_SIEGE_STRIP_6,
	LVLPREST_ACT5_SIEGE_STRIP_7,
	LVLPREST_ACT5_SIEGE_STRIP_8,
	LVLPREST_ACT5_SIEGE_STRIP_9,
	LVLPREST_ACT5_SIEGE_STRIP_10,
	LVLPREST_ACT5_SIEGE_STRIP_11,
	LVLPREST_ACT5_SIEGE_STRIP_12,
	LVLPREST_ACT5_SIEGE_STRIP_13,
	LVLPREST_ACT5_SIEGE_TO_BARRICADE,
	LVLPREST_ACT5_BARRICADE_TO_SIEGE,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_1,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_2,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_3,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_4,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_5,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_6,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_7,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_8,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_9,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_10,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_11,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_12,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_1,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_2,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_3,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_4,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_5,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_6,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_7,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_8,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_9,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_10,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_11,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_12,
	LVLPREST_ACT5_BARRICADE_RAVINE_CLIFF_BORDER_5,
	LVLPREST_ACT5_BARRICADE_CLIFF_RAVINE_BORDER_7,
	LVLPREST_ACT5_BARRICADE_ENTRANCE_16X32,
	LVLPREST_ACT5_BARRICADE_ENTRANCE_32X16,
	LVLPREST_ACT5_BARRICADE_EXIT_32X16,
	LVLPREST_ACT5_BARRICADE_EXIT_16X32,
	LVLPREST_ACT5_BARRICADE_FROM_CAVE_32X16,
	LVLPREST_ACT5_BARRICADE_FROM_CAVE_16X32,
	LVLPREST_ACT5_BARRICADE_TO_CAVE_32X16,
	LVLPREST_ACT5_BARRICADE_TO_CAVE_16X32,
	LVLPREST_ACT5_BARRICADE_1,
	LVLPREST_ACT5_BARRICADE_2,
	LVLPREST_ACT5_BARRICADE_3,
	LVLPREST_ACT5_BARRICADE_4,
	LVLPREST_ACT5_BARRICADE_5,
	LVLPREST_ACT5_BARRICADE_6,
	LVLPREST_ACT5_BARRICADE_7,
	LVLPREST_ACT5_BARRICADE_8,
	LVLPREST_ACT5_BARRICADE_9,
	LVLPREST_ACT5_BARRICADE_10,
	LVLPREST_ACT5_BARRICADE_11,
	LVLPREST_ACT5_BARRICADE_12,
	LVLPREST_ACT5_BARRICADE_13,
	LVLPREST_ACT5_BARRICADE_14,
	LVLPREST_ACT5_BARRICADE_15,
	LVLPREST_ACT5_BARRICADE_16,
	LVLPREST_ACT5_BARRICADE_PRISON_1,
	LVLPREST_ACT5_BARRICADE_PRISON_2,
	LVLPREST_ACT5_BARRICADE_PRISON_3,
	LVLPREST_ACT5_BARRICADE_PRISON_4,
	LVLPREST_ACT5_BARRICADE_PRISON_5,
	LVLPREST_ACT5_BARRICADE_PRISON_6,
	LVLPREST_ACT5_BARRICADE_PRISON_7,
	LVLPREST_ACT5_BARRICADE_PRISON_8,
	LVLPREST_ACT5_BARRICADE_BUILDING,
	LVLPREST_ACT5_BARRICADE_FILLER,
	LVLPREST_ACT5_BARRICADE_FILLER_TREASURE,
	LVLPREST_ACT5_BARRICADE_RUINS_N_1,
	LVLPREST_ACT5_BARRICADE_RUINS_N_2,
	LVLPREST_ACT5_BARRICADE_RUINS_N_TREASURE,
	LVLPREST_ACT5_BARRICADE_RUINS_W_1,
	LVLPREST_ACT5_BARRICADE_RUINS_W_2,
	LVLPREST_ACT5_BARRICADE_RUINS_W_TREASURE,
	LVLPREST_ACT5_BARRICADE_SNOW_LAKE__1,
	LVLPREST_ACT5_BARRICADE_SNOW_LAKE__2,
	LVLPREST_ACT5_BARRICADE_SNOW_OTHER,
	LVLPREST_ACT5_BARRICADE_SNOW_TREASURE,
	LVLPREST_ACT5_BARRICADE_SNOW_UNIQUE,
	LVLPREST_ACT5_BARRICADE_WAYPOINT_DIRT,
	LVLPREST_ACT5_BARRICADE_WAYPOINT_SNOW,
	LVLPREST_ACT5_BARRICADE_HELL_PORTAL_N,
	LVLPREST_ACT5_BARRICADE_HELL_PORTAL_W,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_1_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_2_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_3_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_4_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_5_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_6_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_7_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_8_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_9_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_10_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_11_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_BORDER_12_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_1_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_2_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_3_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_4_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_5_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_6_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_7_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_8_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_9_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_10_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_11_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_BORDER_12_SNOW,
	LVLPREST_ACT5_BARRICADE_RAVINE_CLIFF_BORDER_5_SNOW,
	LVLPREST_ACT5_BARRICADE_CLIFF_RAVINE_BORDER_7_SNOW,
	LVLPREST_ACT5_BARRICADE_FROM_CAVE_32X16_SNOW,
	LVLPREST_ACT5_BARRICADE_FROM_CAVE_16X32_SNOW,
	LVLPREST_ACT5_BARRICADE_TO_CAVE_32X16_SNOW,
	LVLPREST_ACT5_BARRICADE_TO_CAVE_16X32_SNOW,
	LVLPREST_ACT5_BARRICADE_1_SNOW,
	LVLPREST_ACT5_BARRICADE_2_SNOW,
	LVLPREST_ACT5_BARRICADE_3_SNOW,
	LVLPREST_ACT5_BARRICADE_4_SNOW,
	LVLPREST_ACT5_BARRICADE_5_SNOW,
	LVLPREST_ACT5_BARRICADE_6_SNOW,
	LVLPREST_ACT5_BARRICADE_7_SNOW,
	LVLPREST_ACT5_BARRICADE_8_SNOW,
	LVLPREST_ACT5_BARRICADE_9_SNOW,
	LVLPREST_ACT5_BARRICADE_10_SNOW,
	LVLPREST_ACT5_BARRICADE_11_SNOW,
	LVLPREST_ACT5_BARRICADE_12_SNOW,
	LVLPREST_ACT5_BARRICADE_13_SNOW,
	LVLPREST_ACT5_BARRICADE_14_SNOW,
	LVLPREST_ACT5_BARRICADE_15_SNOW,
	LVLPREST_ACT5_BARRICADE_16_SNOW,
	LVLPREST_ACT5_ICE_W,
	LVLPREST_ACT5_ICE_E,
	LVLPREST_ACT5_ICE_EW,
	LVLPREST_ACT5_ICE_S,
	LVLPREST_ACT5_ICE_SW,
	LVLPREST_ACT5_ICE_SE,
	LVLPREST_ACT5_ICE_SEW,
	LVLPREST_ACT5_ICE_N,
	LVLPREST_ACT5_ICE_NW,
	LVLPREST_ACT5_ICE_NE,
	LVLPREST_ACT5_ICE_NEW,
	LVLPREST_ACT5_ICE_NS,
	LVLPREST_ACT5_ICE_NSW,
	LVLPREST_ACT5_ICE_NSE,
	LVLPREST_ACT5_ICE_NSEW,
	LVLPREST_ACT5_ICE_PREV_W,
	LVLPREST_ACT5_ICE_PREV_E,
	LVLPREST_ACT5_ICE_PREV_S,
	LVLPREST_ACT5_ICE_PREV_N,
	LVLPREST_ACT5_ICE_NEXT_W,
	LVLPREST_ACT5_ICE_NEXT_E,
	LVLPREST_ACT5_ICE_NEXT_S,
	LVLPREST_ACT5_ICE_NEXT_N,
	LVLPREST_ACT5_ICE_DOWN_W,
	LVLPREST_ACT5_ICE_DOWN_E,
	LVLPREST_ACT5_ICE_DOWN_S,
	LVLPREST_ACT5_ICE_DOWN_N,
	LVLPREST_ACT5_ICE_THEME_W,
	LVLPREST_ACT5_ICE_THEME_E,
	LVLPREST_ACT5_ICE_THEME_S,
	LVLPREST_ACT5_ICE_THEME_N,
	LVLPREST_ACT5_ICE_WAYPOINT_N,
	LVLPREST_ACT5_ICE_WAYPOINT_S,
	LVLPREST_ACT5_ICE_WAYPOINT_E,
	LVLPREST_ACT5_ICE_WAYPOINT_W,
	LVLPREST_ACT5_ICE_RIVER_A,
	LVLPREST_ACT5_ICE_RIVER_B,
	LVLPREST_ACT5_ICE_POOL_A,
	LVLPREST_ACT5_ICE_POOL_B,
	LVLPREST_ACT5_TEMPLE_NE,
	LVLPREST_ACT5_TEMPLE_NW,
	LVLPREST_ACT5_TEMPLE_SE_UP,
	LVLPREST_ACT5_TEMPLE_SW,
	LVLPREST_ACT5_TEMPLE_NE_DOWN,
	LVLPREST_ACT5_TEMPLE_NW_DOWN,
	LVLPREST_ACT5_TEMPLE_SW_DOWN,
	LVLPREST_ACT5_TEMPLE_NE_WAYPOINT,
	LVLPREST_ACT5_TEMPLE_NW_WAYPOINT,
	LVLPREST_ACT5_TEMPLE_SE_WAYPOINT,
	LVLPREST_ACT5_TEMPLE_SW_WAYPOINT,
	LVLPREST_ACT5_LAVA_N,
	LVLPREST_ACT5_LAVA_S,
	LVLPREST_ACT5_LAVA_E,
	LVLPREST_ACT5_LAVA_W,
	LVLPREST_ACT5_LAVA_EW,
	LVLPREST_ACT5_LAVA_NS,
	LVLPREST_ACT5_BAAL_W,
	LVLPREST_ACT5_BAAL_E,
	LVLPREST_ACT5_BAAL_EW,
	LVLPREST_ACT5_BAAL_S,
	LVLPREST_ACT5_BAAL_SW,
	LVLPREST_ACT5_BAAL_SE,
	LVLPREST_ACT5_BAAL_SEW,
	LVLPREST_ACT5_BAAL_N,
	LVLPREST_ACT5_BAAL_NW,
	LVLPREST_ACT5_BAAL_NE,
	LVLPREST_ACT5_BAAL_NEW,
	LVLPREST_ACT5_BAAL_NS,
	LVLPREST_ACT5_BAAL_NSW,
	LVLPREST_ACT5_BAAL_NSE,
	LVLPREST_ACT5_BAAL_NSEW,
	LVLPREST_ACT5_BAAL_PREV_NEW,
	LVLPREST_ACT5_BAAL_PREV_NSE,
	LVLPREST_ACT5_BAAL_PREV_NSW,
	LVLPREST_ACT5_BAAL_PREV_SEW,
	LVLPREST_ACT5_BAAL_NEXT_N,
	LVLPREST_ACT5_BAAL_NEXT_S,
	LVLPREST_ACT5_BAAL_NEXT_E,
	LVLPREST_ACT5_BAAL_NEXT_W,
	LVLPREST_ACT5_BAAL_WAYPOINT_N,
	LVLPREST_ACT5_BAAL_WAYPOINT_S,
	LVLPREST_ACT5_BAAL_WAYPOINT_E,
	LVLPREST_ACT5_BAAL_WAYPOINT_W,
	LVLPREST_ACT5_THRONEROOM,
	LVLPREST_ACT5_WORLDSTONE,
	LVLPREST_ACT5_TEMPLE_ENTRANCE,
	LVLPREST_ACT5_BAAL_ENTRANCE,
};

enum D2C_LvlSubIds
{
	LVLSUB_ACT1_BORDER_CLIFFS,
	LVLSUB_ACT1_BORDER_MIDDLE,
	LVLSUB_ACT1_BORDER_CORNER,
	LVLSUB_ACT1_BORDER_BORDER,
	LVLSUB_ACT1_WAYPOINT,
	LVLSUB_ACT1_WELL_SHRINE,
	LVLSUB_ACT1_WILD_OBJECTS,
	LVLSUB_ACT2_WAYPOINT,
	LVLSUB_ACT2_WELL_SHRINE,
	LVLSUB_ACT2_DESERT_OBJECTS,
	LVLSUB_ACT5_SNOW__TREES_ROCKS__SMALL_STUFF,
	LVLSUB_ACT5_DIRT_PATCHES__SNOWY_OBJECTS,
	LVLSUB_ACT5_BARRICADE,
};

enum D2C_LvlTypes
{
	LVLTYPE_NONE,
	LVLTYPE_ACT1_TOWN,
	LVLTYPE_ACT1_WILDERNESS,
	LVLTYPE_ACT1_CAVE,
	LVLTYPE_ACT1_CRYPT,
	LVLTYPE_ACT1_MONASTERY,
	LVLTYPE_ACT1_COURTYARD,
	LVLTYPE_ACT1_BARRACKS,
	LVLTYPE_ACT1_JAIL,
	LVLTYPE_ACT1_CATHEDRAL,
	LVLTYPE_ACT1_CATACOMBS,
	LVLTYPE_ACT1_TRISTRAM,
	LVLTYPE_ACT2_TOWN,
	LVLTYPE_ACT2_SEWER,
	LVLTYPE_ACT2_HAREM,
	LVLTYPE_ACT2_BASEMENT,
	LVLTYPE_ACT2_DESERT,
	LVLTYPE_ACT2_TOMB,
	LVLTYPE_ACT2_LAIR,
	LVLTYPE_ACT2_ARCANE,
	LVLTYPE_ACT3_TOWN,
	LVLTYPE_ACT3_JUNGLE,
	LVLTYPE_ACT3_KURAST,
	LVLTYPE_ACT3_SPIDER,
	LVLTYPE_ACT3_DUNGEON,
	LVLTYPE_ACT3_SEWER,
	LVLTYPE_ACT4_TOWN,
	LVLTYPE_ACT4_MESA,
	LVLTYPE_ACT4_LAVA,
	LVLTYPE_ACT5_TOWN,
	LVLTYPE_ACT5_SIEGE,
	LVLTYPE_ACT5_BARRICADE,
	LVLTYPE_ACT5_TEMPLE,
	LVLTYPE_ACT5_ICE_CAVES,
	LVLTYPE_ACT5_BAAL,
	LVLTYPE_ACT5_LAVA,
	NUM_LVLTPYES
};
