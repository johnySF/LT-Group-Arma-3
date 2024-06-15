#include "CfgPatches.hpp"

class CfgVehicles
{
	class LT_Base;
	class LT_Infantry_Base;
	class LT_Desert_Base;
	
	// Regular
	class O_LT_Rifleman: LT_Infantry_Base
	{
		displayName="Rifleman";
		scope=2;
		scopeCurator=2;
	};
	class O_LT_Rifleman_GL: LT_Infantry_Base
	{
		displayName="Grenadier";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_VHSD2_GL",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_VHSD2_GL",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
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
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Grenadier",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Grenadier",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Officer: LT_Infantry_Base
	{
		displayName="Officer";
		scope=2;
		scopeCurator=2;
		weapons[] = {
			"SMG_05_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = {
			"SMG_05_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		respawnMagazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_SLA_BeretRed",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_SLA_BeretRed",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Scout: LT_Infantry_Base
	{
		displayName="Scout";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_P90_Reflex",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_P90_Reflex",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"50Rnd_570x28_SMG_03",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_PMC_Cap_Back_EP_Grey",
			"G_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_PMC_Cap_Back_EP_Grey",
			"G_Shades_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Autorifleman: LT_Infantry_Base
	{
		displayName="Autorifleman";
		scope=2;
		scopeCurator=2;
		backpack="B_LT_Carryall_Auto";
		weapons[]=
		{
			"W_LT_RPK74",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_RPK74",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_60Rnd_545X39_AK_Green",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhs_60Rnd_545X39_AK_Green",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_GPMG: O_LT_Autorifleman
	{
		displayName="Machinegunner";
		scope=2;
		scopeCurator=2;
		backpack="B_LT_Carryall_GPMG";
		weapons[]=
		{
			"rhs_weap_pkp",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class O_LT_AT: LT_Infantry_Base
	{
		displayName="Anti-Tank Specialist";
		scope=2;
		scopeCurator=2;
		icon="iconManAT";
		backpack="B_LT_Carryall_AT";
		weapons[]=
		{
			"W_LT_VHSD2_Holo",
			"rhs_weap_rpg7",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_VHSD2_Holo",
			"rhs_weap_rpg7",
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
			"9Rnd_45ACP_Mag",
			"rhs_rpg7_TBG7V_mag"
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
			"9Rnd_45ACP_Mag",
			"rhs_rpg7_TBG7V_mag"
		};
	};
	class O_LT_AA: LT_Infantry_Base
	{
		displayName="Anti-Air Specialist";
		scope=2;
		scopeCurator=2;
		icon="iconManAT";
		weapons[]=
		{
			"W_LT_VHSD2_Holo",
			"rhs_weap_fim92",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_VHSD2_Holo",
			"rhs_weap_fim92",
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
			"9Rnd_45ACP_Mag",
			"rhs_fim92_mag"
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
			"9Rnd_45ACP_Mag",
			"rhs_fim92_mag"
		};
	};
	class O_LT_Medic: LT_Infantry_Base
	{
		displayName="Medic";
		scope=2;
		scopeCurator=2;
		icon="iconManMedic";
		attendant=1;
		backpack="B_LT_MedicalPack";
		items[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine"
		};
		respawnItems[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine"
		};
		linkedItems[]=
		{
			"V_TacVestIR_blk",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVestIR_blk",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Engineer: LT_Infantry_Base
	{
		displayName="Engineer";
		scope=2;
		scopeCurator=2;
		icon="iconManEngineer";
		engineer=1;
		canDeactivateMines=1;
		weapons[]=
		{
			"rhs_weap_M590_8RD",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_M590_8RD",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
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
			"ACE_CableTie",
			"ACE_DefusalKit",
			"MineDetector"
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
			"ACE_CableTie",
			"ACE_DefusalKit",
			"MineDetector"
		};
	};
	class O_LT_Marksman: LT_Infantry_Base
	{
		displayName="Marksman";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_SVD",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_SVD",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"rhs_10Rnd_762x54mmR_7N14",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
	};
	class O_LT_Sniper: LT_Base
	{
		displayName="Sniper";
		scope=2;
		scopeCurator=2;
		model="\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
		uniformClass="U_O_LT_Ghillie";
		backpack="B_LT_AssaultPack";
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"
		};
		weapons[]=
		{
			"W_LT_T5000",
			"rhs_weap_pp2000_folded",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_T5000",
			"rhs_weap_pp2000_folded",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20"
		};
		respawnMagazines[]=
		{
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20"
		};
		linkedItems[]=
		{
			"V_Chestrig_oli",
			"CUP_H_PMC_EP_Headset",
			"G_Balaclava_Flecktarn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_oli",
			"CUP_H_PMC_EP_Headset",
			"G_Balaclava_Flecktarn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Crewman: LT_Infantry_Base
	{
		displayName="Crewman";
		scope=2;
		scopeCurator=2;
		backpack="B_LT_Legstrap";
		engineer=1;
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Veh",
			"rhsusf_cvc_green_helmet",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Veh",
			"rhsusf_cvc_green_helmet",
			"rhsusf_oakley_goggles_clr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pp2000",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pp2000",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag"
		};
	};
	class O_LT_Pilot: LT_Base
	{
		displayName="Pilot";
		scope=2;
		scopeCurator=2;
		model="\A3\characters_F\Common\pilot_f.p3d";
		uniformClass="U_O_LT_PilotCoveralls";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa"
		};
		backpack="B_LT_Legstrap";
		engineer=1;
		weapons[]=
		{
			"rhs_weap_pp2000",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pp2000",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n21_20"
		};
		linkedItems[]=
		{
			"RHS_jetpilot_usaf",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"RHS_jetpilot_usaf",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_HeliPilot: O_LT_Crewman
	{
		displayName="Helicopter Pilot";
		scope=2;
		scopeCurator=2;
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Veh",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Veh",
			"H_PilotHelmetHeli_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	// Desert
	class O_LT_Rifleman_D: LT_Desert_Base
	{
		displayName="Rifleman";
		scope=2;
		scopeCurator=2;
	};
	class O_LT_Rifleman_GL_D: LT_Desert_Base
	{
		displayName="Grenadier";
		scope=2;
		scopeCurator=2;
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Grenadier",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Grenadier",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"W_LT_AK74M_GL",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_AK74M_GL",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		
	}
	class O_LT_Officer_D: LT_Desert_Base
	{
		displayName="Officer";
		scope=2;
		scopeCurator=2;
		weapons[] = {
			"SMG_05_F",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[] = {
			"SMG_05_F",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[] = {
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Patrol",
			"CUP_H_SLA_BeretRed",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Patrol",
			"CUP_H_SLA_BeretRed",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Scout_D: LT_Desert_Base
	{
		displayName="Scout";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_MP7",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_MP7",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"rhsusf_mag_40Rnd_46x30_JHP",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Patrol",
			"H_Booniehat_khk_hs",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Patrol",
			"H_Booniehat_khk_hs",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Autorifleman_D: LT_Desert_Base
	{
		displayName="Autorifleman";
		scope=2;
		scopeCurator=2;
		backpack="B_LT_Carryall_Auto_D";
		weapons[]=
		{
			"W_LT_RPK74",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_RPK74",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_60Rnd_545X39_AK_Green",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhs_60Rnd_545X39_AK_Green",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Empty",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Coyote_Empty",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_GPMG_D: O_LT_Autorifleman_D
	{
		displayName="Machinegunner";
		scope=2;
		scopeCurator=2;
		backpack="B_LT_Carryall_GPMG_D";
		weapons[]=
		{
			"rhs_weap_pkp",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	}
	class O_LT_AT_D: LT_Desert_Base
	{
		displayName="Anti-Tank Specialist";
		scope=2;
		scopeCurator=2;
		icon="iconManAT";
		backpack="B_LT_Carryall_AT_D";
		weapons[]=
		{
			"W_LT_AK74M",
			"rhs_weap_rpg7",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_AK74M",
			"rhs_weap_rpg7",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"rhs_rpg7_TBG7V_mag"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"rhs_rpg7_TBG7V_mag"
		};

	};
	class O_LT_AA_D: LT_Desert_Base
	{
		displayName="Anti-Air Specialist";
		scope=2;
		scopeCurator=2;
		icon="iconManAT";
		weapons[]=
		{
			"W_LT_AK74M",
			"rhs_weap_fim92",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_AK74M",
			"rhs_weap_fim92",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"rhs_fim92_mag"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"rhs_30Rnd_545x39_7N22_desert_AK",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"rhs_fim92_mag"
		};

	};
	class O_LT_Medic_D: LT_Desert_Base
	{
		displayName="Medic";
		scope=2;
		scopeCurator=2;
		icon="iconManMedic";
		attendant=1;
		backpack="B_LT_MedicalPack_D";
		items[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine"
		};
		respawnItems[]=
		{
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_adenosine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_morphine"
		};
		linkedItems[]=
		{
			"V_TacVest_brn",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_brn",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Engineer_D: LT_Desert_Base
	{
		displayName="Engineer";
		scope=2;
		scopeCurator=2;
		icon="iconManEngineer";
		engineer=1;
		canDeactivateMines=1;
		weapons[]=
		{
			"rhs_weap_M590_8RD",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_M590_8RD",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
		respawnMagazines[]=
		{
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_Slug",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_00Buck",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"ACE_M84",
			"ACE_M84",
			"ACE_M84"
		};
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
			"ACE_CableTie",
			"ACE_DefusalKit",
			"MineDetector"
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
			"ACE_CableTie",
			"ACE_DefusalKit",
			"MineDetector"
		};
	};
	class O_LT_Marksman_D: LT_Desert_Base
	{
		displayName="Marksman";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_SR25",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_SR25",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"rhsusf_20Rnd_762x51_SR25_m62_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
	};

	// Regular (Independent)
	class I_LT_Rifleman: O_LT_Rifleman {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Rifleman_GL: O_LT_Rifleman_GL {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Officer: O_LT_Officer {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Scout: O_LT_Scout {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Autorifleman: O_LT_Autorifleman {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_GPMG: O_LT_GPMG {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_AT: O_LT_AT {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_AA: O_LT_AA {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Medic: O_LT_Medic {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Engineer: O_LT_Engineer {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Marksman: O_LT_Marksman {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Sniper: O_LT_Sniper {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_I_FullGhillie_sard";
	};
	class I_LT_Crewman: O_LT_Crewman {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
	class I_LT_Pilot: O_LT_Pilot {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_I_LT_PilotCoveralls";
	};
	class I_LT_HeliPilot: O_LT_HeliPilot {
		side = 2;
		faction = "LT_Group_I";
		uniformClass="U_IG_Guerilla2_3";
	};
};
class CfgMods
{
	author="johnyF";
};