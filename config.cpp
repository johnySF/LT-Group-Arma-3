#define MAG_3(a) a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

class CfgPatches
{
    class LiontoothGroup
    {
	weapons[] = {};
	requiredVersion=0.1;
	requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Enoch",
            "A3_Weapons_F",
            "A3_Soft_F_Orange",
            "A3_Air_F",
            "A3_Air_F_Gamma",
            "A3_Air_F_Exp",
            "A3_Air_F_Jets",
            "ace_medical_treatment",
            "ace_grenades",
            "ace_captives",
            "ace_compat_rhs_usf3",
            "ace_compat_rhs_usf3_fastroping",
            "rhs_c_weapons",
            "rhsusf_c_troops",
            "rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhsgref_c_air",
            "rhsusf_c_ch53",
            "rhsgref_c_vehicles_ret",
            "rhsgref_c_tohport_air",
            "CUP_Weapons_NVG",
            "CUP_Creatures_Military_PMC"
        };
	units[] = {};
    };
};
class CfgFactionClasses
{
    class LT_Group
    {
	displayName="Liontooth Group";
	side = 0;
	priority = 2;
    };
};
class CfgEditorSubcategories
{
    class LT_E_Chem
    { 
	displayName = "Men (HAZMAT)";
    }
    class EdSubCat_LT_Infantry
    {
        displayName = "Infantry";
    }
};
class CfgVehicles
{
    class B_AssaultPack_blk;
    class B_Carryall_blk;
    class B_LegStrapBag_black_F;
    class B_LT_AssaultPack : B_AssaultPack_blk
    {
	scope = 1;
	class TransportMagazines
        {
	    MAG_XX(HandGrenade, 2);
            MAG_XX(SmokeShell, 3);
	};
        class TransportItems
        {
            ITEM_XX(ACE_Flashlight_XL50,1);
            ITEM_XX(ACE_wirecutter,1);
            ITEM_XX(CUP_NVG_PVS7,1);
        };
    };
    class B_LT_Assault_SF : B_AssaultPack_blk
    {
        scope = 1;
	class TransportMagazines
        {
	    MAG_XX(ACE_M84, 2);
            MAG_XX(ACE_CTS9, 2);
            MAG_XX(SmokeShell, 3);
	};
        class TransportItems
        {
            ITEM_XX(ACE_Flashlight_XL50,1);
            ITEM_XX(ACE_wirecutter,1);
            ITEM_XX(CUP_NVG_GPNVG_black,1);
        };
    };
    class B_LT_MedicalPack : B_Carryall_blk
    {
        scope = 1;
        class TransportItems
        {
            ITEM_XX(ACE_elasticBandage,10);
            ITEM_XX(ACE_packingBandage,10);
            ITEM_XX(ACE_quikclot,10);
	    ITEM_XX(ACE_salineIV_500,3);
            ITEM_XX(ACE_splint,4);
            ITEM_XX(CUP_NVG_PVS7,1);
	};
    };
    class B_LT_Carryall : B_Carryall_blk
    {
        scope = 1;
        class TransportItems
        {
            ITEM_XX(ACE_wirecutter, 1);
            ITEM_XX(CUP_NVG_PVS7, 1);
        };
    };
    class B_LT_Carryall_Auto : B_LT_Carryall
    {
        class TransportMagazines
        {
	    MAG_XX(rhs_45Rnd_545X39_7N22_AK, 7);
            MAG_XX(SmokeShell, 3);
	};
    };
    class B_LT_Carryall_Auto_SF : B_LT_Carryall
    {
        class TransportMagazines
        {
	    MAG_XX(rhs_45Rnd_545X39_7N22_AK, 7);
            MAG_XX(SmokeShell, 3);
	};
    };
    class B_LT_Carryall_GPMG : B_LT_Carryall
    {
        class TransportMagazines
        {
	    MAG_XX(rhs_100Rnd_762x54mmR_green,5);
        };
    }
    class B_LT_Carryall_GPMG_SF : B_LT_Carryall
    {
        class TransportMagazines
        {
	    MAG_XX(150Rnd_762x54_Box_Tracer,5);
        };
    }
    class B_LT_Carryall_AT : B_LT_Carryall
    {
        class TransportMagazines
        {
	    MAG_XX(rhs_mag_smaw_HEDP, 1);
            MAG_XX(SmokeShell, 3);
	};
    };
    class B_LT_Legstrap : B_LegStrapBag_black_F
    {
        scope = 1;
        class TransportItems
        {
            ITEM_XX(ToolKit,1);
        };
    };

    class O_Soldier_base_F;
    class LT_Base : O_Soldier_base_F
    {
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
            "Head_NATO"
        };
    };
}; // CfgVehicles
class CfgWeapons
{
    class UniformItem;
    class U_B_PilotCoveralls;
    class U_I_FullGhillie_sard;
    class rhs_uniform_g3_blk;
    class U_LT_Pilot : U_B_PilotCoveralls
    {
        scope = 1;
        class ItemInfo : UniformItem
	{
	    uniformModel = "-";
	    uniformClass = "LT_Pilot";
	    containerClass = "Supply60";
	    mass = 80;
	};
    };
    class U_LT_Ghillie : U_I_FullGhillie_sard
    {
        scope = 1;
        class ItemInfo : UniformItem
	{
	    uniformModel = "-";
	    uniformClass = "LT_Sniper";
	    containerClass = "Supply60";
	    mass = 80;
	};
    };
    class U_LT_G3 : rhs_uniform_g3_blk
    {
        scope = 1;
        class ItemInfo: UniformItem
	{
	    uniformModel="-";
	    uniformClass="LT_SF_Rifleman";
	    containerClass="Supply40";
	    mass=40;
	};
    };
    // Weapons (Regular)
    class rhs_weap_vhsd2;
    class SMG_03C_TR_black;
    class rhs_weap_vhsd2_bg;
    class rhs_weap_rpk74m_npz;
    class rhs_weap_vss;
    class rhs_weap_t5000;
    class W_LT_VHSD2_Holo : rhs_weap_vhsd2
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
    class W_LT_P90_Reflex : SMG_03C_TR_black
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
    class W_LT_VHSD2_GL : rhs_weap_vhsd2_bg
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
    class W_LT_RPK74 : rhs_weap_rpk74m_npz
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
    class W_LT_VSS : rhs_weap_vss
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
    class W_LT_T5000 : rhs_weap_t5000
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
    class W_LT_HK416 : rhs_weap_hk416d145
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
            }
	};
    };
    class W_LT_HK416_GL : rhs_weap_hk416d145_m320
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
    class W_LT_ASVAL : rhs_weap_asval
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
    class W_LT_SCARH_DMR : rhs_weap_mk17_LB
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
    class W_LT_M249_SF : rhs_weap_m249_light_L
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
            }
	};
    };
    class W_LT_Negev_SF : LMG_Zafir_F
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
    class W_LT_M107A1 : rhs_weap_M107_w
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
}; // CfgWeapons
class CfgGroups
{
    class East
    {
        class LT_Group
        {
            name = "Liontooth Group";
            class Infantry
            {
                name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
                class G_LT_AATeam
                {
                    name = "Air-Defense Team";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AA";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_AA";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_ATTeam
                {
                    name = "Anti-Armor Team";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_FireTeam
                {
                    name = "Fire Team";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Autorifleman";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_SF_ReconPatrol
                {
                    name = "Recon Patrol";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_SF_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Medic";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_SF_ReconSentry
                {
                    name = "Recon Sentry";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                };
                class G_LT_SF_ReconSquad
                {
                    name = "Recon Squad";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_SF_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Medic";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_AT";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Demoman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_SF_Pathfinder";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_SF_ReconTeam
                {
                    name = "Recon Team";
		    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_SF_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Medic";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_SF_Demoman";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                };
                class G_LT_RifleSquad
                {
                    name = "Rifle Squad";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_Autorifleman";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_Medic";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_Sentry
                {
                    name = "Sentry";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                };
                class G_LT_SniperTeam
                {
                    name = "Sniper Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Sniper";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Marksman";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                };
                class G_LT_WeaponsSquad
                {
                    name = "Weapons Squad";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_GPMG";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_GPMG";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_Autorifleman";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_Medic";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_CQB
                {
                    name = "CQB Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Scout";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Scout";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Engineer";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                };
            }; // Infantry
            class Infantry_Hazmat
            {
                name = "Infantry (HAZMAT)";
                class G_LT_AATeam_H
                {
                    name = "Air-Defense (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AA_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_AA_H";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_ATTeam_H
                {
                    name = "Anti-Armor Team (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AT_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_AT_H";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_FireTeam_H
                {
                    name = "Fire Team (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Autorifleman_H";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_AT_H";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                };
                class G_LT_RifleSquad_H
                {
                    name = "Rifle Squad (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AT_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_Marksman_H";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_Autorifleman_H";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_Medic_H";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_Sentry_H
                {
                    name = "Sentry (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                };
                class G_LT_SniperTeam_H
                {
                    name = "Sniper Team (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Sniper_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Marksman_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                };
                class G_LT_WeaponsSquad_H
                {
                    name = "Weapons Squad (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_GL_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_GPMG_H";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_GPMG_H";
			rank="CORPORAL";
			position[]={2,-2,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_Marksman_H";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_Autorifleman_H";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_Medic_H";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_CQB_H
                {
                    name = "CQB Team (HAZMAT)";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="LT_Scout_H";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Scout_H";
			rank="CORPORAL";
			position[]={-2,-2,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Engineer_H";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_H";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                };
            }; // Infantry_hazmat
            class Motorized
            {
                name = "Motorized";
		class G_LT_FireTeamM
                {
                    name = "Motorized Fire Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_UAZ";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Autorifleman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                };
                class G_LT_AssaultTeamM
                {
                    name = "Motorized Assault Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_Van";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_GPMG";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-8,-8,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_AA";
			rank="CORPORAL";
			position[]={-10,-10,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_Medic";
			rank="CORPORAL";
			position[]={-12,-12,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_Autorifleman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_Marksman";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit8
                    {
                        side=0;
			vehicle="LT_Engineer";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                    class unit9
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={10,-10,0};
                    };
                    class unit10
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={12,-12,0};
                    };
                    class unit11
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={14,-14,0};
                    };
                };
                class G_LT_SF_ReconPatrolM
                {
		    name = "Motorized Recon Patrol";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_M1025";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_GPMG";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                };
                class G_LT_SF_ReconTeamM
                {
		    name = "Motorized Recon Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_M1025";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_GPMG";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_SF_GPMG";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_SF_Pathfinder";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                };
                class G_LT_SF_ReconSquadM
                {
		    name = "Motorized Recon Squad";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_M1025";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_Autorifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Medic";
			rank="CORPORAL";
			position[]={-8,-8,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_SF_GPMG";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_SF_Pathfinder";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={10,-10,0};
                    };
                };
                class G_LT_SF_AssaultTeamM
                {
                    name = "Motorized Recon Assault Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_M1025_M2";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_SF_Rifleman_GL";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_SF_Autorifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_SF_Medic";
			rank="CORPORAL";
			position[]={-8,-8,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_SF_Marksman";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit5
                    {
                        side=0;
			vehicle="LT_SF_GPMG";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                    class unit6
                    {
                        side=0;
			vehicle="LT_SF_Autorifleman";
			rank="CORPORAL";
			position[]={8,-8,0};
                    };
                    class unit7
                    {
                        side=0;
			vehicle="LT_SF_Scout";
			rank="CORPORAL";
			position[]={10,-10,0};
                    };
                };
            };
            class Mechanized
            {
                name = "Mechanized" 
                class G_LT_MechanizedAT
                {
                    name = "Mechanized Anti-Armor Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_BTR80";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_AT";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_Medic";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                };
                class G_LT_MechanizedAA
                {
                    name = "Mechanized Air-Defense Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_BTR80";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_AA";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_AA";
			rank="CORPORAL";
			position[]={4,-4,0};
                    };
                    class unit4
                    {
                        side=0;
			vehicle="LT_Medic";
			rank="CORPORAL";
			position[]={6,-6,0};
                    };
                };
                class G_LT_MechanizedAssaultTeam
                {
                    name = "Mechanized Assault Team";
		    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
			vehicle="V_LT_BTR80";
			rank="CORPORAL";
			position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
			vehicle="LT_Rifleman";
			rank="CORPORAL";
			position[]={-4,-4,0};
                    };
                    class unit2
                    {
                        side=0;
			vehicle="LT_GPMG";
			rank="CORPORAL";
			position[]={-6,-6,0};
                    };
                    class unit3
                    {
                        side=0;
			vehicle="LT_Rifleman_GL";
			rank="CORPORAL";
			position[]={-8,-8,0};
                    };
                    class unit4
                    {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
                    };
                    class unit5
                    {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
                    };
                    class unit6
                    {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
                    };
                    class unit7
                    {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
                    };
                    class unit8
                    {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
                    };
                    class unit9
                    {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
                    };
                    class unit10
                    {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
                    };
                    class unit11
                    {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
                    };
                }
            };
            class Armor
            {
                name = "Armor";
                class G_LT_T72Platoon
                {
                    name = "T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
                    };
                    class unit2
                    {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
                    };
                }
                class G_LT_ArmoredAssaultTeam
                {
                    name = "Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
						vehicle="V_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
                    };
                    class unit1
                    {
                        side=0;
						vehicle="V_LT_BTR80";
						rank="CORPORAL";
						position[]={9,-10,0};
                    };
                    class unit2
                    {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
                    };
                    class unit3
                    {
                        side=0;
						vehicle="LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
                    };
                    class unit4
                    {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
                    };
                    class unit5
                    {
                        side=0;
						vehicle="LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
                    };
                    class unit6
                    {
                        side=0;
						vehicle="LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
                    };
                    class unit7
                    {
                        side=0;
						vehicle="LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
                    };
                    class unit8
                    {
                        side=0;
						vehicle="LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
                    };
                    class unit9
                    {
                        side=0;
						vehicle="LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
                    };
                    class unit10
                    {
                        side=0;
						vehicle="LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
                    };
                    class unit11
                    {
                        side=0;
						vehicle="LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
                    };
                    class unit12
                    {
                        side=0;
						vehicle="LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
                    };
                }
            };
            class Air
            {
                name = "Air";
                class G_LT_FighterSquadron1
                {
                    name = "Fighter Squadron (Gripen)";
                    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
                    };
                    class unit1
                    {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
                    };
                    class unit2
                    {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
                    };
                };
                class G_LT_FighterSquadron2
                {
                    name = "Fighter Squadron (Mixed)";
                    icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    faction = "LT_Group";
                    side = 0;
                    class unit0
                    {
                        side=0;
						vehicle="V_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
                    };
                    class unit1
                    {
                        side=0;
						vehicle="V_LT_L159";
						rank="CORPORAL";
						position[]={-32,-32,500};
                    };
                    class unit2
                    {
                        side=0;
						vehicle="V_LT_L159";
						rank="CORPORAL";
						position[]={32,-32,500};
                    };
                };
            };
        }; // LT_Group
    }; // East
}; // CfgGroups
class cfgMods
{
	author="johnyF";
};
