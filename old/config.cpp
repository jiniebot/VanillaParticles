////////////////////////////////////////////////////////////////////
// DeRap: config.bin
// Produced from mikero's Dos Tools Dll version 9.45
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
    class JiniesVanillaParticles
	{
		units[] = {"JiniesVanillaParticles"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_gear_tools","DZ_Vehicles_Wheeled","DZ_Vehicles_Parts","DZ_Sounds_Effects","DZ_Scripts","DZ_Gear_Containers", "DZ_Gear_Consumables"};
	};
};

class CfgMods
{
    class JiniesVanillaParticles
    {
        dir = "JiniesVanillaParticles";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "JiniesVanillaParticles";
        credits = "JinieJ";
        author = "JinieJ";
        authorID = "0";
        version = "1.0";
        extra = 0;
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

    class Jinie_WaterJet : HouseNoDestruct
    {
        scope = 2;
        displayName = "Jinie's Vanilla Particles";
        descriptionShort = "Invisible object with a vanilla particle effect.";
        model = "\DZ\gear\containers\christmasbox1.p3d";
        simulation = "house"; // Ensures proper spawning in DayZ Editor
    };
};
