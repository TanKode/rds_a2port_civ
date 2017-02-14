_v = _this select 0;
_p1= _v modelToWorld (_v selectionposition "pos cargo dir");
_p2= _v modelToWorld (_v selectionposition "pos cargo1 dir");
_p3= _v modelToWorld (_v selectionposition "pos cargo2 dir");

_vol=7;
_dist=79.09;
if(_this select 1 > 0)then
{
	//open door
	playSound3D ["rds_a2port_civ\data\sounds\d1opn_r.wss", player, false,  _p1, _vol, 1, _dist];
	playSound3D ["rds_a2port_civ\data\sounds\d2opn_r.wss", player, false,  _p2, _vol, 1, _dist];
	playSound3D ["rds_a2port_civ\data\sounds\d3opn_r.wss", player, false,  _p3, _vol, 1, _dist];
	{_v animateDoor [_x,1]}foreach ["doors_1","doors_2","doors_3"];
}else
{
	//close door
	playSound3D ["rds_a2port_civ\data\sounds\d1cls_r.wss", player, false,  _p1, _vol, 1, _dist];
	playSound3D ["rds_a2port_civ\data\sounds\d2cls_r.wss", player, false,  _p2, _vol, 1, _dist];
	playSound3D ["rds_a2port_civ\data\sounds\d3cls_r.wss", player, false,  _p3, _vol, 1, _dist];
	{_v animateDoor [_x,0]}foreach ["doors_1","doors_2","doors_3"];
};