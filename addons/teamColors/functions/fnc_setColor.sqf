/*
 * Author: AACO
 * Function to set a unit's team color.
 *
 * Arguments:
 * 0: Unit to assign team <OBJECT>
 * 1: Fireteam color <STRING>
 *
 * Example:
 * [player, 'RED'] call potato_teamColors_fnc_setColor;
 *
 * Public: No
 */
#define DEBUG_MODE_FULL
#include "script_component.hpp"

TRACE_1("Params",_this);

[
    {(_this select 0) assignTeam (_this select 1);},
    {!isNull player},
    _this
] call CBA_fnc_waitUntilAndExecute;
