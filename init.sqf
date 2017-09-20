/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

if(isDedicated && isNil("life_market_prices")) then
{
[] call life_fnc_marketconfiguration;
diag_log "Market prices generated!";

"life_market_prices" addPublicVariableEventHandler
{
diag_log format["Market prices updated! %1", _this select 1];
};

//Start server fsm
[] execFSM "core\fsm\server.fsm";
diag_log "Server FSM executed";
};


if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;
