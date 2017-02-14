#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

class CfgPatches
{
	class rds_A2_Civilians
	{
		units[]	= 
		{
			RDS_Ikarus_Civ_01,
			RDS_Ikarus_Civ_02,

			RDS_Lada_Civ_01,
			RDS_Lada_Civ_02,
			RDS_Lada_Civ_03,
			RDS_Lada_Civ_04,
			RDS_Lada_Civ_05,

			RDS_S1203_Civ_01,
			RDS_S1203_Civ_02,

			RDS_Gaz24_Civ_01,
			RDS_Gaz24_Civ_02,
			RDS_Gaz24_Civ_03

		};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]= 
		{
			"A3_Soft_F",
			"A3_Soft_F_TruckHeavy",
			"A3_CargoPoses_F"
		};
	};
};

#include "cfgMoves.hpp"
#include "cfgFunctions.hpp"

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation=1;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1
			{
			};
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F{	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};

	#include "Ikarus\cfgIkarus.hpp"
	#include "Lada\cfgLada.hpp"
	#include "S1203\cfgS1203.hpp"
	#include "Volha\cfgGaz24.hpp"
	#include "VWGOLF\cfgGolf4.hpp"
};
