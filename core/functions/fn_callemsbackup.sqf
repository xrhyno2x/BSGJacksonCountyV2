/*
    Script file made by: Maximum
    Idea based off: Liemans script - did way to much to achieve the same thing.
    Description: Lets a officer request backup VIA scroll menu, made for ***AltisLifeRPG.com***
*/

if (!life_callBackup) exitWith {hint "You can not do that now!"};

_backupTime = 60;
[player,_backupTime] remoteExec ["life_fnc_backup2",west];
life_callBackup = false;
sleep _backupTime + 320;
life_callBackup = true;
hint format ["%1, You can call Backup again!",name player];
