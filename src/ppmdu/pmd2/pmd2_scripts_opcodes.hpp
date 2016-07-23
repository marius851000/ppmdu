#ifndef PMD2_SCRIPTS_OPCODES_HPP
#define PMD2_SCRIPTS_OPCODES_HPP
/*
pmd2_scripts_opcodes.hpp
2016/05/08
psycommando@gmail.com
Description: Contains data on script opcodes.
*/
#include <ppmdu/pmd2/pmd2.hpp>
#include <ppmdu/pmd2/pmd2_scripts.hpp>
#include <cstdint>
#include <vector>
#include <string>
#include <array>
#include <cassert>
//#include <initializer_list>

namespace pmd2
{
    /*
        eOpCodeVersion
            The version of the script/opcodes to handle. 
            So far, 2 known versions exists tied to either Time/Darkness or Sky.
    */
    enum struct eOpCodeVersion
    {
        EoS,
        EoTD,
        Invalid,
    };
    const size_t   ScriptWordLen = sizeof(uint16_t);    //Len of a word in the scripts. Since its a commonly used unit
    const uint16_t NullOpCode    = 0;                   //The Null opcode is the same across all versions of the opcodes!
    const uint16_t InvalidOpCode = std::numeric_limits<uint16_t>::max();

//==========================================================================================================
//  EoTD OpCodes
//==========================================================================================================
    enum struct eScriptOpCodesEoTD : uint16_t 
    {
        Null = NullOpCode,
        back_ChangeGround,
        back_SetBackEffect,
        back_SetBackScrollOffset,
        back_SetBackScrollSpeed,
        back_SetBanner,
        back_SetEffect,
        back_SetDungeonBanner,
        back_SetGround,
        back_SetTitleBanner,
        back_SetWeather,
        back_SetWeatherEffect,
        back_SetWeatherScrollOffset,
        back_SetWeatherScrollSpeed,
        back2_SetBackEffect,
        back2_SetBackScrollOffset,
        back2_SetBackScrollSpeed,
        back2_SetData,
        back2_SetEffect,
        back2_SetGround,
        back2_SetMode,
        back2_SetSpecialActing,
        back2_SetWeather,
        back2_SetWeatherEffect,
        back2_SetWeatherScrollOffset,
        back2_SetWeatherScrollSpeed,
        bgm_FadeOut,
        bgm_Play,
        bgm_PlayFadeIn,
        bgm_Stop,
        bgm_ChangeVolume,
        bgm2_FadeOut,
        bgm2_Play,
        bgm2_PlayFadeIn,
        bgm2_Stop,
        bgm2_ChangeVolume,
        Branch,
        BranchBit,
        BranchDebug,
        BranchEdit,
        BranchExecuteSub,
        BranchPerformance,
        BranchScenarioNow,
        BranchScenarioNowAfter,
        BranchScenarioNowBefore,
        BranchScenarioAfter,
        BranchScenarioBefore,
        BranchSum,
        BranchValue,
        BranchVariable,
        BranchVariation,
        Call,
        CallCommon,
        camera_Move2Default,
        camera_Move2MyPosition,
        camera_Move2Myself,
        camera_Move2PositionMark,
        camera_Move3Default,
        camera_Move3MyPosition,
        camera_Move3Myself,
        camera_Move3PositionMark,
        camera_MoveDefault,
        camera_MoveMyPosition,
        camera_MoveMyself,
        camera_MovePositionMark,
        camera_SetDefault,
        camera_SetEffect,
        camera_SetMyPosition,
        camera_SetMyself,
        camera_SetPositionMark,
        camera2_Move2Default,
        camera2_Move2MyPosition,
        camera2_Move2Myself,
        camera2_Move2PositionMark,
        camera2_Move3Default,
        camera2_Move3MyPosition,
        camera2_Move3Myself,
        camera2_Move3PositionMark,
        camera2_MoveDefault,
        camera2_MoveMyPosition,
        camera2_MoveMyself,
        camera2_MovePositionMark,
        camera2_SetDefault,
        camera2_SetEffect,
        camera2_SetMyPosition,
        camera2_SetMyself,
        camera2_SetPositionMark,
        Case,
        CaseMenu,
        CaseScenario,
        CaseText,
        CaseValue,
        CaseVariable,
        debug_Assert,
        debug_Print,
        debug_PrintFlag,
        debug_PrintScenario,
        DefaultText,
        Destroy,
        End,
        ExecuteActing,
        ExecuteCommon,
        flag_CalcBit,
        flag_CalcValue,
        flag_CalcVariable,
        flag_Clear,
        flag_Initial,
        flag_Set,
        flag_ResetDungeonResult,
        flag_ResetScenario,
        flag_SetAdventureLog,
        flag_SetDungeonMode,
        flag_SetDungeonResult,
        flag_SetPerformance,
        flag_SetScenario,
        Flash,
        Hold,
        Jump,
        JumpCommon,
        lives,
        LoadPosition,
        Lock,
        main_EnterAdventure,
        main_EnterDungeon,
        main_EnterGround,
        main_EnterGroundMulti,
        main_EnterRescueUser,
        main_EnterTraining,
        main_EnterTraining2,
        main_SetGround,
        me_Play,
        me_Stop,
        message_Close,
        message_CloseEnforce,
        message_Explanation,
        message_FacePositionOffset,
        message_ImitationSound,
        message_KeyWait,
        message_Mail,
        message_Menu,
        message_Monologue,
        message_Narration,
        message_Notice,
        message_EmptyActor,
        message_ResetActor,
        message_SetActor,
        message_SetFace,
        message_SetFaceEmpty,
        message_SetFaceOnly,
        message_SetFacePosition,
        message_SetWaitMode,
        message_SpecialTalk,
        message_SwitchMenu,
        message_SwitchMonologue,
        message_SwitchTalk,
        message_Talk,
        Move2Position,
        Move2PositionLives,
        Move2PositionMark,
        Move2PositionOffset,
        Move2PositionOffsetRandom,
        Move3Position,
        Move3PositionLives,
        Move3PositionMark,
        Move3PositionOffset,
        Move3PositionOffsetRandom,
        MoveDirection,
        MoveHeight,
        MovePosition,
        MovePositionLives,
        MovePositionLivesTime,
        MovePositionMark,
        MovePositionMarkTime,
        MovePositionOffset,
        MoveSpecial,
        MoveTurn,
        object,
        performer,
        ProcessSpecial,
        ResetAttribute,
        ResetFunctionAttribute,
        ResetHitAttribute,
        ResetOutputAttribute,
        ResetReplyAttribute,
        Return,
        SavePosition,
        screen_FadeChange,
        screen_FadeChangeAll,
        screen_FadeIn,
        screen_FadeInAll,
        screen_FadeOut,
        screen_FadeOutAll,
        screen_FlushChange,
        screen_FlushIn,
        screen_FlushOut,
        screen_WhiteChange,
        screen_WhiteChangeAll,
        screen_WhiteIn,
        screen_WhiteInAll,
        screen_WhiteOut,
        screen_WhiteOutAll,
        screen2_FadeChange,
        screen2_FadeChangeAll,
        screen2_FadeIn,
        screen2_FadeInAll,
        screen2_FadeOut,
        screen2_FadeOutAll,
        screen2_FlushChange,
        screen2_FlushIn,
        screen2_FlushOut,
        screen2_WhiteChange,
        screen2_WhiteChangeAll,
        screen2_WhiteIn,
        screen2_WhiteInAll,
        screen2_WhiteOut,
        screen2_WhiteOutAll,
        se_FadeOut,
        se_Play,
        se_Stop,
        SetAnimation,
        SetAttribute,
        SetDirection,
        SetDirectionLives,
        SetEffect,
        SetFunctionAttribute,
        SetHeight,
        SetHitAttribute,
        SetMoveRange,
        SetOutputAttribute,
        SetPosition,
        SetPositionInitial,
        SetPositionLives,
        SetPositionMark,
        SetPositionOffset,
        SetPositionOffsetRandom,
        SetReplyAttribute,
        Slide2Position,
        Slide2PositionLives,
        Slide2PositionMark,
        Slide2PositionOffset,
        Slide2PositionOffsetRandom,
        Slide3Position,
        Slide3PositionLives,
        Slide3PositionMark,
        Slide3PositionOffset,
        Slide3PositionOffsetRandom,
        SlideHeight,
        SlidePosition,
        SlidePositionLives,
        SlidePositionLivesTime,
        SlidePositionMark,
        SlidePositionMarkTime,
        SlidePositionOffset,
        sound_FadeOut,
        sound_Stop,
        supervision_Acting,
        supervision_ExecuteActing,
        supervision_ExecuteActingSub,
        supervision_ExecuteCommon,
        supervision_ExecuteEnter,
        supervision_ExecuteStation,
        supervision_ExecuteStationCommon,
        supervision_ExecuteStationCommonSub,
        supervision_ExecuteStationSub,
        supervision_ExecuteExport,
        supervision_LoadStation,
        supervision_Remove,
        supervision_RemoveActing,
        supervision_RemoveCommon,
        supervision_SpecialActing,
        supervision_Station,
        supervision_StationCommon,
        supervision_Suspend,
        supervision2_SpecialActing,
        Switch,
        SwitchDirection,
        SwitchDirectionLives,
        SwitchDirectionLives2,
        SwitchDirectionMark,
        SwitchDungeonMode,
        SwitchLives,
        SwitchRandom,
        SwitchScenario,
        SwitchScenarioLevel,
        SwitchSector,
        SwitchValue,
        SwitchVariable,
        Turn2Direction,
        Turn2DirectionLives,
        Turn2DirectionLives2,
        Turn2DirectionMark,
        Turn2DirectionTurn,
        TurnDirection,
        TurnDirectionLives,
        TurnDirectionLives2,
        TurnDirectionMark,
        Unlock,
        Wait,
        WaitAnimation,
        WaitBackEffect,
        WaitBack2Effect,
        WaitBgm,
        WaitBgm2,
        WaitBgmSignal,
        WaitEffect,
        WaitExecuteLives,
        WaitExecuteObject,
        WaitExecutePerformer,
        WaitFadeIn,
        WaitLockLives,
        WaitLockObject,
        WaitLockPerformer,
        WaitLockSupervision,
        WaitMe,
        WaitMoveCamera,
        WaitMoveCamera2,
        WaitRandom,
        WaitScreenFade,
        WaitScreenFadeAll,
        WaitScreen2Fade,
        WaitSe,
        WaitSpecialActing,
        WaitSubScreen,
        WaitSubSpecialActing,
        worldmap_BlinkMark,
        worldmap_ChangeLevel,
        worldmap_DeleteArrow,
        worldmap_MoveCamera,
        worldmap_OffMessage,
        worldmap_SetArrow,
        worldmap_SetCamera,
        worldmap_SetLevel,
        worldmap_SetMark,
        worldmap_SetMessage,
        worldmap_SetMessagePlace,
        worldmap_SetMode,

        //This should always be last
        NBOpcodes,
        INVALID = InvalidOpCode,
    };

//==========================================================================================================
//  EoS OpCodes
//==========================================================================================================
    enum struct eScriptOpCodesEoS : uint16_t
    {
        Null = NullOpCode,
        back_ChangeGround,
        back_SetBackEffect,
        back_SetBackScrollOffset,
        back_SetBackScrollSpeed,
        back_SetBanner,
        back_SetBanner2,
        back_SetEffect,
        back_SetDungeonBanner,
        back_SetGround,
        back_SetSpecialEpisodeBanner,
        back_SetSpecialEpisodeBanner2,
        back_SetSpecialEpisodeBanner3,
        back_SetTitleBanner,
        back_SetWeather,
        back_SetWeatherEffect,
        back_SetWeatherScrollOffset,
        back_SetWeatherScrollSpeed,
        back2_SetBackEffect,
        back2_SetBackScrollOffset,
        back2_SetBackScrollSpeed,
        back2_SetData,
        back2_SetEffect,
        back2_SetGround,
        back2_SetMode,
        back2_SetSpecialActing,
        back2_SetWeather,
        back2_SetWeatherEffect,
        back2_SetWeatherScrollOffset,
        back2_SetWeatherScrollSpeed,
        bgm_FadeOut,
        bgm_Play,
        bgm_PlayFadeIn,
        bgm_Stop,
        bgm_ChangeVolume,
        bgm2_FadeOut,
        bgm2_Play,
        bgm2_PlayFadeIn,
        bgm2_Stop,
        bgm2_ChangeVolume,
        Branch,
        BranchBit,
        BranchDebug,
        BranchEdit,
        BranchExecuteSub,
        BranchPerformance,
        BranchScenarioNow,
        BranchScenarioNowAfter,
        BranchScenarioNowBefore,
        BranchScenarioAfter,
        BranchScenarioBefore,
        BranchSum,
        BranchValue,
        BranchVariable,
        BranchVariation,
        Call,
        CallCommon,
        camera_Move2Default,
        camera_Move2MyPosition,
        camera_Move2Myself,
        camera_Move2PositionMark,
        camera_Move2PositionMark2,
        camera_Move3Default,
        camera_Move3MyPosition,
        camera_Move3Myself,
        camera_Move3PositionMark,
        camera_Move3PositionMark2,
        camera_MoveDefault,
        camera_MoveMyPosition,
        camera_MoveMyself,
        camera_MovePositionMark,
        camera_MovePositionMark2,
        camera_SetDefault,
        camera_SetEffect,
        camera_SetMyPosition,
        camera_SetMyself,
        camera_SetPositionMark,
        camera2_Move2Default,
        camera2_Move2MyPosition,
        camera2_Move2Myself,
        camera2_Move2PositionMark,
        camera2_Move2PositionMark2,
        camera2_Move3Default,
        camera2_Move3MyPosition,
        camera2_Move3Myself,
        camera2_Move3PositionMark,
        camera2_Move3PositionMark2,
        camera2_MoveDefault,
        camera2_MoveMyPosition,
        camera2_MoveMyself,
        camera2_MovePositionMark,
        camera2_MovePositionMark2,
        camera2_SetDefault,
        camera2_SetEffect,
        camera2_SetMyPosition,
        camera2_SetMyself,
        camera2_SetPositionMark,
        CancelCut,
        CancelRecoverCommon,
        Case,
        CaseMenu,
        CaseMenu2,
        CaseScenario,
        CaseText,
        CaseValue,
        CaseVariable,
        debug_Assert,
        debug_Print,
        debug_PrintFlag,
        debug_PrintScenario,
        DefaultText,
        Destroy,
        End,
        EndAnimation,
        ExecuteActing,
        ExecuteCommon,
        flag_CalcBit,
        flag_CalcValue,
        flag_CalcVariable,
        flag_Clear,
        flag_Initial,
        flag_Set,
        flag_ResetDungeonResult,
        flag_ResetScenario,
        flag_SetAdventureLog,
        flag_SetDungeonMode,
        flag_SetDungeonResult,
        flag_SetPerformance,
        flag_SetScenario,
        Flash,
        Hold,
        item_GetVariable,
        item_Set,
        item_SetTableData,
        item_SetVariable,
        Jump,
        JumpCommon,
        lives,
        LoadPosition,
        Lock,
        main_EnterAdventure,
        main_EnterDungeon,
        main_EnterGround,
        main_EnterGroundMulti,
        main_EnterRescueUser,
        main_EnterTraining,
        main_EnterTraining2,
        main_SetGround,
        me_Play,
        me_Stop,
        message_Close,
        message_CloseEnforce,
        message_Explanation,
        message_FacePositionOffset,
        message_ImitationSound,
        message_KeyWait,
        message_Mail,
        message_Menu,
        message_Monologue,
        message_Narration,
        message_Notice,
        message_EmptyActor,
        message_ResetActor,
        message_SetActor,
        message_SetFace,
        message_SetFaceEmpty,
        message_SetFaceOnly,
        message_SetFacePosition,
        message_SetWaitMode,
        message_SpecialTalk,
        message_SwitchMenu,
        message_SwitchMenu2,
        message_SwitchMonologue,
        message_SwitchTalk,
        message_Talk,
        Move2Position,
        Move2PositionLives,
        Move2PositionMark,
        Move2PositionMark2,
        Move2PositionOffset,
        Move2PositionOffset2,
        Move2PositionOffsetRandom,
        Move3Position,
        Move3PositionLives,
        Move3PositionMark,
        Move3PositionMark2,
        Move3PositionOffset,
        Move3PositionOffset2,
        Move3PositionOffsetRandom,
        MoveDirection,
        MoveHeight,
        MovePosition,
        MovePositionLives,
        MovePositionLivesTime,
        MovePositionMark,
        MovePositionMark2,
        MovePositionMarkTime,
        MovePositionOffset,
        MovePositionOffset2,
        MoveSpecial,
        MoveTurn,
        object,
        PauseEffect,
        performer,
        ProcessSpecial,
        PursueTurnLives,
        PursueTurnLives2,
        ResetAttribute,
        ResetFunctionAttribute,
        ResetHitAttribute,
        ResetOutputAttribute,
        ResetReplyAttribute,
        ResumeEffect,
        Return,
        SavePosition,
        screen_FadeChange,
        screen_FadeChangeAll,
        screen_FadeIn,
        screen_FadeInAll,
        screen_FadeOut,
        screen_FadeOutAll,
        screen_FlushChange,
        screen_FlushIn,
        screen_FlushOut,
        screen_WhiteChange,
        screen_WhiteChangeAll,
        screen_WhiteIn,
        screen_WhiteInAll,
        screen_WhiteOut,
        screen_WhiteOutAll,
        screen2_FadeChange,
        screen2_FadeChangeAll,
        screen2_FadeIn,
        screen2_FadeInAll,
        screen2_FadeOut,
        screen2_FadeOutAll,
        screen2_FlushChange,
        screen2_FlushIn,
        screen2_FlushOut,
        screen2_WhiteChange,
        screen2_WhiteChangeAll,
        screen2_WhiteIn,
        screen2_WhiteInAll,
        screen2_WhiteOut,
        screen2_WhiteOutAll,
        se_ChangePan,
        se_ChangeVolume,
        se_FadeOut,
        se_Play,
        se_PlayFull,
        se_PlayPan,
        se_PlayVolume,
        se_Stop,
        SetAnimation,
        SetAttribute,
        SetBlink,
        SetDirection,
        SetDirectionLives,
        SetEffect,
        SetFunctionAttribute,
        SetHeight,
        SetHitAttribute,
        SetMoveRange,
        SetOutputAttribute,
        SetPosition,
        SetPositionInitial,
        SetPositionLives,
        SetPositionMark,
        SetPositionOffset,
        SetPositionOffsetRandom,
        SetReplyAttribute,
        SetupOutputAttributeAndAnimation,
        Slide2Position,
        Slide2PositionLives,
        Slide2PositionMark,
        Slide2PositionMark2,
        Slide2PositionOffset,
        Slide2PositionOffset2,
        Slide2PositionOffsetRandom,
        Slide3Position,
        Slide3PositionLives,
        Slide3PositionMark,
        Slide3PositionMark2,
        Slide3PositionOffset,
        Slide3PositionOffset2,
        Slide3PositionOffsetRandom,
        SlideHeight,
        SlidePosition,
        SlidePositionLives,
        SlidePositionLivesTime,
        SlidePositionMark,
        SlidePositionMark2,
        SlidePositionMarkTime,
        SlidePositionOffset,
        SlidePositionOffset2,
        sound_FadeOut,
        sound_Stop,
        StopAnimation,
        supervision_Acting,
        supervision_ActingInvisible,
        supervision_ExecuteActing,
        supervision_ExecuteActingSub,
        supervision_ExecuteCommon,
        supervision_ExecuteEnter,
        supervision_ExecuteStation,
        supervision_ExecuteStationCommon,
        supervision_ExecuteStationCommonSub,
        supervision_ExecuteStationSub,
        supervision_ExecuteExport,
        supervision_ExecuteExportSub,
        supervision_LoadStation,
        supervision_Remove,
        supervision_RemoveActing,
        supervision_RemoveCommon,
        supervision_SpecialActing,
        supervision_Station,
        supervision_StationCommon,
        supervision_Suspend,
        supervision2_SpecialActing,
        Switch,
        SwitchDirection,
        SwitchDirectionLives,
        SwitchDirectionLives2,
        SwitchDirectionMark,
        SwitchDungeonMode,
        SwitchLives,
        SwitchRandom,
        SwitchScenario,
        SwitchScenarioLevel,
        SwitchSector,
        SwitchValue,
        SwitchVariable,
        Turn2Direction,
        Turn2DirectionLives,
        Turn2DirectionLives2,
        Turn2DirectionMark,
        Turn2DirectionTurn,
        Turn3,
        TurnDirection,
        TurnDirectionLives,
        TurnDirectionLives2,
        TurnDirectionMark,
        Unlock,
        Wait,
        WaitAnimation,
        WaitBackEffect,
        WaitBack2Effect,
        WaitBgm,
        WaitBgm2,
        WaitBgmSignal,
        WaitEffect,
        WaitEndAnimation,
        WaitExecuteLives,
        WaitExecuteObject,
        WaitExecutePerformer,
        WaitFadeIn,
        WaitLockLives,
        WaitLockObject,
        WaitLockPerformer,
        WaitLockSupervision,
        WaitMe,
        WaitMoveCamera,
        WaitMoveCamera2,
        WaitRandom,
        WaitScreenFade,
        WaitScreenFadeAll,
        WaitScreen2Fade,
        WaitSe,
        WaitSpecialActing,
        WaitSubScreen,
        WaitSubSpecialActing,
        worldmap_BlinkMark,
        worldmap_ChangeLevel,
        worldmap_DeleteArrow,
        worldmap_MoveCamera,
        worldmap_OffMessage,
        worldmap_SetArrow,
        worldmap_SetCamera,
        worldmap_SetLevel,
        worldmap_SetMark,
        worldmap_SetMessage,
        worldmap_SetMessagePlace,
        worldmap_SetMode,

        //This should always be last
        NBOpcodes,
        INVALID = InvalidOpCode,
    };

//==========================================================================================================
//  Opcode Category
//==========================================================================================================

    /*
        eCommandCategory 
            Used to determine how to interpret a command.
            These are independant of the version.
    */
    //!When adding category, don't forget to edit the OpCodeInfoWrapper::GetMyCategory() function to reflect the changes!!
    enum struct eCommandCat : uint16_t
    {
        SingleOp = 0,           //Simple command, default
        OpWithReturnVal,        //A single op that returns a value and may have a set of cases appended to it

        Switch,                 //This marks the start of a conditional structure
        Case,                   //This marks a case in a previous conditional structure
        Default,                //This marks the default case in a conditional structure

        //Accessors             
        EntityAccessor,         //For accessors like lives, object, and performer
        EntAttribute,           //For things that modifies an entity's attributes.

        //Sub-categories
        //WaitCmd,                //One of the wait command

        //Invocation
        Jump,                   //
        JumpCommon,             //
        Call,                   //
        CallCommon,             //
        BranchCmd,              //For Branch commands
        ProcSpec,               //For ProcessSpecial command

        //Other Special
        EnterAdventure,         //For main_EnterAdventure, since it can have a set of cases applied to its return value.

        //Special commands
        Null,                   //Specifically for the Null command
        Lock,                   //Specifically for the Lock command
        Unlock,                 //Specifically for the Unlock command
        End,                    //Specifically for the End command
        Return,                 //Specifically for the Return command
        Hold,                   //Specifically for the Hold command
        Destroy,                //Specifically for the Destroy command

        NbCat,
        Invalid,
    };

//==========================================================================================================
//  Parameter Info
//==========================================================================================================

    /*
        A way to categorize the way a parameter should be interpreted!
    */
    enum struct eOpParamTypes : uint8_t
    {
        UNK_Placeholder = 0,    //For when we need a placeholder

        Integer,                //Signed 16 bits word
        UInteger,               //unsigned 16 bits word
        Boolean,                //1 or 0
        BitsFlag,               //Represented as hexadecimal

        Constant,               //Reference to a constant
        String,                 //Reference to a string in the string block, by index

        //References
        Unk_LivesRef,           //For the "lives" accessor
        Unk_PerformerRef,       //For the "performer" accessor
        Unk_ObjectRef,          //For the "object" accessor
        Unk_ScriptVariable,     //For script engine/game state variables.
        ScenarioId,             //The id of the current scenario in the scenario table (event table)
        Unk_ProcSpec,           //First parameter of "ProcessSpecial" command, (is a 14bits unsigned integer)
        Unk_FaceType,           //A portrait ID to use in the set face commands
        Unk_BgmTrack,           //A track ID for a music track to play. Begins at 1.
        Unk_CRoutineId,         //An id to an instruction group in unionall.ssb
        Unk_RoutineId,          //An id to a local instruction group
        Unk_AnimationID,        //Parameter containing the ID of an animation.

        //
        Unk_MvSlSpecInt,        //First parameter of the MovePositionOffset, MovePositionMark, SlidePositionMark, Slide2PositionMark, camera_Move2Default
                                //Third parameter of camera_SetEffect

        //Specifics
        Duration,               //A duration in possibly ticks or milliseconds
        Coordinate,             //A coordinate on either X or Y axis
        InstructionOffset,      //An offset within the list of instructions to a specific instruction.
        //CaseJumpOffset,         //Offset to jump to when a switch's case is satisfied. 

        NbTypes,
        Invalid,
    };
    const std::array<std::string, static_cast<size_t>(eOpParamTypes::NbTypes)> OpParamTypesNames
    {{
        "param",
        "int",
        "uint",
        "bool",
        "flag",

        "constref",
        "strref",

        "actorid",          
        "Unk_PerformerRef",      
        "Unk_ObjectRef",         
        "svar",    
        "scenario", 
        "procspec",
        "face",
        "bgm",
        "commonroutineid",         //An id to an instruction group in unionall.ssb
        "localroutineid",          //An id to a local instruction group
        "animid",

        "Unk_EncInt",

        "duration",              
        "coordinate",            
        "tolabel",          //String is label id when importing/exporting from xml
        //"jumptolabel",
    }};

    inline const std::string * OpParamTypesToStr( eOpParamTypes ty )
    {
        if( ty < eOpParamTypes::NbTypes )
            return std::addressof( OpParamTypesNames[static_cast<size_t>(ty)] );
        else
            return nullptr;
    }

    inline eOpParamTypes FindOpParamTypesByName( const std::string & name )
    {
        for( size_t i = 0; i < OpParamTypesNames.size(); ++i )
        {
            if( OpParamTypesNames[i] == name )
                return static_cast<eOpParamTypes>(i);
        }
        return eOpParamTypes::Invalid;
    }

    struct OpParamInfo
    {
        eOpParamTypes ptype;
    };


//==========================================================================================================
//
//==========================================================================================================
    const uint16_t ProcessSpecialMaxVal = 0x3E;

//==========================================================================================================
//  Faces
//==========================================================================================================
    const std::array<std::string, 16> FaceNames
    {{
        "NORMAL",
        "HAPPY",
        "PAIN",
        "ANGRY",
        "THINK",
        "SAD",
        "WEEP",
        "SHOUT",
        "TEARS",
        "DECIDE",
        "GLADNESS",
        "EMOTION",
        "SURPRISE",
        "FAINT",
        "DUMMY_0",
        "DUMMY_1",
    }};

    const int16_t       InvalidFaceID   = std::numeric_limits<int16_t>::max();
    const std::string   NullFaceName    = "NULL"; //It seems like the null(-1) face comes up a lot, so, I made a default value for it!
    const int16_t       NullFaceID      = InvalidFaceID; //It seems like the null(-1) face comes up a lot, so, I made a default value for it!

    inline int16_t FindFaceIDByName( const std::string & facename )
    {
        if( facename == NullFaceName )
            return NullFaceID;
        for( size_t i = 0; i < FaceNames.size(); ++i )
        {
            const std::string & cur = FaceNames[i];
            if( cur == facename )
                return static_cast<int16_t>(i);
        }
        return InvalidFaceID;
    }

    std::string GetFaceNameByID( uint16_t faceid );

//==========================================================================================================
//  Lives Entities
//==========================================================================================================
    struct livesinfo_EoS
    {
        std::string name;
        uint8_t     type;
        uint16_t    entid;
        uint16_t    unk3;
        uint16_t    unk4;
    };


    const uint16_t InvalidLivesID = std::numeric_limits<uint16_t>::max();

    const size_t NbEntitiesEoS = 386;
    extern const std::array<livesinfo_EoS,NbEntitiesEoS> LivesEntityDataEntries_EoS;

    inline const livesinfo_EoS * FindLivesInfo_EoS(uint16_t id)
    {
        if( id < LivesEntityDataEntries_EoS.size() )
            return &(LivesEntityDataEntries_EoS[id]);
        else
            return nullptr;
    }

    inline uint16_t FindLivesIdByName_EoS( const std::string & name )
    {
        for( size_t i = 0; i < LivesEntityDataEntries_EoS.size(); ++i )
        {
            const livesinfo_EoS & cur = LivesEntityDataEntries_EoS[i];
            if( cur.name == name )
                return static_cast<uint16_t>(i);
        }
        return std::numeric_limits<uint16_t>::max();
    }


    //EoTD
    typedef livesinfo_EoS livesinfo_EoTD;
    const size_t NbEntitiesEoTD = 248;
    extern const std::array<livesinfo_EoTD,NbEntitiesEoTD> LivesEntityDataEntries_EoTD;

    inline const livesinfo_EoTD * FindLivesInfo_EoTD(uint16_t id)
    {
        if( id < LivesEntityDataEntries_EoTD.size() )
            return &(LivesEntityDataEntries_EoTD[id]);
        else
            return nullptr;
    }

    inline uint16_t FindLivesIdByName_EoTD( const std::string & name )
    {
        for( size_t i = 0; i < LivesEntityDataEntries_EoTD.size(); ++i )
        {
            const livesinfo_EoTD & cur = LivesEntityDataEntries_EoTD[i];
            if( cur.name == name )
                return static_cast<uint16_t>(i);
        }
        return std::numeric_limits<uint16_t>::max();
    }

//==========================================================================================================
//  ScriptEngineVariable
//==========================================================================================================
    enum struct eGameVarType : uint16_t
    {
        Unk     = 0,
        Bits    = 1,
        Bool    = 2,
        Uint8   = 3,
        Int8    = 4,
        Uint16  = 5,
        Int16   = 6,
        Uint32  = 7,
        Int32   = 8,
        CStr    = 9,
        
        NbTypes,
        Invalid = std::numeric_limits<uint16_t>::max(),
    };

    struct gamevariableinfo
    {
        int16_t      ty;
        int16_t      unk1;
        uint16_t     offset;
        uint16_t     bitshift;
        uint16_t     unk3;
        uint16_t     unk4;
        std::string  str;
    };
    const uint16_t InvalidGameVariableID = std::numeric_limits<uint16_t>::max();

    const gamevariableinfo * FindGameVarInfo( uint16_t varid );

    //Return uin16_t max if invalid
    uint16_t     GameVarInfoNameToId     ( const std::string & name );
    inline eGameVarType GameVarInfoNameToVarType( const std::string & name )
    {
        return static_cast<eGameVarType>(GameVarInfoNameToId(name));
    }
    


//==========================================================================================================
//  EoTD OpCode Data
//==========================================================================================================
    /*************************************************************************************
        OpCodeInfoEoTD
            Structure for holding info on individual opcodes.
    **************************************************************************************/
    struct OpCodeInfoEoTD
    {
        std::string         name;
        int8_t              nbparams;
        //int8_t              unk1;
        //int8_t              unk2;
        //int8_t              unk3;
        eCommandCat              cat;       //Category  the instruction fits in
        std::vector<OpParamInfo> paraminfo; //Info on each parameters the opcode takes
        
    };
    //struct OcodeInfoWrapperEoTD : public BaseOpCodeInfoWrapper
    //{
    //    OcodeInfoWrapperEoTD():info(nullptr) {}
    //    OcodeInfoWrapperEoTD( OpCodeInfoEoTD & inf ):info(std::addressof(inf)){}
    //    OcodeInfoWrapperEoTD( const OpCodeInfoEoTD * inf ):info(inf){}
    //    OcodeInfoWrapperEoTD( const OcodeInfoWrapperEoTD & cp ):info(cp.info){}
    //    OcodeInfoWrapperEoTD& operator=( const OcodeInfoWrapperEoTD & cp ){info=cp.info;}

    //    const std::string              & Name()const      { return info->name; }
    //    int8_t                           NbParams()const  { return info->nbparams; } 
    //    const std::vector<OpParamInfo> & ParamInfo()const { return info->paraminfo; }
    //                                     operator bool()const{ return info!=nullptr; }
    //    const OpCodeInfoEoTD * info;
    //};

    /*************************************************************************************
        OpCodesInfoListEoTD
            Contains info on every opcodes
    *************************************************************************************/
    extern const std::array<OpCodeInfoEoTD, static_cast<uint16_t>(eScriptOpCodesEoTD::NBOpcodes)>  OpCodesInfoListEoTD;
    //extern const std::array<std::vector<OpParamInfo>,    static_cast<uint16_t>(eScriptOpCodesEoTD::NBOpcodes)>  OpCodeParamInfoListEoTD;

    /*************************************************************************************
        FindOpCodeInfo_EoTD
            Return the opcode info from the opcode info table, for the opcode specified.
            Returns null if the opcode is out of range!
    *************************************************************************************/
    inline const OpCodeInfoEoTD * FindOpCodeInfo_EoTD( uint16_t opcode )
    {
        if( opcode < OpCodesInfoListEoTD.size() )
            return &(OpCodesInfoListEoTD[opcode]);
        else
            return nullptr;
    }

    inline const OpCodeInfoEoTD * FindOpCodeInfo_EoTD( eScriptOpCodesEoTD opcode )
    {
        return FindOpCodeInfo_EoTD( static_cast<uint16_t>(opcode) );
    }

    inline eScriptOpCodesEoTD FindOpCodeByName_EoTD( const std::string & name, size_t nbparams )
    {
        for( size_t i = 0; i < OpCodesInfoListEoTD.size(); ++i )
        {
            if( OpCodesInfoListEoTD[i].name == name && OpCodesInfoListEoTD[i].nbparams == nbparams )
                return static_cast<eScriptOpCodesEoTD>(i);
        }
        return eScriptOpCodesEoTD::INVALID;
    }

    inline size_t GetNbOpCodes_EoTD()
    {
        return OpCodesInfoListEoTD.size();
    }

    /*************************************************************************************
        IntToOpCodeEoTD
            Turns an integer to a a opcode for EoTD
    *************************************************************************************/
    inline eScriptOpCodesEoTD IntToOpCodeEoTD( uint16_t opcodeval )
    {
        if( opcodeval < static_cast<uint16_t>(eScriptOpCodesEoTD::NBOpcodes) )
            return static_cast<eScriptOpCodesEoTD>(opcodeval);
        else
            return eScriptOpCodesEoTD::INVALID;
    }

//==========================================================================================================
//  EoS OpCode Data
//==========================================================================================================
    /*************************************************************************************
        OpCodeInfoEoS
            Structure for holding info on individual opcodes.
    **************************************************************************************/
    struct OpCodeInfoEoS
    {
        std::string         name;
        int8_t              nbparams;
        int8_t              unk1;
        int8_t              unk2;
        int8_t              unk3;
        eCommandCat         cat;       //Category  the instruction fits in
        std::vector<OpParamInfo> paraminfo; //Info on each parameters the opcode takes
        
    };

    //struct OcodeInfoWrapperEoS : public BaseOpCodeInfoWrapper
    //{
    //    //OcodeInfoWrapperEoS():info(nullptr) {}
    //    //OcodeInfoWrapperEoS( OpCodeInfoEoS & inf ):info(std::addressof(inf)){}
    //    OcodeInfoWrapperEoS( OpCodeInfoEoS & inf ):info(inf){}
    //    //OcodeInfoWrapperEoS( const OpCodeInfoEoS * inf ):info(inf){}
    //    OcodeInfoWrapperEoS( const OcodeInfoWrapperEoS & cp ):info(cp.info){}
    //    OcodeInfoWrapperEoS& operator=( const OcodeInfoWrapperEoS & cp ){info=cp.info;}

    //    const std::string              & Name()const      { return info.name; }
    //    int8_t                           NbParams()const  { return info.nbparams; } 
    //    const std::vector<OpParamInfo> & ParamInfo()const { return info.paraminfo; }

    //    //const OpCodeInfoEoS * info;
    //    OpCodeInfoEoS info;
    //};

    /*************************************************************************************
        OpCodesInfoListEoS
            Contains info on every opcodes
    *************************************************************************************/
    extern const std::array<OpCodeInfoEoS, static_cast<uint16_t>(eScriptOpCodesEoS::NBOpcodes)> OpCodesInfoListEoS;
    //extern const std::array<std::vector<OpParamInfo>,   static_cast<uint16_t>(eScriptOpCodesEoS::NBOpcodes)> OpCodeParamInfoListEoS;
    
    /*************************************************************************************
        FindOpCodeInfo_EoS
            Return the opcode info from the opcode info table, for the opcode specified.
            Returns null if the opcode is out of range!
    *************************************************************************************/
    inline const OpCodeInfoEoS * FindOpCodeInfo_EoS( uint16_t opcode )
    {
        if( opcode < OpCodesInfoListEoS.size() )
            return &(OpCodesInfoListEoS[opcode]);
        else
            return nullptr;
    }

    inline const OpCodeInfoEoS * FindOpCodeInfo_EoS( eScriptOpCodesEoS opcode )
    {
        return FindOpCodeInfo_EoS( static_cast<uint16_t>(opcode) );
    }

    inline eScriptOpCodesEoS FindOpCodeByName_EoS( const std::string & name, size_t nbparams )
    {
        size_t foundmultiparam = 0;
        for( size_t i = 0; i < OpCodesInfoListEoS.size(); ++i )
        {
            if( OpCodesInfoListEoS[i].name == name )
            {
                if( OpCodesInfoListEoS[i].nbparams == nbparams )
                    return static_cast<eScriptOpCodesEoS>(i);   //Exact match, return
                else if( OpCodesInfoListEoS[i].nbparams == -1 )
                    foundmultiparam = i;                        //Mark any command that matched with -1 parameters for later
            }
        }
        //Return the -1 parameter that matched the name if we didn't find an exact match
        if( foundmultiparam != 0 )
            return static_cast<eScriptOpCodesEoS>(foundmultiparam);
        else
            return eScriptOpCodesEoS::INVALID;
    }

    inline size_t GetNbOpCodes_EoS()
    {
        return OpCodesInfoListEoS.size();
    }

    /*************************************************************************************
        IntToOpCodeEoS
            Turns an integer to a a opcode for EoS
    *************************************************************************************/
    inline eScriptOpCodesEoS IntToOpCodeEoS( uint16_t opcodeval )
    {
        if( opcodeval < static_cast<uint16_t>(eScriptOpCodesEoS::NBOpcodes) )
            return static_cast<eScriptOpCodesEoS>(opcodeval);
        else
            return eScriptOpCodesEoS::INVALID;
    }

//=====================================================================================
//  Utilities
//=====================================================================================


    /*************************************************************************************
        OpCodeInfoWrapper
            Wrapper to abstract parameter info between versions of the game.

            **Its reasonable, since we'd make pointers to those anyways when using**
            **the opcode info to abstract between versions. 3 integers for 3 integers**
            **is the same thing.**
    *************************************************************************************/
    struct OpCodeInfoWrapper
    {
        OpCodeInfoWrapper()
            :pname(nullptr), nbparams(0), pparaminfo(nullptr), category(eCommandCat::Invalid)
        {}

        OpCodeInfoWrapper(const OpCodeInfoEoS & inf)        {this->operator=(inf);}
        OpCodeInfoWrapper(const OpCodeInfoEoS * inf)        {this->operator=(inf);}
        OpCodeInfoWrapper(const OpCodeInfoEoTD & inf)       {this->operator=(inf);}
        OpCodeInfoWrapper(const OpCodeInfoEoTD * inf)       {this->operator=(inf);}
        OpCodeInfoWrapper(const OpCodeInfoWrapper & cp )    {this->operator=(cp); }

        OpCodeInfoWrapper & operator=( const OpCodeInfoWrapper & cp ) 
        {
            pname      = cp.pname;
            nbparams   = cp.nbparams;
            pparaminfo = cp.pparaminfo;
            category   = cp.category;
            return *this;
        }

        OpCodeInfoWrapper & operator=( const OpCodeInfoEoS * inf ) 
        {
            if( inf != nullptr )
            {
                pname      = std::addressof(inf->name); 
                nbparams   = inf->nbparams; 
                pparaminfo = std::addressof(inf->paraminfo);
                category   = inf->cat;
            }
            else
            {
                pname      = nullptr;
                nbparams   = 0;
                pparaminfo = nullptr;
                category   = eCommandCat::Invalid;
            }
            return *this;
        }

        OpCodeInfoWrapper & operator=( const OpCodeInfoEoTD * inf ) 
        {
            if( inf != nullptr )
            {
                pname      = std::addressof(inf->name); 
                nbparams   = inf->nbparams; 
                pparaminfo = std::addressof(inf->paraminfo);
                category   = inf->cat;
            }
            else
            {
                pname      = nullptr;
                nbparams   = 0;
                pparaminfo = nullptr;
                category   = eCommandCat::Invalid;
            }
            return *this;
        }

        const std::string              & Name     ()const { return *pname;}
        int8_t                           NbParams ()const { return nbparams;}
        const std::vector<OpParamInfo> & ParamInfo()const { return *pparaminfo;}
        eCommandCat                      Category ()const { return category; }
        eInstructionType                 GetMyInstructionType()const 
        {
            switch(Category())
            {
                case eCommandCat::EntityAccessor:
                {
                    return eInstructionType::MetaAccessor;
                }
                case eCommandCat::Switch:
                {
                    return eInstructionType::MetaSwitch;
                }
                case eCommandCat::ProcSpec:
                {
                    return eInstructionType::MetaProcSpecRet;
                }
                case eCommandCat::OpWithReturnVal:
                case eCommandCat::EnterAdventure:
                {
                    return eInstructionType::MetaReturnCases;
                }
                default:
                {
                    return eInstructionType::Command;
                }
            };
        }
        operator bool()const {return pname!= nullptr && pparaminfo != nullptr;}

        const std::string              * pname;
        uint8_t                          nbparams;
        eCommandCat                      category;
        const std::vector<OpParamInfo> * pparaminfo;
    };



    /*************************************************************************************
        OpCodeFinderPicker
            Picks the correct OpCode info search function 
            depending on the opcode version.
    *************************************************************************************/
    template<eOpCodeVersion>
        struct OpCodeFinderPicker;

    template<>
        struct OpCodeFinderPicker<eOpCodeVersion::EoS>
    {
        typedef eScriptOpCodesEoS opcode_t;
        //typedef OpCodeInfoEoS*     opcodeinfo_t;
        typedef OpCodeInfoWrapper opcodeinfo_t;
        inline const opcodeinfo_t   operator()( uint16_t opcode )const                             { return FindOpCodeInfo_EoS(opcode); }
        inline const opcodeinfo_t   operator()( opcode_t opcode )const                             { return FindOpCodeInfo_EoS(opcode); }
        inline const opcode_t       operator()( const std::string & opcode, size_t nbparams )const { return FindOpCodeByName_EoS(opcode,nbparams); }
    };

    template<>
        struct OpCodeFinderPicker<eOpCodeVersion::EoTD>
    {
        typedef eScriptOpCodesEoTD opcode_t;
        //typedef OpCodeInfoEoTD *    opcodeinfo_t;
        typedef OpCodeInfoWrapper  opcodeinfo_t;
        inline const opcodeinfo_t   operator()( uint16_t opcode )const                             { return FindOpCodeInfo_EoTD(opcode); }
        inline const opcodeinfo_t   operator()( opcode_t opcode )const                             { return FindOpCodeInfo_EoTD(opcode); }
        inline const opcode_t       operator()( const std::string & opcode, size_t nbparams )const { return FindOpCodeByName_EoTD(opcode,nbparams); }
    };


    /*************************************************************************************
        OpCodeNumberPicker
            Get the appriopriate total number of instructions for a given game version
    *************************************************************************************/
    template<eOpCodeVersion>
        struct OpCodeNumberPicker;

    template<>
        struct OpCodeNumberPicker<eOpCodeVersion::EoS>
    {
        inline size_t operator()()const { return GetNbOpCodes_EoS(); }
    };

    template<>
        struct OpCodeNumberPicker<eOpCodeVersion::EoTD>
    {
        inline size_t operator()()const { return GetNbOpCodes_EoTD(); }
    };


    /*************************************************************************************
        OpCodeClassifier
    *************************************************************************************/
    class OpCodeClassifier
    {
    public:
        OpCodeClassifier(eOpCodeVersion ver)
            :m_ver(ver)
        {}

        /*
            Info
                Return info on the specified instruction, wrapped in a OpCodeInfoWrapper.
                If it doesn't find any info, the state of the OpCodeInfoWrapper, will be invalid!
        */
        OpCodeInfoWrapper Info(uint16_t code)
        {
            if(m_ver == eOpCodeVersion::EoS)
                return FindOpCodeInfo_EoS(code);
            else if(m_ver == eOpCodeVersion::EoTD)
                return FindOpCodeInfo_EoTD(code);
            else
            {
                assert(false);
                return OpCodeInfoWrapper();
            }
        }

        /*
            Code
                For a number of parameters, and a given instruction name, 
                return the corresponding code/instruction id.
                Returns "InvalidOpCode" if the instruction can't
                be found!
        */
        uint16_t Code(const std::string & instname, size_t nbparams)
        {
            if(m_ver == eOpCodeVersion::EoS)
                return static_cast<uint16_t>(FindOpCodeByName_EoS(instname,nbparams));
            else if(m_ver == eOpCodeVersion::EoTD)
                return static_cast<uint16_t>(FindOpCodeByName_EoTD(instname,nbparams));
            else
            {
                assert(false);
                return InvalidOpCode;
            }
        }

        /*************************************************************************************
            CalcInstructionLen
                Calculate the length of an instruction as raw bytes.
                Returns 0 if the command's instruction id is invalid!
        *************************************************************************************/
        inline size_t CalcInstructionLen( const ScriptInstruction & instr)
        {
            OpCodeInfoWrapper oinfo = Info(instr.value);
            if(!oinfo)
                return 0;

            if( oinfo.NbParams() == -1 )
                return ScriptWordLen + (instr.parameters.size() * ScriptWordLen) + ScriptWordLen; // -1 instructions have an extra word for the nb of instructions!
            else
                return ScriptWordLen + (instr.parameters.size() * ScriptWordLen);
        }

        /*
            GetNbOpcodes
                Returns the nb of total instructions for the current game version!
        */
        inline size_t GetNbOpcodes()const 
        {
            if(m_ver == eOpCodeVersion::EoS)
                return GetNbOpCodes_EoS();
            else if(m_ver == eOpCodeVersion::EoTD)
                return GetNbOpCodes_EoTD();
            else
            {
                assert(false);
                return 0;
            }
        }

    private:
        eOpCodeVersion m_ver;
    };

    /*************************************************************************************
        IsOpCodeData
            Whether the uint16 read is actually a data word, and not a opcode.
    *************************************************************************************/
    bool IsOpCodeData( uint16_t code, eGameVersion vers );

    inline eOpCodeVersion GameVersionToOpCodeVersion( eGameVersion ver )
    {
        if( ver == eGameVersion::EoD || ver == eGameVersion::EoT )
            return eOpCodeVersion::EoTD;
        else if( ver == eGameVersion::EoS )
            return eOpCodeVersion::EoS;
        else 
            return eOpCodeVersion::Invalid;
    }



};

#endif
