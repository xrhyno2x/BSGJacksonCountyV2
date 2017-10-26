class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
		        { "critgamin_smart_civ", "" },
		        { "critgamin_smart_bleu", "" },
		        { "critgamin_smart_noir", "" },
		        { "critgamin_smart_bleufonce", "" },
		        { "critgamin_smart_rouge", "" },
		        { "critgamin_smart_jaune", "" },
		        { "critgamin_smart_rose", "" },
		        { "critgamin_smart_grise", "" },
		        { "critgamin_smart_violet", "" },
		        { "critgamin_smart_orange", "" },
		        { "critgamin_smart_vert", "" },
		        { "critgamin_contown_civ", "" },
		        { "critgamin_contown_bleu", "" },
		        { "critgamin_contown_noir", "" },
		        { "critgamin_contown_bleufonce", "" },
		        { "critgamin_contown_rouge", "" },
		        { "critgamin_contown_jaune", "" },
		        { "critgamin_contown_rose", "" },
		        { "critgamin_contown_grise", "" },
	          { "critgamin_contown_violet", "" },
		        { "critgamin_contown_jaune", "" },
		        { "critgamin_contown_orange", "" },
	          { "critgamin_contown_vert", "" },
        		{ "critgamin_vangmcc_civ_noir", "" },
		        { "critgamin_vangmcc_civ_bleufonce", "" },
		        { "critgamin_vangmcc_civ_bleu", "" },
		        { "critgamin_vangmcc_civ_vert", "" },
		        { "critgamin_vangmcc_civ_rouge", "" },
		        { "critgamin_vangmcc_civ_jaune", "" },
		        { "critgamin_vangmcc_civ_rose", "" },
		        { "critgamin_vangmcc_civ_grise", "" },
		        { "critgamin_vangmcc_civ_violet", "" },
		        { "critgamin_vangmcc_civ_orange", "" },
		        { "cg_mercedes_sprint_van_noir", "" },
		        { "cg_mercedes_sprint_van_violet", "" },
		        { "cg_mercedes_sprint_van_rose", "" },
		        { "cg_mercedes_sprint_van_orange", "" },
		        { "cg_mercedes_sprint_van_grise", "" },
		        { "cg_mercedes_sprint_van_vert", "" },
		        { "cg_mercedes_sprint_van_bleufonce", "" },
		        { "cg_mercedes_sprint_van_bleu", "" },
		        { "cg_mercedes_sprint_van_white", "" },
		        { "cg_mercedes_sprint_van_jaune", "" },
		        { "cg_mercedes_sprint_van_rouge", "" },
		        { "cg_citroen_c4_noir", "" },
		        { "cg_citroen_c4_violet", "" },
		        { "cg_citroen_c4_rose", "" },
		        { "cg_citroen_c4_orange", "" },
		        { "cg_citroen_c4_grise", "" },
		        { "cg_citroen_c4_vert", "" },
		        { "cg_citroen_c4_bleufonce", "" },
		        { "cg_citroen_c4_bleu", "" },
		        { "cg_citroen_c4_white", "" },
		        { "cg_citroen_c4_jaune", "" },
		        { "cg_citroen_c4_rouge", "" },
		        { "cg_renault_twingo_noir", "" },
		        { "cg_renault_twingo_violet", "" },
		        { "cg_renault_twingo_rose", "" },
		        { "cg_renault_twingo_orange", "" },
		        { "cg_renault_twingo_grise", "" },
		        { "cg_renault_twingo_vert", "" },
		        { "cg_renault_twingo_bleufonce", "" },
		        { "cg_renault_twingo_bleu", "" },
		        { "cg_renault_twingo_white", "" },
		        { "cg_renault_twingo_jaune", "" },
		        { "cg_renault_twingo_rouge", "" },
		        { "cg_citroen_ds3_noir", "" },
		        { "cg_citroen_ds3_violet", "" },
		        { "cg_citroen_ds3_rose", "" },
		        { "cg_citroen_ds3_orange", "" },
		        { "cg_citroen_ds3_grise", "" },
		        { "cg_citroen_ds3_vert", "" },
		        { "cg_citroen_ds3_bleufonce", "" },
		        { "cg_citroen_ds3_bleu", "" },
		        { "cg_citroen_ds3_white", "" },
		        { "cg_citroen_ds3_jaune", "" },
		        { "cg_citroen_ds3_rouge", "" },
		        { "cg_citroen_ds4_noir", "" },
		        { "cg_citroen_ds4_violet", "" },
		        { "cg_citroen_ds4_rose", "" },
		        { "cg_citroen_ds4_orange", "" },
		        { "cg_citroen_ds4_grise", "" },
		        { "cg_citroen_ds4_vert", "" },
		        { "cg_citroen_ds4_bleufonce", "" },
		        { "cg_citroen_ds4_bleu", "" },
		        { "cg_citroen_ds4_white", "" },
		        { "cg_citroen_ds4_jaune", "" },
		        { "cg_citroen_ds4_rouge", "" },
		        { "cg_peugeot_308_gti_civ_noir", "" },
		        { "cg_peugeot_308_gti_civ_violet", "" },
		        { "cg_peugeot_308_gti_civ_rose", "" },
		        { "cg_peugeot_308_gti_civ_orange", "" },
		        { "cg_peugeot_308_gti_civ_grise", "" },
		        { "cg_peugeot_308_gti_civ_vert", "" },
		        { "cg_peugeot_308_gti_civ_bleufonce", "" },
		        { "cg_peugeot_308_gti_civ_bleu", "" },
		        { "cg_peugeot_308_gti_civ_white", "" },
		        { "cg_peugeot_308_gti_civ_jaune", "" },
			      { "cg_peugeot_308_gti_civ_rouge", "" },
		        { "cg_peugeot_308_rcz_noir", "" },
			      { "cg_peugeot_308_rcz_violet", "" },
			      { "cg_peugeot_308_rcz_rose", "" },
		        { "cg_peugeot_308_rcz_orange", "" },
			      { "cg_peugeot_308_rcz_grise", "" },
			      { "cg_peugeot_308_rcz_vert", "" },
			      { "cg_peugeot_308_rcz_bleufonce", "" },
			      { "cg_peugeot_308_rcz_bleu", "" },
			      { "cg_peugeot_308_rcz_white", "" },
			      { "cg_peugeot_308_rcz_jaune", "" },
			      { "cg_peugeot_308_rcz_rouge", "" },
			      { "Mrshounka_Alfa_Romeo_bleufonce", "" },
			      { "Mrshounka_Alfa_Romeo_grise", "" },
			      { "Mrshounka_Alfa_Romeo_jaune", "" },
			      { "Mrshounka_Alfa_Romeo_noir", "" },
			      { "Mrshounka_Alfa_Romeo_orange", "" },
			      { "Mrshounka_Alfa_Romeo_rose", "" },
			      { "Mrshounka_Alfa_Romeo_rouge", "" },
			      { "Mrshounka_Alfa_Romeo_violet", "" },
			      { "S_Rangerover_Black", "" },
			      { "S_Rangerover_Red", "" },
			      { "S_Rangerover_Blue", "" },
			      { "S_Rangerover_Green", "" },
			      { "S_Rangerover_Purple", "" },
			      { "S_Rangerover_Grey", "" },
			      { "S_Rangerover_Orange", "" },
			      { "S_Rangerover_White", "" },
			      { "cg_peugeot_508_civ_noir", "" },
			      { "cg_peugeot_508_civ_violet", "" },
			      { "cg_peugeot_508_civ_rose", "" },
			      { "cg_peugeot_508_civ_orange", "" },
			      { "cg_peugeot_508_civ_grise", "" },
			      { "cg_peugeot_508_civ_vert", "" },
			      { "cg_peugeot_508_civ_bleufonce", "" },
			      { "cg_peugeot_508_civ_bleu", "" },
			      { "cg_peugeot_508_civ_white", "" },
			      { "cg_peugeot_508_civ_jaune", "" },
			      { "cg_peugeot_508_civ_rouge", "" }
        };
    };

	class sports {
        side = "civ";
        vehicles[] = {
            { "IVORY_PRIUS", "" },
			      { "ivory_supra", "" },
			      { "ivory_supra_tuned", "" },
			      { "ivory_isf", "" },
			      { "ivory_m3", "" },
			      { "ivory_m3_gts", "" },
			      { "ivory_gt500", "" },
			      { "ivory_wrx", "" },
			      { "ivory_lp560", "" },
			      { "IVORY_R8", "" },
			      { "IVORY_R8SPYDER", "" },
			      { "IVORY_REV", "" },
			      { "ivory_lfa", "" },
			      { "ivory_c", "" }
        };
    };

	class showroom {
        side = "civ";
        vehicles[] = {
            { "Jonzie_Quattroporte", "" },
			      { "Jonzie_30CSL", "" },
			      { "Jonzie_Viper", "" },
			      { "Jonzie_Datsun_Z432", "" },
			      { "Jonzie_STI", "" },
			      { "Jonzie_Escalade", "" },
			      { "Jonzie_Datsun_510", "" },
			      { "Jonzie_Ceed", "" },
			      { "Jonzie_Raptor", "" },
			      { "Jonzie_Galant", "" },
			      { "Jonzie_Corolla", "" },
			      { "Jonzie_Mini_Cooper", "" },
		        { "Jonzie_Mini_Cooper_R_spec", "" },
			      { "Jonzie_XB", "" },
			      { "Jonzie_VE", "" },
			      { "Jonzie_Ute", "" }
        };
    };

	class exo {
        side = "civ";
        vehicles[] = {
            { "cg_peugeot_207_rc_noir", "" },
            { "cg_peugeot_207_rc_violet", "" },
            { "cg_peugeot_207_rc_rose", "" },
            { "cg_peugeot_207_rc_orange", "" },
            { "cg_peugeot_207_rc_grise", "" },
            { "cg_peugeot_207_rc_vert", "" },
            { "cg_peugeot_207_rc_bleufonce", "" },
            { "cg_peugeot_207_rc_bleu", "" },
            { "cg_peugeot_207_rc_white", "" },
            { "cg_peugeot_207_rc_jaune", "" },
            { "cg_volkswagen_touareg_noir", "" },
            { "cg_volkswagen_touareg_violet", "" },
            { "cg_volkswagen_touareg_rose", "" },
            { "cg_volkswagen_touareg_orange", "" },
            { "cg_volkswagen_touareg_grise", "" },
            { "cg_volkswagen_touareg_vert", "" },
            { "cg_volkswagen_touareg_bleufonce", "" },
            { "cg_volkswagen_touareg_bleu", "" },
            { "cg_volkswagen_touareg_white", "" },
            { "cg_volkswagen_touareg_jaune", "" },
            { "cg_vw_golfvi_noir", "" },
            { "cg_vw_golfvi_violet", "" },
            { "cg_vw_golfvi_rose", "" },
            { "cg_vw_golfvi_orange", "" },
            { "cg_vw_golfvi_grise", "" },
            { "cg_vw_golfvi_vert", "" },
            { "cg_vw_golfvi_bleufonce", "" },
            { "cg_vw_golfvi_bleu", "" },
            { "cg_vw_golfvi_white", "" },
            { "cg_vw_golfvi_jaune", "" },
            { "cg_jeep_cherokee_noir", "" },
            { "cg_jeep_cherokee_violet", "" },
            { "cg_jeep_cherokee_rose", "" },
            { "cg_jeep_cherokee_orange", "" },
            { "cg_jeep_cherokee_grise", "" },
            { "cg_jeep_cherokee_vert", "" },
            { "cg_jeep_cherokee_bleufonce", "" },
            { "cg_jeep_cherokee_bleu", "" },
            { "cg_jeep_cherokee_white", "" },
            { "cg_jeep_cherokee_jaune", "" },
            { "cg_audi_rs4_noir","" },
            { "cg_audi_rs4_violet", "" },
            { "cg_audi_rs4_rose", "" },
            { "cg_audi_rs4_orange", "" },
            { "cg_audi_rs4_grise", "" },
            { "cg_audi_rs4_vert", "" },
            { "cg_audi_rs4_bleufonce", "" },
            { "cg_audi_rs4_bleu", "" },
            { "cg_audi_rs4_white", "" },
            { "cg_audi_rs4_jaune", "" },
            { "cg_audi_rs5_noir", "" },
            { "cg_audi_rs5_violet", "" },
            { "cg_audi_rs5_rose", "" },
            { "cg_audi_rs5_orange", "" },
            { "cg_audi_rs5_grise", "" },
            { "cg_audi_rs5_vert", "" },
            { "cg_audi_rs5_bleufonce", "" },
            { "cg_audi_rs5_bleu", "" },
            { "cg_audi_rs5_white", "" },
            { "cg_audi_rs5_jaune", "" },
            { "cg_bmw_1series_m_noir", ""  },
            { "cg_bmw_1series_m_violet", ""  },
            { "cg_bmw_1series_m_rose", ""  },
            { "cg_bmw_1series_m_orange", ""  },
            { "cg_bmw_1series_m_grise", ""  },
            { "cg_bmw_1series_m_vert", ""  },
            { "cg_bmw_1series_m_bleufonce", ""  },
            { "cg_bmw_1series_m_bleu", ""  },
            { "cg_bmw_1series_m_white", ""  },
            { "cg_bmw_1series_m_jaune", ""  },
            { "cg_renault_megane_rs_2015_noir", ""  },
            { "cg_renault_megane_rs_2015_violet", ""  },
            { "cg_renault_megane_rs_2015_rose", ""  },
            { "cg_renault_megane_rs_2015_orange", ""  },
            { "cg_renault_megane_rs_2015_grise", ""  },
            { "cg_renault_megane_rs_2015_vert", ""  },
            { "cg_renault_megane_rs_2015_bleufonce", ""  },
            { "cg_renault_megane_rs_2015_bleu", ""  },
            { "cg_renault_megane_rs_2015_white", ""  },
            { "cg_renault_megane_rs_2015_jaune", ""  },
            { "Mrshounka_c63_2015_bleufonce", ""  },
            { "Mrshounka_c63_2015_grise", ""  },
            { "Mrshounka_c63_2015_jaune", ""  },
            { "Mrshounka_c63_2015_noir", ""  },
            { "Mrshounka_c63_2015_orange", ""  },
            { "Mrshounka_c63_2015_rose", ""  },
            { "Mrshounka_c63_2015_rouge", ""  },
            { "Mrshounka_c63_2015_violet", ""  },
            { "cg_bmw_m6_noir", ""  },
            { "cg_bmw_m6_violet", ""  },
            { "cg_bmw_m6_rose", ""  },
            { "cg_bmw_m6_orange", ""  },
            { "cg_bmw_m6_grise", ""  },
            { "cg_bmw_m6_vert", ""  },
            { "cg_bmw_m6_bleufonce", ""  },
            { "cg_bmw_m6_bleu", ""  },
            { "cg_bmw_m6_white", ""  },
            { "cg_bmw_m6_jaune", ""  },
            { "cg_raptor_truck_noir", ""  },
            { "cg_raptor_truck_violet", ""  },
            { "cg_raptor_truck_rose", ""  },
            { "cg_raptor_truck_orange", ""  },
            { "cg_raptor_truck_grise", ""  },
            { "cg_raptor_truck_vert", ""  },
            { "cg_raptor_truck_bleufonce", ""  },
            { "cg_raptor_truck_bleu", ""  },
            { "cg_raptor_truck_white", ""  },
            { "cg_raptor_truck_jaune", ""  },
            { "cg_porsche_911_82_noir", ""  },
            { "cg_porsche_911_82_violet", ""  },
            { "cg_porsche_911_82_rose", ""  },
            { "cg_porsche_911_82_orange", ""  },
            { "cg_porsche_911_82_grise", ""  },
            { "cg_porsche_911_82_vert", ""  },
            { "cg_porsche_911_82_bleufonce", ""  },
            { "cg_porsche_911_82_bleu", ""  },
            { "cg_porsche_911_82_white", ""  },
            { "cg_porsche_911_82_jaune", ""  },
            { "cg_porsche_cayenne_noir", ""  },
            { "cg_porsche_cayenne_violet", ""  },
            { "cg_porsche_cayenne_rose", ""  },
            { "cg_porsche_cayenne_orange", ""  },
            { "cg_porsche_cayenne_grise", ""  },
            { "cg_porsche_cayenne_vert", ""  },
            { "cg_porsche_cayenne_bleufonce", ""  },
            { "cg_porsche_cayenne_bleu", ""  },
            { "cg_porsche_cayenne_white", ""  },
            { "cg_porsche_cayenne_jaune", ""  },
            { "cg_bowler_offroad_noir", ""  },
            { "cg_bowler_offroad_violet", ""  },
            { "cg_bowler_offroad_rose", ""  },
            { "cg_bowler_offroad_orange", ""  },
            { "cg_bowler_offroad_grise", ""  },
            { "cg_bowler_offroad_vert", ""  },
            { "cg_bowler_offroad_bleufonce", ""  },
            { "cg_bowler_offroad_bleu", ""  },
            { "cg_bowler_offroad_white", ""  },
            { "cg_bowler_offroad_jaune", ""  },
            { "shounka_gt_bleufonce", ""  },
            { "shounka_gt_grise", ""  },
            { "shounka_gt_jaune", ""  },
            { "shounka_gt_noir", ""  },
            { "shounka_gt_orange", ""  },
            { "shounka_gt_rose", ""  },
            { "shounka_gt_rouge", ""  },
            { "shounka_gt_violet", ""  },
            { "Mrshounka_mercedes_190_p_bleufonce", ""  },
            { "Mrshounka_mercedes_190_p_grise", ""  },
            { "Mrshounka_mercedes_190_p_jaune", ""  },
            { "Mrshounka_mercedes_190_p_noir", ""  },
            { "Mrshounka_mercedes_190_p_orange", ""  },
            { "Mrshounka_mercedes_190_p_rose", ""  },
            { "Mrshounka_mercedes_190_p_rouge", ""  },
            { "Mrshounka_mercedes_190_p_violet", ""  },
            { "AM_Holden_White", "" },
            { "AM_Holden_Black", "" },
            { "AM_Holden_Green", "" },
            { "AM_Holden_DarkGreen", "" },
            { "AM_Holden_OffGreen", "" },
            { "AM_Holden_blue", "" },
            { "AM_Holden_OffYellow", "" },
            { "AM_Holden_Pink", "" },
            { "AM_Holden_Purple", "" },
            { "AM_Holden_Yellow","" },
            { "cg_nissan_gtr_2012_noir", ""  },
            { "cg_nissan_gtr_2012_violet", ""  },
            { "cg_nissan_gtr_2012_rose", ""  },
            { "cg_nissan_gtr_2012_orange", ""  },
            { "cg_nissan_gtr_2012_grise", ""  },
            { "cg_nissan_gtr_2012_vert", ""  },
            { "cg_nissan_gtr_2012_bleufonce", ""  },
            { "cg_nissan_gtr_2012_bleu", ""  },
            { "cg_nissan_gtr_2012_white", ""  },
            { "cg_nissan_gtr_2012_jaune", ""  },
            { "shounka_mp4_bleufonce", ""  },
            { "shounka_mp4_grise", ""  },
            { "shounka_mp4_jaune", ""  },
            { "shounka_mp4_noir", ""  },
            { "shounka_mp4_orange", ""  },
            { "shounka_mp4_rose", ""  },
            { "shounka_mp4_rouge", ""  },
            { "shounka_mp4_violet", ""  },
            { "shounka_clk_bleufonce", ""  },
            { "shounka_clk_grise", ""  },
            { "shounka_clk_jaune", ""  },
            { "shounka_clk_noir", ""  },
            { "shounka_clk_orange", ""  },
            { "shounka_clk_rose", ""  },
            { "shounka_clk_rouge", ""  },
            { "shounka_clk_violet", ""  },
            { "cg_jeep_blinde_noir", ""  },
            { "cg_jeep_blinde_violet", ""  },
            { "cg_jeep_blinde_rose", ""  },
            { "cg_jeep_blinde_orange", ""  },
            { "cg_jeep_blinde_grise", ""  },
            { "cg_jeep_blinde_vert", ""  },
            { "cg_jeep_blinde_bleufonce", ""  },
            { "cg_jeep_blinde_bleu", ""  },
            { "cg_jeep_blinde_white", ""  },
            { "cg_jeep_blinde_jaune", ""  },
            { "cg_lancer_evo_x_noir", ""  },
            { "cg_lancer_evo_x_violet", ""  },
            { "cg_lancer_evo_x_rose", ""  },
            { "cg_lancer_evo_x_orange", ""  },
            { "cg_lancer_evo_x_grise", ""  },
            { "cg_lancer_evo_x_vert", ""  },
            { "cg_lancer_evo_x_bleufonce", ""  },
            { "cg_lancer_evo_x_bleu", ""  },
            { "cg_lancer_evo_x_white", ""  },
            { "cg_lancer_evo_x_jaune", ""  },
            { "Mrshounka_pagani_c_bleufonce", ""  },
            { "Mrshounka_pagani_c_grise", ""  },
            { "Mrshounka_pagani_c_jaune", ""  },
            { "Mrshounka_pagani_c_noir", ""  },
            { "Mrshounka_pagani_c_orange", ""  },
            { "Mrshounka_pagani_c_rose", ""  },
            { "Mrshounka_pagani_c_rouge", ""  },
            { "Mrshounka_pagani_c_violet", ""  },
            { "cg_lambo_veneno_noir", ""  },
            { "cg_lambo_veneno_violet", ""  },
            { "cg_lambo_veneno_rose", ""  },
            { "cg_lambo_veneno_orange", ""  },
            { "cg_lambo_veneno_grise", ""  },
            { "cg_lambo_veneno_vert", ""  },
            { "cg_lambo_veneno_bleufonce", ""  },
            { "cg_lambo_veneno_bleu", ""  },
            { "cg_lambo_veneno_white", ""  },
            { "cg_lambo_veneno_jaune", ""  },
            { "AM_Holden_RBlue", "" },
            { "AM_Holden_RRed", "" },
            { "AM_Holden_RWhite", "" },
            { "AM_Holden_RBlack", "" },
            { "Mrshounka_lykan_c_bleufonce","" },
            { "Mrshounka_lykan_c_grise","" },
            { "Mrshounka_lykan_c_jaune","" },
            { "Mrshounka_lykan_c_noir","" },
            { "Mrshounka_lykan_c_orange","" },
            { "Mrshounka_lykan_c_rose","" },
            { "Mrshounka_lykan_c_rouge","" },
            { "Mrshounka_lykan_c_violet","" },
            { "shounka_f430_spider_bleufonce", "" },
            { "shounka_f430_spider_grise", "" },
            { "shounka_f430_spider_jaune", "" },
            { "shounka_f430_spider_noir", "" },
            { "shounka_f430_spider_orange", "" },
            { "shounka_f430_spider_rose", "" },
            { "shounka_f430_spider_rouge", "" },
            { "shounka_f430_spider_violet", "" },
            { "shounka_porsche911_bleufonce", "" },
            { "shounka_porsche911_grise", "" },
            { "shounka_porsche911_jaune", "" },
            { "shounka_porsche911_noir", "" },
            { "shounka_porsche911_orange", "" },
            { "shounka_porsche911_rose", "" },
            { "shounka_porsche911_rouge", "" },
            { "shounka_porsche911_violet", "" },
            { "CG_Lamborghini_Aventador_Red", "" },
            { "CG_Lamborghini_Aventador_Black", "" },
            { "CG_Lamborghini_Aventador_Blue", "" },
            { "CG_Lamborghini_Aventador_Green", "" },
            { "CG_Lamborghini_Aventador_Orange", "" },
            { "CG_Lamborghini_Aventador_Purple", "" },
            { "CG_Lamborghini_Aventador_White", "" },
            { "A3L_EvoXrally_green", "" },
            { "A3L_EvoXrally_white", "" },
            { "A3L_EvoXrally_red", "" },
            { "A3L_EvoXrally_blue", "" }
        };
    };

	class sub {
        side = "civ";
        vehicles[] = {
            { "DAR_TahoeCivSilver", "" },
            { "DAR_TahoeCivBlue", "" },
            { "DAR_TahoeCivRed", "" },
            { "DAR_TahoeCivBlack", "" },
            { "A3L_SuburbanWhite", "" },
            { "A3L_SuburbanBlue", "" },
            { "A3L_SuburbanRed", "" },
            { "A3L_SuburbanBlack", "" },
            { "A3L_SuburbanGrey", "" },
            { "A3L_SuburbanOrange", "" },
            { "A3L_Camaro", "" }
        };
    };

	class jones_car {
        side = "civ";
        vehicles[] = {
            { "Jonzie_Mini_Cooper", "" },
            { "Jonzie_Mini_Cooper_R_spec", "" },
            { "Jonzie_Galant", "" },
            { "Jonzie_Corolla", "" },
            { "Jonzie_30CSL", "" },
			      { "Jonzie_Datsun_510", "" },
            { "Jonzie_Datsun_Z432", "" },
            { "Jonzie_XB", "" },
            { "Jonzie_VE", "" },
            { "Jonzie_Quattroporte", "" },
            { "Jonzie_Ute", "" },
            { "Jonzie_Ceed", "" },
            { "Jonzie_Transit", "" }
        };
    };

    class f1_shop {
        side = "civ";
        vehicles[] = {
            { "vvv_formula1_twitch", "" },
            { "vvv_formula1_Mclaren",  "" },
            { "vvv_formula1_Netflix1", "" },
            { "vvv_formula1_Netflix2", "" },
            { "vvv_formula1_ferrari", "" },
            { "vvv_formula1_sayeed", "" },
            { "vvv_formula1_tmac", "" },
            { "vvv_formula1_andy", "" },
            { "vvv_formula1_redbull", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" },
            { "Jonzie_Box_Truck", "" },
            { "Jonzie_Flat_Bed", "" },
            { "Jonzie_Log_Truck", "" },
            { "Jonzie_Tanker_Truck", "" },
            { "Jonzie_Tow_Truck", "" },
            { "Jonzie_Superliner", "" },
            { "Jonzie_Western", "" },
            { "Jonzie_Curtain_Roadtrain", "" },
            { "Jonzie_Curtain", "" },
            { "Jonzie_Flatbed_Roadtrain", "" },
            { "Jonzie_Flatbed", "" },
            { "O_Truck_03_device_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" } //Apex DLC
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class police_car {
        side = "cop";
        vehicles[] = {
            { "bsg_CVPILVPD", "" },
			      { "bsg_CVPILVPDLB", "" },
			      { "bsg_TaurusLVPD", "" },
			      { "bsg_TaurusLVPDLB", "" },
			      { "cg_evopol1", "" },
            { "DAR_Explorer_Police", "" },
			      { "charger_pd", "" },
			      { "A3L_TaurusUCWhite", "" },
			      { "A3L_TaurusUCRed", "" },
			      { "A3L_TaurusUCBlue", "" },
            { "A3L_CVPIUCBlue", "" },
            { "A3L_CVPIUCRed", "" }
        };
    };

    class police1_car {
        side = "cop";
        vehicles[] = {
            { "bsg_CVPILDPD", "" },
			      { "bsg_CVPILDPDLB", "" },
            { "bsg_TaurusLDPD", "" },
			      { "bsg_TaurusLDPDLB", "" },
			      { "cg_evopol1", "" },
            { "DAR_ExplorerPolice", "" },
			      { "charger_pd", "" },
            { "A3L_TaurusUCWhite", "" },
			      { "A3L_TaurusUCRed", "" },
			      { "A3L_TaurusUCBlue", "" },
            { "A3L_CVPIUCBlue", "" },
            { "A3L_CVPIUCRed", "" }
        };
    };

    class sheriff_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPISH", "" },
          { "bsg_CVPISHLB", "" },
          { "bsg_TaurusSH", "" },
          { "bsg_TaurusSHLB", "" },
          { "cg_evoss1", "" },
          { "charger_sh", "" },
          { "A3L_TaurusUCWhite", "" },
          { "A3L_TaurusUCRed", "" },
          { "A3L_TaurusUCBlue", "" },
          { "A3L_CVPIUCBlue", "" },
          { "A3L_CVPIUCRed", "" }
        };
    };

    class sert_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPISERT", "" },
          { "bsg_CVPISERTLB", "" },
          { "bsg_TaurusSERT", "" },
          { "bsg_TaurusSERTLB", "" },
          { "cg_evoSERT1", "" },
          { "charger_sert", "" },
          { "A3L_TaurusUCWhite", "" },
          { "A3L_TaurusUCRed", "" },
          { "A3L_TaurusUCBlue", "" },
          { "A3L_CVPIUCBlue", "" },
          { "A3L_CVPIUCRed", "" }
        };
    };

    class crt_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPICRT", "" },
          { "bsg_CVPICRTLB", "" },
          { "bsg_TaurusCRT", "" },
          { "bsg_TaurusCRTLB", "" },
          { "cg_evocor1", "" },
          { "charger_sh", "" },
          { "A3L_TaurusUCWhite", "" },
          { "A3L_TaurusUCRed", "" },
          { "A3L_TaurusUCBlue", "" },
          { "A3L_CVPIUCBlue", "" },
          { "A3L_CVPIUCRed", "" }
        };
    };

    class doc_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPIDOC", "" },
          { "bsg_CVPIDOC", "" },
          { "bsg_TaurusDOC", "" },
          { "bsg_TaurusDOCLB", "" },
          { "rev_audi_a4_police", "" },
          { "cg_evocor1", "" },
          { "charger_sh", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
          }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
          }, "" }
        };
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
          }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
          }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
          }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
          }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
          }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
          }, "" }
        };
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
          }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
          }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
          }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
          }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
          }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
          }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
          }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
          }, "" }
        };
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
          }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
          }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
          }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
          }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
          }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
          }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
          }, "" }
        };
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
          }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
          }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
          }, "" }
        };
    };

    //arma 3
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
          }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
          }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
          }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
          }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
          }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
          }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
          }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
          }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
          }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
          }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
          }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
          }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
          }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
          }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
          }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
          }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
          }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
          }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
          }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
          }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
          }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
          }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
          }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
          }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
          }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
          }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
          }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
          }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
          }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
          }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
          }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
          }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
          }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
          }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
          }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
          }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
          }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
          }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
          }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
          }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
          }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
          }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
          }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
          }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
          }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
          }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
          }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
          }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
          }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
          }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
          }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
          }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
          }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
          }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
          }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
          }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
          }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
          }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
          }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
          }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
          }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
          }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
          }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
          }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
          }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
          }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
          }, }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    //orange vehicles
    class C_Van_02_transport_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class B_G_Van_02_transport_F : C_Van_02_transport_F{};
    class O_G_Van_02_transport_F : C_Van_02_transport_F{};
    class I_C_Van_02_transport_F : C_Van_02_transport_F{};
    class C_IDAP_Van_02_transport_F : C_Van_02_transport_F{};

    class C_Van_02_vehicle_F {
          vItemSpace = 50;
          vFuelSpace = 50000;
          conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
          price = 250000;
          textures[] = {};
    };

    class B_G_Van_02_vehicle_F : C_Van_02_vehicle_F{};
    class O_G_Van_02_vehicle_F : C_Van_02_vehicle_F{};
    class I_C_Van_02_vehicle_F : C_Van_02_vehicle_F{};
    class C_IDAP_Van_02_vehicle_F : C_Van_02_vehicle_F{};

    class C_Van_02_medevac_F {
            vItemSpace = 50;
            vFuelSpace = 50000;
            conditions = "license_civ_trucking || {!(playerSide isEqualTo independent)}";
            price = 250000;
            textures[] = {};
    };

    class C_IDAP_Van_02_medevac_F : C_Van_02_medevac_F{};

    class C_Van_02_service_F {
              vItemSpace = 50;
              vFuelSpace = 50000;
              conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
              price = 250000;
              textures[] = {};
    };

    //modded Vehciles added by BSG
    class BSG_CVPISH {
              vItemSpace = 50;
              vFuelSpace = 50000;
              conditions = "";
              price = 250000;
              textures[] = {};
    };

    class BSG_CVPISHLB : BSG_CVPISH{};
    class BSG_CVPISERT : BSG_CVPISH{};
    class BSG_CVPISERTLB : BSG_CVPISH{};
    class BSG_CVPICRT : BSG_CVPISH{};
    class BSG_CVPICRTLB : BSG_CVPISH{};
    class BSG_CVPIDOC : BSG_CVPISH{};
    class BSG_CVPIDOCLB : BSG_CVPISH{};
    class BSG_CVPILVPD : BSG_CVPISH{};
    class BSG_CVPILVPDLB : BSG_CVPISH{};
    class BSG_CVPILDPD : BSG_CVPISH{};
    class BSG_CVPILDPDLB : BSG_CVPISH{};
    class A3L_CVPIUCBlue : BSG_CVPISH{};
    class A3L_CVPIUCRed : BSG_CVPISH{};
    class A3L_CVPIUCBlack : BSG_CVPISH{};

    class BSG_TaurusSH {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class BSG_TaurusSHLB : BSG_TaurusSH{};
    class BSG_TaurusSERT : BSG_TaurusSH{};
    class BSG_TaurusSERTLB : BSG_TaurusSH{};
    class BSG_TaurusCRT : BSG_TaurusSH{};
    class BSG_TaurusCRTLB : BSG_TaurusSH{};
    class BSG_TaurusDOC : BSG_TaurusSH{};
    class BSG_TaurusDOCLB : BSG_TaurusSH{};
    class BSG_TaurusLVPD : BSG_TaurusSH{};
    class BSG_TaurusLVPDLB : BSG_TaurusSH{};
    class BSG_TaurusLDPD : BSG_TaurusSH{};
    class BSG_TaurusLDPDLB : BSG_TaurusSH{};

    class charger_sh {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class charger_pd : charger_sh{};
    class charger_sert : charger_sh{};
    class charger_st : charger_sh{};

/*
    class BSG_EvoXSH {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class BSG_EvoXSERT : BSG_EvoXSH{};
    class BSG_EvoXCRT : BSG_EvoXSH{};
    class BSG_EvoXDOC : BSG_EvoXSH{};
    class BSG_EvoXLVPD : BSG_EvoXSH{};
    class BSG_EvoXLDPD : BSG_EvoXSH{};
    class BSG_EvoXUCBlack : BSG_EvoXSH{};
    class BSG_EvoXUCBlue : BSG_EvoXSH{};
    class BSG_EvoXUCRed : BSG_EvoXSH{};
    class BSG_EvoXUCWhite : BSG_EvoXSH{};
*/
    class DAR_ExplorerPolice {
                  vItemSpace = 50;
                  vFuelSpace = 50000;
                  conditions = "";
                  price = 250000;
                  textures[] = {};
    };

    class DAR_ExplorerPoliceStealth : DAR_ExplorerPolice{};

    class rev_audi_a4_police {
                  vItemSpace = 50;
                  vFuelSpace = 50000;
                  conditions = "";
                  price = 250000;
                  textures[] = {};
    };

    class A3L_TaurusUC {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class A3L_TaurusUCRed : A3L_TaurusUC{};
    class A3L_TaurusUCWhite : A3L_TaurusUC{};
    class A3L_TaurusUCBlue : A3L_TaurusUC{};

    class m1030 {
                vItemSpace = 0;
                vFuelSpace = 5000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class TT650_Ins : m1030{};
    class TT650_Civ : m1030{};
    class vvv_HarleyDavidson_CustomBobber : m1030{};
    class Mrshounka_yamaha_p : m1030{};
    class Mrshounka_yamaha_p_bf : m1030{};
    class Mrshounka_yamaha_p_g : m1030{};
    class Mrshounka_yamaha_p_j : m1030{};
    class Mrshounka_yamaha_p_noir : m1030{};
    class Mrshounka_yamaha_p_o : m1030{};
    class Mrshounka_yamaha_p_rose : m1030{};
    class Mrshounka_yamaha_p_r : m1030{};
    class Mrshounka_yamaha_p_v : m1030{};
    class dbo_crosser : m1030{};
    class Mrshounka_ducati_p : m1030{};
    class Mrshounka_ducati_p_bf : m1030{};
    class Mrshounka_ducati_p_g : m1030{};
    class Mrshounka_ducati_p_j : m1030{};
    class Mrshounka_ducati_p_noir : m1030{};
    class Mrshounka_ducati_p_o : m1030{};
    class Mrshounka_ducati_p_rose : m1030{};
    class Mrshounka_ducati_p_r : m1030{};
    class Mrshounka_ducati_p_v : m1030{};

    class vvv_formula1_twitch {
                vItemSpace = 0;
                vFuelSpace = 5000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class vvv_formula1_Mclaren : vvv_formula1_twitch{};
    class vvv_formula1_Netflix1 : vvv_formula1_twitch{};
    class vvv_formula1_Netflix2 : vvv_formula1_twitch{};
    class vvv_formula1_ferrari : vvv_formula1_twitch{};
    class vvv_formula1_sayeed : vvv_formula1_twitch{};
    class vvv_formula1_tmac : vvv_formula1_twitch{};
    class vvv_formula1_andy : vvv_formula1_twitch{};
    class vvv_formula1_redbull : vvv_formula1_twitch{};

    class DAR_TahoeEMS {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class CG_Taxi {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class DAR_TahoePoliceSlick : DAR_TahoeEMS{};
    class DAR_TahoePolice : DAR_TahoeEMS{};
    class DAR_TahoePoliceDet : DAR_TahoeEMS{};

    class DAR_ImpalaPolice {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class DAR_ImpalaPoliceSlick : DAR_ImpalaPolice{};
    class DAR_ImpalaPoliceDet : DAR_ImpalaPolice{};

    class DAR_SWATPolice {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class VPC {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class VSR : VPC{};

    class berlingo1_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class berlingo1_civ_bleu : berlingo1_civ{};
    class berlingo1_civ_gris : berlingo1_civ{};
    class berlingo1_civ_yellow : berlingo1_civ{};
    class berlingo1_civ_noir : berlingo1_civ{};
    class berlingo1_civ_rouge : berlingo1_civ{};

    class berlingo2_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class berlingo2_civ_bleu : berlingo2_civ{};
    class berlingo2_civ_yellow : berlingo2_civ{};
    class berlingo2_civ_noir : berlingo2_civ{};
    class berlingo2_civ_gris : berlingo2_civ{};
    class berlingo2_civ_rouge : berlingo2_civ{};

    class c4hch_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class c4hch_civ_bleu : c4hch_civ{};
    class c4hch_civ_gris : c4hch_civ{};
    class c4hch_civ_yellow : c4hch_civ{};
    class c4hch_civ_noir : c4hch_civ{};
    class c4hch_civ_rouge : c4hch_civ{};

    class Dacia_Duster_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Dacia_Duster_civ_bleu : Dacia_Duster_civ{};
    class Dacia_Duster_civ_gris : Dacia_Duster_civ{};
    class Dacia_Duster_civ_yellow : Dacia_Duster_civ{};
    class Dacia_Duster_civ_noir : Dacia_Duster_civ{};
    class Dacia_Duster_civ_rouge : Dacia_Duster_civ{};

    class focus3ch_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class focus3ch_civ_bleu : focus3ch_civ{};
    class focus3ch_civ_gris : focus3ch_civ{};
    class focus3ch_civ_yellow : focus3ch_civ{};
    class focus3ch_civ_noir : focus3ch_civ{};
    class focus3ch_civ_rouge : focus3ch_civ{};

    class focus03_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class focus03_civ_bleu : focus03_civ{};
    class focus03_civ_gris : focus03_civ{};
    class focus03_civ_yellow : focus03_civ{};
    class focus03_civ_noir : focus03_civ{};
    class focus03_civ_rouge : focus03_civ{};

    class chfcrsciv {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class chfcrsciv_bleu : chfcrsciv{};
    class chfcrsciv_gris : chfcrsciv{};
    class chfcrsciv_yellow : chfcrsciv{};
    class chfcrsciv_noir : chfcrsciv{};
    class chfcrsciv_rouge : chfcrsciv{};

    class focussw1998_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class focussw1998_civ_bleu : focussw1998_civ{};
    class focussw1998_civ_gris : focussw1998_civ{};
    class focussw1998_civ_yellow : focussw1998_civ{};
    class focussw1998_civ_noir : focussw1998_civ{};
    class focussw1998_civ_rouge : focussw1998_civ{};

    class focussw2p2_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class focussw2p2_civ_bleu : focussw2p2_civ{};
    class focussw2p2_civ_gris : focussw2p2_civ{};
    class focussw2p2_civ_yellow : focussw2p2_civ{};
    class focussw2p2_civ_noir : focussw2p2_civ{};
    class focussw2p2_civ_rouge : focussw2p2_civ{};

    class focussw3_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class focussw3_civ_bleu : focussw3_civ{};
    class focussw3_civ_gris : focussw3_civ{};
    class focussw3_civ_yellow : focussw3_civ{};
    class focussw3_civ_noir : focussw3_civ{};
    class focussw3_civ_rouge : focussw3_civ{};

    class mondeo_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class mondeo_civ_bleu : mondeo_civ{};
    class mondeo_civ_gris : mondeo_civ{};
    class mondeo_civ_yellow : mondeo_civ{};
    class mondeo_civ_noir : mondeo_civ{};
    class mondeo_civ_rouge : mondeo_civ{};

    class galaxych_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class galaxych_civ_bleu : galaxych_civ{};
    class galaxych_civ_gris : galaxych_civ{};
    class galaxych_civ_yellow : galaxych_civ{};
    class galaxych_civ_noir : galaxych_civ{};
    class galaxych_civ_rouge : galaxych_civ{};

    class IvecoCh_cciv {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class IvecoCh_cciv_bleu : IvecoCh_cciv{};
    class IvecoCh_cciv_gris : IvecoCh_cciv{};
    class IvecoCh_cciv_yellow : IvecoCh_cciv{};
    class IvecoCh_cciv_noir : IvecoCh_cciv{};
    class IvecoCh_cciv_rouge : IvecoCh_cciv{};

    class IvecoCh_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class IvecoCh_civ_bleu : IvecoCh_civ{};
    class IvecoCh_civ_gris : IvecoCh_civ{};
    class IvecoCh_civ_yellow : IvecoCh_civ{};
    class IvecoCh_civ_noir : IvecoCh_civ{};
    class IvecoCh_civ_rouge : IvecoCh_civ{};

    class Megane_Estate_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Megane_Estate_civ_bleu : Megane_Estate_civ{};
    class Megane_Estate_civ_gris : Megane_Estate_civ{};
    class Megane_Estate_civ_yellow : Megane_Estate_civ{};
    class Megane_Estate_civ_noir : Megane_Estate_civ{};
    class Megane_Estate_civ_rouge : Megane_Estate_civ{};

    class Mer_Vito_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Mer_Vito_civ_bleu : Mer_Vito_civ{};
    class Mer_Vito_civ_gris : Mer_Vito_civ{};
    class Mer_Vito_civ_yellow : Mer_Vito_civ{};
    class Mer_Vito_civ_noir : Mer_Vito_civ{};
    class Mer_Vito_civ_rouge : Mer_Vito_civ{};

    class 307ch_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class 307ch_civ_bleu : 307ch_civ{};
    class 307ch_civ_gris : 307ch_civ{};
    class 307ch_civ_yellow : 307ch_civ{};
    class 307ch_civ_noir : 307ch_civ{};
    class 307ch_civ_rouge : 307ch_civ{};

    class Peugeot_308_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Peugeot_308_civ_bleu : Peugeot_308_civ{};
    class Peugeot_308_civ_gris : Peugeot_308_civ{};
    class Peugeot_308_civ_yellow : Peugeot_308_civ{};
    class Peugeot_308_civ_noir : Peugeot_308_civ{};
    class Peugeot_308_civ_rouge : Peugeot_308_civ{};

    class Peugeot_Boxer_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Peugeot_Boxer_civ_bleu : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_gris : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_yellow : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_noir : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_rouge : Peugeot_Boxer_civ{};

    class Peugeot_Expert_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Peugeot_Expert_civ_bleu : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_gris : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_yellow : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_noir : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_rouge : Peugeot_Expert_civ{};

    class Renault_Clio_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Renault_Clio_civ_bleu : Renault_Clio_civ{};
    class Renault_Clio_civ_gris : Renault_Clio_civ{};
    class Renault_Clio_civ_yellow : Renault_Clio_civ{};
    class Renault_Clio_civ_noir : Renault_Clio_civ{};
    class Renault_Clio_civ_rouge : Renault_Clio_civ{};

    class Renault_ClioIV_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Renault_ClioIV_civ_bleu : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_gris : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_yellow : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_noir : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_rouge : Renault_ClioIV_civ{};

    class Renault_Espace_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Renault_Espace_civ_bleu : Renault_Espace_civ{};
    class Renault_Espace_civ_gris : Renault_Espace_civ{};
    class Renault_Espace_civ_yellow : Renault_Espace_civ{};
    class Renault_Espace_civ_noir : Renault_Espace_civ{};
    class Renault_Espace_civ_rouge : Renault_Espace_civ{};

    class Kangool1_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Kangool1_civ_bleu : Kangool1_civ{};
    class Kangool1_civ_gris : Kangool1_civ{};
    class Kangool1_civ_yellow : Kangool1_civ{};
    class Kangool1_civ_noir : Kangool1_civ{};
    class Kangool1_civ_rouge : Kangool1_civ{};

    class Kangool2_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Kangool2_civ_bleu : Kangool2_civ{};
    class Kangool2_civ_gris : Kangool2_civ{};
    class Kangool2_civ_yellow : Kangool2_civ{};
    class Kangool2_civ_noir : Kangool2_civ{};
    class Kangool2_civ_rouge : Kangool2_civ{};

    class chmeganers_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class chmeganers_civ_bleu : chmeganers_civ{};
    class chmeganers_civ_gris : chmeganers_civ{};
    class chmeganers_civ_yellow : chmeganers_civ{};
    class chmeganers_civ_noir : chmeganers_civ{};
    class chmeganers_civ_rouge : chmeganers_civ{};

    class Renault_Master_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Renault_Master_civ_bleu : Renault_Master_civ{};
    class Renault_Master_civ_gris : Renault_Master_civ{};
    class Renault_Master_civ_yellow : Renault_Master_civ{};
    class Renault_Master_civ_noir : Renault_Master_civ{};
    class Renault_Master_civ_rouge : Renault_Master_civ{};

    class chmaster2_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class chmaster2_civ_bleu : chmaster2_civ{};
    class chmaster2_civ_gris : chmaster2_civ{};
    class chmaster2_civ_yellow : chmaster2_civ{};
    class chmaster2_civ_noir : chmaster2_civ{};
    class chmaster2_civ_rouge : chmaster2_civ{};

    class chmaster2ut_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class chmaster2ut_civ_bleu : chmaster2ut_civ{};
    class chmaster2ut_civ_gris : chmaster2ut_civ{};
    class chmaster2ut_civ_yellow : chmaster2ut_civ{};
    class chmaster2ut_civ_noir : chmaster2ut_civ{};
    class chmaster2ut_civ_rouge : chmaster2ut_civ{};

    class Megane_Estate_p2_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Megane_Estate_p2_civ_bleu : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_gris : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_yellow : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_noir : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_rouge : Megane_Estate_p2_civ{};

    class Renault_Scenic_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Renault_Scenic_civ_bleu : Renault_Scenic_civ{};
    class Renault_Scenic_civ_gris : Renault_Scenic_civ{};
    class Renault_Scenic_civ_yellow : Renault_Scenic_civ{};
    class Renault_Scenic_civ_noir : Renault_Scenic_civ{};
    class Renault_Scenic_civ_rouge : Renault_Scenic_civ{};

    class Trafic1_civ {
                vItemSpace = 50;
                vFuelSpace = 50000;
                conditions = "";
                price = 250000;
                textures[] = {};
    };

    class Trafic1_civ_bleu : Trafic1_civ{};
    class Trafic1_civ_gris : Trafic1_civ{};
    class Trafic1_civ_yellow : Trafic1_civ{};
    class Trafic1_civ_noir : Trafic1_civ{};
    class Trafic1_civ_rouge : Trafic1_civ{};










































};
