// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_SExplosive_generated_h
#error "SExplosive.generated.h already included, missing '#pragma once' in SExplosive.h"
#endif
#define COOPGAME_SExplosive_generated_h

#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_SPARSE_DATA
#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosive(); \
	friend struct Z_Construct_UClass_ASExplosive_Statics; \
public: \
	DECLARE_CLASS(ASExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosive) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASExplosive(); \
	friend struct Z_Construct_UClass_ASExplosive_Statics; \
public: \
	DECLARE_CLASS(ASExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosive) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosive(ASExplosive&&); \
	NO_API ASExplosive(const ASExplosive&); \
public:


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosive(ASExplosive&&); \
	NO_API ASExplosive(const ASExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosive)


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExplosive, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ExplodedMaterial() { return STRUCT_OFFSET(ASExplosive, ExplodedMaterial); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASExplosive, HealthComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASExplosive, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(ASExplosive, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(ASExplosive, ExplosionImpulse); } \
	FORCEINLINE static uint32 __PPO__bExploded() { return STRUCT_OFFSET(ASExplosive, bExploded); }


#define CoopGame_Source_CoopGame_Public_SExplosive_h_11_PROLOG
#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_INCLASS \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SExplosive_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_SPARSE_DATA \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SExplosive_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SExplosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
