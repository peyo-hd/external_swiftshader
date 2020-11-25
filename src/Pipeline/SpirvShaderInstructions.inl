// Copyright 2020 The SwiftShader Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// SpirvShaderInstructions.inl holds additional metadata for SPIR-V opcodes.
// SpirvShaderInstructions.inl should only be included by
// SpirvShaderInstructions.cpp.

#ifndef DECORATE_OP
#	error "SpirvShaderInstructions.inl must be included after defining DECORATE_OP()"
#endif

//   is-statement
//          |  op-name
//          |    |
//          v    V
DECORATE_OP(T, OpNop)
DECORATE_OP(T, OpUndef)
DECORATE_OP(F, OpSourceContinued)
DECORATE_OP(F, OpSource)
DECORATE_OP(F, OpSourceExtension)
DECORATE_OP(F, OpName)
DECORATE_OP(F, OpMemberName)
DECORATE_OP(F, OpString)
DECORATE_OP(F, OpLine)
DECORATE_OP(F, OpExtension)
DECORATE_OP(F, OpExtInstImport)
DECORATE_OP(F, OpExtInst)
DECORATE_OP(F, OpMemoryModel)
DECORATE_OP(F, OpEntryPoint)
DECORATE_OP(F, OpExecutionMode)
DECORATE_OP(F, OpCapability)
DECORATE_OP(F, OpTypeVoid)
DECORATE_OP(F, OpTypeBool)
DECORATE_OP(F, OpTypeInt)
DECORATE_OP(F, OpTypeFloat)
DECORATE_OP(F, OpTypeVector)
DECORATE_OP(F, OpTypeMatrix)
DECORATE_OP(F, OpTypeImage)
DECORATE_OP(F, OpTypeSampler)
DECORATE_OP(F, OpTypeSampledImage)
DECORATE_OP(F, OpTypeArray)
DECORATE_OP(F, OpTypeRuntimeArray)
DECORATE_OP(F, OpTypeStruct)
DECORATE_OP(F, OpTypeOpaque)
DECORATE_OP(F, OpTypePointer)
DECORATE_OP(F, OpTypeFunction)
DECORATE_OP(F, OpTypeEvent)
DECORATE_OP(F, OpTypeDeviceEvent)
DECORATE_OP(F, OpTypeReserveId)
DECORATE_OP(F, OpTypeQueue)
DECORATE_OP(F, OpTypePipe)
DECORATE_OP(F, OpTypeForwardPointer)
DECORATE_OP(F, OpConstantTrue)
DECORATE_OP(F, OpConstantFalse)
DECORATE_OP(F, OpConstant)
DECORATE_OP(F, OpConstantComposite)
DECORATE_OP(F, OpConstantSampler)
DECORATE_OP(F, OpConstantNull)
DECORATE_OP(F, OpSpecConstantTrue)
DECORATE_OP(F, OpSpecConstantFalse)
DECORATE_OP(F, OpSpecConstant)
DECORATE_OP(F, OpSpecConstantComposite)
DECORATE_OP(F, OpSpecConstantOp)
DECORATE_OP(F, OpFunction)
DECORATE_OP(F, OpFunctionParameter)
DECORATE_OP(F, OpFunctionEnd)
DECORATE_OP(T, OpFunctionCall)
DECORATE_OP(T, OpVariable)
DECORATE_OP(T, OpImageTexelPointer)
DECORATE_OP(T, OpLoad)
DECORATE_OP(T, OpStore)
DECORATE_OP(T, OpCopyMemory)
DECORATE_OP(T, OpCopyMemorySized)
DECORATE_OP(T, OpAccessChain)
DECORATE_OP(T, OpInBoundsAccessChain)
DECORATE_OP(T, OpPtrAccessChain)
DECORATE_OP(T, OpArrayLength)
DECORATE_OP(T, OpGenericPtrMemSemantics)
DECORATE_OP(T, OpInBoundsPtrAccessChain)
DECORATE_OP(F, OpDecorate)
DECORATE_OP(F, OpMemberDecorate)
DECORATE_OP(F, OpDecorationGroup)
DECORATE_OP(F, OpGroupDecorate)
DECORATE_OP(F, OpGroupMemberDecorate)
DECORATE_OP(T, OpVectorExtractDynamic)
DECORATE_OP(T, OpVectorInsertDynamic)
DECORATE_OP(T, OpVectorShuffle)
DECORATE_OP(T, OpCompositeConstruct)
DECORATE_OP(T, OpCompositeExtract)
DECORATE_OP(T, OpCompositeInsert)
DECORATE_OP(T, OpCopyObject)
DECORATE_OP(T, OpTranspose)
DECORATE_OP(F, OpSampledImage)
DECORATE_OP(T, OpImageSampleImplicitLod)
DECORATE_OP(T, OpImageSampleExplicitLod)
DECORATE_OP(T, OpImageSampleDrefImplicitLod)
DECORATE_OP(T, OpImageSampleDrefExplicitLod)
DECORATE_OP(T, OpImageSampleProjImplicitLod)
DECORATE_OP(T, OpImageSampleProjExplicitLod)
DECORATE_OP(T, OpImageSampleProjDrefImplicitLod)
DECORATE_OP(T, OpImageSampleProjDrefExplicitLod)
DECORATE_OP(T, OpImageFetch)
DECORATE_OP(T, OpImageGather)
DECORATE_OP(T, OpImageDrefGather)
DECORATE_OP(T, OpImageRead)
DECORATE_OP(T, OpImageWrite)
DECORATE_OP(T, OpImage)
DECORATE_OP(T, OpImageQueryFormat)
DECORATE_OP(T, OpImageQueryOrder)
DECORATE_OP(T, OpImageQuerySizeLod)
DECORATE_OP(T, OpImageQuerySize)
DECORATE_OP(T, OpImageQueryLod)
DECORATE_OP(T, OpImageQueryLevels)
DECORATE_OP(T, OpImageQuerySamples)
DECORATE_OP(T, OpConvertFToU)
DECORATE_OP(T, OpConvertFToS)
DECORATE_OP(T, OpConvertSToF)
DECORATE_OP(T, OpConvertUToF)
DECORATE_OP(T, OpUConvert)
DECORATE_OP(T, OpSConvert)
DECORATE_OP(T, OpFConvert)
DECORATE_OP(T, OpQuantizeToF16)
DECORATE_OP(T, OpConvertPtrToU)
DECORATE_OP(T, OpSatConvertSToU)
DECORATE_OP(T, OpSatConvertUToS)
DECORATE_OP(T, OpConvertUToPtr)
DECORATE_OP(T, OpPtrCastToGeneric)
DECORATE_OP(T, OpGenericCastToPtr)
DECORATE_OP(T, OpGenericCastToPtrExplicit)
DECORATE_OP(T, OpBitcast)
DECORATE_OP(T, OpSNegate)
DECORATE_OP(T, OpFNegate)
DECORATE_OP(T, OpIAdd)
DECORATE_OP(T, OpFAdd)
DECORATE_OP(T, OpISub)
DECORATE_OP(T, OpFSub)
DECORATE_OP(T, OpIMul)
DECORATE_OP(T, OpFMul)
DECORATE_OP(T, OpUDiv)
DECORATE_OP(T, OpSDiv)
DECORATE_OP(T, OpFDiv)
DECORATE_OP(T, OpUMod)
DECORATE_OP(T, OpSRem)
DECORATE_OP(T, OpSMod)
DECORATE_OP(T, OpFRem)
DECORATE_OP(T, OpFMod)
DECORATE_OP(T, OpVectorTimesScalar)
DECORATE_OP(T, OpMatrixTimesScalar)
DECORATE_OP(T, OpVectorTimesMatrix)
DECORATE_OP(T, OpMatrixTimesVector)
DECORATE_OP(T, OpMatrixTimesMatrix)
DECORATE_OP(T, OpOuterProduct)
DECORATE_OP(T, OpDot)
DECORATE_OP(T, OpIAddCarry)
DECORATE_OP(T, OpISubBorrow)
DECORATE_OP(T, OpUMulExtended)
DECORATE_OP(T, OpSMulExtended)
DECORATE_OP(T, OpAny)
DECORATE_OP(T, OpAll)
DECORATE_OP(T, OpIsNan)
DECORATE_OP(T, OpIsInf)
DECORATE_OP(T, OpIsFinite)
DECORATE_OP(T, OpIsNormal)
DECORATE_OP(T, OpSignBitSet)
DECORATE_OP(T, OpLessOrGreater)
DECORATE_OP(T, OpOrdered)
DECORATE_OP(T, OpUnordered)
DECORATE_OP(T, OpLogicalEqual)
DECORATE_OP(T, OpLogicalNotEqual)
DECORATE_OP(T, OpLogicalOr)
DECORATE_OP(T, OpLogicalAnd)
DECORATE_OP(T, OpLogicalNot)
DECORATE_OP(T, OpSelect)
DECORATE_OP(T, OpIEqual)
DECORATE_OP(T, OpINotEqual)
DECORATE_OP(T, OpUGreaterThan)
DECORATE_OP(T, OpSGreaterThan)
DECORATE_OP(T, OpUGreaterThanEqual)
DECORATE_OP(T, OpSGreaterThanEqual)
DECORATE_OP(T, OpULessThan)
DECORATE_OP(T, OpSLessThan)
DECORATE_OP(T, OpULessThanEqual)
DECORATE_OP(T, OpSLessThanEqual)
DECORATE_OP(T, OpFOrdEqual)
DECORATE_OP(T, OpFUnordEqual)
DECORATE_OP(T, OpFOrdNotEqual)
DECORATE_OP(T, OpFUnordNotEqual)
DECORATE_OP(T, OpFOrdLessThan)
DECORATE_OP(T, OpFUnordLessThan)
DECORATE_OP(T, OpFOrdGreaterThan)
DECORATE_OP(T, OpFUnordGreaterThan)
DECORATE_OP(T, OpFOrdLessThanEqual)
DECORATE_OP(T, OpFUnordLessThanEqual)
DECORATE_OP(T, OpFOrdGreaterThanEqual)
DECORATE_OP(T, OpFUnordGreaterThanEqual)
DECORATE_OP(T, OpShiftRightLogical)
DECORATE_OP(T, OpShiftRightArithmetic)
DECORATE_OP(T, OpShiftLeftLogical)
DECORATE_OP(T, OpBitwiseOr)
DECORATE_OP(T, OpBitwiseXor)
DECORATE_OP(T, OpBitwiseAnd)
DECORATE_OP(T, OpNot)
DECORATE_OP(T, OpBitFieldInsert)
DECORATE_OP(T, OpBitFieldSExtract)
DECORATE_OP(T, OpBitFieldUExtract)
DECORATE_OP(T, OpBitReverse)
DECORATE_OP(T, OpBitCount)
DECORATE_OP(T, OpDPdx)
DECORATE_OP(T, OpDPdy)
DECORATE_OP(T, OpFwidth)
DECORATE_OP(T, OpDPdxFine)
DECORATE_OP(T, OpDPdyFine)
DECORATE_OP(T, OpFwidthFine)
DECORATE_OP(T, OpDPdxCoarse)
DECORATE_OP(T, OpDPdyCoarse)
DECORATE_OP(T, OpFwidthCoarse)
DECORATE_OP(T, OpEmitVertex)
DECORATE_OP(T, OpEndPrimitive)
DECORATE_OP(T, OpEmitStreamVertex)
DECORATE_OP(T, OpEndStreamPrimitive)
DECORATE_OP(T, OpControlBarrier)
DECORATE_OP(T, OpMemoryBarrier)
DECORATE_OP(T, OpAtomicLoad)
DECORATE_OP(T, OpAtomicStore)
DECORATE_OP(T, OpAtomicExchange)
DECORATE_OP(T, OpAtomicCompareExchange)
DECORATE_OP(T, OpAtomicCompareExchangeWeak)
DECORATE_OP(T, OpAtomicIIncrement)
DECORATE_OP(T, OpAtomicIDecrement)
DECORATE_OP(T, OpAtomicIAdd)
DECORATE_OP(T, OpAtomicISub)
DECORATE_OP(T, OpAtomicSMin)
DECORATE_OP(T, OpAtomicUMin)
DECORATE_OP(T, OpAtomicSMax)
DECORATE_OP(T, OpAtomicUMax)
DECORATE_OP(T, OpAtomicAnd)
DECORATE_OP(T, OpAtomicOr)
DECORATE_OP(T, OpAtomicXor)
DECORATE_OP(T, OpPhi)
DECORATE_OP(F, OpLoopMerge)
DECORATE_OP(F, OpSelectionMerge)
DECORATE_OP(F, OpLabel)
DECORATE_OP(T, OpBranch)
DECORATE_OP(T, OpBranchConditional)
DECORATE_OP(T, OpSwitch)
DECORATE_OP(T, OpKill)
DECORATE_OP(T, OpReturn)
DECORATE_OP(T, OpReturnValue)
DECORATE_OP(F, OpUnreachable)
DECORATE_OP(T, OpLifetimeStart)
DECORATE_OP(T, OpLifetimeStop)
DECORATE_OP(T, OpGroupAsyncCopy)
DECORATE_OP(T, OpGroupWaitEvents)
DECORATE_OP(T, OpGroupAll)
DECORATE_OP(T, OpGroupAny)
DECORATE_OP(T, OpGroupBroadcast)
DECORATE_OP(T, OpGroupIAdd)
DECORATE_OP(T, OpGroupFAdd)
DECORATE_OP(T, OpGroupFMin)
DECORATE_OP(T, OpGroupUMin)
DECORATE_OP(T, OpGroupSMin)
DECORATE_OP(T, OpGroupFMax)
DECORATE_OP(T, OpGroupUMax)
DECORATE_OP(T, OpGroupSMax)
DECORATE_OP(T, OpReadPipe)
DECORATE_OP(T, OpWritePipe)
DECORATE_OP(T, OpReservedReadPipe)
DECORATE_OP(T, OpReservedWritePipe)
DECORATE_OP(T, OpReserveReadPipePackets)
DECORATE_OP(T, OpReserveWritePipePackets)
DECORATE_OP(T, OpCommitReadPipe)
DECORATE_OP(T, OpCommitWritePipe)
DECORATE_OP(T, OpIsValidReserveId)
DECORATE_OP(T, OpGetNumPipePackets)
DECORATE_OP(T, OpGetMaxPipePackets)
DECORATE_OP(T, OpGroupReserveReadPipePackets)
DECORATE_OP(T, OpGroupReserveWritePipePackets)
DECORATE_OP(T, OpGroupCommitReadPipe)
DECORATE_OP(T, OpGroupCommitWritePipe)
DECORATE_OP(T, OpEnqueueMarker)
DECORATE_OP(T, OpEnqueueKernel)
DECORATE_OP(T, OpGetKernelNDrangeSubGroupCount)
DECORATE_OP(T, OpGetKernelNDrangeMaxSubGroupSize)
DECORATE_OP(T, OpGetKernelWorkGroupSize)
DECORATE_OP(T, OpGetKernelPreferredWorkGroupSizeMultiple)
DECORATE_OP(T, OpRetainEvent)
DECORATE_OP(T, OpReleaseEvent)
DECORATE_OP(T, OpCreateUserEvent)
DECORATE_OP(T, OpIsValidEvent)
DECORATE_OP(T, OpSetUserEventStatus)
DECORATE_OP(T, OpCaptureEventProfilingInfo)
DECORATE_OP(T, OpGetDefaultQueue)
DECORATE_OP(T, OpBuildNDRange)
DECORATE_OP(T, OpImageSparseSampleImplicitLod)
DECORATE_OP(T, OpImageSparseSampleExplicitLod)
DECORATE_OP(T, OpImageSparseSampleDrefImplicitLod)
DECORATE_OP(T, OpImageSparseSampleDrefExplicitLod)
DECORATE_OP(T, OpImageSparseSampleProjImplicitLod)
DECORATE_OP(T, OpImageSparseSampleProjExplicitLod)
DECORATE_OP(T, OpImageSparseSampleProjDrefImplicitLod)
DECORATE_OP(T, OpImageSparseSampleProjDrefExplicitLod)
DECORATE_OP(T, OpImageSparseFetch)
DECORATE_OP(T, OpImageSparseGather)
DECORATE_OP(T, OpImageSparseDrefGather)
DECORATE_OP(T, OpImageSparseTexelsResident)
DECORATE_OP(F, OpNoLine)
DECORATE_OP(T, OpAtomicFlagTestAndSet)
DECORATE_OP(T, OpAtomicFlagClear)
DECORATE_OP(T, OpImageSparseRead)
DECORATE_OP(T, OpSizeOf)
DECORATE_OP(F, OpTypePipeStorage)
DECORATE_OP(T, OpConstantPipeStorage)
DECORATE_OP(T, OpCreatePipeFromPipeStorage)
DECORATE_OP(T, OpGetKernelLocalSizeForSubgroupCount)
DECORATE_OP(T, OpGetKernelMaxNumSubgroups)
DECORATE_OP(F, OpTypeNamedBarrier)
DECORATE_OP(T, OpNamedBarrierInitialize)
DECORATE_OP(T, OpMemoryNamedBarrier)
DECORATE_OP(F, OpModuleProcessed)
DECORATE_OP(F, OpExecutionModeId)
DECORATE_OP(F, OpDecorateId)
DECORATE_OP(T, OpGroupNonUniformElect)
DECORATE_OP(T, OpGroupNonUniformAll)
DECORATE_OP(T, OpGroupNonUniformAny)
DECORATE_OP(T, OpGroupNonUniformAllEqual)
DECORATE_OP(T, OpGroupNonUniformBroadcast)
DECORATE_OP(T, OpGroupNonUniformBroadcastFirst)
DECORATE_OP(T, OpGroupNonUniformBallot)
DECORATE_OP(T, OpGroupNonUniformInverseBallot)
DECORATE_OP(T, OpGroupNonUniformBallotBitExtract)
DECORATE_OP(T, OpGroupNonUniformBallotBitCount)
DECORATE_OP(T, OpGroupNonUniformBallotFindLSB)
DECORATE_OP(T, OpGroupNonUniformBallotFindMSB)
DECORATE_OP(T, OpGroupNonUniformShuffle)
DECORATE_OP(T, OpGroupNonUniformShuffleXor)
DECORATE_OP(T, OpGroupNonUniformShuffleUp)
DECORATE_OP(T, OpGroupNonUniformShuffleDown)
DECORATE_OP(T, OpGroupNonUniformIAdd)
DECORATE_OP(T, OpGroupNonUniformFAdd)
DECORATE_OP(T, OpGroupNonUniformIMul)
DECORATE_OP(T, OpGroupNonUniformFMul)
DECORATE_OP(T, OpGroupNonUniformSMin)
DECORATE_OP(T, OpGroupNonUniformUMin)
DECORATE_OP(T, OpGroupNonUniformFMin)
DECORATE_OP(T, OpGroupNonUniformSMax)
DECORATE_OP(T, OpGroupNonUniformUMax)
DECORATE_OP(T, OpGroupNonUniformFMax)
DECORATE_OP(T, OpGroupNonUniformBitwiseAnd)
DECORATE_OP(T, OpGroupNonUniformBitwiseOr)
DECORATE_OP(T, OpGroupNonUniformBitwiseXor)
DECORATE_OP(T, OpGroupNonUniformLogicalAnd)
DECORATE_OP(T, OpGroupNonUniformLogicalOr)
DECORATE_OP(T, OpGroupNonUniformLogicalXor)
DECORATE_OP(T, OpGroupNonUniformQuadBroadcast)
DECORATE_OP(T, OpGroupNonUniformQuadSwap)
DECORATE_OP(T, OpCopyLogical)
DECORATE_OP(T, OpPtrEqual)
DECORATE_OP(T, OpPtrNotEqual)
DECORATE_OP(T, OpPtrDiff)
DECORATE_OP(T, OpTerminateInvocation)
DECORATE_OP(T, OpSubgroupBallotKHR)
DECORATE_OP(T, OpSubgroupFirstInvocationKHR)
DECORATE_OP(T, OpSubgroupAllKHR)
DECORATE_OP(T, OpSubgroupAnyKHR)
DECORATE_OP(T, OpSubgroupAllEqualKHR)
DECORATE_OP(T, OpSubgroupReadInvocationKHR)
DECORATE_OP(T, OpTypeRayQueryKHR)
DECORATE_OP(T, OpRayQueryInitializeKHR)
DECORATE_OP(T, OpRayQueryTerminateKHR)
DECORATE_OP(T, OpRayQueryGenerateIntersectionKHR)
DECORATE_OP(T, OpRayQueryConfirmIntersectionKHR)
DECORATE_OP(T, OpRayQueryProceedKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionTypeKHR)
DECORATE_OP(T, OpGroupIAddNonUniformAMD)
DECORATE_OP(T, OpGroupFAddNonUniformAMD)
DECORATE_OP(T, OpGroupFMinNonUniformAMD)
DECORATE_OP(T, OpGroupUMinNonUniformAMD)
DECORATE_OP(T, OpGroupSMinNonUniformAMD)
DECORATE_OP(T, OpGroupFMaxNonUniformAMD)
DECORATE_OP(T, OpGroupUMaxNonUniformAMD)
DECORATE_OP(T, OpGroupSMaxNonUniformAMD)
DECORATE_OP(T, OpFragmentMaskFetchAMD)
DECORATE_OP(T, OpFragmentFetchAMD)
DECORATE_OP(T, OpReadClockKHR)
DECORATE_OP(T, OpImageSampleFootprintNV)
DECORATE_OP(T, OpGroupNonUniformPartitionNV)
DECORATE_OP(T, OpWritePackedPrimitiveIndices4x8NV)
DECORATE_OP(T, OpReportIntersectionNV)
DECORATE_OP(T, OpIgnoreIntersectionNV)
DECORATE_OP(T, OpTerminateRayNV)
DECORATE_OP(T, OpTraceNV)
DECORATE_OP(T, OpTypeAccelerationStructureNV)
DECORATE_OP(T, OpExecuteCallableNV)
DECORATE_OP(T, OpTypeCooperativeMatrixNV)
DECORATE_OP(T, OpCooperativeMatrixLoadNV)
DECORATE_OP(T, OpCooperativeMatrixStoreNV)
DECORATE_OP(T, OpCooperativeMatrixMulAddNV)
DECORATE_OP(T, OpCooperativeMatrixLengthNV)
DECORATE_OP(T, OpBeginInvocationInterlockEXT)
DECORATE_OP(T, OpEndInvocationInterlockEXT)
DECORATE_OP(T, OpDemoteToHelperInvocationEXT)
DECORATE_OP(T, OpIsHelperInvocationEXT)
DECORATE_OP(T, OpSubgroupShuffleINTEL)
DECORATE_OP(T, OpSubgroupShuffleDownINTEL)
DECORATE_OP(T, OpSubgroupShuffleUpINTEL)
DECORATE_OP(T, OpSubgroupShuffleXorINTEL)
DECORATE_OP(T, OpSubgroupBlockReadINTEL)
DECORATE_OP(T, OpSubgroupBlockWriteINTEL)
DECORATE_OP(T, OpSubgroupImageBlockReadINTEL)
DECORATE_OP(T, OpSubgroupImageBlockWriteINTEL)
DECORATE_OP(T, OpSubgroupImageMediaBlockReadINTEL)
DECORATE_OP(T, OpSubgroupImageMediaBlockWriteINTEL)
DECORATE_OP(T, OpUCountLeadingZerosINTEL)
DECORATE_OP(T, OpUCountTrailingZerosINTEL)
DECORATE_OP(T, OpAbsISubINTEL)
DECORATE_OP(T, OpAbsUSubINTEL)
DECORATE_OP(T, OpIAddSatINTEL)
DECORATE_OP(T, OpUAddSatINTEL)
DECORATE_OP(T, OpIAverageINTEL)
DECORATE_OP(T, OpUAverageINTEL)
DECORATE_OP(T, OpIAverageRoundedINTEL)
DECORATE_OP(T, OpUAverageRoundedINTEL)
DECORATE_OP(T, OpISubSatINTEL)
DECORATE_OP(T, OpUSubSatINTEL)
DECORATE_OP(T, OpIMul32x16INTEL)
DECORATE_OP(T, OpUMul32x16INTEL)
DECORATE_OP(T, OpFunctionPointerINTEL)
DECORATE_OP(T, OpFunctionPointerCallINTEL)
DECORATE_OP(F, OpDecorateString)
DECORATE_OP(F, OpMemberDecorateString)
DECORATE_OP(T, OpVmeImageINTEL)
DECORATE_OP(T, OpTypeVmeImageINTEL)
DECORATE_OP(T, OpTypeAvcImePayloadINTEL)
DECORATE_OP(T, OpTypeAvcRefPayloadINTEL)
DECORATE_OP(T, OpTypeAvcSicPayloadINTEL)
DECORATE_OP(T, OpTypeAvcMcePayloadINTEL)
DECORATE_OP(T, OpTypeAvcMceResultINTEL)
DECORATE_OP(T, OpTypeAvcImeResultINTEL)
DECORATE_OP(T, OpTypeAvcImeResultSingleReferenceStreamoutINTEL)
DECORATE_OP(T, OpTypeAvcImeResultDualReferenceStreamoutINTEL)
DECORATE_OP(T, OpTypeAvcImeSingleReferenceStreaminINTEL)
DECORATE_OP(T, OpTypeAvcImeDualReferenceStreaminINTEL)
DECORATE_OP(T, OpTypeAvcRefResultINTEL)
DECORATE_OP(T, OpTypeAvcSicResultINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultInterShapePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetInterShapePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetInterDirectionPenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetMotionVectorCostFunctionINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetAcOnlyHaarINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL)
DECORATE_OP(T, OpSubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToImePayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToImeResultINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToRefPayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToRefResultINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToSicPayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcMceConvertToSicResultINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetMotionVectorsINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterDistortionsINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetBestInterDistortionsINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterMajorShapeINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterMinorShapeINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterDirectionsINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterMotionVectorCountINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterReferenceIdsINTEL)
DECORATE_OP(T, OpSubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL)
DECORATE_OP(T, OpSubgroupAvcImeInitializeINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetSingleReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetDualReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcImeRefWindowSizeINTEL)
DECORATE_OP(T, OpSubgroupAvcImeAdjustRefOffsetINTEL)
DECORATE_OP(T, OpSubgroupAvcImeConvertToMcePayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetMaxMotionVectorCountINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetUnidirectionalMixDisableINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetEarlySearchTerminationThresholdINTEL)
DECORATE_OP(T, OpSubgroupAvcImeSetWeightedSadINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithSingleReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithDualReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeConvertToMceResultINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetSingleReferenceStreaminINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetDualReferenceStreaminINTEL)
DECORATE_OP(T, OpSubgroupAvcImeStripSingleReferenceStreamoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeStripDualReferenceStreamoutINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetBorderReachedINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetTruncatedSearchIndicationINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL)
DECORATE_OP(T, OpSubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL)
DECORATE_OP(T, OpSubgroupAvcFmeInitializeINTEL)
DECORATE_OP(T, OpSubgroupAvcBmeInitializeINTEL)
DECORATE_OP(T, OpSubgroupAvcRefConvertToMcePayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcRefSetBidirectionalMixDisableINTEL)
DECORATE_OP(T, OpSubgroupAvcRefSetBilinearFilterEnableINTEL)
DECORATE_OP(T, OpSubgroupAvcRefEvaluateWithSingleReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcRefEvaluateWithDualReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcRefEvaluateWithMultiReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL)
DECORATE_OP(T, OpSubgroupAvcRefConvertToMceResultINTEL)
DECORATE_OP(T, OpSubgroupAvcSicInitializeINTEL)
DECORATE_OP(T, OpSubgroupAvcSicConfigureSkcINTEL)
DECORATE_OP(T, OpSubgroupAvcSicConfigureIpeLumaINTEL)
DECORATE_OP(T, OpSubgroupAvcSicConfigureIpeLumaChromaINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetMotionVectorMaskINTEL)
DECORATE_OP(T, OpSubgroupAvcSicConvertToMcePayloadINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetIntraLumaShapePenaltyINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetIntraLumaModeCostFunctionINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetIntraChromaModeCostFunctionINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetBilinearFilterEnableINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetSkcForwardTransformEnableINTEL)
DECORATE_OP(T, OpSubgroupAvcSicSetBlockBasedRawSkipSadINTEL)
DECORATE_OP(T, OpSubgroupAvcSicEvaluateIpeINTEL)
DECORATE_OP(T, OpSubgroupAvcSicEvaluateWithSingleReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcSicEvaluateWithDualReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcSicEvaluateWithMultiReferenceINTEL)
DECORATE_OP(T, OpSubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL)
DECORATE_OP(T, OpSubgroupAvcSicConvertToMceResultINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetIpeLumaShapeINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetBestIpeLumaDistortionINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetBestIpeChromaDistortionINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetPackedIpeLumaModesINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetIpeChromaModeINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL)
DECORATE_OP(T, OpSubgroupAvcSicGetInterRawSadsINTEL)
DECORATE_OP(T, OpLoopControlINTEL)
DECORATE_OP(T, OpReadPipeBlockingINTEL)
DECORATE_OP(T, OpWritePipeBlockingINTEL)
DECORATE_OP(T, OpFPGARegINTEL)
DECORATE_OP(T, OpRayQueryGetRayTMinKHR)
DECORATE_OP(T, OpRayQueryGetRayFlagsKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionTKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionInstanceCustomIndexKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionInstanceIdKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionGeometryIndexKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionPrimitiveIndexKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionBarycentricsKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionFrontFaceKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionCandidateAABBOpaqueKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionObjectRayDirectionKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionObjectRayOriginKHR)
DECORATE_OP(T, OpRayQueryGetWorldRayDirectionKHR)
DECORATE_OP(T, OpRayQueryGetWorldRayOriginKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionObjectToWorldKHR)
DECORATE_OP(T, OpRayQueryGetIntersectionWorldToObjectKHR)
DECORATE_OP(T, OpAtomicFAddEXT)
DECORATE_OP(T, OpTraceRayKHR)
DECORATE_OP(T, OpExecuteCallableKHR)
DECORATE_OP(T, OpConvertUToAccelerationStructureKHR)
DECORATE_OP(T, OpIgnoreIntersectionKHR)
DECORATE_OP(T, OpTerminateRayKHR)
