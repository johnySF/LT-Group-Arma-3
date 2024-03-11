#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches
{
	class LT_Vehicles
    {
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] =
        {
            "LiontoothGroup"
        };
		units[] =
        {
            "V_LT_UAZ",
            "V_LT_UAZ_DSHKM",
            "V_LT_M1025",
            "V_LT_M1025_M2",
            "V_LT_Van",
            "V_LT_Van_Cargo",
            "V_LT_BTR80",
            "V_LT_T72",
            "V_LT_MH6",
            "V_LT_AH6",
            "V_LT_Gripen",
            "V_LT_L159",
            "V_LT_UH1H",
            "V_LT_MI24",
            "V_LT_CH53E",
            "V_LT_VTOL",
            "T_LT_M2",
            "T_LT_M2_High",
            "T_LT_AGS30"
		};
	};
};
class CfgVehicles
{
    // For inheritance
    class rhsgref_nat_uaz;
    class rhsgref_nat_uaz_dshkm;
    class rhsgref_hidf_m1025;
    class rhsgref_hidf_m1025_m2;
    class C_Van_02_transport_F;
    class C_Van_02_vehicle_F;
    class rhsgref_cdf_b_btr80;
    class rhsgref_ins_t72bc;
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class I_Plane_Fighter_04_F;
    class I_Plane_Fighter_03_dynamicLoadout_F;
    class rhs_uh1h_hidf_gunship;
    class rhsgref_b_mi24g_CAS;
    class rhsusf_CH53E_USMC;
    class B_T_VTOL_01_infantry_F;
    class B_G_HMG_02_F;
    class B_G_HMG_02_high_F;
    class RHS_AGS30_TriPod_VMF;
    // Will add once I figure out how to change both gunners on it
    // class RHS_ZU23_VDV;

    // Ground Vehicles
    class V_LT_UAZ : rhsgref_nat_uaz
    {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_Rifleman";
        typicalCargo[] =
        {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_UAZ_DSHKM : rhsgref_nat_uaz_dshkm
    {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_Rifleman";
        typicalCargo[] =
        {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_M1025 : rhsgref_hidf_m1025
    {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_SF_Rifleman";
        typicalCargo[] =
        {
            "LT_SF_Rifleman",
            "LT_SF_Scout",
            "LT_SF_Rifleman_GL",
            "LT_SF_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_hk416d145, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_M1025_M2 : rhsgref_hidf_m1025_m2
    {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Cars";
        crew = "LT_SF_Rifleman";
        typicalCargo[] =
        {
            "LT_SF_Rifleman",
            "LT_SF_Scout",
            "LT_SF_Rifleman_GL",
            "LT_SF_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_hk416d145, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_Van : C_Van_02_transport_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
        typicalCargo[] =
        {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_Van_Cargo : C_Van_02_vehicle_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
        typicalCargo[] =
        {
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 20);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 10);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_BTR80 : rhsgref_cdf_b_btr80
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] =
        {
            "LT_Crewman",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_T72 : rhsgref_ins_t72bc 
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] =
        {
            "LT_Crewman"
        };
    };
    
    // Air Vehicles
    class V_LT_MH6 : B_Heli_Light_01_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Crewman";
        typicalCargo[] =
        {
            "LT_Crewman",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_AH6 : B_Heli_Light_01_dynamicLoadout_F {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] =
        {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_Scout",
            "LT_Rifleman_GL",
            "LT_Autorifleman"
        };
        class TransportBackpacks {};
		class TransportMagazines
        {
            MAG_XX(rhsgref_30rnd_556x45_vhs2_t, 10);
            MAG_XX(9Rnd_45ACP_Mag, 5);
		};
		class TransportWeapons
        {
            WEAP_XX(rhs_weap_vhsd2, 3);
            WEAP_XX(hgun_ACPC2_F, 3);
		};
		class TransportItems
        {
            ITEM_XX(FirstAidKit, 10);
		};
    };
    class V_LT_Gripen : I_Plane_Fighter_04_F
    {
        side = 0;
        displayName = "Gripen (Liontooth)";
        faction = "LT_Group";
        crew = "LT_Pilot";
        typicalCargo[] =
        {
            "LT_Pilot"
        };
        hiddenSelectionsTextures[] =  // If I find a better way, use it to change the default skin
        {
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_gray_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
		};
    };
    class V_LT_L159 : I_Plane_Fighter_03_dynamicLoadout_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Pilot";
        typicalCargo[] =
        {
            "LT_Pilot"
        };
    };
    class V_LT_UH1H : rhs_uh1h_hidf_gunship
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] =
        {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_SF_Rifleman"
        };
    };
    class V_LT_MI24 : rhsgref_b_mi24g_CAS
    {
        side = 0;
        faction = "LT_Group";
        editorSubcategory = "EdSubcat_Helicopters";
        crew = "LT_HeliPilot";
        typicalCargo[] =
        {
            "LT_HeliPilot",
        };
    };
    class V_LT_CH53E : rhsusf_CH53E_USMC
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        // TODO
        hiddenSelections[] =
		{
			"camo"/*,
			"camo1"*/
		};
        // LT_Group\Data\ 
		hiddenSelectionsTextures[] = 
		{ 
			"LT_Group\Data\ch53_LT_co.paa"/*,
			"LT_Group\Data\ch53_acc_co.paa"*/
		};
        typicalCargo[] =
        {
            "LT_HeliPilot",
            "LT_Rifleman",
            "LT_SF_Rifleman"
        };
    };
    class V_LT_VTOL : B_T_VTOL_01_infantry_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_HeliPilot";
        typicalCargo[] =
        {
            "LT_HeliPilot",
            "LT_SF_Rifleman"
        };
    };

    // Turrets
    class T_LT_M2 : B_G_HMG_02_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
    class T_LT_M2_High : B_G_HMG_02_high_F
    {
        side = 0;
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
    class T_LT_AGS30 : RHS_AGS30_TriPod_VMF
    {
        faction = "LT_Group";
        crew = "LT_Rifleman";
    };
};
class cfgMods
{
	author="johnyF";
};