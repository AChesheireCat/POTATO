#include "script_component.hpp"

["potato_safeStartOn", {
    GVAR(safeStartEnabled) = true;
    [] call FUNC(showTimer);
}] call CBA_fnc_addEventHandler;

if !(isServer) exitWith {};

[
    {
        ACEGVAR(common,settingsInitFinished) && {time > (_this select 0)}
    }, {
        if (GVAR(enabled)) then {
            [] call FUNC(makeSafe);
        };
    }, [0]
] call CBA_fnc_waitUntilAndExecute;
