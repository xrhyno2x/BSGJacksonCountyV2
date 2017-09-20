/*
file: fn_robShops.sqf
Author: MrKraken
Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
Description:
Executes the rob shob action!
Idea developed by PEpwnzya v1.0
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "You can not work here!" };
if(_robber distance _shop > 10) exitWith { hint "You need to be within 10m of the cashier to work!" };

if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hint "Already started work!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };

_rip = true;
_kassa = 1000 + round(random 300);
_shop removeAction _action;
_chance = random(100);
[[2,"Pub Staff only"],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["currently at work (15m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0005;

if(_rip) then
{
while{true} do
{
sleep 0.6;
_cP = _cP + 0.001;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Working at the pub, stay close (15m) (%1%2)...",round(_cP * 100),"%"];

if(_cP >= 1) exitWith {};
if(_robber distance _shop > 16) exitWith { };
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shop > 16) exitWith { _shop switchMove ""; hint "You need to stay within 15m! - Your Fired."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];

titleText[format["You have completed your shift $%1 !",[_kassa] call life_fnc_numberText],"PLAIN"];
life_cash = life_cash + _kassa;
[[1,format["The pub is now closed", _shop, _robber, [_kassa] call life_fnc_numberText]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
life_use_atm = true;
if!(alive _robber) exitWith {};
};
sleep 10;
_action = _shop addAction["Start Work",life_fnc_work5];
_shop switchMove "";
