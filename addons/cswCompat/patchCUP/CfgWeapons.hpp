class CfgWeapons {

    //// Carryable weapons
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    /// Kornet
    class GVAR(cup_kornet_backpack): Launcher_Base_F {
        class ACE_CSW {
            type = "mount";
            deployTime = 4;
            pickupTime = 4;
            deploy = "CUP_O_Kornet_RU";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 362; // 16.4 kg
        };
        displayName = "[CSW] Kornet (CUP)";
        author = "AChesheireCat";
        scope = 2;
        scopeArsenal = 2;
        model = ACE_APL_PATH(ACE_CSW_Bag.p3d);
        modes[] = {};
    };
    
    //// Proxy Weapons
    class CUP_Vmlauncher_AT14_single_veh;
    class GVAR(cup_kornet_launcher_proxy): CUP_Vmlauncher_AT14_single_veh {
        magazineReloadTime = 0.5;
    };
};
