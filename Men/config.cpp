#define MAG_3(a) a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches {
	class LT_Units {
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] = {
            "LiontoothGroup"
        };
		units[] = {
            "LT_Rifleman",
            "LT_Officer",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman",
            "LT_GPMG",
            "LT_AT",
            "LT_AA",
            "LT_Medic",
            "LT_Engineer",
            "LT_Marksman",
            "LT_Sniper",
            "LT_Crewman",
            "LT_Pilot",
            "LT_HeliPilot",
            "LT_Rifleman_H",
            "LT_Scout_H",
            "LT_Rifleman_GL_H",
            "LT_Autorifleman_H",
            "LT_GPMG_H",
            "LT_AT_H",
            "LT_AA_H",
            "LT_Medic_H",
            "LT_Engineer_H",
            "LT_Marksman_H",
            "LT_Sniper_H"
		};
	};
};
class CfgVehicles {
    class LT_Base;

    class LT_Rifleman : LT_Base {
        displayName = "Rifleman";
        scope = 2;
        scopeCurator = 2;
        cost = 200000;	    // How likely the enemies attack this character among some others.
		camouflage = 1.5;	// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;  
        threat[] = {1, 0.5, 0.5};
        editorSubcategory = "EdSubcat_Personnel";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
        uniformClass = "U_OG_Guerilla2_3";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"
		};
        backpack = "B_LT_AssaultPack";
        weapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag)
        };
        respawnMagazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag)
        };
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Officer : LT_Rifleman {
        displayName = "Officer";
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_SLA_BeretRed",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_SLA_BeretRed",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Scout : LT_Rifleman {
        displayName = "Scout";
        weapons[] = {
            "W_LT_P90_Reflex",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_P90_Reflex",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(50Rnd_570x28_SMG_03), 
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(ACE_M84)
        };
        respawnMagazines[] = {
            MAG_7(50Rnd_570x28_SMG_03), 
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(ACE_M84)
        };
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_PMC_Cap_Back_EP_Grey",
            "G_Shades_Black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_PMC_Cap_Back_EP_Grey",
            "G_Shades_Black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Rifleman_GL : LT_Rifleman {
        displayName = "Grenadier";
        weapons[] = {
            "W_LT_VHSD2_GL",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_GL",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t),
            MAG_10(1Rnd_HE_Grenade_shell),
            MAG_3(9Rnd_45ACP_Mag)
        };
        respawnMagazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t),
            MAG_10(1Rnd_HE_Grenade_shell),
            MAG_3(9Rnd_45ACP_Mag)
        };
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Grenadier",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Grenadier",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Autorifleman : LT_Rifleman {
        displayName = "Autorifleman";
        backpack = "B_LT_Carryall_Auto";
        weapons[] = {
            "W_LT_RPK74",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_RPK74",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "rhs_45Rnd_545X39_7N22_AK", 
            MAG_3(9Rnd_45ACP_Mag)
        };
        respawnMagazines[] = {
            "rhs_45Rnd_545X39_7N22_AK", 
            MAG_3(9Rnd_45ACP_Mag)
        };
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_GPMG : LT_Autorifleman {
        displayName = "Machinegunner";
        backpack = "B_LT_Carryall_GPMG";
        weapons[] = {
            "rhs_weap_pkp",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "rhs_weap_pkp",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "rhs_100Rnd_762x54mmR_green",
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(SmokeShell)
        };
        respawnMagazines[] = {
            "rhs_100Rnd_762x54mmR_green",
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(SmokeShell)
        };
    };
    class LT_AT : LT_Rifleman {
        displayName = "Anti-Tank Specialist";
        icon="iconManAT";
        backpack = "B_LT_Carryall_AT";
        weapons[] = {
            "W_LT_VHSD2_Holo",
            "rhs_weap_smaw",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_Holo",
            "rhs_weap_smaw",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_mag_smaw_HEDP"
        };
        respawnMagazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_mag_smaw_HEDP"
        };
    };
    class LT_AA : LT_Rifleman {
        displayName = "Anti-Air Specialist";
        icon="iconManAT";
        weapons[] = {
            "W_LT_VHSD2_Holo",
            "rhs_weap_fim92",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_Holo",
            "rhs_weap_fim92",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_fim92_mag"
        };
        respawnMagazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_fim92_mag"
        };
    };
    class LT_Medic : LT_Rifleman {
        displayName = "Medic";
        icon="iconManMedic";
        attendant = 1;  // Can this character heal soldiers?
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
            "V_TacVestIR_blk",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_TacVestIR_blk",
            "CUP_H_OpsCore_Black",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Engineer : LT_Rifleman {
        displayName = "Engineer";
        icon = "iconManEngineer";
        engineer = 1;               // Can this character repair vehicles?
        canDeactivateMines = 1;		// Can this character deactivate mines?
	
        weapons[] = {
            "rhs_weap_M590_8RD",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "rhs_weap_M590_8RD",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_3(rhsusf_8Rnd_Slug),
            MAG_3(rhsusf_8Rnd_00Buck),
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(ACE_M84)
        };
        respawnMagazines[] = {
            MAG_3(rhsusf_8Rnd_Slug),
            MAG_3(rhsusf_8Rnd_00Buck),
            MAG_3(9Rnd_45ACP_Mag),
            MAG_3(ACE_M84)
        };
        items[] = {
            MAG_3(ACE_elasticBandage),
            MAG_3(ACE_packingBandage),
            MAG_3(ACE_quikclot),
            "ACE_tourniquet",
            "ACE_CableTie",
            "ACE_DefusalKit",
            "MineDetector"
        };
        respawnItems[] = {
            MAG_3(ACE_elasticBandage),
            MAG_3(ACE_packingBandage),
            MAG_3(ACE_quikclot),
            "ACE_tourniquet",
            "ACE_CableTie",
            "ACE_DefusalKit",
            "MineDetector"
        };
    };
    class LT_Marksman : LT_Rifleman {
        displayName = "Marksman";
        weapons[] = {
            "W_LT_VSS",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VSS",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhs_20rnd_9x39mm_SP6),
            MAG_3(9Rnd_45ACP_Mag)
        };
        respawnMagazines[] = {
            MAG_7(rhs_20rnd_9x39mm_SP6),
            MAG_3(9Rnd_45ACP_Mag)
        };
    };
    class LT_Sniper : LT_Rifleman {
        displayName = "Sniper";
        model = "\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
        uniformClass = "U_LT_Ghillie";
        hiddenSelections[] = {
			"camo",
			"camo3",
			"camo4"
		};
        hiddenSelectionsTextures[] = {
			"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"
		};
        weapons[] = {
            "W_LT_T5000",
            "rhs_weap_pp2000_folded",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_T5000",
            "rhs_weap_pp2000_folded",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhs_5Rnd_338lapua_t5000),
            MAG_3(rhs_mag_9x19mm_7n21_20)
        };
        respawnMagazines[] = {
            MAG_7(rhs_5Rnd_338lapua_t5000),
            MAG_3(rhs_mag_9x19mm_7n21_20)
        };
        linkedItems[] = {
            "V_Chestrig_oli",
            "CUP_H_PMC_EP_Headset",
            "G_Balaclava_Flecktarn",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_Chestrig_oli",
            "CUP_H_PMC_EP_Headset",
            "G_Balaclava_Flecktarn",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Crewman : LT_Rifleman {
        displayName = "Crewman";
        backpack = "B_LT_Legstrap";
        engineer = 1;
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Veh",
            "CUP_H_CZ_Helmet05",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Veh",
            "CUP_H_CZ_Helmet05",
            "CUP_G_ESS_BLK_Dark",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Pilot : LT_Rifleman {
        displayName = "Pilot";
        model = "\A3\characters_F\Common\pilot_f.p3d";
        uniformClass = "U_LT_Pilot";
        hiddenSelectionsTextures[] = {
		    "\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa",
		};
        backpack = "B_LT_Legstrap";
        engineer = 1;
        weapons[] = {
            "rhs_weap_pp2000",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "rhs_weap_pp2000",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_3(rhs_mag_9x19mm_7n21_20)
        };
        respawnMagazines[] = {
            MAG_3(rhs_mag_9x19mm_7n21_20)
        };
        linkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "RHS_jetpilot_usaf",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_HeliPilot : LT_Crewman {
        displayName = "Helicopter Pilot";
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Veh",
            "H_PilotHelmetHeli_B",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Veh",
            "H_PilotHelmetHeli_B",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class LT_Rifleman_H : LT_Rifleman {
        displayName = "Rifleman (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Scout_H : LT_Scout {
        displayName = "Scout (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_PMC_EP_Headset",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_PMC_EP_Headset",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Rifleman_GL_H : LT_Rifleman_GL {
        displayName = "Grenadier (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Grenadier",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Grenadier",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Autorifleman_H : LT_Autorifleman {
        displayName = "Autorifleman (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_GPMG_H : LT_GPMG {
        displayName = "Machinegunner (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_AT_H : LT_Rifleman_H {
        displayName = "Anti-Tank Specialist (HAZMAT)";
        backpack = "B_LT_Carryall_AT";
        weapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "rhs_weap_smaw",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "rhs_weap_smaw",
            "Throw",
            "Put"
        };
        magazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_mag_smaw_HEDP"
        };
        respawnMagazines[] = {
            MAG_7(rhsgref_30rnd_556x45_vhs2_t), 
            MAG_3(9Rnd_45ACP_Mag),
            "rhs_mag_smaw_HEDP"
        };
    };
    class LT_AA_H : LT_Rifleman_H {
        displayName = "Anti-Air Specialist (HAZMAT)";
        weapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "rhs_weap_fim92",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "W_LT_VHSD2_Holo",
            "hgun_ACPC2_F",
            "rhs_weap_fim92",
            "Throw",
            "Put"
        };
    };
    class LT_Medic_H : LT_Medic {
        displayName = "Medic (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "V_TacVestIR_blk",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_TacVestIR_blk",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Engineer_H : LT_Engineer {
        displayName = "Engineer (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Marksman_H : LT_Marksman {
        displayName = "Marksman (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
        uniformClass = "U_O_R_Gorka_01_black_F";
        hiddenSelectionsTextures[] = {
			"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"
		};
        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Patrol",
            "CUP_H_OpsCore_Black",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class LT_Sniper_H : LT_Sniper {
        displayName = "Sniper (HAZMAT)";
        editorSubcategory = "LT_E_Chem";
        linkedItems[] = {
            "V_Chestrig_oli",
            "CUP_H_PMC_EP_Headset",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_Chestrig_oli",
            "CUP_H_PMC_EP_Headset",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
class CfgMods {
	author="johnyF";
};