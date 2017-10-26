/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "tf_anprc148jem", "", 300, -1 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Basic Supplies Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be in the Sheriff's Office!" };
        items[] = {
            {"CG_BATON", "Police Baton", 25, 5},
			      {"CG_TELBAT", "Police TelBat", 25, 5},
			      {"pmc_earpiece", "Earpiece", 10, 5},
			      {"ItemCompass", "", 50, 5},
			      {"ItemWatch", "", 10 , 5},
			      {"Taser_26", "Taser", 5, 5},
			      {"Rangefinder", "", 500, 5},
			      {"ItemGPS", "", 10, 5},
			      {"tf_anprc152", "", 10, 5}
        };
        mags[] = {
            { "26_cartridge", "", 5 }
        };
    };

	class cop_dit {
        name = "Deputy in Training Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Deputy in Training!" };
        items[] = {
            { "RH_g19", "", 200, -1 }
        };
        mags[] = {

        };
    };

	class cop_deputy {
        name = "Deputy Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Deputy!" };
        items[] = {
			{ "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 }
        };
        mags[] = {
			{ "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 }
        };
    };

	class cop_deputyi {
        name = "DeputyI Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a DeputyI!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, }
        };
    };

	class cop_corporal {
        name = "Corporal Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Corporal!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, }
        };
    };

	class cop_sergeant {
        name = "Sergant Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Sergeant!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, }
        };
    };

	class cop_staffsergeant {
        name = "Staff Sergeant Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Staff Sergeant!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, }
        };
    };

	class cop_lieutenant {
        name = "Lieutenant Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Lieutenant!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, }
        };
    };

	class cop_captain {
        name = "Captain Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a Captain!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, }
        };
    };

	class cop_inspector {
        name = "Inspector Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "You must be a Inspector!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 },
			{ "RH_fn57", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, },
			{ "RH_20Rnd_57x28_FN", "", 25, }
        };
    };

	class cop_departins {
        name = "Departmental Inspector Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "You must be a Departmental Inspector!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 },
			{ "RH_fn57", "", 500, -1 },
			{ "RH_bull", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, },
			{ "RH_20Rnd_57x28_FN", "", 25, },
			{ "RH_6Rnd_454_Mag", "", 25, }
        };
    };

	class cop_chiefinspector {
        name = "Chief Inspector Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "You must be a Chief Inspector!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 },
			{ "RH_fn57", "", 500, -1 },
			{ "RH_bull", "", 500, -1 },
			{ "RH_M4A6", "", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, },
			{ "RH_20Rnd_57x28_FN", "", 25, },
			{ "RH_6Rnd_454_Mag", "", 25, },
			{ "RH_30Rnd_68x43_FMJ", "", 25, }
        };
    };

	class cop_highcommand {
        name = "High Command Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 12, "You must be a Deputy in Training!" };
        items[] = {
            { "RH_g19", "", 200, -1 },
            { "RH_cz75", "", 500, -1 },
			{ "RH_sbr9", "", 500, -1 },
			{ "RH_PDW", "", 500, -1 },
			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
			{ "hlc_rifle_RU556", "", 500, -1 },
			{ "RH_fn57", "", 500, -1 },
			{ "RH_bull", "", 500, -1 },
			{ "RH_M4A6", "", 500, -1 },
			{ "RH_bullb", "", 500, -1 },
			{ "RH_M16A4gl", "", 500, -1 },
			{ "launch_O_Titan_ghex_F", "Anti-Air", 500, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 25 },
            { "RH_16Rnd_9x19_CZ", "", 25 },
			{ "RH_32Rnd_9mm_M822", "", 25, },
			{ "RH_30Rnd_6x35_mag", "", 25, },
			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
			{ "hlc_30rnd_556x45_EPR", "", 25, },
			{ "RH_20Rnd_57x28_FN", "", 25, },
			{ "RH_6Rnd_454_Mag", "", 25, },
			{ "RH_30Rnd_68x43_FMJ", "", 25, },
			{ "RH_6Rnd_454_Mag", "", 25, },
			{ "RH_30Rnd_556x45_M855A1", "", 25, },
			{ "Titan_AA", "Anti-Air Missile", 25, }
        };
    };

    class cop_sert {
          name = "High Command Weapon Shop";
          side = "cop";
          license = "";
          level[] = { "life_coplevel", "SCALAR", 12, "You must be a Deputy in Training!" };
          items[] = {
              { "RH_g19", "", 200, -1 },
              { "RH_cz75", "", 500, -1 },
  			{ "RH_sbr9", "", 500, -1 },
  			{ "RH_PDW", "", 500, -1 },
  			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
  			{ "hlc_rifle_RU556", "", 500, -1 },
  			{ "RH_fn57", "", 500, -1 },
  			{ "RH_bull", "", 500, -1 },
  			{ "RH_M4A6", "", 500, -1 },
  			{ "RH_bullb", "", 500, -1 },
  			{ "RH_M16A4gl", "", 500, -1 },
  			{ "launch_O_Titan_ghex_F", "Anti-Air", 500, -1 }
          };
          mags[] = {
              { "RH_17Rnd_9x19_g17", "", 25 },
              { "RH_16Rnd_9x19_CZ", "", 25 },
  			{ "RH_32Rnd_9mm_M822", "", 25, },
  			{ "RH_30Rnd_6x35_mag", "", 25, },
  			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
  			{ "hlc_30rnd_556x45_EPR", "", 25, },
  			{ "RH_20Rnd_57x28_FN", "", 25, },
  			{ "RH_6Rnd_454_Mag", "", 25, },
  			{ "RH_30Rnd_68x43_FMJ", "", 25, },
  			{ "RH_6Rnd_454_Mag", "", 25, },
  			{ "RH_30Rnd_556x45_M855A1", "", 25, },
  			{ "Titan_AA", "Anti-Air Missile", 25, }
          };
      };

      class cop_crt {
            name = "High Command Weapon Shop";
            side = "cop";
            license = "";
            level[] = { "life_coplevel", "SCALAR", 12, "You must be a Deputy in Training!" };
            items[] = {
                { "RH_g19", "", 200, -1 },
                { "RH_cz75", "", 500, -1 },
    			{ "RH_sbr9", "", 500, -1 },
    			{ "RH_PDW", "", 500, -1 },
    			{ "prpl_benelli_14_pgs_rail", "", 500, -1 },
    			{ "hlc_rifle_RU556", "", 500, -1 },
    			{ "RH_fn57", "", 500, -1 },
    			{ "RH_bull", "", 500, -1 },
    			{ "RH_M4A6", "", 500, -1 },
    			{ "RH_bullb", "", 500, -1 },
    			{ "RH_M16A4gl", "", 500, -1 },
    			{ "launch_O_Titan_ghex_F", "Anti-Air", 500, -1 }
            };
            mags[] = {
                { "RH_17Rnd_9x19_g17", "", 25 },
                { "RH_16Rnd_9x19_CZ", "", 25 },
    			{ "RH_32Rnd_9mm_M822", "", 25, },
    			{ "RH_30Rnd_6x35_mag", "", 25, },
    			{ "prpl_6Rnd_12Gauge_Slug", "", 25, },
    			{ "hlc_30rnd_556x45_EPR", "", 25, },
    			{ "RH_20Rnd_57x28_FN", "", 25, },
    			{ "RH_6Rnd_454_Mag", "", 25, },
    			{ "RH_30Rnd_68x43_FMJ", "", 25, },
    			{ "RH_6Rnd_454_Mag", "", 25, },
    			{ "RH_30Rnd_556x45_M855A1", "", 25, },
    			{ "Titan_AA", "Anti-Air Missile", 25, }
            };
        };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
