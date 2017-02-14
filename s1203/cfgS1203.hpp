
	class RDS_S1203_Base: Car_F
	{
		model="\rds_a2port_civ\S1203\S1203";
		icon = "\rds_a2port_civ\data\map_ico\icon_S1203_ca.paa";
		picture = "\rds_a2port_civ\data\ico\Picture_S1203_ca.paa";
		mapsize=6;

		displayName="Skoda 1203";

		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;

		driveraction = "S1203_driver";
		
		attenuationEffectType = "OpenCarAttenuation";
		armor=22;
		cost=10000;
		transportMaxBackpacks=6;
		transportSoldier=5;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="";
		driverRightLegAnimName = "pedalR";

		soundAttenuationCargo[]={0.5};
		#include "sounds.hpp"
		class Turrets
		{
		};


		
		cargoaction[] = {"S1203_Cargo", "S1203_Cargo02", "S1203_Cargo01", "S1203_cargo03"};

		hiddenselections[] = {"camo1", "camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_co.paa", "rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};

		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 3", "pos cargo 3", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1",  "pos cargo dir 3", "pos cargo 3", "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RB",
			"Door_RB",
			"Door_RC",
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment3"
		};
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				animPeriod=1.0;
			};
			class Door_RF: Door_LF {};
			class Door_RB: Door_LF {};
			class Door_RC: Door_LF {};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = Open Trunk; 
				position = "pos cargo dir 5"; 
				radius = 2; 
				showWindow = 0;
				condition = "(this animationPhase ""door_3_2"" < 0.5)"; 
				statement = "this animateDoor [""Door_RC"",1]"; 
				onlyForPlayer =0; 
			};
			class closeDoors:  openDoors
			{
				displayName = Close Trunk; 
				condition = "(this animationPhase ""door_3_2"" > 0.5)"; 
				statement = "this animateDoor [""Door_RC"",0]"; 
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="karoserie";
				visual="camo1";
				passThrough=1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.05;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.05;
			};
			class HitGlass4: HitGlass4
			{
				visual="glass4";
				armor=0.05;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.05;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.05;
			};
		};
		getInAction="GetInOffroad";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";

		dustFrontLeftPos = "Stopa PPL";
		dustFrontRightPos = "Stopa PLP";
		dustBackLeftPos = "Stopa ZLL";
		dustBackRightPos = "Stopa ZLP";
		class Damage {
			mat[] = 
			{
				"rds_a2port_civ\S1203\Data\s1203_mat.rvmat", 
				"rds_a2port_civ\S1203\Data\s1203_mat_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_mat_destruct.rvmat", 

				"rds_a2port_civ\S1203\Data\s1203_glass.rvmat", 
				"rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat", 

				"rds_a2port_civ\S1203\Data\s1203_glass_in.rvmat", 
				"rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=1.5;
				useFlare=1;
				dayLight=0;
				flareSize=0.85000002;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
		};
		aggregateReflectors[]=
		{
			{"LSvetla","RSvetla"}
		};

		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1p";
					pointDirection="m1d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.5;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="m2p";
					pointDirection="m2d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
			};
			class BackMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="m3p";
					pointDirection="m3d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
			};
		};
		#include "PhysX_S1203.hpp"
	};
	
	class RDS_S1203_Civ_Base: RDS_S1203_Base
	{
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "CIV_F";
		side = 3;
	};
	
	class RDS_S1203_Civ_01: RDS_S1203_Civ_Base
	{	
		scope=2;
	};
	class RDS_S1203_Civ_02: RDS_S1203_Civ_01
	{	
		displayName="Skoda 1203 (Ambulance)";
		model="\rds_a2port_civ\S1203\S1203_ambulance";
		icon = "\rds_a2port_civ\data\map_ico\icon_s1203_amb_ca.paa";
		hiddenselections[] = {"camo1", "camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_co.paa", "rds_a2port_civ\S1203\data\s1203_glass3_ca.paa"};

		
		cargoaction[] = {"S1203_Cargo", "RDS_LyingWounded", "RDS_LyingWounded"};


		transportSoldier=3;
		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1",   "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RC"
		};
	};
	

