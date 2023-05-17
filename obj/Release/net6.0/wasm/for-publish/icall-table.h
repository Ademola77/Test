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
569,
570,
571,
574,
576,
578,
580,
585,
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
610,
611,
613,
614,
615,
616,
617,
618,
619,
620,
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
739,
740,
876,
877,
885,
888,
890,
896,
897,
899,
900,
904,
906,
908,
909,
910,
911,
913,
914,
915,
918,
919,
922,
923,
924,
999,
1000,
1002,
1010,
1011,
1012,
1013,
1014,
1018,
1019,
1020,
1021,
1022,
1023,
1025,
1026,
1027,
1029,
1030,
1032,
1036,
1037,
1038,
1311,
1531,
1532,
7809,
7810,
7812,
7813,
7814,
7815,
7816,
7817,
7819,
7821,
7823,
7824,
7825,
7833,
7835,
7839,
7840,
7842,
7844,
7846,
7858,
7867,
7868,
7870,
7871,
7872,
7873,
7874,
7876,
7878,
8910,
8914,
8916,
8917,
8918,
8919,
8980,
8981,
8982,
8983,
9004,
9005,
9006,
9007,
9009,
9011,
9052,
9103,
9106,
9116,
9117,
9118,
9119,
9527,
9528,
9533,
9534,
9586,
9587,
9588,
9615,
9621,
9628,
9638,
9642,
9735,
9745,
9746,
9759,
9760,
9761,
9762,
9763,
9764,
9765,
9772,
9788,
9809,
9810,
9819,
9821,
9828,
9829,
9832,
9834,
9839,
9845,
9846,
9853,
9855,
9865,
9868,
9869,
9870,
9881,
9893,
9899,
9900,
9901,
9903,
9904,
9914,
9933,
9955,
9956,
9957,
9958,
9959,
9976,
9983,
10014,
10015,
10533,
10534,
10535,
10618,
10699,
10962,
10963,
10972,
10973,
10974,
10980,
11058,
11233,
11234,
11927,
13183,
13202,
13209,
13210,
13212,
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
// token 569,
ves_icall_System_GC_GetCollectionCount,
// token 570,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 571,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 574,
ves_icall_System_GC_SuppressFinalize_raw,
// token 576,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 578,
ves_icall_System_GC_GetGCMemoryInfo,
// token 580,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 585,
ves_icall_System_Object_MemberwiseClone_raw,
// token 593,
ves_icall_System_Math_Abs_double,
// token 594,
ves_icall_System_Math_Abs_single,
// token 595,
ves_icall_System_Math_Acos,
// token 596,
ves_icall_System_Math_Acosh,
// token 597,
ves_icall_System_Math_Asin,
// token 598,
ves_icall_System_Math_Asinh,
// token 599,
ves_icall_System_Math_Atan,
// token 600,
ves_icall_System_Math_Atan2,
// token 601,
ves_icall_System_Math_Atanh,
// token 602,
ves_icall_System_Math_Cbrt,
// token 603,
ves_icall_System_Math_Ceiling,
// token 604,
ves_icall_System_Math_Cos,
// token 605,
ves_icall_System_Math_Cosh,
// token 606,
ves_icall_System_Math_Exp,
// token 607,
ves_icall_System_Math_Floor,
// token 608,
ves_icall_System_Math_Log,
// token 609,
ves_icall_System_Math_Log10,
// token 610,
ves_icall_System_Math_Pow,
// token 611,
ves_icall_System_Math_Sin,
// token 613,
ves_icall_System_Math_Sinh,
// token 614,
ves_icall_System_Math_Sqrt,
// token 615,
ves_icall_System_Math_Tan,
// token 616,
ves_icall_System_Math_Tanh,
// token 617,
ves_icall_System_Math_FusedMultiplyAdd,
// token 618,
ves_icall_System_Math_ILogB,
// token 619,
ves_icall_System_Math_Log2,
// token 620,
ves_icall_System_Math_ModF,
// token 716,
ves_icall_System_MathF_Acos,
// token 717,
ves_icall_System_MathF_Acosh,
// token 718,
ves_icall_System_MathF_Asin,
// token 719,
ves_icall_System_MathF_Asinh,
// token 720,
ves_icall_System_MathF_Atan,
// token 721,
ves_icall_System_MathF_Atan2,
// token 722,
ves_icall_System_MathF_Atanh,
// token 723,
ves_icall_System_MathF_Cbrt,
// token 724,
ves_icall_System_MathF_Ceiling,
// token 725,
ves_icall_System_MathF_Cos,
// token 726,
ves_icall_System_MathF_Cosh,
// token 727,
ves_icall_System_MathF_Exp,
// token 728,
ves_icall_System_MathF_Floor,
// token 729,
ves_icall_System_MathF_Log,
// token 730,
ves_icall_System_MathF_Log10,
// token 731,
ves_icall_System_MathF_Pow,
// token 732,
ves_icall_System_MathF_Sin,
// token 733,
ves_icall_System_MathF_Sinh,
// token 734,
ves_icall_System_MathF_Sqrt,
// token 735,
ves_icall_System_MathF_Tan,
// token 736,
ves_icall_System_MathF_Tanh,
// token 737,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 738,
ves_icall_System_MathF_ILogB,
// token 739,
ves_icall_System_MathF_Log2,
// token 740,
ves_icall_System_MathF_ModF,
// token 876,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 877,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 885,
ves_icall_RuntimeType_make_array_type_raw,
// token 888,
ves_icall_RuntimeType_make_byref_type_raw,
// token 890,
ves_icall_RuntimeType_MakePointerType_raw,
// token 896,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 897,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 899,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 900,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 904,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 906,
ves_icall_RuntimeType_GetPacking_raw,
// token 908,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 909,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 910,
ves_icall_System_RuntimeType_getFullName_raw,
// token 911,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 913,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 914,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 915,
ves_icall_RuntimeType_GetFields_native_raw,
// token 918,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 919,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 922,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 923,
ves_icall_RuntimeType_get_Name_raw,
// token 924,
ves_icall_RuntimeType_get_Namespace_raw,
// token 999,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 1000,
ves_icall_reflection_get_token_raw,
// token 1002,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1010,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1013,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1014,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1018,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1019,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1020,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1021,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1022,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1023,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1025,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1026,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1027,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1029,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1030,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1032,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1036,
ves_icall_System_String_FastAllocateString_raw,
// token 1037,
ves_icall_System_String_InternalIsInterned_raw,
// token 1038,
ves_icall_System_String_InternalIntern_raw,
// token 1311,
ves_icall_System_Type_internal_from_handle_raw,
// token 1531,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1532,
ves_icall_System_ValueType_Equals_raw,
// token 7809,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7810,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7812,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7813,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 7814,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7815,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7816,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7817,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7819,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7821,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7823,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 7824,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7825,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7833,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7835,
mono_monitor_exit_icall_raw,
// token 7839,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 7840,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7842,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7844,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7846,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7858,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 7867,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7868,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7870,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7871,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7872,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7873,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7874,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7876,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7878,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8910,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8914,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8916,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8917,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8918,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8919,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8980,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8981,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8982,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8983,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9004,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9005,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9006,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9007,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9009,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 9011,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9052,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9103,
mono_object_hash_icall_raw,
// token 9106,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9116,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9117,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9118,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9119,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9527,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9528,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9533,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9534,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9586,
mono_digest_get_public_token,
// token 9587,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9588,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9615,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9621,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9628,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9638,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9642,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9735,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 9745,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9746,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9759,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9760,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9761,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9762,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 9763,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9764,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9765,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9772,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9788,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9809,
ves_icall_reflection_get_token_raw,
// token 9810,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9819,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9821,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9828,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9829,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9832,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9834,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9839,
ves_icall_reflection_get_token_raw,
// token 9845,
ves_icall_get_method_info_raw,
// token 9846,
ves_icall_get_method_attributes,
// token 9853,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9855,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9865,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9868,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9869,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9870,
ves_icall_reflection_get_token_raw,
// token 9881,
ves_icall_InternalInvoke_raw,
// token 9893,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9899,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9900,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9901,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9903,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9904,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9914,
ves_icall_InternalInvoke_raw,
// token 9933,
ves_icall_reflection_get_token_raw,
// token 9955,
ves_icall_reflection_get_token_raw,
// token 9956,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 9957,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9958,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 9959,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9976,
ves_icall_reflection_get_token_raw,
// token 9983,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10014,
ves_icall_reflection_get_token_raw,
// token 10015,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10533,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 10534,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10535,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10618,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10699,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10962,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10963,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10972,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10973,
ves_icall_ModuleBuilder_getToken_raw,
// token 10974,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10980,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11058,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11233,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11234,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11927,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13183,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13202,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13209,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13210,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13212,
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
