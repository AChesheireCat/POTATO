/*
 *
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params ["_ctrlSide","_index"];

private _ctrlGroup = ctrlParentControlsGroup _ctrlSide;
private _ctrlBabel = _ctrlGroup controlsGroupCtrl BABEL_LIST_IDC;
private _ctrlRadio = _ctrlGroup controlsGroupCtrl RADIO_CHOOSE_IDC;
private _ctrlChannels = _ctrlGroup controlsGroupCtrl RADIO_CHANNEL_IDC;
private _ctrlSharedMR = _ctrlGroup controlsGroupCtrl CFG_S_SHARED_MR;
private _ctrlSharedLR = _ctrlGroup controlsGroupCtrl CFG_S_SHARED_LR;

private _side = switch (_index) do {
    case (0): {
        _ctrlGroup setVariable [QGVAR(selectedLanguages), GVAR(westDefaultLanguages)];
        _ctrlSharedMR lbSetCurSel (parseNumber GVAR(addCommonChannelWestMR));
        _ctrlSharedLR lbSetCurSel (parseNumber GVAR(addCommonChannelWestLR));
        west
    };
    case (1): {
        _ctrlGroup setVariable [QGVAR(selectedLanguages), GVAR(eastDefaultLanguages)];
        _ctrlSharedMR lbSetCurSel (parseNumber GVAR(addCommonChannelEastMR));
        _ctrlSharedLR lbSetCurSel (parseNumber GVAR(addCommonChannelEastLR));
        east
    };
    case (2): {
        _ctrlGroup setVariable [QGVAR(selectedLanguages), GVAR(indyDefaultLanguages)];
        _ctrlSharedMR lbSetCurSel (parseNumber GVAR(addCommonChannelIndyMR));
        _ctrlSharedLR lbSetCurSel (parseNumber GVAR(addCommonChannelIndyLR));
        independent
    };
    default {
        _ctrlGroup setVariable [QGVAR(selectedLanguages), GVAR(civDefaultLanguages)];
        _ctrlSharedMR lbSetCurSel (parseNumber GVAR(addCommonChannelCivMR));
        _ctrlSharedLR lbSetCurSel (parseNumber GVAR(addCommonChannelCivLR));
        civilian
    };
};

TRACE_4("Babel junk",GVAR(westDefaultLanguages),GVAR(eastDefaultLanguages),GVAR(indyDefaultLanguages),GVAR(civDefaultLanguages));

[_ctrlBabel] call FUNC(setBabelList);

[_ctrlGroup,_side] call FUNC(setChannelArrays);
[_ctrlRadio,lbCurSel _ctrlRadio] call FUNC(acreSideControlRadioChange);
