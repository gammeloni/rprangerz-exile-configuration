
Autor: Freakylein a BIG Thank to Firefox because he supported me all the way!!!  And all others who told me some Bugs :)

Extended Base Mod for Exile Mod

I just took some codes from the Exile Mod.
This content belongs complete to the Exile Mod Team! I Just combined some things :)
Well guys, this mod allows you to build some fortifications from the original Arma 3
in your own Territory.
There will be some more buildings in the Future -> changelog

INSTALLATION:

First insert the Battleyefilter out of the other .txt in the folder!!

put the folder "@Extended_Base_Mod" in your default Arma 3. It should be where your Steam is located.
Steam -> steamapps -> common -> arma 3 -> paste it here.
Then add "-mod=@Extended_Base_Mod" to the startup Parameters.

Copy the "Extended_Base_Mod\keys\freakylein.bikey" into your "keys" folder

Remove the receips of my mod from your whole mission.cpp if you are updating vom version before 0.2.2!!!! 

Create a folder called EBM in your Mission "Exile.Altis.pbo", then copy the "menus.hpp" and in the "receips.hpp" in this folder.
Add the following line at the top of the CfgCraftingRecipes inside your config.cpp of your mission:
#include "EBM\recipes.hpp" 
Add the following line at the top of the CfgInteractionMenus inside your config.cpp too:
#include "EBM\menus.hpp" 

if you are updating the mod after version 0.2.2 you can just configure those two files and replace or edit them.

Check all the .txt for some changes! Or the Mod will not work correctly.
!!!! Try the alternative receips and tradervalues from MrD !!!!   -Thank you for creating these ones!

To make the Rustytank working define the the config.cpp in your Missionfolder like this
look for "FuelSource"


class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"Tank_rust_F", // added new
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d"
		};	
	};



changelog:

V 0.2.3
- new Buildables: Camping Chair V1 & V2, Camping Table, Camping Lamp, MapBoard Altis, Pavement straight and corner narrow and straight and corner wide.
- added BRAMA categories to the recipes (Container, Walls, Flora, Misc, Buildings, Signs, Lamps)
- Battleyefilter added: !"MapBoard_altis_F"


V 0.2.2
- changed the way receips and menus are working, now implemented via .hpp (thank you Murgatroyd)
- new Buildings: Bush, Pier, 3 kind of Stones, Sleepingbag, 2 Solarpanels
- mass of the Big Dome changed to 200
- Armor of following reduced by half:CNC Wall,CNC Wall 1pc,Huge Container,Land Container Green
- fixed light_1_hitpoint spam in .rpt

V 0.2.1 Hotfix
- removed Big Tank and Military Checkpoint. Doors not working and Errors.

V 0.2.0
- new Buildings: airporttower, Barracks, Beachbooth, BigTank, Castletower, UnexplodedAmmoSign, Military Checkpoint, Transmissiontower
- increased armor of military tower (100 times)
- reduced weight of Airplanehangar

V 0.1.9
- new Buildings: Dome (big white one), Airplanehangar, Metal Shed, Solartower, Sunchair, Sunshed, Shabby Lamp
- increased armor of military tower (10 times)

V 0.1.8
- new Buildings:Chair, Cncblock, ContainerSmall, Industryfence 1pt, industryfence 3pt, Lampstreet, Seawall, Tavern, Tavern middle
added alternative crafting receips from MrDynamite

V 0.1.7
- new Buildings:PortableFloodlight double, Radar Small, Slumplane, Table, Toilet, Pierbox
Floodlight coming with next patch Sorry guys

V 0.1.6
- new Buildings: CNCBarrier1, Medium CNC Barrier, Crashbarrier, Big Shed, Touristshed, Watersource, CNC Wall small 4 + 8m, Military Sign Vehicle + Base Small
- bug fixed where Cargo Containers spawned a lock. -> check "addingmenutoitem.txt"
- fixed the bug where containers bouncing around, now same behavior like storage crate ^^
- Tentdome can be placed outside territory
- increased armor of military tower again (10 times)
- slightly increased armor of all hbarriers
- added alternative crafting receips in a separate .txt

V 0.1.5
- new Buildings: Broken Shed, Cargo Container Sand Small, CNC Stairs, Garage, Platform, Tent, Tenthangar
- added lockability to cargo containers
- fixed the bug where other players can pack the container without entering the code.
- Baselights now always on! fixed it :) hope you have fun with them.

V 0.1.4
- new Buildings: CNC Shelter, CNC Wall, Fuelstation Shed, Small Shed,razorwire
- Removed HalogenLights. Problem with Server restart. :( sorry guys
- lowered Mass of all heavy items.

V 0.1.3
- new Buildings: Slum Container, Cargo Container Big, Big Halogenlamp, Military Outpost Small
- Hangar now lockable -Menu added
- on Rusty Tank you can refuel empty Canister, not Cars. :) 
- improved armor of all Buildings
- Hangar mass is set to 310 (carryall is 320)

V 0.1.2
- new Buildings: Rusty Tank, Metal Shelve, Cargo Tower V2 Big, Fuelstation, BagBunker Large, Shootingpostition 
- Hangar now lockable -Menu added
- removed Helipadlights due to Memoryproblems!

V 0.1.1  Hotfix
-new Buildings: Helipadlight Blue,White and Yellow, Wooden Pier.
- added inventory to the yellow shelf and the icebox
- Hatches from the outpost can be opened now
- Hangar is not Lockable... sorry guys
- You can build Sandbags everywhere!!! :)
				
V 0.1.0  Major Patch
-new Buildings: ConcreteDoor, BarGate, Helipadlights green/red, icebox, Sign Military Area, Military CncWall,
				Military Outpost, Steelfence,
-Fixed Door Locking! now working correctly 

V 0.0.4
- Bugfixes
- New Buildings: 3 different Types of concrete walls; Helipad; New Shelf

V 0.0.3
- New Buildings: Ammobox, LandContainer, Sandbag Corner, Sandbag long, Sandbagbunker, Shelf
				Sandbagbunker Small, Hangar, Sandbagwall Big Corner, 6m, 4m, ConcreteRamp
- Ladder fixed
- Stone Gate lockable

V 0.0.2
- New Buildings: CNCBarrier, Stonewall, Stonegate, Ladder, Watercooler
- FIXED building location was stuck! -> battleye filter!!!

New Items for the Serveradministrator: -> insert it in your config.cpp in the mission .pbo
//////////////////////////////////////////////////////////
To Paste it to the Traderlist:

		"Land_HBarrier_1_F_Kit",
		"Land_HBarrier_3_F_Kit",
		"Land_HBarrier_5_F_Kit",
		"Land_BagBunker_Tower_F_Kit",
		"CamoNet_OPFOR_open_F_Kit",
		"CamoNet_INDP_open_F_Kit",
		"CamoNet_BLUFOR_open_F_Kit",
		///////////////////////// V0.0.2
		"Land_CncBarrier_F_Kit",
		"Land_Stone_4m_F_Kit",
		"Land_Stone_Gate_F_Kit",
		"PierLadder_F_Kit",
		"Land_WaterCooler_01_new_F_Kit",
		///////////////////////// V0.0.3
		"Land_Pallet_MilBoxes_F_Kit",
		"Land_Cargo20_military_green_F_Kit",
		"Land_BagFence_Corner_F_Kit",
		"Land_BagFence_Long_F_Kit",
		"Land_HBarrierTower_F_Kit",
		"Land_Metal_wooden_rack_F_Kit",
		"Land_BagBunker_Small_F_Kit",
		"Land_Bunker_F_Kit",
		"Land_HBarrierWall_corner_F_Kit",
		"Land_HBarrierWall6_F_Kit",
		"Land_HBarrierWall4_F_Kit",
		"Land_RampConcrete_F_Kit",
		///////////////////////// V0.0.4
		"Land_Wall_IndCnc_4_F_Kit",
		"Land_City2_4m_F_Kit",
		"Land_City2_8m_F_Kit",
		"Land_HelipadCivil_F_Kit",
		"Land_Rack_F_Kit",
		///////////////////////// V0.1.0
		"Land_City_Gate_F_Kit",
		"Land_BarGate_F_Kit",
		"Land_Icebox_F_Kit",
		"Land_Sign_WarningMilitaryArea_F_Kit",
		"Land_Mil_WallBig_4m_F_Kit",
		"Land_Cargo_Patrol_V2_F_Kit",
		///////////////////////// V0.1.1
		"Land_Pier_small_F_Kit",
		"Land_Wall_Tin_4_Kit",
		///////////////////////// V0.1.2
		"Land_Tank_rust_F_Kit",
		"Land_ShelvesMetal_F_Kit",
		"Land_Cargo_Tower_V2_F_Kit",
		"Land_FuelStation_Feed_F_Kit",
		"Land_BagBunker_Large_F_Kit",
		"ShootingPos_F_Kit",
		///////////////////////// V0.1.3
		"Land_cargo_house_slum_F_Kit",
		"Land_Cargo40_light_green_F_Kit",
		"Land_Cargo_House_V2_F_Kit",
		"Land_LampHalogen_F_Kit",
		///////////////////////// V0.1.4
		"Land_LampAirport_F_Kit",
		"Land_CncShelter_F_Kit",
		"Land_Wall_IndCnc_2deco_F_Kit",
		"Land_CncWall4_F_Kit",
		"Land_FuelStation_Shed_F_Kit",
		"Land_Shed_Small_F_Kit",		
		"Land_Razorwire_F_Kit",
		///////////////////////// V0.1.5
		"Land_u_Addon_01_V1_F_Kit", //brokenshed
		"Land_Cargo20_sand_F_Kit",
		"Land_GH_Stairs_F_Kit",
		"Land_i_Garage_V2_F_Kit",
		"Land_GH_Platform_F_Kit",
		"Land_TentDome_F_Kit",
		"Land_TentHangar_V1_F_Kit",
		///////////////////////// V0.1.6
		"Land_CncWall1_F_Kit",
		"Land_CncBarrierMedium_F_Kit",
		"Land_Crash_barrier_F_Kit",
		"Land_Shed_Big_F_Kit",
		"Land_TouristShelter_01_F_Kit",
		"Land_Water_source_F_Kit",
		"Land_Sign_WarningMilitaryVehicles_F_Kit",
		"Land_Sign_WarningMilAreaSmall_F_Kit",
		"Land_Concrete_SmallWall_8m_F_Kit",
		"Land_Concrete_SmallWall_4m_F_Kit",
		///////////////////////// V0.1.7
		"Land_PortableLight_double_F_Kit",
		"Land_Radar_Small_F_Kit",
		"Land_Cargo_addon02_V2_F_Kit", //Slumplane
		"Land_TableDesk_F_Kit",
		"Land_ToiletBox_F_Kit",
		"Land_Pier_Box_F_Kit",
		///////////////////////// V0.1.8
		"Land_ChairWood_F_Kit",
		"BlockConcrete_F_Kit",
		"Land_CargoBox_V1_F_Kit",
		"Land_IndFnc_3_F_Kit",
		"Land_IndFnc_9_F_Kit",
		"Land_Sea_Wall_F_Kit",
		"Land_i_Addon_03_V1_F_Kit",
		"Land_i_Addon_03mid_V1_F_Kit",
		"Land_LampStreet_F_Kit",
		///////////////////////// V0.1.9
		"Land_Dome_Big_F_Kit",
		"Land_Hangar_F_Kit",
		"Land_Metal_Shed_F_Kit",
		"Land_spp_Tower_F_Kit",
		"Land_Sun_chair_F_Kit",
		"Land_Sunshade_04_F_Kit",
		"Land_LampShabby_F_Kit",
		///////////////////////// V0.2.0
		"Land_Airport_Tower_F_Kit",
		"Land_i_Barracks_V1_F_Kit",
		"Land_BeachBooth_01_F_Kit",
		"Land_Castle_01_tower_F_Kit",
		"Land_Sign_WarningUnexplodedAmmo_F_Kit",
		"Land_TTowerSmall_1_F_Kit",
		///////////////////////// V0.2.1 Hotfix
		///////////////////////// V0.2.2
		"Exile_Plant_GreenBush_Kit",
		"Land_nav_pier_m_F_Kit",
		"Land_SharpStone_01_F_Kit",
		"Land_SharpStone_02_F_Kit",
		"Land_Sleeping_bag_F_Kit",
		"Land_Small_Stone_02_F_Kit",
		"Land_SolarPanel_2_F_Kit",
		"Land_spp_Panel_F_Kit",
		///////////////////////// V0.2.3
		"Land_CampingChair_V2_F_Kit",
		"Land_CampingChair_V1_F_Kit",
		"Land_Camping_Light_F_Kit",
		"Land_CampingTable_F_Kit",
		"MapBoard_altis_F_Kit",
		"Land_Pavement_narrow_F_Kit",
		"Land_Pavement_narrow_corner_F_Kit",
		"Land_Pavement_wide_F_Kit",
		"Land_Pavement_wide_corner_F_Kit",
		
//////////////////////////////////////////////////////////
To Paste it to the Pricelist:

///////////////////////////////////////////////////////////////////////////////
// Extended Base Mod
//////////////////////////////////////////////////////////////////////////////
class Land_HBarrier_1_F_Kit				{ quality = 1; price = 5500;sellPrice = 50; };
class Land_HBarrier_3_F_Kit				{ quality = 1; price = 19000;sellPrice = 50;  };
class Land_HBarrier_5_F_Kit				{ quality = 1; price = 40000;sellPrice = 50;  };
class Land_BagBunker_Tower_F_Kit		{ quality = 1; price = 100000;sellPrice = 50;  };
class CamoNet_OPFOR_open_F_Kit			{ quality = 1; price = 1000; sellPrice = 50; };
class CamoNet_INDP_open_F_Kit			{ quality = 1; price = 1000;sellPrice = 50;  };
class CamoNet_BLUFOR_open_F_Kit			{ quality = 1; price = 1000;sellPrice = 50;  };
///////////////////////// V0.0.2
class Land_CncBarrier_F_Kit				{ quality = 1; price = 7500;sellPrice = 50;  };
class Land_Stone_4m_F_Kit				{ quality = 1; price = 15000;sellPrice = 50;  };
class Land_Stone_Gate_F_Kit				{ quality = 1; price = 15000;sellPrice = 50;  };
class PierLadder_F_Kit					{ quality = 1; price = 75000;sellPrice = 50;  };
class Land_WaterCooler_01_new_F_Kit		{ quality = 1; price = 180000;sellPrice = 50;  };
///////////////////////// V0.0.3
class Land_Pallet_MilBoxes_F_Kit		{ quality = 1; price = 39990;sellPrice = 50;  };
class Land_Cargo20_military_green_F_Kit	{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_BagFence_Corner_F_Kit		{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_BagFence_Long_F_Kit			{ quality = 1; price = 10000;sellPrice = 50; };
class Land_HBarrierTower_F_Kit			{ quality = 1; price = 75000;sellPrice = 50;  };
class Land_Metal_wooden_rack_F_Kit		{ quality = 1; price = 38000;sellPrice = 50;  };
class Land_BagBunker_Small_F_Kit		{ quality = 1; price = 65000;sellPrice = 50;  };
class Land_Bunker_F_Kit					{ quality = 1; price = 750000;sellPrice = 50;  };
class Land_HBarrierWall_corner_F_Kit	{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_HBarrierWall6_F_Kit			{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_HBarrierWall4_F_Kit			{ quality = 1; price = 35000;sellPrice = 50;  };
class Land_RampConcrete_F_Kit			{ quality = 1; price = 55000;sellPrice = 50;  };
///////////////////////// V0.0.4
class Land_Wall_IndCnc_4_F_Kit			{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_City2_4m_F_Kit				{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_City2_8m_F_Kit				{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_HelipadCivil_F_Kit			{ quality = 1; price = 100000;sellPrice = 50;  };
class Land_Rack_F_Kit					{ quality = 1; price = 35000;sellPrice = 50;  };
///////////////////////// V0.1.0
class Land_City_Gate_F_Kit							{ quality = 1; price = 20000;sellPrice = 50;  };
class Land_BarGate_F_Kit							{ quality = 1; price = 20000;sellPrice = 50;  };
class Land_Icebox_F_Kit								{ quality = 1; price = 45000;sellPrice = 50;  };
class Land_Sign_WarningMilitaryArea_F_Kit			{ quality = 1; price = 1000;sellPrice = 50;  };
class Land_Mil_WallBig_4m_F_Kit						{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_Cargo_Patrol_V2_F_Kit					{ quality = 1; price = 185000;sellPrice = 50;  };
///////////////////////// V0.1.1
class Land_Pier_small_F_Kit							{ quality = 1; price = 75000;sellPrice = 50;  };
class Land_Wall_Tin_4_Kit							{ quality = 1; price = 50000;sellPrice = 50;  };
///////////////////////// V0.1.2
class Land_Tank_rust_F_Kit							{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_ShelvesMetal_F_Kit						{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_Cargo_Tower_V2_F_Kit						{ quality = 1; price = 750000;sellPrice = 50;  };
class Land_FuelStation_Feed_F_Kit					{ quality = 1; price = 220000;sellPrice = 50;  };
class Land_BagBunker_Large_F_Kit					{ quality = 1; price = 100000;sellPrice = 50;  };
class ShootingPos_F_Kit								{ quality = 1; price = 1000;sellPrice = 50;  };
///////////////////////// V0.1.3
class Land_cargo_house_slum_F_Kit							{ quality = 1; price = 25000;sellPrice = 50;  };
class Land_Cargo40_light_green_F_Kit						{ quality = 1; price = 130000;sellPrice = 50;  };
class Land_Cargo_House_V2_F_Kit								{ quality = 1; price = 200000;sellPrice = 50;  };
class Land_LampHalogen_F_Kit								{ quality = 1; price = 65200;sellPrice = 50;  };
///////////////////////// V0.1.4
class Land_LampAirport_F_Kit								{ quality = 1; price = 85600;sellPrice = 50;  };
class Land_CncShelter_F_Kit									{ quality = 1; price = 40000;sellPrice = 50;  };
class Land_Wall_IndCnc_2deco_F_Kit							{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_CncWall4_F_Kit									{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_FuelStation_Shed_F_Kit							{ quality = 1; price = 65000;sellPrice = 50;  };
class Land_Shed_Small_F_Kit									{ quality = 1; price = 100000;sellPrice = 50;  };
class Land_Razorwire_F_Kit									{ quality = 1; price = 5000;sellPrice = 50;  };
///////////////////////// V0.1.5
class Land_u_Addon_01_V1_F_Kit								{ quality = 1; price = 50000;sellPrice = 50;  }; //brokenshed
class Land_Cargo20_sand_F_Kit								{ quality = 1; price = 80000;sellPrice = 50;  };
class Land_GH_Stairs_F_Kit									{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_i_Garage_V2_F_Kit								{ quality = 1; price = 125000;sellPrice = 50;  };
class Land_GH_Platform_F_Kit								{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_TentDome_F_Kit									{ quality = 1; price = 1000;sellPrice = 50;  };
class Land_TentHangar_V1_F_Kit								{ quality = 1; price = 350000;sellPrice = 50;  };
///////////////////////// V0.1.6
class Land_CncWall1_F_Kit									{ quality = 1; price = 15000;sellPrice = 50;  };
class Land_CncBarrierMedium_F_Kit							{ quality = 1; price = 15000;sellPrice = 50;  };
class Land_Crash_barrier_F_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Shed_Big_F_Kit									{ quality = 1; price = 75000;sellPrice = 50;  };
class Land_TouristShelter_01_F_Kit							{ quality = 1; price = 50000;sellPrice = 50;  };
class Land_Water_source_F_Kit								{ quality = 1; price = 100000;sellPrice = 50;  };
class Land_Sign_WarningMilitaryVehicles_F_Kit				{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Sign_WarningMilAreaSmall_F_Kit					{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Concrete_SmallWall_8m_F_Kit						{ quality = 1; price = 20000;sellPrice = 50;  };
class Land_Concrete_SmallWall_4m_F_Kit						{ quality = 1; price = 20000;sellPrice = 50;  };
///////////////////////// V0.1.7
class Land_PortableLight_double_F_Kit						{ quality = 1; price = 25000;sellPrice = 50;  };
class Land_Radar_Small_F_Kit								{ quality = 1; price = 150000; sellPrice = 50;  };
class Land_Cargo_addon02_V2_F_Kit							{ quality = 1; price = 20000;sellPrice = 50;  }; //Slumplane	
class Land_TableDesk_F_Kit									{ quality = 1; price = 20000;sellPrice = 50;  };
class Land_ToiletBox_F_Kit									{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Pier_Box_F_Kit									{ quality = 1; price = 500000;sellPrice = 50;  };
///////////////////////// V0.1.8
class Land_ChairWood_F_Kit									{ quality = 1; price = 1000;sellPrice = 50;  };
class BlockConcrete_F_Kit									{ quality = 1; price = 20000;sellPrice = 50;  };
class Land_CargoBox_V1_F_Kit								{ quality = 1; price = 60000;sellPrice = 50;  };
class Land_IndFnc_3_F_Kit									{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_IndFnc_9_F_Kit									{ quality = 1; price = 30000;sellPrice = 50;  };
class Land_Sea_Wall_F_Kit									{ quality = 1; price = 100000;sellPrice = 50;  };
class Land_i_Addon_03_V1_F_Kit								{ quality = 1; price = 50000;sellPrice = 50;  }; //Tavern
class Land_i_Addon_03mid_V1_F_Kit							{ quality = 1; price = 50000;sellPrice = 50;  }; //Tavernmiddle
class Land_LampStreet_F_Kit									{ quality = 1; price = 30000;sellPrice = 50;  };
///////////////////////// V0.1.9
class Land_Dome_Big_F_Kit									{ quality = 1; price = 300000;sellPrice = 50;  };
class Land_Hangar_F_Kit										{ quality = 1; price = 500000;sellPrice = 50;  };
class Land_Metal_Shed_F_Kit									{ quality = 1; price = 30000;sellPrice = 50;  };
class Land_spp_Tower_F_Kit									{ quality = 1; price = 700000;sellPrice = 50;  };
class Land_Sun_chair_F_Kit									{ quality = 1; price = 5000;sellPrice = 50;  };
class Land_Sunshade_04_F_Kit								{ quality = 1; price = 5000;sellPrice = 50;  };
class Land_LampShabby_F_Kit									{ quality = 1; price = 20000;sellPrice = 50;  };
///////////////////////// V0.2.0
class Land_Airport_Tower_F_Kit								{ quality = 1; price = 200000;sellPrice = 50;  };
class Land_i_Barracks_V1_F_Kit								{ quality = 1; price = 250000;sellPrice = 50;  };
class Land_BeachBooth_01_F_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Castle_01_tower_F_Kit							{ quality = 1; price = 100000;sellPrice = 50;  };
class Land_Sign_WarningUnexplodedAmmo_F_Kit					{ quality = 1; price = 1000;sellPrice = 50;  };
class Land_TTowerSmall_1_F_Kit								{ quality = 1; price = 20000;sellPrice = 50;  };
///////////////////////// V0.2.1 Hotfix
///////////////////////// V0.2.2
class Exile_Plant_GreenBush_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_nav_pier_m_F_Kit									{ quality = 1; price = 200000;sellPrice = 50;  };
class Land_SharpStone_01_F_Kit								{ quality = 1; price = 26000;sellPrice = 50;  };
class Land_SharpStone_02_F_Kit								{ quality = 1; price = 25000;sellPrice = 50;  };
class Land_Sleeping_bag_F_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Small_Stone_02_F_Kit								{ quality = 1; price = 23000;sellPrice = 50;  };
class Land_SolarPanel_2_F_Kit								{ quality = 1; price = 30000;sellPrice = 50;  };
class Land_spp_Panel_F_Kit									{ quality = 1; price = 35000;sellPrice = 50;  };
///////////////////////// V0.2.3
class Land_CampingChair_V2_F_Kit							{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_CampingChair_V1_F_Kit							{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_Camping_Light_F_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class Land_CampingTable_F_Kit								{ quality = 1; price = 10000;sellPrice = 50;  };
class MapBoard_altis_F_Kit									{ quality = 1; price = 8000;sellPrice = 50;  };
class Land_Pavement_narrow_F_Kit							{ quality = 1; price = 5000;sellPrice = 50;  };
class Land_Pavement_narrow_corner_F_Kit						{ quality = 1; price = 5000;sellPrice = 50;  };
class Land_Pavement_wide_F_Kit								{ quality = 1; price = 5000;sellPrice = 50;  };
class Land_Pavement_wide_corner_F_Kit						{ quality = 1; price = 5000;sellPrice = 50;  };
