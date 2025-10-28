const fs = require("fs");
const path = require("path");

// Input file containing the particle list
const inputFile = "particles.txt";

// Output directories
const outputDir = path.join("..", "scripts", "4_world", "entities");
const configFilePath = path.join("..", "config.cpp");

// Ensure output directory exists
if (!fs.existsSync(outputDir)) {
  fs.mkdirSync(outputDir, { recursive: true });
}

// Read the input file
fs.readFile(inputFile, "utf8", (err, data) => {
  if (err) {
    console.error("Error reading file:", err);
    return;
  }

  // Regex to match particles
  const regex =
    /static const int (\w+)\s+=\s+RegisterParticle\("([\w\d_\/]+)"\);/g;

  let match;
  let classEntries = [];
  let configEntries = [];

  while ((match = regex.exec(data)) !== null) {
    const particleName = match[1]; // Particle variable name
    const particleID = match[1]; // Used in ParticleList

    // Generate the Enforce Script class
    const classContent = `class Jinie_${particleName} extends BuildingSuper
{
    Particle m_ParticleEffect;

    override void EEInit()
    {
        super.EEInit();
        if (GetGame().IsClient() || !GetGame().IsMultiplayer()) {
            m_ParticleEffect = Particle.PlayOnObject(ParticleList.${particleID}, this);
        }
    }

    override void EEDelete(EntityAI parent)
    {
        super.EEDelete(parent);
        if (!GetGame().IsMultiplayer() || GetGame().IsClient()) {
            if (m_ParticleEffect) {
                m_ParticleEffect.Stop();
                m_ParticleEffect = null;
            }
        }
    }
};`;

    // Write class file to updated path
    const outputFilePath = path.join(outputDir, `Jinie_${particleName}.c`);
    fs.writeFileSync(outputFilePath, classContent, "utf8");
    console.log(`Generated: ${outputFilePath}`);

    // Store config.cpp entries
    classEntries.push(`        "Jinie_${particleName}"`);

    configEntries.push(`
class Jinie_${particleName} : HouseNoDestruct
{
    scope = 2;
    displayName = "Jinie ${particleName}";
    descriptionShort = "Object with the ${particleName} particle effect.";
    model = "\\DZ\\gear\\containers\\christmasbox1.p3d";
    simulation = "house";

    hiddenSelections[] = {
        "ChristmasBox1",
        "ChristmasBox1_ribbon"
    };
    hiddenSelectionsTextures[] = {
        "JiniesVanillaParticles\\data\\my_wrapping_co.paa",
        "dz\\gear\\containers\\data\\christmas_paper_ribbon_CO.paa"
    };
    hiddenSelectionsMaterials[] = {
        "JiniesVanillaParticles\\data\\my_wrapping.rvmat",
        "dz\\gear\\containers\\data\\christmas_ribbon_GOLD.rvmat"
    };
};`);
  }

  // Generate config.cpp content
  const configContent = `#define _ARMA_

class CfgPatches
{
    class JiniesVanillaParticles
    {
        units[] = {
${classEntries.join(",\n")}
        };
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
${configEntries.join("\n")}
};`;

  // Write config.cpp file to parent directory
  fs.writeFileSync(configFilePath, configContent, "utf8");
  console.log(`✅ config.cpp generated successfully: ${configFilePath}`);
});
