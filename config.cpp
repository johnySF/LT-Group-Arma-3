#define MAG_3(a) a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches {
	class LiontoothGroup {
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] = {
            "A3_Characters_F",
            "A3_Weapons_F",
            "A3_Characters_F_Enoch",
            "A3_Air_F",
            "A3_Air_F_Jets",
            "rhsusf_c_troops",
            "rhsusf_c_weapons",
            "rhs_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons",
            "rhssaf_c_vehicles",
            "CUP_Weapons_NVG",
            "CUP_Creatures_Military_PMC",
            "CUP_Wheeled_SUV",
            "CUP_WheeledVehicles_Van02",
            "CUP_WheeledVehicles_BTR80",
            "CUP_TrackedVehicles_T72",
            "CUP_AirVehicles_AV8B",
            "CUP_AirVehicles_Mi24",
            "CUP_AirVehicles_412",
            "CUP_AirVehicles_HC3",
            "ace_grenades",
            "ace_captives",
            "ace_medical_treatment"
        };
		units[] = {};
	};
};
class CfgFactionClasses {
	class LT_Group {
		displayName="Liontooth Group";
		side = 0;
		priority = 2;
	};
};
class CfgEditorSubcategories {
	// Category class, you point to it in editorSubcategory property
    class LT_E_Chem { 
		displayName = "Men (HAZMAT)"; // Name visible in the list
    }
    class EdSubCat_LT_Infantry {
        displayName = "Infantry";
    }
};
class CfgVehicles {
    class B_AssaultPack_blk;
    class B_Carryall_blk;
    class B_LegStrapBag_black_F;
    class B_LT_AssaultPack : B_AssaultPack_blk {
		scope = 1;
		class TransportMagazines {
			MAG_XX(HandGrenade, 2);
            MAG_XX(SmokeShell, 3);
		};
        class TransportItems {
            ITEM_XX(ACE_Flashlight_XL50,1);
            ITEM_XX(ACE_wirecutter,1);
            ITEM_XX(CUP_NVG_PVS7,1);
        };
	};
    class B_LT_AssaultSE : B_AssaultPack_blk {
        scope = 1;
		class TransportMagazines {
			MAG_XX(ACE_M84, 2);
            MAG_XX(ACE_CTS9, 2);
            MAG_XX(SmokeShell, 3);
		};
        class TransportItems {
            ITEM_XX(ACE_Flashlight_XL50,1);
            ITEM_XX(ACE_wirecutter,1);
            ITEM_XX(CUP_NVG_GPNVG_black,1);
        };
    };
    class B_LT_MedicalPack : B_Carryall_blk {
        scope = 1;
        class TransportItems {
            ITEM_XX(ACE_elasticBandage,10);
            ITEM_XX(ACE_packingBandage,10);
            ITEM_XX(ACE_quikclot,10);
			ITEM_XX(ACE_salineIV_500,3);
            ITEM_XX(ACE_splint,4);
            ITEM_XX(CUP_NVG_PVS7,1);
		};
    };
    class B_LT_Carryall : B_Carryall_blk {
        scope = 1;
        class TransportItems {
            ITEM_XX(ACE_wirecutter, 1);
            ITEM_XX(CUP_NVG_PVS7, 1);
        };
    };
    class B_LT_Carryall_Auto : B_LT_Carryall {
        class TransportMagazines {
			MAG_XX(rhssaf_100rnd_556x45_EPR_G36,5);
            MAG_XX(SmokeShell, 3);
		};
    };
    class B_LT_Carryall_Auto_SE : B_LT_Carryall {
        class TransportMagazines {
			MAG_XX(rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote,5);
            MAG_XX(SmokeShell, 3);
		};
    };
    class B_LT_Carryall_GPMG : B_LT_Carryall {
        class TransportMagazines {
			MAG_XX(rhs_100Rnd_762x54mmR_green,5);
        };
    }
    class B_LT_Carryall_GPMG_SE : B_LT_Carryall {
        class TransportMagazines {
			MAG_XX(150Rnd_762x54_Box_Tracer,5);
        };
    }
    class B_LT_Carryall_AT : B_LT_Carryall {
        class TransportMagazines {
			MAG_XX(rhs_mag_smaw_HEDP, 1);
            MAG_XX(SmokeShell, 3);
		};
    };
    class B_LT_Legstrap : B_LegStrapBag_black_F {
        scope = 1;
        class TransportItems {
            ITEM_XX(ToolKit,1);
        };
    };

    class O_Soldier_base_F;
    class LT_Base : O_Soldier_base_F {
        faction = "LT_Group";
        author = "johnyF";
        items[] = {
            MAG_3(ACE_elasticBandage),
            MAG_3(ACE_packingBandage),
            MAG_3(ACE_quikclot),
            "ACE_tourniquet",
            "ACE_CableTie"
        };
        respawnItems[] = {
            MAG_3(ACE_elasticBandage),
            MAG_3(ACE_packingBandage),
            MAG_3(ACE_quikclot),
            "ACE_tourniquet",
            "ACE_CableTie"
        };
        identityTypes[] = {
            "LanguageENG_F",
            "Head_NATO",
        };
    };
}; // CfgVehicles
class CfgWeapons {
    class UniformItem;
    class CUP_I_B_PMC_Unit_17;
    class U_B_PilotCoveralls;
    class U_I_FullGhillie_sard;
    class rhs_uniform_g3_blk;
    class U_LT_PMC : CUP_I_B_PMC_Unit_17 {
        scope = 1;
        class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "LT_Rifleman";
			containerClass = "Supply40";
			mass = 20;
		};
    };
    class U_LT_Pilot : U_B_PilotCoveralls {
        scope = 1;
        class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "LT_Pilot";
			containerClass = "Supply60";
			mass = 80;
		};
    };
    class U_LT_Ghillie : U_I_FullGhillie_sard {
        scope = 1;
        class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "LT_Sniper";
			containerClass = "Supply60";
			mass = 80;
		};
    };
    class U_LT_G3 : rhs_uniform_g3_blk {
        scope = 1;
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LT_SE_Rifleman";
			containerClass="Supply40";
			mass=40;
		};
    };

    class rhs_weap_vhsd2;
    class SMG_03C_TR_black;
    class rhs_weap_vhsd2_bg;
    class rhs_weap_vss;
    class rhs_weap_t5000;
    class W_LT_VHSD2_Holo : rhs_weap_vhsd2 {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
		};
    };
    class W_LT_P90_Reflex : SMG_03C_TR_black {
        class LinkedItems {
            class LinkedItemsOptic {
		    	slot="CowsSlot";
		    	item="rhsusf_acc_RM05";
		    };
        };
    };
    class W_LT_VHSD2_GL : rhs_weap_vhsd2_bg {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
			};
		};
    };
    class W_LT_VSS : rhs_weap_vss {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhs_acc_pso1m21";
			};
		};
    };
    class W_LT_T5000 : rhs_weap_t5000 {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_nxs_3515x50_md";
			};
		};
    }
    
    class rhs_weap_g36kv;
    class rhs_weap_g36kv_ag36;
    class rhs_weap_asval;
    class rhs_weap_SCARH_LB;
    class rhs_weap_m249_light_L;
    class LMG_Zafir_F;
    class rhs_weap_m82a1;
    class W_LT_G36K : rhs_weap_g36kv {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhs_acc_1p87";
			};
            class LinkedItemsAcc {
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
            class LinkedItemsMuzzle {
                slot="MuzzleSlot";
                item="rhsusf_acc_rotex5_grey";
            }
		};
    };
    class W_LT_G36K_GL : rhs_weap_g36kv_ag36 {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhs_acc_1p87";
			};
            class LinkedItemsAcc {
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
    };
    class W_LT_ASVAL : rhs_weap_asval {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhs_acc_okp7_dovetail";
			};
		};
    };
    class W_LT_SCARH_DMR : rhs_weap_SCARH_LB {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
    };
    class W_LT_M249_SE : rhs_weap_m249_light_L {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_RMR";
			};
            class LinkedItemsAcc {
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
            class LinkedItemsUnder {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_saw_bipod";
            }
		};
    };
    class W_LT_Negev_SE : LMG_Zafir_F {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_ACOG_RMR";
			};
		};
    };
    class W_LT_M82A1 : rhs_weap_m82a1 {
        class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="rhsusf_acc_nxs_3515x50_md";
			};
		};
    };
}; // CfgWeapons
class CfgGroups {
	class East {
        class LT_Group {
            name = "Liontooth Group";
            class Infantry {
                name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
                class G_LT_AATeam {
                    name = "Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_ATTeam {
                    name = "Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_FireTeam {
                    name = "Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_SE_ReconPatrol {
                    name = "Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_SE_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_SE_ReconSentry {
                    name = "Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                };
                class G_LT_SE_ReconSquad {
                    name = "Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_SE_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Demoman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_SE_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_SE_ReconTeam {
                    name = "Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_SE_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_SE_Demoman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                };
                class G_LT_RifleSquad {
                    name = "Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_Sentry {
                    name = "Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                };
                class G_LT_SniperTeam {
                    name = "Sniper Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                };
                class G_LT_WeaponsSquad {
                    name = "Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_CQB {
                    name = "CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                };
            }; // Infantry
            class Infantry_Hazmat {
                name = "Infantry (HAZMAT)";
                class G_LT_C_AATeam {
                    name = "Air-Defense (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_AA";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_AA";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_C_ATTeam {
                    name = "Anti-Armor Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_AT";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_C_FireTeam {
                    name = "Fire Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_Autorifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                };
                class G_LT_C_RifleSquad {
                    name = "Rifle Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_C_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_C_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_C_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_C_Sentry {
                    name = "Sentry (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                };
                class G_LT_C_SniperTeam {
                    name = "Sniper Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_Marksman";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                };
                class G_LT_C_WeaponsSquad {
                    name = "Weapons Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_GPMG";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_C_GPMG";
						rank="CORPORAL";
						position[]={2,-2,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_C_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_C_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_C_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_C_CQB {
                    name = "CQB Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="LT_C_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_C_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_C_Engineer";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_C_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                };
            }; // Infantry_hazmat
            class Motorized {
                name = "Motorized";
				class G_LT_FireTeamM {
                    name = "Motorized Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_M1052";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                };
                class G_LT_AssaultTeamM {
                    name = "Motorized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_Van";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit8 {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                    class unit9 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
                    };
                    class unit10 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
                    };
                    class unit11 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
                    };
                };
                class G_LT_SE_ReconPatrolM {
				    name = "Motorized Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_SUV";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                };
                class G_LT_SE_ReconTeamM {
				name = "Motorized Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_SUV";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_SE_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_SE_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                };
                class G_LT_SE_ReconSquadM {
				    name = "Motorized Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_SUV";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_SE_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_SE_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
                    };
                };
                class G_LT_SE_AssaultTeamM {
                    name = "Motorized Recon Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_SUV_Arm";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_SE_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_SE_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_SE_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_SE_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_SE_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_SE_Autorifleman";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_SE_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
                    };
                };
            };
            class Mechanized {
                name = "Mechanized" 
                class G_LT_MechanizedAT {
                    name = "Mechanized Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                };
                class G_LT_MechanizedAA {
                    name = "Mechanized Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                };
                class G_LT_MechanizedAssaultTeam {
                    name = "Mechanized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit8 {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                    class unit9 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
                    };
                    class unit10 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
                    };
                    class unit11 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
                    };
                }
            };
            class Armor {
                name = "Armor";
                class G_LT_T72Platoon {
                    name = "T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
                    };
                }
                class G_LT_ArmoredAssaultTeam {
                    name = "Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1 {
                        side=0;
						vehicle="V_LT_BTR80";
						rank="CORPORAL";
						position[]={-9,-10,0};
                    };
                    class unit2 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
                    };
                    class unit3 {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
                    };
                    class unit4 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
                    };
                    class unit5 {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
                    };
                    class unit6 {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
                    };
                    class unit7 {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
                    };
                    class unit8 {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
                    };
                    class unit9 {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
                    };
                    class unit10 {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
                    };
                    class unit11 {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
                    };
                    class unit12 {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
                    };
                }
            };
            class Air {
                name = "Air";
                class G_LT_FighterSquadron1 {
                    name = "Fighter Squadron (Gripen)";
                    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
                    };
                    class unit1 {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
                    };
                    class unit2 {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
                    };
                };
                class G_LT_FighterSquadron2 {
                    name = "Fighter Squadron (Mixed)";
                    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0 {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
                    };
                    class unit1 {
                        side=0;
						vehicle="V_LT_AV8B";
						rank="CORPORAL";
						position[]={-32,-32,500};
                    };
                    class unit2 {
                        side=0;
						vehicle="V_LT_AV8B";
						rank="CORPORAL";
						position[]={32,-32,500};
                    };
                };
            };
        }; // LT_Group
    }; // East
}; // CfgGroups
class cfgMods {
	author="johnyF";
};