class RU_REED {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_OD";
        goggles = "G_Balaclava_blk";
        uniform = "MNP_CombatUniform_RO4_Sh";
        vest = "MNP_Vest_RUMED";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_RO4_Rg";
        goggles = "G_Bandanna_oli";
    };

    class Officer : Leader {
        vest = "MNP_Vest_RUMED_B";
        headGear = "MNP_MilCap_RO_A";
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        uniform = "MNP_CombatUniform_RO4_Rg";
        vest = "CUP_V_O_TK_CrewBelt";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "MNP_CombatUniform_RO4_Rg";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_RO4_Rg";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };
    
    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Cap_headphones";
        goggles = "G_Bandanna_oli";
        vest = "CUP_V_B_RRV_TL";
        backpack = "B_AssaultPack_rgr";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_TK_PilotHelmet";
        vest = "CUP_V_B_PilotVest";
        goggles = "G_Aviator";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};