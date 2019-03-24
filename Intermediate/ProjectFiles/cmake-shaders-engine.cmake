set(ENGINE_SHADER_FILES 
	"/home/estebagel/UE_4.20-unstoppable/Engine/Plugins/Runtime/Oculus/OculusVR/Source/OculusHMD/Private/OculusStressTestShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ACES.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/AtmosphereCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/AtmospherePrecompute.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/AtmospherePrecomputeCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/AtmospherePrecomputeInscatter.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/AtmosphericFogShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BRDF.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BasePassCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BasePassPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BasePassTessellationShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BasePassVertexCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/BasePassVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ByteBuffer.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CapsuleLight.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CapsuleLightIntegrate.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CapsuleShadowShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CircleDOFCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ClearReplacementShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ColorSpace.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ColorUtils.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Common.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CommonViewUniformBuffer.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CompositeUIPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ConvertToUniformMesh.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CopyShadowMaps.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/CubemapCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DBufferDecalShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DebugViewModeCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DebugViewModeVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DecalCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Decode32bppHDR.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DeferredDecal.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DeferredLightPixelShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DeferredLightVertexShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DeferredLightingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DeferredShadingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Definitions.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DepthOfFieldCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DepthOnlyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DepthOnlyVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldAOShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldGlobalIllumination.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldLightingPost.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldLightingShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldObjectCulling.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldScreenGridLighting.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldShadowing.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldShadowingShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistanceFieldVisualization.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistortAccumulatePS.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistortAccumulateVS.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DistortApplyScreenPS.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DitheredTransitionStencil.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DownsampleDepthPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DynamicLightingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/EvaluateSurfelMaterial.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/EyeAdaptationCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/FXAAShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/FastMath.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/FilterPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/FilterVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/FlatTessellation.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ForwardLightingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ForwardShadowingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Fxaa3_11.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GPUBenchmark.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GPUFastFourierTransform.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GPUFastFourierTransform2DCore.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GPUFastFourierTransformCore.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GammaCorrection.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GammaCorrectionCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GeometryCacheVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GlobalDistanceField.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GlobalDistanceFieldShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GpuSkinCacheComputeShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GpuSkinCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/GpuSkinVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HZBOcclusion.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HdrCustomResolveShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HeightFogCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HeightFogPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HeightFogVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HeightfieldLighting.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HeightfieldLightingShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HitProxyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/HitProxyVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/IESLightProfilesCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/InstancedStereo.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVBuildGeometryVolume.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVClear.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVClearLists.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVDirectLightInject.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVDirectionalOcclusion.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVFinalPass.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVGeometryVolumeCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVInject_AccumulateVplLists.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVInject_GenerateVplLists.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVPacking.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVPropagate.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVVisualise.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVWriteCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LPVWriteVplCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LandscapeGrassWeight.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LandscapeVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightAccumulator.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightFunctionCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightFunctionPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightFunctionVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightGridCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightGridInjection.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightMapDensityShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightShaftShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LightmapCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LocalVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/LocalVertexFactoryCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MaterialTemplate.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MaterialTexCoordScalesPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MediaShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MeshDecals.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MeshPaintPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MeshPaintVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MeshParticleVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MeshTexCoordSizeAccuracyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MinMaterialTexCoords.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MiniFontCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MissingShaderPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileBasePassCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileBasePassPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileBasePassVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileGGX.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileMultiView.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileOpacityShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MobileSceneCapture.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MonoscopicFarFieldRenderingPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MonoscopicFarFieldRenderingVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MonteCarlo.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/MorphTargets.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NiagaraEmitterInstanceShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NiagaraMeshVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NiagaraRibbonVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NiagaraSpriteVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NiagaraVFParticleAccess.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/NullPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ODSCapture.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/OcclusionQueryPixelShader.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/OcclusionQueryVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/OculusShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/OneColorShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PNTriangles.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PageTableUpdate.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PaniniProjection.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleBeamTrailVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleBoundsShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleCurveInjectionShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleGPUSpriteVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleInjectionShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleSimVisualizeShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleSimulationShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleSortKeyGen.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleSpriteVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ParticleVertexFactoryCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PixelQuadMessagePassing.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PixelShaderOutputCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PlanarReflectionShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PlanarReflectionShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PositionOnlyDepthVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessAmbient.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessAmbientOcclusion.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessBloom.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessBokehDOF.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessBusyWait.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessCircleDOF.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessCombineLUTs.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessCompositeEditorPrimitives.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessDOF.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessDownsample.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessEyeAdaptation.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessFFTBloom.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessGBufferHints.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHMD.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHMDMorpheus.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHierarchical.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHistogram.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHistogramCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessHistogramReduce.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessLensBlur.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessLensFlares.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessLpvIndirect.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessMaterialShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessMobile.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessMotionBlur.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessNoiseBlur.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessPassThrough.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessSelectionOutline.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessSubsurface.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessTemporalAA.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessTestImage.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessTonemap.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessUpscale.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessVelocityFlatten.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessVisualizeBuffer.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessVisualizeDOF.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PostProcessVisualizeHDR.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PrimitiveDistanceAccuracyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/PrintValue.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/QuadComplexityAccumulatePixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/QuadOverdraw.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RGBAToYUV420.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RTWriteMaskDecode.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RadixSortShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Random.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RecomputeTangentsCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RecomputeTangentsPerTrianglePass.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RecomputeTangentsPerVertexPass.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RectLight.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RectLightIntegrate.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ReflectionEnvironmentComposite.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ReflectionEnvironmentPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ReflectionEnvironmentShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ReflectionEnvironmentShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/RequiredTextureResolutionPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ResolvePixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ResolveVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SHCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SceneCapturePixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SceneTexturesCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ScreenPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ScreenPixelShaderOES.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ScreenSpaceRayCast.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ScreenSpaceReflections.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ScreenVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SeparableSSS.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SeparateTranslucency.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShaderComplexityAccumulatePixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShaderComplexityApplyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadingModels.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadingModelsMaterial.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowDepthCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowDepthPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowDepthVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowFilteringCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowPercentageCloserFiltering.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowProjectionCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowProjectionPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/ShadowProjectionVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementColorChannelMaskPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementHitProxyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementNormalMapPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementTexture2DPreviewPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleElementVolumeTexturePreviewPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleF32PixelShader.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SimpleF32VertexShader.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SkyLightingShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlateElementPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlateMaskingShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlatePostProcessColorDeficiencyPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlatePostProcessPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlateShaderCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SlateVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SolidColorPixelShader.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SpeedTreeCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SphericalGaussian.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/StationaryLightOverlapShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/StereoLayerShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SubsurfaceProfileCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SurfelMaterialShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/SurfelTree.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/Tessellation.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TiledDeferredLightShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TonemapCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TranslucencyUpsampling.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TranslucentLightInjectionShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TranslucentLightingShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TranslucentShadowDepthShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TransmissionCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/TransmissionThickness.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/UpdateTextureShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VectorFieldCompositeShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VectorFieldVisualizationVertexFactory.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VelocityCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VelocityShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VertexFactoryCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VirtualTextureCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VisualizeShadingModels.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VisualizeTexture.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VisualizeVolumetricLightmap.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VolumeLightingCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VolumetricFog.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VolumetricFogLightFunction.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VolumetricFogVoxelization.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/VolumetricLightmapShared.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/WideCustomResolveShaders.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/WideCustomResolve_Wide.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/WideCustomResolve_Wider.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/WideCustomResolve_Widest.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/meshpaintdilatepixelshader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/meshpaintdilatevertexshader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFBokehLUT.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFCocTileCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFCocTileDilate.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFCocTileFlatten.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFDownsample.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFDownsample.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFGatherAccumulator.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFGatherCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFGatherKernel.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFGatherPass.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFGatherTileSuggest.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFHybridScatterCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFHybridScatterCompilation.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFHybridScatterCompilation.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFHybridScatterPixelShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFHybridScatterVertexShader.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFPostfiltering.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFRecombine.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFReduce.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Private/DiaphragmDOF/DOFSetup.usf"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/FP16Math.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/MetalCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/Platform.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/ShaderVersion.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/VulkanCommon.ush"
	"/home/estebagel/UE_4.20-unstoppable/Engine/Shaders/Public/WaveBroadcastIntrinsics.ush"
 )
