/**
   \file list-player-spells.h
   \brief List all player spell effects.
 */

/* id								aim		info		handler */
SPELL(PROJECT,					TRUE,	"dam",		H(project_context))
SPELL(REND_SOUL,				TRUE,	"dam",		F(REND_SOUL))
SPELL(SPEAR_OF_LIGHT,			TRUE,	"dam",		F(SPEAR_OF_LIGHT))
SPELL(ANNIHILATION,				TRUE,	"dam",		F(ANNIHILATION))
SPELL(BEDLAM,					TRUE,	NULL,		H(project_context))
SPELL(LIGHT_AREA,				FALSE,	"dam",		H(light_area))
SPELL(ORB_OF_DRAINING,			TRUE,	"dam",		F(ORB_OF_DRAINING))
SPELL(METEOR_SWARM,				TRUE,	"dur",		F(METEOR_SWARM))
SPELL(WONDER,					TRUE,	NULL,		F(WONDER))
SPELL(DISPEL_UNDEAD,			FALSE,	"dam",		H(dispel_undead))
SPELL(DISPEL_EVIL,				FALSE,	"dam",		H(dispel_evil))
SPELL(CONFUSE_MONSTER,			TRUE,	NULL,		F(CONFUSE_MONSTER))
SPELL(SLEEP_MONSTER,			TRUE,	NULL,		F(SLEEP_MONSTER))
SPELL(POLYMORPH_OTHER,			TRUE,	NULL,		F(POLYMORPH_OTHER))
SPELL(SLOW_MONSTER,				TRUE,	NULL,		F(SLOW_MONSTER))
SPELL(MASS_SLEEP,				FALSE,	NULL,		F(MASS_SLEEP))
SPELL(BANISHMENT,				FALSE,	NULL,		F(BANISHMENT))
SPELL(MASS_BANISHMENT,			FALSE,	NULL,		F(MASS_BANISHMENT))
SPELL(SCARE_MONSTER,			TRUE,	NULL,		F(SCARE_MONSTER))
SPELL(SANCTUARY,				FALSE,	NULL,		F(SANCTUARY))
SPELL(TURN_UNDEAD,				FALSE,	NULL,		F(TURN_UNDEAD))
SPELL(DETECT_MONSTERS,			FALSE,	NULL,		H(detect_monsters))
SPELL(FIND_TRAPS_DOORS,			FALSE,	NULL,		H(detect_traps_doors_stairs))
SPELL(OBJECT_DETECTION,			FALSE,	NULL,		F(OBJECT_DETECTION))
SPELL(DETECT_INVISIBLE,			FALSE,	NULL,		F(DETECT_INVISIBLE))
SPELL(DETECT_EVIL,				FALSE,	NULL,		F(DETECT_EVIL))
SPELL(TREASURE_DETECTION,		FALSE,	NULL,		F(TREASURE_DETECTION))
SPELL(SENSE_SURROUNDINGS,		FALSE,	NULL,		F(SENSE_SURROUNDINGS))
SPELL(DETECTION,				FALSE,	NULL,		F(DETECTION))
SPELL(CLAIRVOYANCE,				FALSE,	NULL,		F(CLAIRVOYANCE))
SPELL(PROBING,					FALSE,	NULL,		F(PROBING))
SPELL(TRAP_DOOR_DESTRUCTION,	FALSE,	NULL,		H(trap_door_destruction))
SPELL(TURN_STONE_TO_MUD,		TRUE,	NULL,		F(TURN_STONE_TO_MUD))
SPELL(DOOR_CREATION,			FALSE,	NULL,		F(DOOR_CREATION))
SPELL(EARTHQUAKE,				FALSE,	NULL,		H(earthquake))
SPELL(STAIR_CREATION,			FALSE,	NULL,		F(STAIR_CREATION))
SPELL(WORD_OF_DESTRUCTION,		FALSE,	NULL,		H(word_of_destruction))
SPELL(ALTER_REALITY,			FALSE,	NULL,		F(ALTER_REALITY))
SPELL(RUNE_OF_PROTECTION,		FALSE,	NULL,		H(glyph_of_warding))
SPELL(CURE_LIGHT_WOUNDS,		FALSE,	"heal",		H(cure_light_wounds))
SPELL(CURE_SERIOUS_WOUNDS,		FALSE,	"heal",		H(cure_serious_wounds))
SPELL(CURE_CRITICAL_WOUNDS,		FALSE,	"heal",		H(cure_critical_wounds))
SPELL(HEAL,						FALSE,	"heal",		F(HEAL))
SPELL(HEALING,					FALSE,	"heal",		F(HEALING))
SPELL(HOLY_WORD,				FALSE,	"heal",		F(HOLY_WORD))
SPELL(SLOW_POISON,				FALSE,	NULL,		F(SLOW_POISON))
SPELL(CURE_POISON,				FALSE,	NULL,		H(cure_poison))
SPELL(RESIST_COLD,				FALSE,	"dur",		F(RESIST_COLD))
SPELL(RESIST_FIRE,				FALSE,	"dur",		F(RESIST_FIRE))
SPELL(RESIST_HEAT_COLD,			FALSE,	"dur",		F(RESIST_HEAT_COLD))
SPELL(RESIST_POISON,			FALSE,	"dur",		F(RESIST_POISON))
SPELL(RESISTANCE,				FALSE,	"dur",		F(RESISTANCE))
SPELL(SHIELD,					FALSE,	"dur",		F(SHIELD))
SPELL(SATISFY_HUNGER,			FALSE,	NULL,		H(satisfy_hunger))
SPELL(HEROISM,					FALSE,	"dur",		F(HEROISM))
SPELL(BERSERKER,				FALSE,	"dur",		F(BERSERKER))
SPELL(BLESS,					FALSE,	"dur",		H(bless))
SPELL(HASTE_SELF,				FALSE,	"dur",		F(HASTE_SELF))
SPELL(SENSE_INVISIBLE,			FALSE,	"dur",		F(SENSE_INVISIBLE))
SPELL(PROTECTION_FROM_EVIL,		FALSE,	"dur",		F(PROTECTION_FROM_EVIL))
SPELL(RESTORATION,				FALSE,	NULL,		F(RESTORATION))
SPELL(REMEMBRANCE,				FALSE,	NULL,		F(REMEMBRANCE))
SPELL(TELEPORT_SELF,			FALSE,	"range",	H(teleport_player))
SPELL(TELEPORT_OTHER,			TRUE,	NULL,		H(teleport_other))
SPELL(TELEPORT_LEVEL,			FALSE,	NULL,		H(teleport_level))
SPELL(WORD_OF_RECALL,			FALSE,	NULL,		H(word_of_recall))
SPELL(BANISH_EVIL,				FALSE,	NULL,		F(BANISH_EVIL))
SPELL(IDENTIFY,					FALSE,	NULL,		H(identify))
SPELL(RECHARGE,					FALSE,	NULL,		H(recharge))
SPELL(ENCHANT_ARMOR,			FALSE,	NULL,		H(enchant_armour))
SPELL(ENCHANT_WEAPON,			FALSE,	NULL,		H(enchant_weapon))
SPELL(BRAND_AMMO,				FALSE,	NULL,		F(ELEMENTAL_BRAND))
SPELL(BRAND_WEAPON,				FALSE,	NULL,		F(ELEMENTAL_BRAND))
SPELL(REMOVE_CURSE,				FALSE,	NULL,		F(REMOVE_CURSE))
SPELL(DISPEL_CURSE,				FALSE,	NULL,		F(DISPEL_CURSE))
SPELL(MAX,						FALSE,	NULL,		NULL)
