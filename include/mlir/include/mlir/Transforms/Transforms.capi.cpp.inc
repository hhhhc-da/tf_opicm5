/* Autogenerated by mlir-tblgen; don't manually edit. */
//===----------------------------------------------------------------------===//
// Transforms Group Registration
//===----------------------------------------------------------------------===//

void mlirRegisterTransformsPasses(void) {
  registerTransformsPasses();
}

MlirPass mlirCreateTransformsCSE(void) {
  return wrap(mlir::createCSEPass().release());
}
void mlirRegisterTransformsCSE(void) {
  registerCSE();
}


MlirPass mlirCreateTransformsCanonicalizer(void) {
  return wrap(mlir::createCanonicalizerPass().release());
}
void mlirRegisterTransformsCanonicalizer(void) {
  registerCanonicalizer();
}


MlirPass mlirCreateTransformsCompositeFixedPointPass(void) {
  return wrap(createCompositeFixedPointPass().release());
}
void mlirRegisterTransformsCompositeFixedPointPass(void) {
  registerCompositeFixedPointPass();
}


MlirPass mlirCreateTransformsControlFlowSink(void) {
  return wrap(::mlir::createControlFlowSinkPass().release());
}
void mlirRegisterTransformsControlFlowSink(void) {
  registerControlFlowSink();
}


MlirPass mlirCreateTransformsGenerateRuntimeVerification(void) {
  return wrap(mlir::createGenerateRuntimeVerificationPass().release());
}
void mlirRegisterTransformsGenerateRuntimeVerification(void) {
  registerGenerateRuntimeVerification();
}


MlirPass mlirCreateTransformsInliner(void) {
  return wrap(mlir::createInlinerPass().release());
}
void mlirRegisterTransformsInliner(void) {
  registerInliner();
}


MlirPass mlirCreateTransformsLocationSnapshot(void) {
  return wrap(mlir::createLocationSnapshotPass().release());
}
void mlirRegisterTransformsLocationSnapshot(void) {
  registerLocationSnapshot();
}


MlirPass mlirCreateTransformsLoopInvariantCodeMotion(void) {
  return wrap(mlir::createLoopInvariantCodeMotionPass().release());
}
void mlirRegisterTransformsLoopInvariantCodeMotion(void) {
  registerLoopInvariantCodeMotion();
}


MlirPass mlirCreateTransformsLoopInvariantSubsetHoisting(void) {
  return wrap(mlir::createLoopInvariantSubsetHoistingPass().release());
}
void mlirRegisterTransformsLoopInvariantSubsetHoisting(void) {
  registerLoopInvariantSubsetHoisting();
}


MlirPass mlirCreateTransformsMem2Reg(void) {
  return wrap(createMem2Reg().release());
}
void mlirRegisterTransformsMem2Reg(void) {
  registerMem2Reg();
}


MlirPass mlirCreateTransformsPrintIRPass(void) {
  return wrap(mlir::createPrintIRPass().release());
}
void mlirRegisterTransformsPrintIRPass(void) {
  registerPrintIRPass();
}


MlirPass mlirCreateTransformsPrintOpStats(void) {
  return wrap(mlir::createPrintOpStatsPass().release());
}
void mlirRegisterTransformsPrintOpStats(void) {
  registerPrintOpStats();
}


MlirPass mlirCreateTransformsRemoveDeadValues(void) {
  return wrap(mlir::createRemoveDeadValuesPass().release());
}
void mlirRegisterTransformsRemoveDeadValues(void) {
  registerRemoveDeadValues();
}


MlirPass mlirCreateTransformsSCCP(void) {
  return wrap(mlir::createSCCPPass().release());
}
void mlirRegisterTransformsSCCP(void) {
  registerSCCP();
}


MlirPass mlirCreateTransformsSROA(void) {
  return wrap(createSROA().release());
}
void mlirRegisterTransformsSROA(void) {
  registerSROA();
}


MlirPass mlirCreateTransformsStripDebugInfo(void) {
  return wrap(mlir::createStripDebugInfoPass().release());
}
void mlirRegisterTransformsStripDebugInfo(void) {
  registerStripDebugInfo();
}


MlirPass mlirCreateTransformsSymbolDCE(void) {
  return wrap(mlir::createSymbolDCEPass().release());
}
void mlirRegisterTransformsSymbolDCE(void) {
  registerSymbolDCE();
}


MlirPass mlirCreateTransformsSymbolPrivatize(void) {
  return wrap(mlir::createSymbolPrivatizePass().release());
}
void mlirRegisterTransformsSymbolPrivatize(void) {
  registerSymbolPrivatize();
}


MlirPass mlirCreateTransformsTopologicalSort(void) {
  return wrap(mlir::createTopologicalSortPass().release());
}
void mlirRegisterTransformsTopologicalSort(void) {
  registerTopologicalSort();
}


MlirPass mlirCreateTransformsViewOpGraph(void) {
  return wrap(mlir::createPrintOpGraphPass().release());
}
void mlirRegisterTransformsViewOpGraph(void) {
  registerViewOpGraph();
}
