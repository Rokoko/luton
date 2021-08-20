// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProp;
struct FRotator;
struct FVector;
class ASmartsuitController;
#ifdef SMARTSUIT_SmartsuitBlueprintLibrary_generated_h
#error "SmartsuitBlueprintLibrary.generated.h already included, missing '#pragma once' in SmartsuitBlueprintLibrary.h"
#endif
#define SMARTSUIT_SmartsuitBlueprintLibrary_generated_h

#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPropRotation); \
	DECLARE_FUNCTION(execGetPropLocation); \
	DECLARE_FUNCTION(execCreateVirtualProductionSource); \
	DECLARE_FUNCTION(execJSONTest); \
	DECLARE_FUNCTION(execGetSmartsuitController); \
	DECLARE_FUNCTION(execGetSmartsuitControllerByName);


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPropRotation); \
	DECLARE_FUNCTION(execGetPropLocation); \
	DECLARE_FUNCTION(execCreateVirtualProductionSource); \
	DECLARE_FUNCTION(execJSONTest); \
	DECLARE_FUNCTION(execGetSmartsuitController); \
	DECLARE_FUNCTION(execGetSmartsuitControllerByName);


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartsuitBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartsuitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(USmartsuitBlueprintLibrary)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSmartsuitBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartsuitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(USmartsuitBlueprintLibrary)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartsuitBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartsuitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartsuitBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartsuitBlueprintLibrary(USmartsuitBlueprintLibrary&&); \
	NO_API USmartsuitBlueprintLibrary(const USmartsuitBlueprintLibrary&); \
public:


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartsuitBlueprintLibrary(USmartsuitBlueprintLibrary&&); \
	NO_API USmartsuitBlueprintLibrary(const USmartsuitBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartsuitBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartsuitBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartsuitBlueprintLibrary)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_22_PROLOG
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_SPARSE_DATA \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class USmartsuitBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
