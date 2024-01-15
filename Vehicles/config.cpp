#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches {
	class LT_Vehicles {
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] = {
            "LiontoothGroup"
        };
		units[] = {
            "V_LT_M1052",
            "V_LT_M1052_M2",
            "V_LT_SUV",
            "V_LT_SUV_Arm",
            "V_LT_Van",
            "V_LT_BTR80",
            "V_LT_T72",
            "V_LT_MH6",
            "V_LT_AH6",
            "V_LT_Gripen",
            "V_LT_AV8B",
            "V_LT_412",
            "V_LT_MI24",
            "V_LT_HC3",
            "V_LT_MV22",
            "T_LT_M2",
            "T_LT_M2_High",
            "T_LT_AGS30"
		};
	};
};
class CfgVehicles {
    // For inheritance
    class rhssaf_army_o_m1025_olive;
    class rhssaf_army_o_m1025_olive_m2;
    class CUP_I_SUV_ION;
    class CUP_I_SUV_Armored_ION;
    class CUP_I_Van_Transport_ION;
    class CUP_I_BTR80_ION;
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class I_Plane_Fighter_04_F;
    class CUP_I_AV8B_DYN_AAF;
    class CUP_B_MV22_USMC_RAMPGUN;
    class CUP_I_412_Military_Armed_PMC;
    class CUP_I_Mi24_D_Dynamic_ION;
    class CUP_I_Merlin_HC3_PMC_Transport_black;
    class CUP_B_T72_CDF;
    class B_G_HMG_02_F;
    class B_G_HMG_02_high_F;
    class RHS_AGS30_TriPod_VMF;
    //class RHS_ZU23_VDV;

    // Ground Vehicles
    class V_LT_M1052 : rhssaf_army_o_m1025_olive {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_Rifleman";
        typicalCargo[] = {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_M1052_M2 : rhssaf_army_o_m1025_olive_m2 {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_Rifleman";
        typicalCargo[] = {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_SUV : CUP_I_SUV_ION {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_SE_Rifleman";
        typicalCargo[] = {
            "LT_SE_Rifleman",
            "LT_SE_Scout",
            "LT_SE_Rifleman_GL",
            "LT_SE_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_SUV_Arm : CUP_I_SUV_Armored_ION {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_SE_Rifleman";
        typicalCargo[] = {
            "LT_SE_Rifleman",
            "LT_SE_Scout",
            "LT_SE_Rifleman_GL",
            "LT_SE_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_Van : CUP_I_Van_Transport_ION {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
        typicalCargo[] = {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_BTR80 : CUP_I_BTR80_ION {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] = {
            "LT_Crewman",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_T72 : CUP_B_T72_CDF {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] = {
            "LT_Crewman"
        };
    };
    
    // Air Vehicles
    class V_LT_MH6 : B_Heli_Light_01_F {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] = {
            "LT_Crewman",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_AH6 : B_Heli_Light_01_dynamicLoadout_F {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] = {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_Gripen : I_Plane_Fighter_04_F {
        side = 0;
        displayName = "Gripen (Liontooth)";
        faction = "LT_Group";
        crew = "LT_Pilot";
        typicalCargo[] = {
            "LT_Pilot"
        };
        hiddenSelectionsTextures[] = {
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
		};
    };
    class V_LT_AV8B : CUP_I_AV8B_DYN_AAF {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Pilot";
        typicalCargo[] = {
            "LT_Pilot"
        };
    };
    class V_LT_412 : CUP_I_412_Military_Armed_PMC {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] = {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_SE_Rifleman"
        };
    };
    class V_LT_MI24 : CUP_I_Mi24_D_Dynamic_ION {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] = {
            "LT_HeliPilot",
        };
    };
    class V_LT_HC3 : CUP_I_Merlin_HC3_PMC_Transport_black {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] = {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_SE_Rifleman"
        };
    };
    class V_LT_MV22 : CUP_B_MV22_USMC_RAMPGUN {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] = {
            "LT_HeliPilot",
            "LT_SE_Rifleman"
        };
        hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"LT_Group\data\mv22_LT_01_co.paa",
			"LT_Group\data\mv22_LT_02_co.paa"
		};
    };

    // Turrets
    class T_LT_M2 : B_G_HMG_02_F {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
    class T_LT_M2_High : B_G_HMG_02_high_F {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
    class T_LT_AGS30 : RHS_AGS30_TriPod_VMF {
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
};
class cfgMods {
	author="johnyF";
};