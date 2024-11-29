#include "\z\potato\addons\cswCompatCUP\script_component.hpp"
#undef COMPONENT
#define COMPONENT cswCompatCUP_patchCUP

class CfgPatches {
    class ADDON {
        units[] = {
          "CUP_O_Kornet_RU_csw"
        };
        weapons[] = {
          QGVAR(cup_kornet_backpack),
          QGVAR(cup_kornet_launcher_proxy)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "potato_cswCompatCUP", "CUP_Weapons_LoadOrder", "CUP_Vehicles_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
        author = "Bourbon Warfare";
        authorUrl = "https://github.com/BourbonWarfare/POTATO";
        VERSION_CONFIG;
    };
};

#include "ACE_CSW_Groups.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
