class ROK_SEAL {
    class Rifleman {
        headGear = "MNP_Helmet_ROKMC";
        goggles = "";
        uniform = "MNP_CombatUniform_ROKMC";
        vest = "MNP_Vest_ROKMC_2_ARM";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_ROKMC_ARM";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        vest = "MNP_Vest_ROKMC_2_ARM";
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
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
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
        headGear = "CUP_H_PMC_Cap_Back_EP_Grey";
        goggles = "G_Bandanna_blk";
        vest = "MNP_Vest_ROKMC_2_ARM";
        backpack = "B_AssaultPack_blk";
    };

    class SP : SN {
        headGear = "CUP_H_PMC_Cap_EP_Grey";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        vest = "MNP_Vest_ROKMC_2_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
