class CfgPatches
{
	class JiniesVanillaParticles
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class JiniesVanillaParticles
	{
		dir = "JiniesVanillaParticles";
		name = "JiniesVanillaParticles";
		credits = "JinieJ";
		author = "JinieJ";
		version = "1.0";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"JiniesVanillaParticles/scripts/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Jinie_PARTICLE_TEST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie PARTICLE_TEST";
		descriptionShort = "Object with the PARTICLE_TEST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_DEBUG_DOT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie DEBUG_DOT";
		descriptionShort = "Object with the DEBUG_DOT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_DEBUG_DOT5M: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie DEBUG_DOT5M";
		descriptionShort = "Object with the DEBUG_DOT5M particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_FIRE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_FIRE_START";
		descriptionShort = "Object with the CAMP_FIRE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_SMALL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_SMALL_FIRE";
		descriptionShort = "Object with the CAMP_SMALL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_NORMAL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_NORMAL_FIRE";
		descriptionShort = "Object with the CAMP_NORMAL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_SMALL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_SMALL_SMOKE";
		descriptionShort = "Object with the CAMP_SMALL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_NORMAL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_NORMAL_SMOKE";
		descriptionShort = "Object with the CAMP_NORMAL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_FIRE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_FIRE_END";
		descriptionShort = "Object with the CAMP_FIRE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_STEAM_2END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_STEAM_2END";
		descriptionShort = "Object with the CAMP_STEAM_2END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_STEAM_EXTINGUISH_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_STEAM_EXTINGUISH_START";
		descriptionShort = "Object with the CAMP_STEAM_EXTINGUISH_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_STOVE_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_STOVE_FIRE";
		descriptionShort = "Object with the CAMP_STOVE_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_STOVE_FIRE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_STOVE_FIRE_START";
		descriptionShort = "Object with the CAMP_STOVE_FIRE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_STOVE_FIRE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_STOVE_FIRE_END";
		descriptionShort = "Object with the CAMP_STOVE_FIRE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CAMP_NO_IGNITE_WIND: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CAMP_NO_IGNITE_WIND";
		descriptionShort = "Object with the CAMP_NO_IGNITE_WIND particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_FIRE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_FIRE_START";
		descriptionShort = "Object with the HOUSE_FIRE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_SMALL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_SMALL_FIRE";
		descriptionShort = "Object with the HOUSE_SMALL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_SMALL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_SMALL_SMOKE";
		descriptionShort = "Object with the HOUSE_SMALL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_NORMAL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_NORMAL_FIRE";
		descriptionShort = "Object with the HOUSE_NORMAL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_NORMAL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_NORMAL_SMOKE";
		descriptionShort = "Object with the HOUSE_NORMAL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_FIRE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_FIRE_END";
		descriptionShort = "Object with the HOUSE_FIRE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOUSE_FIRE_STEAM_2END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOUSE_FIRE_STEAM_2END";
		descriptionShort = "Object with the HOUSE_FIRE_STEAM_2END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_FIRE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_FIRE_START";
		descriptionShort = "Object with the BARREL_FIRE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_SMALL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_SMALL_FIRE";
		descriptionShort = "Object with the BARREL_SMALL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_SMALL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_SMALL_SMOKE";
		descriptionShort = "Object with the BARREL_SMALL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_NORMAL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_NORMAL_FIRE";
		descriptionShort = "Object with the BARREL_NORMAL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_NORMAL_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_NORMAL_SMOKE";
		descriptionShort = "Object with the BARREL_NORMAL_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_FIRE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_FIRE_END";
		descriptionShort = "Object with the BARREL_FIRE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARREL_FIRE_STEAM_2END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARREL_FIRE_STEAM_2END";
		descriptionShort = "Object with the BARREL_FIRE_STEAM_2END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_OVEN_FIRE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie OVEN_FIRE_START";
		descriptionShort = "Object with the OVEN_FIRE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_OVEN_SMALL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie OVEN_SMALL_FIRE";
		descriptionShort = "Object with the OVEN_SMALL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_OVEN_NORMAL_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie OVEN_NORMAL_FIRE";
		descriptionShort = "Object with the OVEN_NORMAL_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_OVEN_FIRE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie OVEN_FIRE_END";
		descriptionShort = "Object with the OVEN_FIRE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BOILING_EMPTY: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BOILING_EMPTY";
		descriptionShort = "Object with the COOKING_BOILING_EMPTY particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BOILING_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BOILING_START";
		descriptionShort = "Object with the COOKING_BOILING_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BOILING_DONE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BOILING_DONE";
		descriptionShort = "Object with the COOKING_BOILING_DONE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BAKING_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BAKING_START";
		descriptionShort = "Object with the COOKING_BAKING_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BAKING_DONE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BAKING_DONE";
		descriptionShort = "Object with the COOKING_BAKING_DONE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_DRYING_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_DRYING_START";
		descriptionShort = "Object with the COOKING_DRYING_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_DRYING_DONE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_DRYING_DONE";
		descriptionShort = "Object with the COOKING_DRYING_DONE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_COOKING_BURNING_DONE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie COOKING_BURNING_DONE";
		descriptionShort = "Object with the COOKING_BURNING_DONE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ITEM_HOT_VAPOR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ITEM_HOT_VAPOR";
		descriptionShort = "Object with the ITEM_HOT_VAPOR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TORCH_T3: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TORCH_T3";
		descriptionShort = "Object with the TORCH_T3 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TORCH_T1: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TORCH_T1";
		descriptionShort = "Object with the TORCH_T1 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TORCH_T2: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TORCH_T2";
		descriptionShort = "Object with the TORCH_T2 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BROOM_TORCH_T1: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BROOM_TORCH_T1";
		descriptionShort = "Object with the BROOM_TORCH_T1 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BROOM_TORCH_T2: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BROOM_TORCH_T2";
		descriptionShort = "Object with the BROOM_TORCH_T2 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BROOM_TORCH_T3: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BROOM_TORCH_T3";
		descriptionShort = "Object with the BROOM_TORCH_T3 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ROADFLARE_BURNING_INIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ROADFLARE_BURNING_INIT";
		descriptionShort = "Object with the ROADFLARE_BURNING_INIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ROADFLARE_BURNING_MAIN: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ROADFLARE_BURNING_MAIN";
		descriptionShort = "Object with the ROADFLARE_BURNING_MAIN particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ROADFLARE_BURNING_ENDING: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ROADFLARE_BURNING_ENDING";
		descriptionShort = "Object with the ROADFLARE_BURNING_ENDING particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ROADFLARE_BURNING_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ROADFLARE_BURNING_SMOKE";
		descriptionShort = "Object with the ROADFLARE_BURNING_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FLAREPROJ_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FLAREPROJ_FIRE";
		descriptionShort = "Object with the FLAREPROJ_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FLAREPROJ_ACTIVATE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FLAREPROJ_ACTIVATE";
		descriptionShort = "Object with the FLAREPROJ_ACTIVATE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FLAREPROJ_ACTIVATE_RED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FLAREPROJ_ACTIVATE_RED";
		descriptionShort = "Object with the FLAREPROJ_ACTIVATE_RED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FLAREPROJ_ACTIVATE_GREEN: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FLAREPROJ_ACTIVATE_GREEN";
		descriptionShort = "Object with the FLAREPROJ_ACTIVATE_GREEN particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FLAREPROJ_ACTIVATE_BLUE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FLAREPROJ_ACTIVATE_BLUE";
		descriptionShort = "Object with the FLAREPROJ_ACTIVATE_BLUE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_DIGGING_STASH: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie DIGGING_STASH";
		descriptionShort = "Object with the DIGGING_STASH particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_BLACK_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_BLACK_START";
		descriptionShort = "Object with the GRENADE_RDG2_BLACK_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_BLACK_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_BLACK_LOOP";
		descriptionShort = "Object with the GRENADE_RDG2_BLACK_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_BLACK_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_BLACK_END";
		descriptionShort = "Object with the GRENADE_RDG2_BLACK_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_WHITE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_WHITE_START";
		descriptionShort = "Object with the GRENADE_RDG2_WHITE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_WHITE_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_WHITE_LOOP";
		descriptionShort = "Object with the GRENADE_RDG2_WHITE_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_RDG2_WHITE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_RDG2_WHITE_END";
		descriptionShort = "Object with the GRENADE_RDG2_WHITE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_GREEN_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_GREEN_START";
		descriptionShort = "Object with the GRENADE_M18_GREEN_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_GREEN_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_GREEN_LOOP";
		descriptionShort = "Object with the GRENADE_M18_GREEN_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_GREEN_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_GREEN_END";
		descriptionShort = "Object with the GRENADE_M18_GREEN_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_PURPLE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_PURPLE_START";
		descriptionShort = "Object with the GRENADE_M18_PURPLE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_PURPLE_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_PURPLE_LOOP";
		descriptionShort = "Object with the GRENADE_M18_PURPLE_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_PURPLE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_PURPLE_END";
		descriptionShort = "Object with the GRENADE_M18_PURPLE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_RED_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_RED_START";
		descriptionShort = "Object with the GRENADE_M18_RED_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_RED_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_RED_LOOP";
		descriptionShort = "Object with the GRENADE_M18_RED_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_RED_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_RED_END";
		descriptionShort = "Object with the GRENADE_M18_RED_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_WHITE_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_WHITE_START";
		descriptionShort = "Object with the GRENADE_M18_WHITE_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_WHITE_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_WHITE_LOOP";
		descriptionShort = "Object with the GRENADE_M18_WHITE_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_WHITE_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_WHITE_END";
		descriptionShort = "Object with the GRENADE_M18_WHITE_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_YELLOW_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_YELLOW_START";
		descriptionShort = "Object with the GRENADE_M18_YELLOW_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_YELLOW_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_YELLOW_LOOP";
		descriptionShort = "Object with the GRENADE_M18_YELLOW_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_YELLOW_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_YELLOW_END";
		descriptionShort = "Object with the GRENADE_M18_YELLOW_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_BLACK_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_BLACK_START";
		descriptionShort = "Object with the GRENADE_M18_BLACK_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_BLACK_LOOP: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_BLACK_LOOP";
		descriptionShort = "Object with the GRENADE_M18_BLACK_LOOP particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M18_BLACK_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M18_BLACK_END";
		descriptionShort = "Object with the GRENADE_M18_BLACK_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_M84: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_M84";
		descriptionShort = "Object with the GRENADE_M84 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_RGD5: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie RGD5";
		descriptionShort = "Object with the RGD5 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_M67: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie M67";
		descriptionShort = "Object with the M67 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EXPLOSION_GRENADE_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EXPLOSION_GRENADE_SNOW";
		descriptionShort = "Object with the EXPLOSION_GRENADE_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EXPLOSION_GRENADE_ICE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EXPLOSION_GRENADE_ICE";
		descriptionShort = "Object with the EXPLOSION_GRENADE_ICE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_POWER_GENERATOR_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie POWER_GENERATOR_SMOKE";
		descriptionShort = "Object with the POWER_GENERATOR_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BARBED_WIRE_SPARKS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BARBED_WIRE_SPARKS";
		descriptionShort = "Object with the BARBED_WIRE_SPARKS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_LEVER_SPARKS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie LEVER_SPARKS";
		descriptionShort = "Object with the LEVER_SPARKS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EASTER_EGG_ACTIVATE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EASTER_EGG_ACTIVATE";
		descriptionShort = "Object with the EASTER_EGG_ACTIVATE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BLEEDING_SOURCE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BLEEDING_SOURCE";
		descriptionShort = "Object with the BLEEDING_SOURCE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BLEEDING_SOURCE_LIGHT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BLEEDING_SOURCE_LIGHT";
		descriptionShort = "Object with the BLEEDING_SOURCE_LIGHT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BLOOD_SURFACE_DROPS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BLOOD_SURFACE_DROPS";
		descriptionShort = "Object with the BLOOD_SURFACE_DROPS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BLOOD_SURFACE_CHUNKS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BLOOD_SURFACE_CHUNKS";
		descriptionShort = "Object with the BLOOD_SURFACE_CHUNKS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VOMIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VOMIT";
		descriptionShort = "Object with the VOMIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BREATH_VAPOUR_LIGHT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BREATH_VAPOUR_LIGHT";
		descriptionShort = "Object with the BREATH_VAPOUR_LIGHT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BREATH_VAPOUR_MEDIUM: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BREATH_VAPOUR_MEDIUM";
		descriptionShort = "Object with the BREATH_VAPOUR_MEDIUM particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BREATH_VAPOUR_HEAVY: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BREATH_VAPOUR_HEAVY";
		descriptionShort = "Object with the BREATH_VAPOUR_HEAVY particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VOMIT_CHUNKS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VOMIT_CHUNKS";
		descriptionShort = "Object with the VOMIT_CHUNKS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MUZZLE_FLASH_SVD_STAR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MUZZLE_FLASH_SVD_STAR";
		descriptionShort = "Object with the GUN_MUZZLE_FLASH_SVD_STAR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_SOLO_MUZZLE_FLASH: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_SOLO_MUZZLE_FLASH";
		descriptionShort = "Object with the GUN_SOLO_MUZZLE_FLASH particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_FNX: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_FNX";
		descriptionShort = "Object with the GUN_FNX particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_FNX_SUPPRESSED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_FNX_SUPPRESSED";
		descriptionShort = "Object with the GUN_FNX_SUPPRESSED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_PARTICLE_TEST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_PARTICLE_TEST";
		descriptionShort = "Object with the GUN_PARTICLE_TEST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_PARTICLE_CASING: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_PARTICLE_CASING";
		descriptionShort = "Object with the GUN_PARTICLE_CASING particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_PARTICLE_CASING_RAISE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_PARTICLE_CASING_RAISE";
		descriptionShort = "Object with the GUN_PARTICLE_CASING_RAISE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_CZ75: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_CZ75";
		descriptionShort = "Object with the GUN_CZ75 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_AKM: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_AKM";
		descriptionShort = "Object with the GUN_AKM particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_AKM_SUPPRESSED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_AKM_SUPPRESSED";
		descriptionShort = "Object with the GUN_AKM_SUPPRESSED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_IZH18: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_IZH18";
		descriptionShort = "Object with the GUN_IZH18 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_IZH18_SUPPRESSED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_IZH18_SUPPRESSED";
		descriptionShort = "Object with the GUN_IZH18_SUPPRESSED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MP5K: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MP5K";
		descriptionShort = "Object with the GUN_MP5K particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MP5K_2: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MP5K_2";
		descriptionShort = "Object with the GUN_MP5K_2 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MP5K_SUPPRESSED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MP5K_SUPPRESSED";
		descriptionShort = "Object with the GUN_MP5K_SUPPRESSED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MP5K_COMPENSATOR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MP5K_COMPENSATOR";
		descriptionShort = "Object with the GUN_MP5K_COMPENSATOR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_UMP45: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_UMP45";
		descriptionShort = "Object with the GUN_UMP45 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_M4A1: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_M4A1";
		descriptionShort = "Object with the GUN_M4A1 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MP133: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MP133";
		descriptionShort = "Object with the GUN_MP133 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_PELLETS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_PELLETS";
		descriptionShort = "Object with the GUN_PELLETS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MOSIN9130: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MOSIN9130";
		descriptionShort = "Object with the GUN_MOSIN9130 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MOSIN_COMPENSATOR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MOSIN_COMPENSATOR";
		descriptionShort = "Object with the GUN_MOSIN_COMPENSATOR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_CZ527: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_CZ527";
		descriptionShort = "Object with the GUN_CZ527 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_SKS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_SKS";
		descriptionShort = "Object with the GUN_SKS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_WINCHESTER70: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_WINCHESTER70";
		descriptionShort = "Object with the GUN_WINCHESTER70 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_VSS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_VSS";
		descriptionShort = "Object with the GUN_VSS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_AK74: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_AK74";
		descriptionShort = "Object with the GUN_AK74 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_AK101: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_AK101";
		descriptionShort = "Object with the GUN_AK101 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_MAGNUM: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_MAGNUM";
		descriptionShort = "Object with the GUN_MAGNUM particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_CZ61: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_CZ61";
		descriptionShort = "Object with the GUN_CZ61 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_LONG_WINDED_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_LONG_WINDED_SMOKE";
		descriptionShort = "Object with the GUN_LONG_WINDED_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GUN_LONG_WINDED_SMOKE_SMALL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GUN_LONG_WINDED_SMOKE_SMALL";
		descriptionShort = "Object with the GUN_LONG_WINDED_SMOKE_SMALL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_BARREL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_BARREL";
		descriptionShort = "Object with the SMOKING_BARREL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_BARREL_SMALL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_BARREL_SMALL";
		descriptionShort = "Object with the SMOKING_BARREL_SMALL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_BARREL_HEAVY: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_BARREL_HEAVY";
		descriptionShort = "Object with the SMOKING_BARREL_HEAVY particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_BARREL_STEAM: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_BARREL_STEAM";
		descriptionShort = "Object with the SMOKING_BARREL_STEAM particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_BARREL_STEAM_SMALL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_BARREL_STEAM_SMALL";
		descriptionShort = "Object with the SMOKING_BARREL_STEAM_SMALL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMARKS_CHAMBER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMARKS_CHAMBER";
		descriptionShort = "Object with the SMARKS_CHAMBER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST";
		descriptionShort = "Object with the IMPACT_TEST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_DISTANT_DUST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_DISTANT_DUST";
		descriptionShort = "Object with the IMPACT_DISTANT_DUST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST_RICOCHET";
		descriptionShort = "Object with the IMPACT_TEST_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST2: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST2";
		descriptionShort = "Object with the IMPACT_TEST2 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST_ENTER_DEBUG: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST_ENTER_DEBUG";
		descriptionShort = "Object with the IMPACT_TEST_ENTER_DEBUG particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST_RICOCHET_DEBUG: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST_RICOCHET_DEBUG";
		descriptionShort = "Object with the IMPACT_TEST_RICOCHET_DEBUG particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST_EXIT_DEBUG: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST_EXIT_DEBUG";
		descriptionShort = "Object with the IMPACT_TEST_EXIT_DEBUG particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEST_NO_MATERIAL_ERROR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEST_NO_MATERIAL_ERROR";
		descriptionShort = "Object with the IMPACT_TEST_NO_MATERIAL_ERROR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WOOD_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WOOD_ENTER";
		descriptionShort = "Object with the IMPACT_WOOD_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WOOD_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WOOD_RICOCHET";
		descriptionShort = "Object with the IMPACT_WOOD_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WOOD_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WOOD_EXIT";
		descriptionShort = "Object with the IMPACT_WOOD_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_CONCRETE_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_CONCRETE_ENTER";
		descriptionShort = "Object with the IMPACT_CONCRETE_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_CONCRETE_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_CONCRETE_RICOCHET";
		descriptionShort = "Object with the IMPACT_CONCRETE_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_CONCRETE_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_CONCRETE_EXIT";
		descriptionShort = "Object with the IMPACT_CONCRETE_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_ENTER";
		descriptionShort = "Object with the IMPACT_FOLIAGE_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_RICOCHET";
		descriptionShort = "Object with the IMPACT_FOLIAGE_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_EXIT";
		descriptionShort = "Object with the IMPACT_FOLIAGE_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_GREEN_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_GREEN_ENTER";
		descriptionShort = "Object with the IMPACT_FOLIAGE_GREEN_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_GREEN_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_GREEN_RICOCHET";
		descriptionShort = "Object with the IMPACT_FOLIAGE_GREEN_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_GREEN_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_GREEN_EXIT";
		descriptionShort = "Object with the IMPACT_FOLIAGE_GREEN_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_CONIFER_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_CONIFER_ENTER";
		descriptionShort = "Object with the IMPACT_FOLIAGE_CONIFER_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_FOLIAGE_CONIFER_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_FOLIAGE_CONIFER_EXIT";
		descriptionShort = "Object with the IMPACT_FOLIAGE_CONIFER_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GRASS_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GRASS_ENTER";
		descriptionShort = "Object with the IMPACT_GRASS_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GRASS_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GRASS_RICOCHET";
		descriptionShort = "Object with the IMPACT_GRASS_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_DIRT_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_DIRT_ENTER";
		descriptionShort = "Object with the IMPACT_DIRT_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_DIRT_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_DIRT_RICOCHET";
		descriptionShort = "Object with the IMPACT_DIRT_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_DIRT_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_DIRT_EXIT";
		descriptionShort = "Object with the IMPACT_DIRT_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_RUBBER_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_RUBBER_ENTER";
		descriptionShort = "Object with the IMPACT_RUBBER_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_RUBBER_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_RUBBER_RICOCHET";
		descriptionShort = "Object with the IMPACT_RUBBER_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_RUBBER_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_RUBBER_EXIT";
		descriptionShort = "Object with the IMPACT_RUBBER_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GRAVEL_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GRAVEL_ENTER";
		descriptionShort = "Object with the IMPACT_GRAVEL_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GRAVEL_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GRAVEL_RICOCHET";
		descriptionShort = "Object with the IMPACT_GRAVEL_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GRAVEL_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GRAVEL_EXIT";
		descriptionShort = "Object with the IMPACT_GRAVEL_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTER_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTER_ENTER";
		descriptionShort = "Object with the IMPACT_PLASTER_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTER_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTER_RICOCHET";
		descriptionShort = "Object with the IMPACT_PLASTER_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTER_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTER_EXIT";
		descriptionShort = "Object with the IMPACT_PLASTER_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_METAL_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_METAL_ENTER";
		descriptionShort = "Object with the IMPACT_METAL_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_METAL_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_METAL_RICOCHET";
		descriptionShort = "Object with the IMPACT_METAL_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_METAL_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_METAL_EXIT";
		descriptionShort = "Object with the IMPACT_METAL_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEAT_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEAT_ENTER";
		descriptionShort = "Object with the IMPACT_MEAT_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEAT_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEAT_RICOCHET";
		descriptionShort = "Object with the IMPACT_MEAT_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEAT_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEAT_EXIT";
		descriptionShort = "Object with the IMPACT_MEAT_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEATBONES_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEATBONES_ENTER";
		descriptionShort = "Object with the IMPACT_MEATBONES_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEATBONES_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEATBONES_RICOCHET";
		descriptionShort = "Object with the IMPACT_MEATBONES_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_MEATBONES_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_MEATBONES_EXIT";
		descriptionShort = "Object with the IMPACT_MEATBONES_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GLASS_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GLASS_ENTER";
		descriptionShort = "Object with the IMPACT_GLASS_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GLASS_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GLASS_RICOCHET";
		descriptionShort = "Object with the IMPACT_GLASS_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_GLASS_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_GLASS_EXIT";
		descriptionShort = "Object with the IMPACT_GLASS_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WATER_SMALL_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WATER_SMALL_ENTER";
		descriptionShort = "Object with the IMPACT_WATER_SMALL_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WATER_MEDIUM_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WATER_MEDIUM_ENTER";
		descriptionShort = "Object with the IMPACT_WATER_MEDIUM_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_WATER_LARGE_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_WATER_LARGE_ENTER";
		descriptionShort = "Object with the IMPACT_WATER_LARGE_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEXTILE_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEXTILE_ENTER";
		descriptionShort = "Object with the IMPACT_TEXTILE_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEXTILE_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEXTILE_RICOCHET";
		descriptionShort = "Object with the IMPACT_TEXTILE_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_TEXTILE_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_TEXTILE_EXIT";
		descriptionShort = "Object with the IMPACT_TEXTILE_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SAND_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SAND_ENTER";
		descriptionShort = "Object with the IMPACT_SAND_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SAND_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SAND_RICOCHET";
		descriptionShort = "Object with the IMPACT_SAND_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SAND_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SAND_EXIT";
		descriptionShort = "Object with the IMPACT_SAND_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTIC_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTIC_ENTER";
		descriptionShort = "Object with the IMPACT_PLASTIC_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTIC_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTIC_RICOCHET";
		descriptionShort = "Object with the IMPACT_PLASTIC_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_PLASTIC_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_PLASTIC_EXIT";
		descriptionShort = "Object with the IMPACT_PLASTIC_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SNOW_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SNOW_ENTER";
		descriptionShort = "Object with the IMPACT_SNOW_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SNOW_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SNOW_RICOCHET";
		descriptionShort = "Object with the IMPACT_SNOW_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_SNOW_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_SNOW_EXIT";
		descriptionShort = "Object with the IMPACT_SNOW_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_ICE_ENTER: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_ICE_ENTER";
		descriptionShort = "Object with the IMPACT_ICE_ENTER particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_ICE_RICOCHET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_ICE_RICOCHET";
		descriptionShort = "Object with the IMPACT_ICE_RICOCHET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_IMPACT_ICE_EXIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie IMPACT_ICE_EXIT";
		descriptionShort = "Object with the IMPACT_ICE_EXIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EXPLOSION_LANDMINE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EXPLOSION_LANDMINE";
		descriptionShort = "Object with the EXPLOSION_LANDMINE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EXPLOSION_TEST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EXPLOSION_TEST";
		descriptionShort = "Object with the EXPLOSION_TEST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EXPLOSION_GOAT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EXPLOSION_GOAT";
		descriptionShort = "Object with the EXPLOSION_GOAT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_HELI_WRECK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_HELI_WRECK";
		descriptionShort = "Object with the SMOKING_HELI_WRECK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_AURORA_SANTA_WRECK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie AURORA_SANTA_WRECK";
		descriptionShort = "Object with the AURORA_SANTA_WRECK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKE_GENERIC_WRECK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKE_GENERIC_WRECK";
		descriptionShort = "Object with the SMOKE_GENERIC_WRECK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SMOKING_CAR_ENGINE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SMOKING_CAR_ENGINE";
		descriptionShort = "Object with the SMOKING_CAR_ENGINE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_EVAPORATION: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie EVAPORATION";
		descriptionShort = "Object with the EVAPORATION particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HATCHBACK_COOLANT_OVERHEATING: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HATCHBACK_COOLANT_OVERHEATING";
		descriptionShort = "Object with the HATCHBACK_COOLANT_OVERHEATING particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HATCHBACK_COOLANT_OVERHEATED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HATCHBACK_COOLANT_OVERHEATED";
		descriptionShort = "Object with the HATCHBACK_COOLANT_OVERHEATED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HATCHBACK_ENGINE_OVERHEATING: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HATCHBACK_ENGINE_OVERHEATING";
		descriptionShort = "Object with the HATCHBACK_ENGINE_OVERHEATING particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HATCHBACK_ENGINE_OVERHEATED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HATCHBACK_ENGINE_OVERHEATED";
		descriptionShort = "Object with the HATCHBACK_ENGINE_OVERHEATED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HATCHBACK_EXHAUST_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HATCHBACK_EXHAUST_SMOKE";
		descriptionShort = "Object with the HATCHBACK_EXHAUST_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BOAT_WATER_FRONT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BOAT_WATER_FRONT";
		descriptionShort = "Object with the BOAT_WATER_FRONT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BOAT_WATER_BACK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BOAT_WATER_BACK";
		descriptionShort = "Object with the BOAT_WATER_BACK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BOAT_WATER_SIDE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BOAT_WATER_SIDE";
		descriptionShort = "Object with the BOAT_WATER_SIDE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_ENV_SWARMING_FLIES: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie ENV_SWARMING_FLIES";
		descriptionShort = "Object with the ENV_SWARMING_FLIES particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BONFIRE_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BONFIRE_FIRE";
		descriptionShort = "Object with the BONFIRE_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BONFIRE_SMOKE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BONFIRE_SMOKE";
		descriptionShort = "Object with the BONFIRE_SMOKE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TIREPILE_FIRE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TIREPILE_FIRE";
		descriptionShort = "Object with the TIREPILE_FIRE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_SPOOKY_MIST: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie SPOOKY_MIST";
		descriptionShort = "Object with the SPOOKY_MIST particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VOMIT_BLOOD: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VOMIT_BLOOD";
		descriptionShort = "Object with the VOMIT_BLOOD particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_TINY: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_TINY";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_TINY particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_AROUND: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_AROUND";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_AROUND particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_BIGASS: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_BIGASS";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_BIGASS particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_GROUND: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_GROUND";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_GROUND particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_SHELL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_SHELL";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_SHELL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CONTAMINATED_AREA_GAS_DEBUG: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CONTAMINATED_AREA_GAS_DEBUG";
		descriptionShort = "Object with the CONTAMINATED_AREA_GAS_DEBUG particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_SHOT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_SHOT";
		descriptionShort = "Object with the FIREWORKS_SHOT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_RED: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_RED";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_RED particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_GREEN: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_GREEN";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_GREEN particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_BLUE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_BLUE";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_BLUE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_YELLOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_YELLOW";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_YELLOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_PINK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_PINK";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_PINK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_FUSE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_FUSE";
		descriptionShort = "Object with the FIREWORKS_FUSE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_AFTERBURN_START: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_AFTERBURN_START";
		descriptionShort = "Object with the FIREWORKS_AFTERBURN_START particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_AFTERBURN_END: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_AFTERBURN_END";
		descriptionShort = "Object with the FIREWORKS_AFTERBURN_END particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_THANKS1: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_THANKS1";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_THANKS1 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_THANKS2: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_THANKS2";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_THANKS2 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_THANKS3: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_THANKS3";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_THANKS3 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_THANKS4: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_THANKS4";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_THANKS4 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FIREWORKS_EXPLOSION_THANKS5: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FIREWORKS_EXPLOSION_THANKS5";
		descriptionShort = "Object with the FIREWORKS_EXPLOSION_THANKS5 particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GRENADE_CHEM_BREAK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GRENADE_CHEM_BREAK";
		descriptionShort = "Object with the GRENADE_CHEM_BREAK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_CLAYMORE_EXPLOSION: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie CLAYMORE_EXPLOSION";
		descriptionShort = "Object with the CLAYMORE_EXPLOSION particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_PLASTIC_EXPLOSION: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie PLASTIC_EXPLOSION";
		descriptionShort = "Object with the PLASTIC_EXPLOSION particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_WATER_JET: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie WATER_JET";
		descriptionShort = "Object with the WATER_JET particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_WATER_JET_WEAK: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie WATER_JET_WEAK";
		descriptionShort = "Object with the WATER_JET_WEAK particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_WATER_SPILLING: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie WATER_SPILLING";
		descriptionShort = "Object with the WATER_SPILLING particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_DROWNING_BUBBLES: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie DROWNING_BUBBLES";
		descriptionShort = "Object with the DROWNING_BUBBLES particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BOLT_CUPID_TAIL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BOLT_CUPID_TAIL";
		descriptionShort = "Object with the BOLT_CUPID_TAIL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BOLT_CUPID_HIT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BOLT_CUPID_HIT";
		descriptionShort = "Object with the BOLT_CUPID_HIT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_HOTPSRING_WATERVAPOR: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie HOTPSRING_WATERVAPOR";
		descriptionShort = "Object with the HOTPSRING_WATERVAPOR particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GEYSER_NORMAL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GEYSER_NORMAL";
		descriptionShort = "Object with the GEYSER_NORMAL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GEYSER_STRONG: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GEYSER_STRONG";
		descriptionShort = "Object with the GEYSER_STRONG particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GEYSER_SPLASH: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GEYSER_SPLASH";
		descriptionShort = "Object with the GEYSER_SPLASH particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_GEYSER_BUBBLES: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie GEYSER_BUBBLES";
		descriptionShort = "Object with the GEYSER_BUBBLES particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VOLCANO: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VOLCANO";
		descriptionShort = "Object with the VOLCANO particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_FISHING_SIGNAL_SPLASH: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie FISHING_SIGNAL_SPLASH";
		descriptionShort = "Object with the FISHING_SIGNAL_SPLASH particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_STEP_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie STEP_SNOW";
		descriptionShort = "Object with the STEP_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VEHICLE_WHEEL_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VEHICLE_WHEEL_SNOW";
		descriptionShort = "Object with the VEHICLE_WHEEL_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VEHICLE_WHEEL_GRAVEL: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VEHICLE_WHEEL_GRAVEL";
		descriptionShort = "Object with the VEHICLE_WHEEL_GRAVEL particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_VEHICLE_WHEEL_ASPHALT: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie VEHICLE_WHEEL_ASPHALT";
		descriptionShort = "Object with the VEHICLE_WHEEL_ASPHALT particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_FALLING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_FALLING_SNOW";
		descriptionShort = "Object with the TREE_FALLING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_SOFT_FALLING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_SOFT_FALLING_SNOW";
		descriptionShort = "Object with the TREE_SOFT_FALLING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_SOFT_LARGE_FALLING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_SOFT_LARGE_FALLING_SNOW";
		descriptionShort = "Object with the TREE_SOFT_LARGE_FALLING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_SMALL_FALLING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_SMALL_FALLING_SNOW";
		descriptionShort = "Object with the TREE_SMALL_FALLING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_FALLING_NEEDLE: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_FALLING_NEEDLE";
		descriptionShort = "Object with the TREE_FALLING_NEEDLE particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_FALLING_LEAF: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_FALLING_LEAF";
		descriptionShort = "Object with the TREE_FALLING_LEAF particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BUSH_FALLING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BUSH_FALLING_SNOW";
		descriptionShort = "Object with the BUSH_FALLING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_TREE_PASSING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie TREE_PASSING_SNOW";
		descriptionShort = "Object with the TREE_PASSING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
	class Jinie_BUSH_PASSING_SNOW: HouseNoDestruct
	{
		scope = 1;
		displayName = "Jinie BUSH_PASSING_SNOW";
		descriptionShort = "Object with the BUSH_PASSING_SNOW particle effect.";
		model = "JiniesVanillaParticles\data\star.p3d";
	};
};
