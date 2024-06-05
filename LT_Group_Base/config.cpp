#include "CfgPatches.hpp"

class CfgFactionClasses
{
	class LT_Group_O
	{
		displayName="Liontooth Group";
		side=0;
		priority=2;
	};
	class LT_Group_I: LT_Group_O
	{
		side=2;
	};
};
class CfgEditorSubcategories
{
	class LT_E_Chem
	{
		displayName="Men (HAZMAT)";
	};
	class EdSubCat_LT_Infantry
	{
		displayName="Infantry";
	};
};
class CfgVehicles
{
	class B_AssaultPack_blk;
	class B_Carryall_blk;
	class B_LegStrapBag_black_F;
	class B_LT_AssaultPack: B_AssaultPack_blk
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_Flashlight_XL50
			{
				name="ACE_Flashlight_XL50";
				count=1;
			};
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
			class _xx_CUP_NVG_PVS7
			{
				name="CUP_NVG_PVS7";
				count=1;
			};
		};
	};
	class B_LT_Assault_SF: B_AssaultPack_blk
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=2;
			};
			class _xx_ACE_CTS9
			{
				magazine="ACE_CTS9";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_Flashlight_XL50
			{
				name="ACE_Flashlight_XL50";
				count=1;
			};
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
			class _xx_CUP_NVG_GPNVG_black
			{
				name="CUP_NVG_GPNVG_black";
				count=1;
			};
		};
	};
	class B_LT_MedicalPack: B_Carryall_blk
	{
		scope=1;
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=10;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=10;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=10;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=3;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=4;
			};
			class _xx_CUP_NVG_PVS7
			{
				name="CUP_NVG_PVS7";
				count=1;
			};
		};
	};
	class B_LT_Carryall: B_Carryall_blk
	{
		scope=1;
		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
			class _xx_CUP_NVG_PVS7
			{
				name="CUP_NVG_PVS7";
				count=1;
			};
		};
	};
	class B_LT_Carryall_Auto: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_rhs_45Rnd_545X39_7N22_AK
			{
				magazine="rhs_45Rnd_545X39_7N22_AK";
				count=7;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
	};
	class B_LT_Carryall_Auto_SF: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_rhs_45Rnd_545X39_7N22_AK
			{
				magazine="rhs_45Rnd_545X39_7N22_AK";
				count=7;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
	};
	class B_LT_Carryall_GPMG: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
	};
	class B_LT_Carryall_GPMG_SF: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box_Tracer
			{
				magazine="150Rnd_762x54_Box_Tracer";
				count=5;
			};
		};
	};
	class B_LT_Carryall_AT: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_rhs_rpg7_TBG7V_mag
			{
				magazine="rhs_rpg7_TBG7V_mag";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
	};
	class B_LT_Legstrap: B_LegStrapBag_black_F
	{
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class O_Soldier_base_F;
	class LT_Base: O_Soldier_base_F
	{
		faction = "LT_Group_O";
		author="johnyF";
		scope=0;
		scopeCurator=0;
		cost=200000;
		camouflage=1.5;
		sensitivity=2.5;
		threat[]={1,0.5,0.5};
		items[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_tourniquet",
			"ACE_CableTie"
		};
		respawnItems[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_tourniquet",
			"ACE_CableTie"
		};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
	};
	class LT_Infantry_Base: LT_Base
	{
		editorSubcategory="EdSubcat_Personnel";
		model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass="U_OG_Guerilla2_3";
		backpack="B_LT_AssaultPack";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"W_LT_VHSD2_Holo",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_VHSD2_Holo",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"rhsgref_30rnd_556x45_vhs2_t",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
	};
	class LT_Hazmat_Base: LT_Infantry_Base
	{
		editorSubcategory="LT_E_Chem";
		model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		uniformClass="U_O_R_Gorka_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class LT_SpecialForces_Base: LT_Base
	{
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		model="\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass="U_O_LT_G3";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Gloves",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry2\Data\gen3_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa",
			"\LT_Group_Base\Data\LT_Patch.paa"
		};
		backpack="B_LT_Assault_SF";
		weapons[]=
		{
			"W_LT_HK416",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_HK416",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ"
		};
		respawnMagazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ"
		};
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Black2",
			"rhsusf_opscore_bk_pelt",
			"CUP_RUS_Balaclava_blk",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Black2",
			"rhsusf_opscore_bk_pelt",
			"CUP_RUS_Balaclava_blk",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class CfgWeapons
{
	// Uniforms
	class UniformItem;
	class U_B_PilotCoveralls;
	class U_I_FullGhillie_sard;
	class rhs_uniform_g3_blk;
	class U_O_R_Gorka_01_black_F;

	class U_O_LT_PilotCoveralls: U_B_PilotCoveralls
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_LT_Pilot";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_I_LT_PilotCoveralls: U_B_PilotCoveralls
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_LT_Pilot";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_O_LT_Ghillie: U_I_FullGhillie_sard
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_LT_Sniper";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_O_LT_G3: rhs_uniform_g3_blk
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_LT_SF_Rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_LT_G3: rhs_uniform_g3_blk
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_LT_SF_Rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_LT_Tracksuit: U_O_R_Gorka_01_black_F
	{
		scope=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_LT_Rifleman_H";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	// Weapons
	class rhs_weap_vhsd2;
	class SMG_03C_TR_black;
	class rhs_weap_vhsd2_bg;
	class rhs_weap_rpk74m_npz;
	class rhs_weap_svdp;
	class rhs_weap_t5000;
	class W_LT_VHSD2_Holo: rhs_weap_vhsd2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
		};
	};
	class W_LT_P90_Reflex: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_RM05";
			};
		};
	};
	class W_LT_VHSD2_GL: rhs_weap_vhsd2_bg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
		};
	};
	class W_LT_RPK74: rhs_weap_rpk74m_npz
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_USMC";
			};
		};
	};
	class W_LT_SVD: rhs_weap_svdp
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m21";
			};
		};
	};
	class W_LT_T5000: rhs_weap_t5000
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_nxs_3515x50_md";
			};
		};
	};
	
	// Weapons (Special Forces)
	class rhs_weap_hk416d145;
	class rhs_weap_hk416d145_m320;
	class rhs_weap_asval;
	class rhs_weap_mk17_LB;
	class rhs_weap_m249_light_L;
	class LMG_Zafir_F;
	class rhs_weap_M107_w;
	class W_LT_HK416: rhs_weap_hk416d145
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_1p87";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhsusf_acc_rotex5_grey";
			};
		};
	};
	class W_LT_HK416_GL: rhs_weap_hk416d145_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_1p87";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class W_LT_ASVAL: rhs_weap_asval
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_okp7_dovetail";
			};
		};
	};
	class W_LT_SCARH_DMR: rhs_weap_mk17_LB
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class W_LT_M249_SF: rhs_weap_m249_light_L
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_RMR";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_saw_bipod";
			};
		};
	};
	class W_LT_Negev_SF: LMG_Zafir_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_RMR";
			};
		};
	};
	class W_LT_M107A1: rhs_weap_M107_w
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_nxs_3515x50_md";
			};
		};
	};
};
class CfgGroups
{
	class East
	{
		class LT_Group_O
		{
			name="Liontooth Group";
			class Infantry
			{
				name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
				class G_O_LT_AATeam
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_ATTeam
				{
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_FireTeam
				{
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_SF_ReconPatrol
				{
					name="Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_SF_ReconSentry
				{
					name="Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_O_LT_SF_ReconSquad
				{
					name="Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_SF_ReconTeam
				{
					name="Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_RifleSquad
				{
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_Sentry
				{
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_O_LT_SniperTeam
				{
					name="Sniper Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_O_LT_WeaponsSquad
				{
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_CQB
				{
					name="CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
				class G_O_LT_Bubbles {
					
					name="Bubbles Special";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
			};
			class Infantry_Hazmat
			{
				name="Infantry (HAZMAT)";
				class G_O_LT_AATeam_H
				{
					name="Air-Defense (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AA_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_ATTeam_H
				{
					name="Anti-Armor Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_FireTeam_H
				{
					name="Fire Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_O_LT_RifleSquad_H
				{
					name="Rifle Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_Sentry_H
				{
					name="Sentry (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_O_LT_SniperTeam_H
				{
					name="Sniper Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Sniper_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_O_LT_WeaponsSquad_H
				{
					name="Weapons Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_GPMG_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_CQB_H
				{
					name="CQB Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Scout_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Scout_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Engineer_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized";
				class G_O_LT_FireTeamM
				{
					name="Motorized Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_UAZ";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_AssaultTeamM
				{
					name="Motorized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Van";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
				class G_O_LT_SF_ReconPatrolM
				{
					name="Motorized Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_SF_ReconTeamM
				{
					name="Motorized Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_SF_ReconSquadM
				{
					name="Motorized Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
				class G_O_LT_SF_AssaultTeamM
				{
					name="Motorized Recon Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025_M2";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized";
				class G_O_LT_MechanizedAT
				{
					name="Mechanized Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_MechanizedAA
				{
					name="Mechanized Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_MechanizedAssaultTeam
				{
					name="Mechanized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
			};
			class Armor
			{
				name="Armor";
				class G_O_LT_T72Platoon
				{
					name="T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
				};
				class G_O_LT_ArmoredAssaultTeam
				{
					name="Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
					};
					class unit12
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
					};
				};
			};
			class Air
			{
				name="Air";
				class G_O_LT_FighterSquadron1
				{
					name="Fighter Squadron (Gripen)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
				class G_O_LT_FighterSquadron2
				{
					name="Fighter Squadron (Mixed)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_L159";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_L159";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
			};
		};
	};
	class Indep 
	{
		class LT_Group_I
		{
			name="Liontooth Group";
			class Infantry
			{
				name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
				class G_I_LT_AATeam
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_ATTeam
				{
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_FireTeam
				{
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_SF_ReconPatrol
				{
					name="Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_SF_ReconSentry
				{
					name="Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SF_ReconSquad
				{
					name="Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_SF_ReconTeam
				{
					name="Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_RifleSquad
				{
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_Sentry
				{
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SniperTeam
				{
					name="Sniper Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_WeaponsSquad
				{
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_CQB
				{
					name="CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
				class G_I_LT_Bubbles {
					
					name="Bubbles Special";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
			};
			class Infantry_Hazmat
			{
				name="Infantry (HAZMAT)";
				class G_I_LT_AATeam_H
				{
					name="Air-Defense (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AA_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_ATTeam_H
				{
					name="Anti-Armor Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_FireTeam_H
				{
					name="Fire Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_RifleSquad_H
				{
					name="Rifle Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_Sentry_H
				{
					name="Sentry (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SniperTeam_H
				{
					name="Sniper Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Sniper_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_WeaponsSquad_H
				{
					name="Weapons Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_GPMG_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_CQB_H
				{
					name="CQB Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Scout_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Scout_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Engineer_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized";
				class G_I_LT_FireTeamM
				{
					name="Motorized Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_UAZ";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_AssaultTeamM
				{
					name="Motorized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Van";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
				class G_I_LT_SF_ReconPatrolM
				{
					name="Motorized Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_SF_ReconTeamM
				{
					name="Motorized Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_SF_ReconSquadM
				{
					name="Motorized Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
				class G_I_LT_SF_AssaultTeamM
				{
					name="Motorized Recon Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025_M2";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized";
				class G_I_LT_MechanizedAT
				{
					name="Mechanized Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_MechanizedAA
				{
					name="Mechanized Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_MechanizedAssaultTeam
				{
					name="Mechanized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
			};
			class Armor
			{
				name="Armor";
				class G_I_LT_T72Platoon
				{
					name="T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
				};
				class G_I_LT_ArmoredAssaultTeam
				{
					name="Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
					};
					class unit12
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
					};
				};
			};
			class Air
			{
				name="Air";
				class G_I_LT_FighterSquadron1
				{
					name="Fighter Squadron (Gripen)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
				class G_I_LT_FighterSquadron2
				{
					name="Fighter Squadron (Mixed)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_L159";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_L159";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="johnyF";
};