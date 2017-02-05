/*
 * Author: AACO
 * Function used to get the vehicle icon for provided object (cached)
 *
 * Arguments:
 * 0: Object to get icon of <OBJECT>
 *
 * Return Value:
 * Icon of vehicle <STRING>
 *
 * Examples:
 * [my_car] call potato_spectate_fnc_getBoundingBox;
 *
 * Public: Yes
 */

#include "script_component.hpp"
#define DEFAULT_TEXTURE "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa"
TRACE_1("Params",_this);

params [["_object", objNull, [objNull, ""]]];

if ((_object isEqualType objNull && {isNull _object}) ||(_object isEqualType "" && {_object == ""})) exitWith { DEFAULT_TEXTURE };

private _objectType = if (_object isEqualType objNull) then {
    typeOf _object
} else {
    _object
};
private _cachedValue = GVAR(vehicleIconCache) getVariable _objectType;

if (isNil "_cachedValue") then {
    private _vehicleValue = getText (configfile >> "CfgVehicles" >> _objectType >> "icon");
    private _vehicleIconValue = getText (configfile >> "CfgVehicleIcons" >> _vehicleValue);

    if (_vehicleIconValue == "") then {
        if (_vehicleValue != "" && {((toLower _vehicleValue) find ".paa") > -1}) then {
            _cachedValue = _vehicleValue;
        } else {
            _cachedValue = DEFAULT_TEXTURE;
        };
    } else {
        _cachedValue = _vehicleIconValue;
    };

    GVAR(vehicleIconCache) setVariable [_objectType, _cachedValue];
};

_cachedValue
