#include "script_component.hpp"

waitUntil {dialog};

if (isNil QGVAR(groupFactionWhiteList)) then {
    GVAR(groupFactionWhiteList) = ["BLU_F","OPF_F","IND_F","rhs_faction_msv"];
};

TRACE_1("white list",GVAR(groupFactionWhiteList));

// setup faction dropdown, and populate possible unit list
{
    private _index = lbAdd [BUILD_GROUP_FACTIONS_IDC, getText (configfile >> "CfgFactionClasses" >> _x >> "displayName")];
    lbSetData [BUILD_GROUP_FACTIONS_IDC, _index, _x];
    lbSetPicture [BUILD_GROUP_FACTIONS_IDC, _index, getText (configfile >> "CfgFactionClasses" >> _x >> "icon")];

    nil
} count GVAR(groupFactionWhiteList);

private _factionIndex =  if (isNil QGVAR(lastGroupFactionIndex)) then { 0 } else { GVAR(lastGroupFactionIndex) };
lbSetCurSel [BUILD_GROUP_FACTIONS_IDC, _factionIndex];

// todo: check for last unit array, set to add lb with provided units
//GVAR(lastGroupUnitArray);
