#include "hull3_macros.h"
#include "\idi\clients\acre\addons\api\script_component.hpp"
#define PUSH(ARRAY,VAL) (ARRAY) pushBack (VAL) // Fix for ACRE2's pushBack missing parens for value

#include "\userconfig\hull3\log\acre.h"
#include "logbook.h"

#define ACRE_SIDES                                  [WEST, EAST, RESISTANCE, CIVILIAN]
#define ACRE_PRC148_CHANNEL_COUNT                   32



hull3_acre_fnc_preInit = {
    [] call hull3_acre_fnc_addEventHandlers;
    hull3_acre_isInitialized = false;
    DEBUG("hull3.acre","ACRE functions preInit finished.");
};

hull3_acre_fnc_addEventHandlers = {
    if (!isDedicated) then {
        ["player.initialized", hull3_acre_fnc_waitForAcreInit] call hull3_event_fnc_addEventHandler;
        ["acre.initialized", hull3_acre_fnc_setSpokenLanguages] call hull3_event_fnc_addEventHandler;
    } else {
        [] spawn hull3_acre_fnc_waitForAcreInit;
    };
};

hull3_acre_fnc_waitForAcreInit = {
    waitUntil {
        [] call acre_api_fnc_isInitialized;
    };
    [] call hull3_acre_fnc_setSettings;
    [] call hull3_acre_fnc_setupPresets;
    [] call hull3_acre_fnc_addLanguages;
    hull3_acre_isInitialized = true;
    ["acre.initialized", [player]] call hull3_event_fnc_emitEvent;
};

hull3_acre_fnc_setSettings = {
    [["ACRE", "revealToAi"] call hull3_config_fnc_getBool] call acre_api_fnc_setRevealToAI;
    [["ACRE", "lossModelScale"] call hull3_config_fnc_getNumber] call acre_api_fnc_setLossModelScale;
    [["ACRE", "fullDuplex"] call hull3_config_fnc_getBool] call acre_api_fnc_setFullDuplex;
    [["ACRE", "interference"] call hull3_config_fnc_getBool] call acre_api_fnc_setInterference;
};

hull3_acre_fnc_addLanguages = {
    DECLARE(_languages) = ["ACRE", "Babel", "languages"] call hull3_config_fnc_getArray;
    {
        _x call acre_api_fnc_babelAddLanguageType;
    } foreach _languages;
};

hull3_acre_fnc_setSpokenLanguages = {
    FUN_ARGS_1(_unit);

    private ["_factionLanguages", "_unitLanguages", "_languages", "_spokenLanguages"];
    _factionLanguages = ["Factions", faction _unit, "languages"] call hull3_config_fnc_getBothArray;
    _unitLanguages = [_unit getVariable ["hull3_init_entries", []], "languages"] call hull3_config_fnc_getEntry;
    _languages = [];
    PUSH_ALL(_languages,_factionLanguages);
    PUSH_ALL(_languages,_unitLanguages);
    _spokenLanguages = [];
    {
        if ((floor random 100) + 1 <= _x select 1) then {
            PUSH(_spokenLanguages,_x select 0);
        };
    } foreach _languages;
    _spokenLanguages call acre_api_fnc_babelSetSpokenLanguages;
};

hull3_acre_fnc_setupPresets = {
    [] call hull3_acre_fnc_setupSidePresets;
    [] call hull3_acre_fnc_setupUserPresets;
};

hull3_acre_fnc_setupSidePresets = {
    {
        [_x, _forEachIndex] call hull3_acre_fnc_setupSideShortRangePreset;
        [_x] call hull3_acre_fnc_setupSideLongRangePreset;
    } foreach ACRE_SIDES;
};

hull3_acre_fnc_setupUserPresets = {
    private ["_shortRangeRadios", "_longRangeRadios", "_radios", "_presetName"];
    _shortRangeRadios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    _longRangeRadios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    _radios = [];
    PUSH_ALL(_radios,_shortRangeRadios);
    PUSH_ALL(_radios,_longRangeRadios);
    _presetName = toLower str side player;
    {
        [_x, _presetName] call acre_api_fnc_setPreset;
    } foreach _radios;
};

hull3_acre_fnc_setupSideShortRangePreset = {
    FUN_ARGS_2(_side,_sideIndex);

    private ["_presetName", "_radios"];
    _presetName = toLower str _side;
    _radios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    {
        private ["_presetData", "_blocksHash", "_blocks"];
        _presetData = HASH_CREATE;
        _blocksHash = HASH_CREATE;
        _blocks = [_sideIndex];
        HASH_SET(_blocksHash,"blocks",_blocks);
        HASH_SET(_presetData,"channels",_blocksHash);
        [_x, _presetName, _presetData] call acre_sys_data_fnc_registerRadioPreset;
    } foreach _radios;
};

hull3_acre_fnc_setupSideLongRangePreset = {
    FUN_ARGS_1(_side);

    private ["_baseFrequency", "_channelStep", "_sideStep", "_presetName", "_radios", "_channelNames"];
    _baseFrequency = ["ACRE", "LongRange", "baseFrequency"] call hull3_config_fnc_getNumber;
    _channelStep = ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber;
    _sideStep = [_side] call hull3_acre_fnc_getSideStep;
    _presetName = toLower str _side;
    _radios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    _channelNames = ["ACRE", "LongRange", "channelNames"] call hull3_config_fnc_getArray;
    {
        [_x, "default", _presetName] call acre_api_fnc_copyPreset;
        for "_i" from 0 to (ACRE_PRC148_CHANNEL_COUNT - 1) do {
            private ["_frequency", "_channelNameField", "_channelName", "_power", "_channelIndex"];
            _frequency = _baseFrequency + _i * _channelStep + _sideStep;
            _channelNameField = ["ACRE", "LongRange", _x, "channelNameField"] call hull3_config_fnc_getText;
            _channelName = if (_i < count _channelNames) then { _channelNames select _i } else { format ["%1 %2", toLower str _side, _i] };
            _power = ["ACRE", "LongRange", _x, "power"] call hull3_config_fnc_getNumber;
            _channelIndex = _i + 1;
            [_x, _presetName, _channelIndex, "frequencyTX", _frequency] call acre_api_fnc_setPresetChannelField;
            [_x, _presetName, _channelIndex, "frequencyRX", _frequency] call acre_api_fnc_setPresetChannelField;
            [_x, _presetName, _channelIndex, _channelNameField, _channelName] call acre_api_fnc_setPresetChannelField;
            [_x, _presetName, _channelIndex, "power", _power] call acre_api_fnc_setPresetChannelField;
        };
    } foreach _radios;
};

hull3_acre_fnc_getSideStep = {
    FUN_ARGS_1(_side);

    call {
        if (_side == WEST) exitWith {["ACRE", "Steps", "west"] call hull3_config_fnc_getNumber};
        if (_side == EAST) exitWith {["ACRE", "Steps", "east"] call hull3_config_fnc_getNumber};
        if (_side == RESISTANCE) exitWith {["ACRE", "Steps", "resistance"] call hull3_config_fnc_getNumber};
        ["ACRE", "Steps", "default"] call hull3_config_fnc_getNumber;
    };
};