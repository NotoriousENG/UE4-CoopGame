// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameMode() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
// End Cross Module References
	static FName NAME_ASGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ASGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASGameMode_SpawnNewBot),NULL);
	}
	void ASGameMode::StaticRegisterNativesASGameMode()
	{
	}
	struct Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "Comment", "// Hook for BP to spawn a single bot\n" },
		{ "ModuleRelativePath", "Public/SGameMode.h" },
		{ "ToolTip", "Hook for BP to spawn a single bot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameMode, nullptr, "SpawnNewBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameMode_NoRegister()
	{
		return ASGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameMode_SpawnNewBot, "SpawnNewBot" }, // 871665763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameMode.h" },
		{ "ModuleRelativePath", "Public/SGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameMode_Statics::NewProp_TimeBetweenWaves_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/SGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameMode_Statics::NewProp_TimeBetweenWaves = { "TimeBetweenWaves", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameMode, TimeBetweenWaves), METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::NewProp_TimeBetweenWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::NewProp_TimeBetweenWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameMode_Statics::NewProp_TimeBetweenWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameMode_Statics::ClassParams = {
		&ASGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameMode, 2913856542);
	template<> COOPGAME_API UClass* StaticClass<ASGameMode>()
	{
		return ASGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameMode(Z_Construct_UClass_ASGameMode, &ASGameMode::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
