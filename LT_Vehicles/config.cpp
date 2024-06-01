#include "CfgPatches.hpp"

class CfgVehicles
{
	// Ground
	class rhsgref_nat_uaz;
	class rhsgref_nat_uaz_dshkm;
	class rhsgref_hidf_m1025;
	class rhsgref_hidf_m1025_m2;
	class C_Van_02_transport_F;
	class C_Van_02_vehicle_F;
	class rhsgref_cdf_b_btr80;
	class rhs_t72bc_tv;
	class MBT_02_railgun_base_F;
	class V_LT_UAZ: rhsgref_nat_uaz
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Cars";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_UAZ_DSHKM: rhsgref_nat_uaz_dshkm
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Cars";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_M1025: rhsgref_hidf_m1025
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Cars";
		crew="I_LT_SF_Rifleman";
		typicalCargo[]=
		{
			"I_LT_SF_Rifleman",
			"I_LT_SF_Scout",
			"I_LT_SF_Rifleman_GL",
			"I_LT_SF_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_hk416d145
			{
				weapon="rhs_weap_hk416d145";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_M1025_M2: rhsgref_hidf_m1025_m2
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Cars";
		crew="I_LT_SF_Rifleman";
		typicalCargo[]=
		{
			"I_LT_SF_Rifleman",
			"I_LT_SF_Scout",
			"I_LT_SF_Rifleman_GL",
			"I_LT_SF_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_hk416d145
			{
				weapon="rhs_weap_hk416d145";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_Van: C_Van_02_transport_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_Van_Cargo: C_Van_02_vehicle_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=20;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=10;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_BTR80: rhsgref_cdf_b_btr80
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Crewman";
		typicalCargo[]=
		{
			"I_LT_Crewman",
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_T72: rhs_t72bc_tv
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Tanks";
		crew="I_LT_Crewman";
		typicalCargo[]=
		{
			"I_LT_Crewman"
		};
	};
	class V_LT_Railgun_Tank: MBT_02_railgun_base_F
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="LT_Group";
		crew="I_LT_Crewman";
		typicalCargo[]=
		{
			"I_LT_Rifleman",
			"I_LT_Rifleman",
			"I_LT_Rifleman"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa",
			"a3\Armor_F_Decade\MBT_02\Data\MBT_02_turret_expo_CO.paa",
			"a3\Armor_F_Decade\MBT_02\Data\MBT_02_expo_CO.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
		};
	};

	// Air
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_dynamicLoadout_F;
	class I_Plane_Fighter_04_F;
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class RHS_C130J_Base;
	class rhs_uh1h_hidf_gunship;
	class rhsgref_b_mi24g_CAS;
	class rhsusf_CH53E_USMC;
	class B_T_VTOL_01_infantry_F;

	class V_LT_MH6: B_Heli_Light_01_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Crewman";
		typicalCargo[]=
		{
			"I_LT_Crewman",
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_AH6: B_Heli_Light_01_dynamicLoadout_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_HeliPilot";
		typicalCargo[]=
		{
			"I_LT_HeliPilot",
			"I_LT_Rifleman",
			"I_LT_Scout",
			"I_LT_Rifleman_GL",
			"I_LT_Autorifleman"
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=10;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine="9Rnd_45ACP_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=3;
			};
			class _xx_hgun_ACPC2_F
			{
				weapon="hgun_ACPC2_F";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class V_LT_Gripen: I_Plane_Fighter_04_F
	{
		side=0;
		displayName="Gripen (Liontooth)";
		faction="LT_Group";
		crew="I_LT_Pilot";
		typicalCargo[]=
		{
			"I_LT_Pilot"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
		};
	};
	class V_LT_L159: I_Plane_Fighter_03_dynamicLoadout_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Pilot";
		typicalCargo[]=
		{
			"I_LT_Pilot"
		};
	};
	class V_LT_C130J: RHS_C130J_Base
	{
		scope = 2;
		scopeCurator = 2;
		side=0;
		faction="LT_Group";
		crew="I_LT_Pilot";
		typicalCargo[]=
		{
			"I_LT_Pilot",
			"I_LT_Pilot"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionTextures[]=
		{
			"LT_Vehicles\Data\C130_LT_Body_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
		};
		
		class textureSources
		{
			class LT_Livery
			{
				displayName="Liontooth Livery";
				author="johnyF";
				textures[]=
				{
					"LT_Vehicles\Data\C130_LT_Body_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
				};
				factions[]=
				{
					"LT_Group"
				};
			};
		};
		textureList[]=
		{
			"LT_Livery",
			1
		};
	};
	class V_LT_UH1H: rhs_uh1h_hidf_gunship
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_HeliPilot";
		typicalCargo[]=
		{
			"I_LT_HeliPilot",
			"I_LT_Rifleman",
			"I_LT_SF_Rifleman"
		};
	};
	class V_LT_MI24: rhsgref_b_mi24g_CAS
	{
		side=0;
		faction="LT_Group";
		editorSubcategory="EdSubcat_Helicopters";
		crew="I_LT_HeliPilot";
		typicalCargo[]=
		{
			"I_LT_HeliPilot"
		};
	};
	class V_LT_CH53E: rhsusf_CH53E_USMC
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_HeliPilot";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LT_Vehicles\Data\ch53_LT_co.paa"
		};
		typicalCargo[]=
		{
			"I_LT_HeliPilot",
			"I_LT_Rifleman",
			"I_LT_SF_Rifleman"
		};
	};
	class V_LT_VTOL: B_T_VTOL_01_infantry_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_HeliPilot";
		typicalCargo[]=
		{
			"I_LT_HeliPilot",
			"I_LT_SF_Rifleman"
		};
	};
	
	// Turrets
	class B_G_HMG_02_F;
	class B_G_HMG_02_high_F;
	class RHS_AGS30_TriPod_base;
	class RHS_ZU23_base;
	class B_Mortar_01_F;

	class T_LT_M2: B_G_HMG_02_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
	};
	class T_LT_M2_High: B_G_HMG_02_high_F
	{
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
	};
	class T_LT_AGS30: RHS_AGS30_TriPod_base
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_VMF.paa";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman"
		};
	};
	class T_LT_ZU23: RHS_ZU23_base
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_MSV.paa";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
		typicalCargo[]=
		{
			"I_LT_Rifleman"
		};
	};
	class T_LT_Mortar : B_Mortar_01_F{
		side=0;
		faction="LT_Group";
		crew="I_LT_Rifleman";
	};
};
class cfgMods
{
	author="johnyF";
};
