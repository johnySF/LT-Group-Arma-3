class CfgVehicles
{
	class B_AssaultPack_blk;
	class B_AssaultPack_cbr;
	class B_Carryall_blk;
	class B_Carryall_cbr;
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
		};
	};
	class B_LT_AssaultPack_Desert: B_AssaultPack_cbr
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
		};
	};
	class B_LT_MedicalPack_D: B_Carryall_cbr
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
		};
	};
	class B_LT_Carryall_D: B_Carryall_cbr
	{
		scope=1;
		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=1;
			};
		};
	};
	class B_LT_Carryall_Auto: B_LT_Carryall
	{
		class TransportMagazines
		{
			class _xx_rhs_60Rnd_545X39_AK_Green
			{
				magazine="rhs_60Rnd_545X39_AK_Green";
				count=7;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
		};
	};
	class B_LT_Carryall_Auto_D: B_LT_Carryall_D
	{
		class TransportMagazines
		{
			class _xx_rhs_60Rnd_545X39_AK_Green
			{
				magazine="rhs_60Rnd_545X39_AK_Green";
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
	class B_LT_Carryall_GPMG_D: B_LT_Carryall_D
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
	class B_LT_Carryall_AT_D: B_LT_Carryall_D
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
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"V_CarrierRigKBT_01_light_Olive_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_opscore_bk_pelt",
			"rhsusf_oakley_goggles_clr",
			"V_CarrierRigKBT_01_light_Olive_F",
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
	class LT_Desert_Base: LT_Infantry_Base
	{
		editorSubcategory="LT_E_Desert";
		uniformClass="U_O_LT_Uniform_Desert";
		backpack="B_LT_AssaultPack_Desert";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LT_Base\Data\uniformDesert.paa"
		};
		linkedItems[]=
		{
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"V_TacVest_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_shemagh2_gogg_tan",
			"V_TacVest_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"W_LT_AK74M",
			"hgun_Pistol_heavy_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"W_LT_AK74M",
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
			"11Rnd_45ACP_Mag"
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
			"11Rnd_45ACP_Mag"
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
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"V_PlateCarrier1_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_opscore_bk_pelt",
			"G_AirPurifyingRespirator_01_F",
			"V_PlateCarrier1_blk",
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
			"\LT_Base\Data\LT_Patch.paa"
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
			"rhsusf_opscore_bk_pelt",
			"rhsusf_ANPVS_15",
			"G_Balaclava_TI_blk_F",
			"V_PlateCarrier2_blk",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_opscore_bk_pelt",
			"rhsusf_ANPVS_15",
			"G_Balaclava_TI_blk_F",
			"V_PlateCarrier2_blk",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};