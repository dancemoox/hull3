class CUP_RU_DE {
    class Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital";
        goggles = "";
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV";
        vest = "CUP_V_RUS_6B45_1_BeigeDigital_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_rolled_up";
        vest = "CUP_V_RUS_6B45_2_BeigeDigital_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        vest = "CUP_V_RUS_6B45_1_BeigeDigital_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_rolled_up_gloves_pads";
        vest = "CUP_V_RUS_6B45_4_BeigeDigital_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_gloves_pads";
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_goggles";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_rolled_up_gloves_pads";
        vest = "CUP_V_RUS_6B45_4_BeigeDigital_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_goggles";
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_gloves_pads";
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_BeigeDigital_headset_goggles";
        backpack = "ark_backpack_small";
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        uniform = "CUP_U_O_RUS_BeigeDigital_MSV_rolled_up";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
