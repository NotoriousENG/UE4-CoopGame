// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameState() {}
// Cross Module References
	COOPGAME_API UEnum* Z_Construct_UEnum_CoopGame_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
	static UEnum* EWaveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopGame_EWaveState, Z_Construct_UPackage__Script_CoopGame(), TEXT("EWaveState"));
		}
		return Singleton;
	}
	template<> COOPGAME_API UEnum* StaticEnum<EWaveState>()
	{
		return EWaveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CoopGame"), TEXT("EWaveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash() { return 1260012954U; }
	UEnum* Z_Construct_UEnum_CoopGame_EWaveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CoopGame_EWaveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveState::WaitingToStart", (int64)EWaveState::WaitingToStart },
				{ "EWaveState::WaveInProgress", (int64)EWaveState::WaveInProgress },
				{ "EWaveState::WaitingToComplete", (int64)EWaveState::WaitingToComplete },
				{ "EWaveState::WaveComplete", (int64)EWaveState::WaveComplete },
				{ "EWaveState::GameOver", (int64)EWaveState::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameOver.Name", "EWaveState::GameOver" },
				{ "ModuleRelativePath", "Public/SGameState.h" },
				{ "WaitingToComplete.Comment", "// No longer spawning new bots, waiting for players to kill remaining bots\n" },
				{ "WaitingToComplete.Name", "EWaveState::WaitingToComplete" },
				{ "WaitingToComplete.ToolTip", "No longer spawning new bots, waiting for players to kill remaining bots" },
				{ "WaitingToStart.Name", "EWaveState::WaitingToStart" },
				{ "WaveComplete.Name", "EWaveState::WaveComplete" },
				{ "WaveInProgress.Name", "EWaveState::WaveInProgress" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopGame,
				nullptr,
				"EWaveState",
				"EWaveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASGameState::execOnRep_WaveState)
	{
		P_GET_ENUM(EWaveState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState));
		P_NATIVE_END;
	}
	static FName NAME_ASGameState_WaveStateChanged = FName(TEXT("WaveStateChanged"));
	void ASGameState::WaveStateChanged(EWaveState NewState, EWaveState OldState)
	{
		SGameState_eventWaveStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_ASGameState_WaveStateChanged),&Parms);
	}
	void ASGameState::StaticRegisterNativesASGameState()
	{
		UClass* Class = ASGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WaveState", &ASGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics
	{
		struct SGameState_eventOnRep_WaveState_Parms
		{
			EWaveState OldState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventOnRep_WaveState_Parms, OldState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "OnRep_WaveState", nullptr, nullptr, sizeof(SGameState_eventOnRep_WaveState_Parms), Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_OnRep_WaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_OnRep_WaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventWaveStateChanged_Parms, OldState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventWaveStateChanged_Parms, NewState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "WaveStateChanged", nullptr, nullptr, sizeof(SGameState_eventWaveStateChanged_Parms), Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_WaveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_WaveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameState_NoRegister()
	{
		return ASGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaveState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaveState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameState_OnRep_WaveState, "OnRep_WaveState" }, // 2649716769
		{ &Z_Construct_UFunction_ASGameState_WaveStateChanged, "WaveStateChanged" }, // 2518559384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameState.h" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState = { "WaveState", "OnRep_WaveState", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, WaveState), Z_Construct_UEnum_CoopGame_EWaveState, METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_WaveState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameState_Statics::ClassParams = {
		&ASGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameState, 1983389805);
	template<> COOPGAME_API UClass* StaticClass<ASGameState>()
	{
		return ASGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameState(Z_Construct_UClass_ASGameState, &ASGameState::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameState"), false, nullptr, nullptr, nullptr);

	void ASGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WaveState(TEXT("WaveState"));

		const bool bIsValid = true
			&& Name_WaveState == ClassReps[(int32)ENetFields_Private::WaveState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
