#define COMPONENT ratios
#include "\z\potato\addons\core\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE // do not turn off
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_RATIOS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RATIOS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_RATIOS
#endif

// A3 display defines
#define SLOT_DISPLAY_IDD 70
#define SLOT_DISPLAY_NAME "RscDisplayMultiplayerSetup"
#define SLOT_DISPLAY (findDisplay SLOT_DISPLAY_IDD)

#define GET_CTRL(var1) (SLOT_DISPLAY displayCtrl var1)

#define PLAYER_LIST_IDC 114
#define PLAYER_LIST GET_CTRL(PLAYER_LIST_IDC)

#define SIDE_CIV_IDC 107
#define SIDE_CIV GET_CTRL(SIDE_CIV_IDC)
#define SIDE_EAST_IDC 105
#define SIDE_EAST GET_CTRL(SIDE_EAST_IDC)
#define SIDE_INDY_IDC 106
#define SIDE_INDY GET_CTRL(SIDE_INDY_IDC)
#define SIDE_LOGIC_IDC 131
#define SIDE_LOGIC GET_CTRL(SIDE_LOGIC_IDC)
#define SIDE_VIRTUAL_IDC 132
#define SIDE_VIRTUAL GET_CTRL(SIDE_VIRTUAL_IDC)
#define SIDE_WEST_IDC 104
#define SIDE_WEST GET_CTRL(SIDE_WEST_IDC)

// mod display defines
#define RATIO_TEXT_IDC 116016
#define RATIO_TEXT GET_CTRL(SIDE_CIV_IDC)

#define RATIO_INPUT_1_IDC 128511
#define RATIO_INPUT_1 GET_CTRL(RATIO_INPUT_1_IDC)
#define RATIO_INPUT_2_IDC 186142
#define RATIO_INPUT_2 GET_CTRL(RATIO_INPUT_2_IDC)
#define RATIO_INPUT_3_IDC 250462
#define RATIO_INPUT_3 GET_CTRL(RATIO_INPUT_3_IDC)
#define RATIO_INPUT_4_IDC 479374
#define RATIO_INPUT_4 GET_CTRL(RATIO_INPUT_4_IDC)

#define RATIO_OUTPUT_1_IDC 526849
#define RATIO_OUTPUT_1 GET_CTRL(RATIO_OUTPUT_1_IDC)
#define RATIO_OUTPUT_2_IDC 536895
#define RATIO_OUTPUT_2 GET_CTRL(RATIO_OUTPUT_2_IDC)
#define RATIO_OUTPUT_3_IDC 785609
#define RATIO_OUTPUT_3 GET_CTRL(RATIO_OUTPUT_3_IDC)
#define RATIO_OUTPUT_4_IDC 855803
#define RATIO_OUTPUT_4 GET_CTRL(RATIO_OUTPUT_4_IDC)

#include "\z\potato\addons\core\script_macros.hpp"

// display functions
#define A3_LOAD [ARR_4('onLoad',_this,'RscDisplayMultiplayerSetup','GUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay');
#define A3_UNLOAD [ARR_4('onUnload',_this,'RscDisplayMultiplayerSetup','GUI')] call (uinamespace getvariable 'BIS_fnc_initDisplay');
#define RATIO_LOAD _this spawn compile preprocessFileLineNumbers '\z\potato\addons\ratios\functions\fnc_displayLoad.sqf';
#define RATIO_UNLOAD _this call compile preprocessFileLineNumbers '\z\potato\addons\ratios\functions\fnc_displayUnload.sqf';

#define SET_UI_VAR(var1,var2) (uiNamespace setVariable [QGVAR(var1), var2])
#define GET_UI_VAR(var1) (uiNamespace getVariable [QGVAR(var1), nil])
