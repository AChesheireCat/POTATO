//potato_adminMenu_fnc_sendMessageToAdmin

#include "script_component.hpp"
TRACE_1("params",_this);

disableSerialization;

_textBox = (findDisplay 49) displayCtrl 840430;

_text = ctrlText _textBox;
_textBox ctrlSetText ""; //Best line ever written, thanks mike!

if (_text == "") exitWith {systemChat "Input your msg";};

systemChat "Message Sent";

["potato_adminMsg", [_text, profileName]] call ACEFUNC(common,globalEvent);
