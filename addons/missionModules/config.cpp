#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(zeus_missionHint), QGVAR(sideMarker)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"potato_core"};
        author[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/POTATO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "UI_RscAttributes.hpp"
