// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BlueprintCore.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UBlueprintCore::StaticRegisterNativesUBlueprintCore()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCore_NoRegister()
	{
		return UBlueprintCore::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonGeneratedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkeletonGeneratedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[];
#endif
		static void NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyNeedToPurgeSkelRefs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintCore.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData[] = {
		{ "Comment", "/** Pointer to the skeleton class; this is regenerated any time a member variable or function is added but  \n\x09is usually incomplete (no code or hidden autogenerated variables are added to it) */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the skeleton class; this is regenerated any time a member variable or function is added but\n      is usually incomplete (no code or hidden autogenerated variables are added to it)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass = { "SkeletonGeneratedClass", nullptr, (EPropertyFlags)0x0014000400002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCore, SkeletonGeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData[] = {
		{ "Comment", "/** Pointer to the 'most recent' fully generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the 'most recent' fully generated class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass = { "GeneratedClass", nullptr, (EPropertyFlags)0x0014000400000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCore, GeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[] = {
		{ "Comment", "/** BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load  */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj)
	{
		((UBlueprintCore*)Obj)->bLegacyNeedToPurgeSkelRefs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs = { "bLegacyNeedToPurgeSkelRefs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintCore), &Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData[] = {
		{ "Comment", "/** Blueprint Guid */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Blueprint Guid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid = { "BlueprintGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintCore, BlueprintGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCore_Statics::ClassParams = {
		&UBlueprintCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintCore, 1997697205);
	template<> ENGINE_API UClass* StaticClass<UBlueprintCore>()
	{
		return UBlueprintCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCore(Z_Construct_UClass_UBlueprintCore, &UBlueprintCore::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCore);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCore)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
