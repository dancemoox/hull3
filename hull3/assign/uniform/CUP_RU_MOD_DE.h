class CUP_RU_MOD_DE {
    class Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_BeigeDigital";
        goggles = "";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_BeigeDigital_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_rolled_up_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_BeigeDigital_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_rolled_up_gloves_pads";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut_BeigeDigital_ARM";
    };

    class XO : CO {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Del_BeigeDigital_ARM";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_BeigeDigital";
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Full_BeigeDigital_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_BeigeDigital";
        vest = "CUP_Vest_RUS_6B45_Sh117_PKP_Del_BeigeDigital_ARM";
    };

    class AAR : Rifleman {
        vest = "CUP_Vest_RUS_6B45_Sh117_Del_Nut_BeigeDigital_ARM";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_BeigeDigital";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_rolled_up_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_Del_Nut_BeigeDigital_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
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
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
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
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_BeigeDigital";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_rolled_up_gloves_pads";
		vest = "CUP_Vest_RUS_6B45_Sh117_Full_BeigeDigital_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_BeigeDigital";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_BeigeDigital_gloves_pads";
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_BeigeDigital";
        uniform = "CUP_U_O_RUS_Ratnik_BeigeDigital";
        vest = "CUP_Vest_RUS_6B45_Sh117_Full_BeigeDigital_ARM";
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
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
