#include "CfgPatches.hpp"

class CfgGroups
{
	class East
	{
		class LT_Group_O
		{
			name="Liontooth Group";
			class Infantry
			{
				name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
				class G_O_LT_AATeam
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_ATTeam
				{
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
				class G_O_LT_CQB
				{
					name="CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Scout";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
                class G_O_LT_FireTeam
				{
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
				class G_O_LT_RifleSquad
				{
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
				class G_O_LT_Sentry
				{
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
				};
				class G_O_LT_SniperTeam
				{
					name="Sniper Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
				};
				class G_O_LT_WeaponsSquad
				{
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
			};
			class Infantry_Desert
            {
                name="Infantry (Desert)";
                class G_O_LT_AATeam_D
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA_D";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AA_D";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
                class G_O_LT_ATTeam_D
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_D";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AT_D";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_CQB_D
				{
					name="CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Scout_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Scout_D";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Engineer_D";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
				class G_O_LT_FireTeam_D
				{
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman_D";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT_D";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
				class G_O_LT_RifleSquad_D
				{
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_D";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_D";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_D";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_D";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
				class G_O_LT_Sentry_D
				{
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
				};
				class G_O_LT_WeaponsSquad_D
				{
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG_D";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_GPMG_D";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_D";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_D";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_D";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
			};
            class Infantry_Hazmat
			{
				name="Infantry (HAZMAT)";
				class G_O_LT_AATeam_H
				{
					name="Air-Defense (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AA_H";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_ATTeam_H
				{
					name="Anti-Armor Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_CQB_H
				{
					name="CQB Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Scout_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Scout_H";
						rank="CORPORAL";
						position[]={5,-4.950,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Engineer_H";
						rank="CORPORAL";
						position[]={-5,-4.950,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={10,-9.950,0};
					};
				};
				class G_O_LT_FireTeam_H
				{
					name="Fire Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_RifleSquad_H
				{
					name="Rifle Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_H";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
				class G_O_LT_Sentry_H
				{
					name="Sentry (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
				};
				class G_O_LT_SniperTeam_H
				{
					name="Sniper Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Sniper_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
				};
				class G_O_LT_WeaponsSquad_H
				{
					name="Weapons Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG_H";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_GPMG_H";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Marksman_H";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Medic_H";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
			};
			class Infantry_Recon
            {
                name="Infantry (Recon)";
                class G_O_LT_SF_ReconPatrol
				{
					name="Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
				};
				class G_O_LT_SF_ReconSentry
				{
					name="Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
				};
				class G_O_LT_SF_ReconSquad
				{
					name="Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_AT";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={-15,-14.95,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={20,-19.95,0};
					};
				};
				class G_O_LT_SF_ReconTeam
				{
					name="Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={15,-14.95,0};
					};
				};
				class G_O_LT_SF_Bubbles
                {
					name="Bubbles Special";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={5,-4.95,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-5,-4.95,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={10,-9.95,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-10,-9.95,0};
					};
				};
            };
            class Motorized
			{
				name="Motorized";
				class G_O_LT_FireTeamM
				{
					name="Motorized Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_UAZ";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_AssaultTeamM
				{
					name="Motorized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Van";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
				class G_O_LT_SF_ReconPatrolM
				{
					name="Motorized Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_SF_ReconTeamM
				{
					name="Motorized Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_O_LT_SF_ReconSquadM
				{
					name="Motorized Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
				class G_O_LT_SF_AssaultTeamM
				{
					name="Motorized Recon Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M1025_M2";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized";
				class G_O_LT_MechanizedAT
				{
					name="Mechanized Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_MechanizedAA
				{
					name="Mechanized Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_Mechanized_D
				{
					name="Mechanized Fire Team (Desert)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_M113";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman_GL_D";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman_D";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Autorifleman_D";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_AT_D";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_O_LT_MechanizedAssaultTeam
				{
					name="Mechanized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
			};
			class Armor
			{
				name="Armor";
				class G_O_LT_T72Platoon
				{
					name="T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
				};
				class G_O_LT_ArmoredAssaultTeam
				{
					name="Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_BTR80";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
					};
					class unit3
					{
						side=0;
						vehicle="O_LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
					};
					class unit4
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
					};
					class unit5
					{
						side=0;
						vehicle="O_LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
					};
					class unit6
					{
						side=0;
						vehicle="O_LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
					};
					class unit7
					{
						side=0;
						vehicle="O_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
					};
					class unit8
					{
						side=0;
						vehicle="O_LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
					};
					class unit9
					{
						side=0;
						vehicle="O_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
					};
					class unit10
					{
						side=0;
						vehicle="O_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
					};
					class unit11
					{
						side=0;
						vehicle="O_LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
					};
					class unit12
					{
						side=0;
						vehicle="O_LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
					};
				};
			};
			class Air
			{
				name="Air";
				class G_O_LT_FighterSquadron1
				{
					name="Fighter Squadron (Gripen)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
				class G_O_LT_FighterSquadron2
				{
					name="Fighter Squadron (Mixed)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_O";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_O_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_O_LT_L159";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_O_LT_L159";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
			};
		};
	};
	class Indep 
	{
		class LT_Group_I
		{
			name="Liontooth Group";
			class Infantry
			{
				name="$STR_A3_CFGGROUPS_WEST_BLU_F_INFANTRY0";
				class G_I_LT_AATeam
				{
					name="Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_ATTeam
				{
					name="Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_FireTeam
				{
					name="Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_SF_ReconPatrol
				{
					name="Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_SF_ReconSentry
				{
					name="Recon Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SF_ReconSquad
				{
					name="Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_SF_ReconTeam
				{
					name="Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_RifleSquad
				{
					name="Rifle Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_Sentry
				{
					name="Sentry";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SniperTeam
				{
					name="Sniper Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Sniper";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_WeaponsSquad
				{
					name="Weapons Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_CQB
				{
					name="CQB Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Scout";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Scout";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
				class G_I_LT_Bubbles {
					
					name="Bubbles Special";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Demoman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
			};
			class Infantry_Hazmat
			{
				name="Infantry (HAZMAT)";
				class G_I_LT_AATeam_H
				{
					name="Air-Defense (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AA_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_ATTeam_H
				{
					name="Anti-Armor Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_FireTeam_H
				{
					name="Fire Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
				};
				class G_I_LT_RifleSquad_H
				{
					name="Rifle Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_Sentry_H
				{
					name="Sentry (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_SniperTeam_H
				{
					name="Sniper Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Sniper_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
				};
				class G_I_LT_WeaponsSquad_H
				{
					name="Weapons Squad (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_GPMG_H";
						rank="CORPORAL";
						position[]={2,-2,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Marksman_H";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman_H";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Medic_H";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_CQB_H
				{
					name="CQB Team (HAZMAT)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="I_LT_Scout_H";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Scout_H";
						rank="CORPORAL";
						position[]={-2,-2,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Engineer_H";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_H";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized";
				class G_I_LT_FireTeamM
				{
					name="Motorized Fire Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_UAZ";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_AssaultTeamM
				{
					name="Motorized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Van";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
				class G_I_LT_SF_ReconPatrolM
				{
					name="Motorized Recon Patrol";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_SF_ReconTeamM
				{
					name="Motorized Recon Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
				};
				class G_I_LT_SF_ReconSquadM
				{
					name="Motorized Recon Squad";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Pathfinder";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
				class G_I_LT_SF_AssaultTeamM
				{
					name="Motorized Recon Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_M1025_M2";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_SF_Rifleman_GL";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_SF_Medic";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_SF_Marksman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_SF_GPMG";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_SF_Autorifleman";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_SF_Scout";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized";
				class G_I_LT_MechanizedAT
				{
					name="Mechanized Anti-Armor Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_MechanizedAA
				{
					name="Mechanized Air-Defense Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
				};
				class G_I_LT_MechanizedAssaultTeam
				{
					name="Mechanized Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-4,-4,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-6,-6,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-8,-8,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-12,-12,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={4,-4,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={6,-6,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={8,-8,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={14,-14,0};
					};
				};
			};
			class Armor
			{
				name="Armor";
				class G_I_LT_T72Platoon
				{
					name="T-72 Platoon";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={-9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
				};
				class G_I_LT_ArmoredAssaultTeam
				{
					name="Armored Assault Team";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_T72";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_BTR80";
						rank="CORPORAL";
						position[]={9,-10,0};
					};
					class unit2
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-10,-14,0};
					};
					class unit3
					{
						side=0;
						vehicle="I_LT_GPMG";
						rank="CORPORAL";
						position[]={-8,-14,0};
					};
					class unit4
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-6,-14,0};
					};
					class unit5
					{
						side=0;
						vehicle="I_LT_AA";
						rank="CORPORAL";
						position[]={-4,-14,0};
					};
					class unit6
					{
						side=0;
						vehicle="I_LT_Medic";
						rank="CORPORAL";
						position[]={-10,-16,0};
					};
					class unit7
					{
						side=0;
						vehicle="I_LT_Autorifleman";
						rank="CORPORAL";
						position[]={-8,-16,0};
					};
					class unit8
					{
						side=0;
						vehicle="I_LT_Marksman";
						rank="CORPORAL";
						position[]={-6,-16,0};
					};
					class unit9
					{
						side=0;
						vehicle="I_LT_Engineer";
						rank="CORPORAL";
						position[]={-4,-16,0};
					};
					class unit10
					{
						side=0;
						vehicle="I_LT_Rifleman_GL";
						rank="CORPORAL";
						position[]={-10,-18,0};
					};
					class unit11
					{
						side=0;
						vehicle="I_LT_Rifleman";
						rank="CORPORAL";
						position[]={-8,-18,0};
					};
					class unit12
					{
						side=0;
						vehicle="I_LT_AT";
						rank="CORPORAL";
						position[]={-6,-18,0};
					};
				};
			};
			class Air
			{
				name="Air";
				class G_I_LT_FighterSquadron1
				{
					name="Fighter Squadron (Gripen)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
				class G_I_LT_FighterSquadron2
				{
					name="Fighter Squadron (Mixed)";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					faction="LT_Group_I";
					side=0;
					class unit0
					{
						side=0;
						vehicle="V_I_LT_Gripen";
						rank="CORPORAL";
						position[]={0,0,500};
					};
					class unit1
					{
						side=0;
						vehicle="V_I_LT_L159";
						rank="CORPORAL";
						position[]={-32,-32,500};
					};
					class unit2
					{
						side=0;
						vehicle="V_I_LT_L159";
						rank="CORPORAL";
						position[]={32,-32,500};
					};
				};
			};
		};
	};
};
class CfgMods
{
	author="johnyF";
};