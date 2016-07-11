/*
 *
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params ["_ctrlRadio","_index"];

private _ctrlGroup = ctrlParentControlsGroup _ctrlRadio;
private _ctrlSide = _ctrlGroup controlsGroupCtrl CFG_SIDE_IDC;
private _ctrlChannels = _ctrlGroup controlsGroupCtrl RADIO_CHANNEL_IDC;

private _channels = switch (_index) do {
    case (0): { GVAR(srList) };
    case (1): { GVAR(mrList) };
    case (2): { GVAR(lrList) };
};

TRACE_5("radio change",_ctrlGroup,_ctrlSide,_ctrlRadio,_ctrlChannels,_channels);

lnbClear _ctrlChannels;
{
    _ctrlChannels lnbAddRow [str (_forEachIndex + 1), _x];
} forEach _channels;

private _sideIndex = lbCurSel _ctrlSide;
_ctrlChannels lnbSetCurSelRow ((GVAR(sideChannelArray) select _sideIndex) select _index);
