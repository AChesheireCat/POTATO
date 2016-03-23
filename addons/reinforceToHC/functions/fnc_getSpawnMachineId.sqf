#include "script_component.hpp"
#define SERVER_CLIENT_ID 2

private _returnClientId = SERVER_CLIENT_ID;
private _allHCs = entities "HeadlessClient_F";
TRACE_1("",_allHCs);

if (_allHCs isEqualTo []) exitWIth { _returnClientId };

//Find the HC with least units on it
private _hcIDs = [];
private _hcCounts = [];

{
    _hcIDs pushBack (owner _x);
    _hcCounts pushBack 0;
    nil
} count _allHCs;

{
    private _index = _hcIDs find (groupOwner _x);
    if (_index > 0) then {
        _hcCounts set [_index, ((_hcCounts select _index) + (count units _x))]; 
    };
    nil
} count allGroups;

(_hcCounts call CBA_fnc_findMin) params ["", "_bestHcIndex"];
_returnClientId = _hcIDs select _bestHcIndex;

TRACE_3("",_hcIDs,_hcCounts,_returnClientId);

_returnClientId