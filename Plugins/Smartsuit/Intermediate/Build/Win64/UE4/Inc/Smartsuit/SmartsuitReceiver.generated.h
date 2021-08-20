// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FQuat;
struct FRotator;
struct FTracker;
struct FProp;
struct FSuitData;
struct FFace;
#ifdef SMARTSUIT_SmartsuitReceiver_generated_h
#error "SmartsuitReceiver.generated.h already included, missing '#pragma once' in SmartsuitReceiver.h"
#endif
#define SMARTSUIT_SmartsuitReceiver_generated_h

#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUPosition); \
	DECLARE_FUNCTION(execFQuatToRotator); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetProp); \
	DECLARE_FUNCTION(execGetAllProps); \
	DECLARE_FUNCTION(execGetTrackerByConnectionIDFromVP); \
	DECLARE_FUNCTION(execGetAllSmartsuits); \
	DECLARE_FUNCTION(execGetAvailableSmartsuitNames); \
	DECLARE_FUNCTION(execGetSmartsuitByName); \
	DECLARE_FUNCTION(execGetFacesNotAssociatedWithActor); \
	DECLARE_FUNCTION(execGetAllFaces); \
	DECLARE_FUNCTION(execGetFaceByProfileName); \
	DECLARE_FUNCTION(execGetFaceByFaceID); \
	DECLARE_FUNCTION(execStopListener); \
	DECLARE_FUNCTION(execStartListener);


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUPosition); \
	DECLARE_FUNCTION(execFQuatToRotator); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetProp); \
	DECLARE_FUNCTION(execGetAllProps); \
	DECLARE_FUNCTION(execGetTrackerByConnectionIDFromVP); \
	DECLARE_FUNCTION(execGetAllSmartsuits); \
	DECLARE_FUNCTION(execGetAvailableSmartsuitNames); \
	DECLARE_FUNCTION(execGetSmartsuitByName); \
	DECLARE_FUNCTION(execGetFacesNotAssociatedWithActor); \
	DECLARE_FUNCTION(execGetAllFaces); \
	DECLARE_FUNCTION(execGetFaceByProfileName); \
	DECLARE_FUNCTION(execGetFaceByFaceID); \
	DECLARE_FUNCTION(execStopListener); \
	DECLARE_FUNCTION(execStartListener);


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARokokoReceiver(); \
	friend struct Z_Construct_UClass_ARokokoReceiver_Statics; \
public: \
	DECLARE_CLASS(ARokokoReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ARokokoReceiver)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesARokokoReceiver(); \
	friend struct Z_Construct_UClass_ARokokoReceiver_Statics; \
public: \
	DECLARE_CLASS(ARokokoReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ARokokoReceiver)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARokokoReceiver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARokokoReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARokokoReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARokokoReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARokokoReceiver(ARokokoReceiver&&); \
	NO_API ARokokoReceiver(const ARokokoReceiver&); \
public:


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARokokoReceiver(ARokokoReceiver&&); \
	NO_API ARokokoReceiver(const ARokokoReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARokokoReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARokokoReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARokokoReceiver)


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_17_PROLOG
#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_SPARSE_DATA \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ARokokoReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
