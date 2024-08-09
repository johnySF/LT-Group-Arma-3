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
	class LT_E_Desert
	{
		displayName="Men (Desert)";
	};
	class LT_E_Chem
	{
		displayName="Men (HAZMAT)";
	};
};
#include "CfgVehicles.hpp"
class CfgWeapons
{
	// Uniforms
	class UniformItem;
	class U_OG_Guerilla2_3;
	class U_B_PilotCoveralls;
	class U_I_FullGhillie_sard;
	class rhs_uniform_g3_blk;
	class U_O_R_Gorka_01_black_F;

	class U_O_LT_Uniform_Desert: U_OG_Guerilla2_3 {
		displayName="Liontooth Uniform (Desert)";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LT_Base\Data\uniformDesert.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_LT_Rifleman_D";
			containerClass="Supply30";
			mass=30;
		};
	};
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
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
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
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
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
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
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
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit";
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
	
	// Weapons (Desert)
	class rhs_weap_ak74m_desert_npz;
	class rhs_weap_ak74m_gp25_npz;
	class rhsusf_weap_MP7A2_desert;
	class rhs_weap_sr25_d;
	class W_LT_AK74M: rhs_weap_ak74m_desert_npz
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="rhs_acc_2dpZenit";
			};
		};
	};
	class W_LT_AK74M_GL: rhs_weap_ak74m_gp25_npz
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
	class W_LT_MP7: rhsusf_weap_MP7A2_desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_RM05";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class W_LT_SR25: rhs_weap_sr25_d
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
class CfgMods
{
	author="johnyF";
};