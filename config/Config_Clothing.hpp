/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class cop {
        title = "Police Uniforms";
        license = "police";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND CLOTHING ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "sheriff_uniform_new","Sheriff",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO3","Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO1","Cadet+",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO2","Captain+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_cmd","DOC Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sgt","DOC Sergeant",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sco","DOC Corporal",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_co","DOC All",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_SWAT","Sergeant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_tou","2 Lieutenant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "RF_WING_3","Pilot Uniform",50, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","High Command Hat",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","DeputyI +",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "corrections_cap","Cadet+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","2nd Lieutenant+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_pcapblack","S.E.R.T Patrol Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_PASGT_BLK","S.E.R.T Response Helmet",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_headsetcap_blk","SERT Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "ACE_helmet","Pilot Helmet",50, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "",7, { "life_coplevel", "SCALAR", 1 } },
            { "G_Squares", "",1, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 3, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_balaclava_NV","SERT Balaclava",5, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses_BLK","SERT Glasses",6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", 6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", 6, { "life_coplevel", "SCALAR", 1 } },
            { "Mask_M40","Gas Mask",5, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "SCommand_Vest_Fix","Command Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+",15, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","Corporal+", 20, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Code Red Vest", 30, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Tac_Fix","Corporal+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Tan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Fix","Code Red Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "kaelvest_sert2_Fix","S.E.R.T Patrol Vest", 20, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_Hrp_vest_od","Pilot Vest", 50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Internal Affairs ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","I.A Vest", 15, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "tf_rt1523g_black","Command LRR", 40, { "life_coplevel", "SCALAR", 1 } },
            { "","=== All ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "cg_invisbp","All-Backpack", 2, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_pistol","All-Belt", 2, { "life_coplevel", "SCALAR", 1 } }
        };
    };
    class sheriff {
        title = "Sheriff Uniforms";
        license = "sheriff";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND CLOTHING ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "sheriff_uniform_new","Sheriff",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO3","Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO1","Cadet+",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO2","Captain+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_cmd","DOC Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sgt","DOC Sergeant",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sco","DOC Corporal",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_co","DOC All",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_SWAT","Sergeant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_tou","2 Lieutenant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "RF_WING_3","Pilot Uniform",50, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","High Command Hat",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","DeputyI +",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "corrections_cap","Cadet+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","2nd Lieutenant+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_pcapblack","S.E.R.T Patrol Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_PASGT_BLK","S.E.R.T Response Helmet",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_headsetcap_blk","SERT Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "ACE_helmet","Pilot Helmet",50, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "",7, { "life_coplevel", "SCALAR", 1 } },
            { "G_Squares", "",1, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 3, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_balaclava_NV","SERT Balaclava",5, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses_BLK","SERT Glasses",6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", 6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", 6, { "life_coplevel", "SCALAR", 1 } },
            { "Mask_M40","Gas Mask",5, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "SCommand_Vest_Fix","Command Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+",15, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","Corporal+", 20, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Code Red Vest", 30, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Tac_Fix","Corporal+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Tan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Fix","Code Red Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "kaelvest_sert2_Fix","S.E.R.T Patrol Vest", 20, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_Hrp_vest_od","Pilot Vest", 50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Internal Affairs ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","I.A Vest", 15, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "tf_rt1523g_black","Command LRR", 40, { "life_coplevel", "SCALAR", 1 } },
            { "","=== All ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "cg_invisbp","All-Backpack", 2, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_pistol","All-Belt", 2, { "life_coplevel", "SCALAR", 1 } }
        };
    };
    class doc {
        title = "DOC Unforms";
        license = "doc";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND CLOTHING ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "sheriff_uniform_new","Sheriff",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO3","Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO1","Cadet+",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO2","Captain+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_cmd","DOC Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sgt","DOC Sergeant",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sco","DOC Corporal",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_co","DOC All",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_SWAT","Sergeant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_tou","2 Lieutenant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "RF_WING_3","Pilot Uniform",50, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","High Command Hat",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","DeputyI +",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "corrections_cap","Cadet+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","2nd Lieutenant+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_pcapblack","S.E.R.T Patrol Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_PASGT_BLK","S.E.R.T Response Helmet",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_headsetcap_blk","SERT Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "ACE_helmet","Pilot Helmet",50, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "",7, { "life_coplevel", "SCALAR", 1 } },
            { "G_Squares", "",1, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 3, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_balaclava_NV","SERT Balaclava",5, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses_BLK","SERT Glasses",6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", 6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", 6, { "life_coplevel", "SCALAR", 1 } },
            { "Mask_M40","Gas Mask",5, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "SCommand_Vest_Fix","Command Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+",15, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","Corporal+", 20, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Code Red Vest", 30, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Tac_Fix","Corporal+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Tan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Fix","Code Red Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "kaelvest_sert2_Fix","S.E.R.T Patrol Vest", 20, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_Hrp_vest_od","Pilot Vest", 50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Internal Affairs ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","I.A Vest", 15, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "tf_rt1523g_black","Command LRR", 40, { "life_coplevel", "SCALAR", 1 } },
            { "","=== All ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "cg_invisbp","All-Backpack", 2, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_pistol","All-Belt", 2, { "life_coplevel", "SCALAR", 1 } }
        };
    };
    class crt {
        title = "CRT Uniforms";
        license = "crt";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND CLOTHING ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "sheriff_uniform_new","Sheriff",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO3","Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO1","Cadet+",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO2","Captain+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_cmd","DOC Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sgt","DOC Sergeant",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sco","DOC Corporal",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_co","DOC All",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_SWAT","Sergeant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_tou","2 Lieutenant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "RF_WING_3","Pilot Uniform",50, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","High Command Hat",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","DeputyI +",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "corrections_cap","Cadet+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","2nd Lieutenant+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_pcapblack","S.E.R.T Patrol Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_PASGT_BLK","S.E.R.T Response Helmet",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_headsetcap_blk","SERT Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "ACE_helmet","Pilot Helmet",50, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "",7, { "life_coplevel", "SCALAR", 1 } },
            { "G_Squares", "",1, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 3, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_balaclava_NV","SERT Balaclava",5, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses_BLK","SERT Glasses",6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", 6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", 6, { "life_coplevel", "SCALAR", 1 } },
            { "Mask_M40","Gas Mask",5, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "SCommand_Vest_Fix","Command Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+",15, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","Corporal+", 20, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Code Red Vest", 30, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Tac_Fix","Corporal+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Tan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Fix","Code Red Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "kaelvest_sert2_Fix","S.E.R.T Patrol Vest", 20, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_Hrp_vest_od","Pilot Vest", 50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Internal Affairs ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","I.A Vest", 15, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "tf_rt1523g_black","Command LRR", 40, { "life_coplevel", "SCALAR", 1 } },
            { "","=== All ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "cg_invisbp","All-Backpack", 2, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_pistol","All-Belt", 2, { "life_coplevel", "SCALAR", 1 } }
        };
    };
    class sert {
        title = "SERT Uniforms";
        license = "sert";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND CLOTHING ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "sheriff_uniform_new","Sheriff",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO3","Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO1","Cadet+",50, { "life_coplevel", "SCALAR", 1 } },
            { "CG_SO2","Captain+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_cmd","DOC Command",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sgt","DOC Sergeant",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_sco","DOC Corporal",50, { "life_coplevel", "SCALAR", 1 } },
            { "doc_uniform_co","DOC All",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "A3L_SWAT","Sergeant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_tou","2 Lieutenant+",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "RF_WING_3","Pilot Uniform",50, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","High Command Hat",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","DeputyI +",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "corrections_cap","Cadet+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Light","2nd Lieutenant+",5, { "life_coplevel", "SCALAR", 1 } },
            { "Campaign_Hat_Washedout","Captain+",5, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "jamie_pcapblack","S.E.R.T Patrol Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_PASGT_BLK","S.E.R.T Response Helmet",50, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_H_headsetcap_blk","SERT Cap",50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "ACE_helmet","Pilot Helmet",50, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "",2, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "",7, { "life_coplevel", "SCALAR", 1 } },
            { "G_Squares", "",1, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 3, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_balaclava_NV","SERT Balaclava",5, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses_BLK","SERT Glasses",6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", 6, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", 6, { "life_coplevel", "SCALAR", 1 } },
            { "Mask_M40","Gas Mask",5, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===",1, { "life_coplevel", "SCALAR", 1 } },
            { "SCommand_Vest_Fix","Command Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Division A ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+",15, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","Corporal+", 20, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "highthreatvesttan_Fix","Code Red Vest", 30, { "life_coplevel", "SCALAR", 1 } },
            { "","=== D.O.C ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_Without_pistol_sheriff","Cadet+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Tac_Fix","Corporal+", 15, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Tan_Fix","Supervisor", 30, { "life_coplevel", "SCALAR", 1 } },
            { "DOC_Vest_Threat_Fix","Code Red Vest", 15, { "life_coplevel", "SCALAR", 1 } },
            { "","=== S.E.R.T ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "kaelvest_sert2_Fix","S.E.R.T Patrol Vest", 20, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Pilot ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_Hrp_vest_od","Pilot Vest", 50, { "life_coplevel", "SCALAR", 1 } },
            { "","=== Internal Affairs ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "k_black_so_Fix","I.A Vest", 15, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "","=== HIGH COMMAND ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "tf_rt1523g_black","Command LRR", 40, { "life_coplevel", "SCALAR", 1 } },
            { "","=== All ===", 1, { "life_coplevel", "SCALAR", 1 } },
            { "cg_invisbp","All-Backpack", 2, { "life_coplevel", "SCALAR", 1 } },
            { "police_belt_pistol","All-Belt", 2, { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class racing {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

};
