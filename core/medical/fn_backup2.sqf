/*
	File: fn_backup.sqf
*/

params [
	["_player", objnull, [objnull]],
	["_deleteTime", 60, [0]]
];

if (isNull _player) exitWith {};
if !(playerSide isEqualTo west) && !(playerSide isEqualTo independent) exitWith {};

_backupmsg = createMarkerLocal [("_backupmsg" + (_player getVariable["realname",name _player])), getPos _player];
_backupmsg setMarkerTypeLocal "mil_warning";
_backupmsg setMarkerColorLocal "colorRed";
_backupmsg setMarkerTextLocal format ["Paramedic %1 is requesting backup here!", _player getVariable["realname",name _player]];
playSound "panic";
[1,format["911 DISPATCH: EMS in trouble %1",name _player]] remoteExecCall ["life_fnc_broadcast",west];
uiSleep _deleteTime;
deleteMarkerLocal _backupmsg;
