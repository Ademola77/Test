#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
190,
197,
198,
199,
200,
201,
202,
203,
204,
205,
208,
209,
371,
372,
374,
403,
404,
405,
425,
426,
427,
428,
429,
520,
521,
522,
525,
567,
568,
569,
572,
574,
576,
578,
583,
591,
592,
593,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
611,
612,
613,
614,
615,
616,
617,
618,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
725,
726,
727,
728,
729,
730,
731,
732,
733,
734,
735,
736,
737,
738,
874,
875,
883,
886,
888,
894,
895,
897,
898,
902,
904,
906,
907,
908,
909,
911,
912,
913,
916,
917,
920,
921,
922,
997,
998,
1000,
1008,
1009,
1010,
1011,
1012,
1016,
1017,
1018,
1019,
1020,
1021,
1023,
1024,
1025,
1027,
1028,
1030,
1034,
1035,
1036,
1309,
1529,
1530,
7806,
7807,
7809,
7810,
7811,
7812,
7813,
7814,
7816,
7818,
7820,
7821,
7822,
7830,
7832,
7836,
7837,
7839,
7841,
7843,
7855,
7864,
7865,
7867,
7868,
7869,
7870,
7871,
7873,
7875,
8907,
8911,
8913,
8914,
8915,
8916,
8977,
8978,
8979,
8980,
9001,
9002,
9003,
9004,
9006,
9008,
9049,
9100,
9103,
9113,
9114,
9115,
9116,
9524,
9525,
9530,
9531,
9583,
9584,
9585,
9612,
9618,
9625,
9635,
9639,
9732,
9742,
9743,
9756,
9757,
9758,
9759,
9760,
9761,
9762,
9769,
9785,
9806,
9807,
9816,
9818,
9825,
9826,
9829,
9831,
9836,
9842,
9843,
9850,
9852,
9862,
9865,
9866,
9867,
9878,
9890,
9896,
9897,
9898,
9900,
9901,
9911,
9930,
9952,
9953,
9954,
9955,
9956,
9973,
9980,
10011,
10012,
10530,
10531,
10532,
10615,
10696,
10959,
10960,
10969,
10970,
10971,
10977,
11055,
11230,
11231,
11909,
13165,
13184,
13191,
13192,
13194,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 190,
ves_icall_System_Array_InternalCreate,
// token 197,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 198,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 199,
ves_icall_System_Array_CanChangePrimitive,
// token 200,
ves_icall_System_Array_FastCopy_raw,
// token 201,
ves_icall_System_Array_GetLength_raw,
// token 202,
ves_icall_System_Array_GetLowerBound_raw,
// token 203,
ves_icall_System_Array_GetGenericValue_icall,
// token 204,
ves_icall_System_Array_GetValueImpl_raw,
// token 205,
ves_icall_System_Array_SetGenericValue_icall,
// token 208,
ves_icall_System_Array_SetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 371,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 372,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 374,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 403,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 404,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 405,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 425,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 426,
ves_icall_System_Enum_ToObject_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 428,
ves_icall_System_Enum_get_underlying_type_raw,
// token 429,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 520,
ves_icall_System_Environment_get_ProcessorCount,
// token 521,
ves_icall_System_Environment_get_TickCount,
// token 522,
ves_icall_System_Environment_get_TickCount64,
// token 525,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_GetCollectionCount,
// token 568,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 569,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 572,
ves_icall_System_GC_SuppressFinalize_raw,
// token 574,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 576,
ves_icall_System_GC_GetGCMemoryInfo,
// token 578,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 583,
ves_icall_System_Object_MemberwiseClone_raw,
// token 591,
ves_icall_System_Math_Abs_double,
// token 592,
ves_icall_System_Math_Abs_single,
// token 593,
ves_icall_System_Math_Acos,
// token 594,
ves_icall_System_Math_Acosh,
// token 595,
ves_icall_System_Math_Asin,
// token 596,
ves_icall_System_Math_Asinh,
// token 597,
ves_icall_System_Math_Atan,
// token 598,
ves_icall_System_Math_Atan2,
// token 599,
ves_icall_System_Math_Atanh,
// token 600,
ves_icall_System_Math_Cbrt,
// token 601,
ves_icall_System_Math_Ceiling,
// token 602,
ves_icall_System_Math_Cos,
// token 603,
ves_icall_System_Math_Cosh,
// token 604,
ves_icall_System_Math_Exp,
// token 605,
ves_icall_System_Math_Floor,
// token 606,
ves_icall_System_Math_Log,
// token 607,
ves_icall_System_Math_Log10,
// token 608,
ves_icall_System_Math_Pow,
// token 609,
ves_icall_System_Math_Sin,
// token 611,
ves_icall_System_Math_Sinh,
// token 612,
ves_icall_System_Math_Sqrt,
// token 613,
ves_icall_System_Math_Tan,
// token 614,
ves_icall_System_Math_Tanh,
// token 615,
ves_icall_System_Math_FusedMultiplyAdd,
// token 616,
ves_icall_System_Math_ILogB,
// token 617,
ves_icall_System_Math_Log2,
// token 618,
ves_icall_System_Math_ModF,
// token 714,
ves_icall_System_MathF_Acos,
// token 715,
ves_icall_System_MathF_Acosh,
// token 716,
ves_icall_System_MathF_Asin,
// token 717,
ves_icall_System_MathF_Asinh,
// token 718,
ves_icall_System_MathF_Atan,
// token 719,
ves_icall_System_MathF_Atan2,
// token 720,
ves_icall_System_MathF_Atanh,
// token 721,
ves_icall_System_MathF_Cbrt,
// token 722,
ves_icall_System_MathF_Ceiling,
// token 723,
ves_icall_System_MathF_Cos,
// token 724,
ves_icall_System_MathF_Cosh,
// token 725,
ves_icall_System_MathF_Exp,
// token 726,
ves_icall_System_MathF_Floor,
// token 727,
ves_icall_System_MathF_Log,
// token 728,
ves_icall_System_MathF_Log10,
// token 729,
ves_icall_System_MathF_Pow,
// token 730,
ves_icall_System_MathF_Sin,
// token 731,
ves_icall_System_MathF_Sinh,
// token 732,
ves_icall_System_MathF_Sqrt,
// token 733,
ves_icall_System_MathF_Tan,
// token 734,
ves_icall_System_MathF_Tanh,
// token 735,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 736,
ves_icall_System_MathF_ILogB,
// token 737,
ves_icall_System_MathF_Log2,
// token 738,
ves_icall_System_MathF_ModF,
// token 874,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 875,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 883,
ves_icall_RuntimeType_make_array_type_raw,
// token 886,
ves_icall_RuntimeType_make_byref_type_raw,
// token 888,
ves_icall_RuntimeType_MakePointerType_raw,
// token 894,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 895,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 897,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 898,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 902,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 904,
ves_icall_RuntimeType_GetPacking_raw,
// token 906,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 907,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 908,
ves_icall_System_RuntimeType_getFullName_raw,
// token 909,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 911,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 912,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 913,
ves_icall_RuntimeType_GetFields_native_raw,
// token 916,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 917,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 920,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 921,
ves_icall_RuntimeType_get_Name_raw,
// token 922,
ves_icall_RuntimeType_get_Namespace_raw,
// token 997,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 998,
ves_icall_reflection_get_token_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1008,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1009,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1010,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1016,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1017,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1018,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1019,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1020,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1021,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1023,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1024,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1025,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1027,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1028,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1030,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1034,
ves_icall_System_String_FastAllocateString_raw,
// token 1035,
ves_icall_System_String_InternalIsInterned_raw,
// token 1036,
ves_icall_System_String_InternalIntern_raw,
// token 1309,
ves_icall_System_Type_internal_from_handle_raw,
// token 1529,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1530,
ves_icall_System_ValueType_Equals_raw,
// token 7806,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7807,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7809,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7810,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 7811,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7812,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7813,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7814,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7816,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7818,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7820,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 7821,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7822,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7830,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7832,
mono_monitor_exit_icall_raw,
// token 7836,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 7837,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7839,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7841,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7843,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7855,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 7864,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7865,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7867,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7868,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7869,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7870,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7871,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7873,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7875,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8907,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8911,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8913,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8914,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8915,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8916,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8977,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8978,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8979,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8980,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9001,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9002,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9003,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9004,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9006,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 9008,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9049,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9100,
mono_object_hash_icall_raw,
// token 9103,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9113,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9114,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9115,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9116,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9524,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9525,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9530,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9531,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9583,
mono_digest_get_public_token,
// token 9584,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9585,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9612,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9618,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9625,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9635,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9639,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9732,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 9742,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9743,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9756,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9757,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9758,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9759,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 9760,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9761,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9762,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9769,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9785,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9806,
ves_icall_reflection_get_token_raw,
// token 9807,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9816,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9818,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9825,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9826,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9829,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9831,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9836,
ves_icall_reflection_get_token_raw,
// token 9842,
ves_icall_get_method_info_raw,
// token 9843,
ves_icall_get_method_attributes,
// token 9850,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9852,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9862,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9865,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9866,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9867,
ves_icall_reflection_get_token_raw,
// token 9878,
ves_icall_InternalInvoke_raw,
// token 9890,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9896,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9897,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9898,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9900,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9901,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9911,
ves_icall_InternalInvoke_raw,
// token 9930,
ves_icall_reflection_get_token_raw,
// token 9952,
ves_icall_reflection_get_token_raw,
// token 9953,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 9954,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9955,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 9956,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9973,
ves_icall_reflection_get_token_raw,
// token 9980,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10011,
ves_icall_reflection_get_token_raw,
// token 10012,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10530,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 10531,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10532,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10615,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10696,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10959,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10960,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10969,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10970,
ves_icall_ModuleBuilder_getToken_raw,
// token 10971,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10977,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11055,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11230,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11231,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11909,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13165,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13184,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13191,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13192,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13194,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
