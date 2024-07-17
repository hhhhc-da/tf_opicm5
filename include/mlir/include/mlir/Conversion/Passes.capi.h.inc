
/* Autogenerated by mlir-tblgen; don't manually edit. */

#include "mlir-c/Pass.h"

#ifdef __cplusplus
extern "C" {
#endif

// Registration for the entire group
MLIR_CAPI_EXPORTED void mlirRegisterConversionPasses(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionArithToAMDGPUConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionArithToAMDGPUConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionArithToArmSMEConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionArithToArmSMEConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionArithToLLVMConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionArithToLLVMConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertAMDGPUToROCDL(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertAMDGPUToROCDL(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertAffineForToGPU(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertAffineForToGPU(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertAffineToStandard(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertAffineToStandard(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertArithToEmitC(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertArithToEmitC(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertArithToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertArithToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertArmNeon2dToIntr(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertArmNeon2dToIntr(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertArmSMEToLLVM(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertArmSMEToLLVM(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertArmSMEToSCF(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertArmSMEToSCF(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertAsyncToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertAsyncToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertBufferizationToMemRef(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertBufferizationToMemRef(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertComplexToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertComplexToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertComplexToLibm(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertComplexToLibm(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertComplexToSPIRVPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertComplexToSPIRVPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertComplexToStandard(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertComplexToStandard(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertControlFlowToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertControlFlowToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertControlFlowToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertControlFlowToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertFuncToEmitC(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertFuncToEmitC(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertFuncToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertFuncToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertFuncToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertFuncToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertGPUToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertGPUToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertGpuLaunchFuncToVulkanLaunchFunc(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertGpuLaunchFuncToVulkanLaunchFunc(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertGpuOpsToNVVMOps(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertGpuOpsToNVVMOps(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertGpuOpsToROCDLOps(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertGpuOpsToROCDLOps(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertIndexToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertIndexToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertIndexToSPIRVPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertIndexToSPIRVPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertLinalgToStandard(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertLinalgToStandard(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMathToFuncs(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMathToFuncs(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMathToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMathToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMathToLibm(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMathToLibm(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMathToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMathToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMemRefToEmitC(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMemRefToEmitC(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertMemRefToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertMemRefToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertNVGPUToNVVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertNVGPUToNVVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertNVVMToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertNVVMToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertOpenACCToSCF(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertOpenACCToSCF(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertOpenMPToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertOpenMPToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertPDLToPDLInterp(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertPDLToPDLInterp(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertParallelLoopToGpu(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertParallelLoopToGpu(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertSCFToOpenMPPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertSCFToOpenMPPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertSPIRVToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertSPIRVToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertShapeConstraints(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertShapeConstraints(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertShapeToStandard(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertShapeToStandard(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertTensorToLinalg(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertTensorToLinalg(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertTensorToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertTensorToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVectorToArmSME(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVectorToArmSME(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVectorToGPU(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVectorToGPU(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVectorToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVectorToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVectorToSCF(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVectorToSCF(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVectorToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVectorToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionConvertVulkanLaunchFuncToVulkanCallsPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionConvertVulkanLaunchFuncToVulkanCallsPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionFinalizeMemRefToLLVMConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionFinalizeMemRefToLLVMConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionGpuToLLVMConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionGpuToLLVMConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionLiftControlFlowToSCFPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionLiftControlFlowToSCFPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionLowerHostCodeToLLVMPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionLowerHostCodeToLLVMPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionMapMemRefStorageClass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionMapMemRefStorageClass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionReconcileUnrealizedCasts(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionReconcileUnrealizedCasts(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionSCFToControlFlow(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionSCFToControlFlow(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionSCFToEmitC(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionSCFToEmitC(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionSCFToSPIRV(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionSCFToSPIRV(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionSetLLVMModuleDataLayoutPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionSetLLVMModuleDataLayoutPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToArith(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToArith(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToLinalg(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToLinalg(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToLinalgNamed(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToLinalgNamed(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToMLProgram(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToMLProgram(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToSCF(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToSCF(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionTosaToTensor(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionTosaToTensor(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionUBToLLVMConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionUBToLLVMConversionPass(void);


/* Create Conversion Pass. */
MLIR_CAPI_EXPORTED MlirPass mlirCreateConversionUBToSPIRVConversionPass(void);
MLIR_CAPI_EXPORTED void mlirRegisterConversionUBToSPIRVConversionPass(void);



#ifdef __cplusplus
}
#endif