/*
 *
 */

#include "script_component.hpp"
TRACE_1("params",_this);
params ["_ctrlRadio","_index"];

private _ctrlGroup = ctrlParentControlsGroup _ctrlRadio;

private _ctrlChannels = _ctrlGroup controlsGroupCtrl RADIO_CHANNEL_IDC;
lnbClear _ctrlChannels;

private _channels = switch (_index) do {
    case (0): { GVAR(srList) };
    case (1): { GVAR(mrList) };
    case (2): { GVAR(lrList) };
};

{
    _ctrlChannels lnbAddRow [str (_forEachIndex + 1), _x];
} forEach _channels;
