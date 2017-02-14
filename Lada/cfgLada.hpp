
	class RDS_Lada_Base: Car_F
	{
		model="\rds_a2port_civ\Lada\Lada";
		icon="\rds_a2port_civ\data\map_ico\icon_skoda_ca.paa";
		picture = "\rds_a2port_civ\data\ico\Picture_lada_ca.paa";
		mapsize=5;

		displayName="VAZ-2103";
		

		driveraction = "Golf_Driver";
		
		attenuationEffectType = "OpenCarAttenuation";
		armor=22;
		cost=10000;
		transportMaxBackpacks=6;
		transportSoldier=3;
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


		
		cargoaction[] = {"Golf_Cargo01", "Golf_Cargo02", "Golf_Cargo02"};

		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 2", "pos cargo 3", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1", "pos cargo dir 2", "pos cargo dir 3", "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_RB",
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				animPeriod=1.0;
			};
			class Door_LB: Door_LF {};
			class Door_RB: Door_LF {};
			class Door_RF: Door_LF {};
			class Trunk: Door_LF {};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = Open Trunk; 
				position = "pos cargo dir 4"; 
				radius = 1; 
				showWindow = 0;
				condition = "(this animationPhase ""trunk"" < 0.5)"; 
				statement = "this animateDoor [""trunk"",1]"; 
				onlyForPlayer =0; 
			};
			class closeDoors:  openDoors
			{
				displayName = Close Trunk; 
				condition = "(this animationPhase ""trunk"" > 0.5)"; 
				statement = "this animateDoor [""trunk"",0]"; 
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
				"rds_a2port_civ\Lada\Data\Lada_chrome.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_chrome.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_chrome_destruct.rvmat", 

				"rds_a2port_civ\Lada\Data\Lada_glass.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_glass_damage.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_glass_damage.rvmat",

				"rds_a2port_civ\Lada\Data\Lada_glass_in.rvmat", 
				"rds_a2port_civ\Lada\Data\Lada_glass_in_damage.rvmat", 
				"rds_a2port_civ\Lada\Data\Lada_glass_in_damage.rvmat",

				"rds_a2port_civ\Lada\Data\Lada_mat.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_mat_damage.rvmat",
				"rds_a2port_civ\Lada\Data\Lada_mat_destruct.rvmat",

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
		#include "PhysX_Lada.hpp"
	};
	
	class RDS_Lada_Civ_Base: RDS_Lada_Base
	{
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "CIV_F";
		side = 3;
	};
	
	class RDS_Lada_Civ_01: RDS_Lada_Civ_Base
	{	
		scope=2;
	};
	class RDS_Lada_Civ_02: RDS_Lada_Civ_01
	{	
		scope=2;
		displayName="VAZ-2103 (Red)";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\Lada_red_CO.paa"};
	};
	class RDS_Lada_Civ_03: RDS_Lada_Civ_01
	{	
		hiddenselections[] = {"Camo1", "Camo2"};
		displayName="VAZ-2103 (Green)";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_eciv1_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV1_CA.paa"};
	};
	class RDS_Lada_Civ_04: RDS_Lada_Civ_03
	{	
		displayName="VAZ-2103 (Decorated)";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_eciv2_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV2_CA.paa"};
	};
	class RDS_Lada_Civ_05: RDS_Lada_Civ_01
	{	
		displayName="VAZ-2103 (Militia)";
		model="\rds_a2port_civ\Lada\Lada_LM";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\Lada_red_CO.paa"};
		class Reflectors: Reflectors 
		{
			class Left: LSvetla {};
			class Right: RSvetla {};
			class Majak1 {
				ambient[] = {0.01, 0.01, 0.1, 1};
				brightness = 0.5;
				color[] = {0.1, 0.2, 0.8, 1};
				direction = "majak ligth 1 end";
				hitpoint = "";
				position = "majak ligth 1 start";
				selection = "";
				size = 0.5;
			};
			class Majak2: Majak1 {
				direction = "majak ligth 2 end";
				hitpoint = "";
				position = "majak ligth 2 start";
				selection = "";
			};
		};
	};
	

