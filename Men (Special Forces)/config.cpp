#define MAG_3(a) a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches {
	class LT_SpecialForces_Units {
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] = {
            "LiontoothGroup"
        };
		units[] = {
            "LT_SE_Rifleman",
            "LT_SE_Rifleman_GL",
            "LT_SE_Scout",
            "LT_SE_Medic",
            "LT_SE_Marksman",
            "LT_SE_Pathfinder",
            "LT_SE_Demoman",
            "LT_SE_Autorifleman",
            "LT_SE_GPMG",
            "LT_SE_AT",
            "LT_SE_AA"
		};
	};
};
class CfgVehicles {
    class LT_Base;

    class LT_SE_Rifleman : LT_Base {
        displayName = "Recon Rifleman";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
        uniformClass = "U_LT_G3";
        hiddenSelections[] = {
			"Camo",
			"Camo2",
			"Gloves",
			"insignia"
		};
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_infantry2\Data\gen3_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Merrells_blk_co.paa",
			"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa"
		};
        backpack = "B_LT_AssaultSE";
        weapons[] = {
            "W_LT_G36K",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_G36K",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        linkedItems[] = {
            "CUP_V_B_Ciras_Black2",
            "CUP_H_OpsCore_Black_SF",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Ciras_Black2",
            "CUP_H_OpsCore_Black_SF",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_SE_Rifleman_GL : LT_SE_Rifleman {
        displayName = "Recon Rifleman (GL)";
        weapons[] = {
            "W_LT_G36K_GL",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_G36K_GL",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_10(1Rnd_HE_Grenade_shell),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_10(1Rnd_HE_Grenade_shell),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
    class LT_SE_Scout : LT_SE_Rifleman {
        displayName = "Recon Scout";
        weapons[] = {
            "W_LT_ASVAL",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_ASVAL",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhs_20rnd_9x39mm_SP6), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_7(rhs_20rnd_9x39mm_SP6), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        linkedItems[] = {
            "CUP_V_B_Ciras_Black2",
            "CUP_H_PMC_EP_Headset",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Ciras_Black2",
            "CUP_H_PMC_EP_Headset",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_SE_Medic : LT_SE_Rifleman {
        displayName = "Recon Medic";
        icon="iconManMedic";
        attendant = 1;
        backpack = "B_LT_MedicalPack";
        items[] = {
            MAG_10(ACE_elasticBandage),
            MAG_10(ACE_packingBandage),
            MAG_10(ACE_quikclot),
            MAG_3(ACE_adenosine),
            MAG_3(ACE_epinephrine),
            MAG_3(ACE_morphine)
        };
        respawnItems[] = {
            MAG_10(ACE_elasticBandage),
            MAG_10(ACE_packingBandage),
            MAG_10(ACE_quikclot),
            MAG_3(ACE_adenosine),
            MAG_3(ACE_epinephrine),
            MAG_3(ACE_morphine)
        };
        linkedItems[] = {
            "CUP_V_B_Ciras_Black",
            "CUP_H_OpsCore_Black",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Ciras_Black",
            "CUP_H_OpsCore_Black",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_SE_Marksman : LT_SE_Rifleman {
        displayName = "Recon Marksman";
        weapons[] = {
            "W_LT_SCARH_DMR",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_SCARH_DMR",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_7(rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
    class LT_SE_Pathfinder : LT_SE_Rifleman {
        displayName = "Recon Pathfinder";
        weapons[] = {
            "W_LT_M82A1",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_M82A1",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsusf_mag_10Rnd_STD_50BMG_M33), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_7(rhsusf_mag_10Rnd_STD_50BMG_M33), 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
    class LT_SE_Demoman : LT_SE_Rifleman {
        displayName = "Demolitions Expert";
        weapons[] = {
            "rhs_weap_m32",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "rhs_weap_m32",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            "rhsusf_mag_6Rnd_M433_HEDP",
            MAG_3(rhsusf_mag_6Rnd_M433_HEDP), 
            MAG_7(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            MAG_3(rhsusf_mag_6Rnd_M433_HEDP), 
            MAG_7(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        linkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Gren",
            "CUP_H_OpsCore_Black",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Gren",
            "CUP_H_OpsCore_Black",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_SE_Autorifleman : LT_SE_Rifleman {
        displayName = "Recon Autorifleman";
        backpack = "B_LT_Carryall_Auto_SE";
        weapons[] = {
            "W_LT_M249_SE",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_M249_SE",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote", 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote", 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
    class LT_SE_GPMG : LT_SE_Rifleman {
        displayName = "Recon Machinegunner";
        backpack = "B_LT_Carryall_GPMG_SE";
        weapons[] = {
            "W_LT_Negev_SE",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_Negev_SE",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            "150Rnd_762x54_Box_Tracer", 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
        respawnMagazines[] = {
            "150Rnd_762x54_Box_Tracer", 
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ)
        };
    };
    class LT_SE_AT : LT_SE_Rifleman {
        displayName = "Recon Anti-Tank Specialist";
        icon="iconManAT";
        backpack = "B_LT_Carryall_AT";
        weapons[] = {
            "W_LT_G36K",
            "rhs_weap_fim92",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_G36K",
            "rhs_weap_fim92",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
            "rhs_fim92_mag"
        };
        respawnMagazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
            "rhs_fim92_mag"
        };
    };
    class LT_SE_AA : LT_SE_Rifleman {
        displayName = "Recon Anti-Air Specialist";
        icon="iconManAT";
        weapons[] = {
            "W_LT_G36K",
            "rhs_weap_smaw",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_G36K",
            "rhs_weap_smaw",
            "rhsusf_weap_glock17g4",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
            "rhs_mag_smaw_HEDP"
        };
        respawnMagazines[] = {
            MAG_7(rhssaf_30rnd_556x45_SOST_G36),
            MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
            "rhs_mag_smaw_HEDP"
        };
    };
    /*class LT_SE_Minigun : LT_SE_Rifleman {
        displayName = "Minigunner";
        weapons[] = {
            "HLC_wp_M134Painless",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "HLC_wp_M134Painless",
            "Throw",
            "Put"
        };
        magazines[] = {
            "hlc_500rnd_762x51_Belt"
        };
        respawnMagazines[] = {
            "hlc_500rnd_762x51_Belt"
        };
    };*/
};
class CfgMods {
	author="johnyF";
};