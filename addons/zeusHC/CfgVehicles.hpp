class CfgVehicles {
    class Logic;
    class Module_F: Logic {};

    //------------ East ----------
    class GVAR(east_fireteam): Module_F {
        author = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 2;
        isTriggerActivated = 0;
        // icon = "\a3\Modules_F_Curator\Data\iconEndMission_ca.paa";
        // portrait = "\a3\Modules_F_Curator\Data\portraitEndMission_ca.paa";
        function = QFUNC(createEntityZeus);
        isGlobal = 0;
        curatorCost = 0;
        class Arguments {};
        class Attributes {};

        
        category = QGVAR(east);
        GVAR(crewAir) = "O_Helipilot_F";
        GVAR(crewArmor)= "O_crew_F";
        GVAR(createVic) = "";
        
        displayName = "#Fireteam (4)";
        GVAR(createUnits)[] = {"O_soldier_TL_F","O_soldier_AR_F","O_soldier_F","O_soldier_F"};
    };
    class GVAR(east_squad): GVAR(east_fireteam) {
        displayName = "#Squad (8)";
        GVAR(createUnits)[] = {"O_soldier_SL_F","O_soldier_TL_F","O_soldier_AR_F","O_soldier_AR_F","O_soldier_LAT_F","O_soldier_F","O_soldier_F","O_soldier_F"};
    };
    class GVAR(east_heliAttack): GVAR(east_fireteam) {
        displayName = "Heli-Attack: PO-30 Orca";
        GVAR(createVic) = "O_Heli_Light_02_v2_F";
    };
    class GVAR(east_tankModern): GVAR(east_fireteam) {
        displayName = "Tank: T-100";
        GVAR(createVic) = "O_MBT_02_cannon_F";
    };

    //------------ West ----------
    class GVAR(west_fireteam): GVAR(east_fireteam) {
        category = QGVAR(west);
        GVAR(crewAir) = "B_Helipilot_F";
        GVAR(crewArmor)= "B_crew_F";
        
        displayName = "#Fireteam (4)";
        GVAR(createVic) = "";
        GVAR(createUnits)[] = {"B_soldier_TL_F","B_soldier_AR_F","B_soldier_F","B_soldier_F"};
    };
    class GVAR(west_squad): GVAR(west_fireteam) {
        displayName = "#Squad (8)";
        GVAR(createUnits)[] = {"B_soldier_SL_F","B_soldier_TL_F","B_soldier_AR_F","B_soldier_AR_F","B_soldier_LAT_F","B_soldier_F","B_soldier_F","B_soldier_F"};
    };
    class GVAR(west_heliAttack): GVAR(west_fireteam) {
        displayName = "Heli-Attack: AH-9 Littlebird";
        GVAR(createVic) = "B_Heli_Light_01_armed_F";
    };
    class GVAR(west_tankModern): GVAR(west_fireteam) {
        displayName = "Tank: Merkava TUSK";
        GVAR(createVic) = "B_MBT_01_TUSK_F";
    };

    //------------ Independent ----------
    class GVAR(ind_fireteam): GVAR(east_fireteam) {
        category = QGVAR(ind);
        GVAR(crewAir) = "I_Helipilot_F";
        GVAR(crewArmor)= "I_crew_F";
        
        displayName = "#Fireteam (4)";
        GVAR(createUnits)[] = {"I_soldier_TL_F","I_soldier_AR_F","I_soldier_F","I_soldier_F"};
    };
    class GVAR(ind_squad): GVAR(ind_fireteam) {
        displayName = "#Squad (8)";
        GVAR(createUnits)[] = {"I_soldier_SL_F","I_soldier_TL_F","I_soldier_AR_F","I_soldier_AR_F","I_soldier_LAT_F","I_soldier_F","I_soldier_F","I_soldier_F"};
    };
    class GVAR(ind_heliAttack): GVAR(ind_fireteam) {
        displayName = "Heli-Attack: Wildcat";
        GVAR(createVic) = "I_Heli_light_03_F";
    };
    class GVAR(ind_tankModern): GVAR(ind_fireteam) {
        displayName = "Tank: Kuma";
        GVAR(createVic) = "I_MBT_03_cannon_F";
    };

    //------------ Russian MSV ----------
    class GVAR(msv_fireteam): GVAR(east_fireteam) {
        category = QGVAR(msv);
        GVAR(crewAir) = "rhs_pilot_transport_heli";
        GVAR(crewArmor)= "rhs_msv_crew";
        
        displayName = "#Fireteam (4)";
        GVAR(createUnits)[] = {"rhs_msv_junior_sergeant","rhs_msv_machinegunner","rhs_msv_rifleman","rhs_msv_rifleman"};
    };
    class GVAR(msv_squad): GVAR(msv_fireteam) {
        displayName = "#Squad (8)";
        GVAR(createUnits)[] = {"rhs_msv_sergeant","rhs_msv_junior_sergeant","rhs_msv_machinegunner","rhs_msv_machinegunner","B_soldier_LAT_F","rhs_msv_rifleman","rhs_msv_rifleman","rhs_msv_rifleman"};
    };
    class GVAR(msv_heliAttack): GVAR(msv_fireteam) {
        displayName = "Heli-Attack: MI-24";
        GVAR(createVic) = "RHS_Mi24V_vvsc";
    };
    class GVAR(msv_tankModern): GVAR(msv_fireteam) {
        displayName = "Tank: T80U";
        GVAR(createVic) = "rhs_t80u";
    };
};
