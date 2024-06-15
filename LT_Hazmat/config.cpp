#include "CfgPatches.hpp"

class CfgVehicles
{
	// HAZMAT
	class LT_Hazmat_Base;
	class O_LT_Rifleman_GL;
	class O_LT_Scout;
	class O_LT_Autorifleman;
	class O_LT_GPMG;
	class O_LT_Medic;
	class O_LT_Engineer;
	class O_LT_Marksman;
	class O_LT_Sniper;

	class O_LT_Rifleman_H: LT_Hazmat_Base
	{
		displayName="Rifleman (HAZMAT)";
		scope=2;
		scopeCurator=2;
	};
	class O_LT_Rifleman_GL_H: O_LT_Rifleman_GL
	{
		displayName="Grenadier (HAZMAT)";
		scope=2;
		scopeCurator=2;
		editorSubcategory="LT_E_Chem";
		model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		uniformClass="U_O_R_Gorka_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Grenadier",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Grenadier",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Scout_H: O_LT_Scout
	{
		displayName="Scout (HAZMAT)";
		scope=2;
		scopeCurator=2;
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
			"CUP_H_PMC_EP_Headset",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_H_PMC_EP_Headset",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Autorifleman_H: O_LT_Autorifleman
	{
		displayName="Autorifleman (HAZMAT)";
		editorSubcategory="LT_E_Chem";
		model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		uniformClass="U_O_R_Gorka_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_GPMG_H: O_LT_GPMG
	{
		displayName="Machinegunner (HAZMAT)";
		editorSubcategory="LT_E_Chem";
		model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		uniformClass="U_O_R_Gorka_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
		linkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_PMC_CIRAS_Black_Empty",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_AT_H: LT_Hazmat_Base
	{
		displayName="Anti-Tank Specialist (HAZMAT)";
		scope=2;
		scopeCurator=2;
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
	class O_LT_AA_H: LT_Hazmat_Base
	{
		displayName="Anti-Air Specialist (HAZMAT)";
		scope=2;
		scopeCurator=2;
		weapons[]=
		{
			"W_LT_VHSD2_Holo",
			"hgun_ACPC2_F",
			"rhs_weap_fim92",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_VHSD2_Holo",
			"hgun_ACPC2_F",
			"rhs_weap_fim92",
			"Throw",
			"Put"
		};
	};
	class O_LT_Medic_H: O_LT_Medic
	{
		displayName="Medic (HAZMAT)";
		editorSubcategory="LT_E_Chem";
		model="\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		uniformClass="U_O_R_Gorka_01_black_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
		linkedItems[]=
		{
			"V_TacVestIR_blk",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVestIR_blk",
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class O_LT_Engineer_H: O_LT_Engineer
	{
		displayName="Engineer (HAZMAT)";
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
	class O_LT_Marksman_H: O_LT_Marksman
	{
		displayName="Marksman (HAZMAT)";
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
	class O_LT_Sniper_H: O_LT_Sniper
	{
		displayName="Sniper (HAZMAT)";
		editorSubcategory="LT_E_Chem";
		linkedItems[]=
		{
			"V_Chestrig_oli",
			"CUP_H_PMC_EP_Headset",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_oli",
			"CUP_H_PMC_EP_Headset",
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class I_LT_Rifleman_H: O_LT_Rifleman_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Rifleman_GL_H: O_LT_Rifleman_GL_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Scout_H: O_LT_Scout_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Autorifleman_H: O_LT_Autorifleman_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_GPMG_H: O_LT_GPMG_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_AT_H: O_LT_AT_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_AA_H: O_LT_AA_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Medic_H: O_LT_Medic_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Engineer_H: O_LT_Engineer_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Marksman_H: O_LT_Marksman_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_O_R_Gorka_01_black_F";
	};
	class I_LT_Sniper_H: O_LT_Sniper_H
	{
		side=2;
		faction="LT_Group_I";
		uniformClass="U_I_FullGhillie_sard";
	};
};
class CfgMods
{
	author="johnyF";
};