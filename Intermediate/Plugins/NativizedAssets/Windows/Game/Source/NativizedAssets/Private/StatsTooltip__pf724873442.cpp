#include "NativizedAssets.h"
#include "StatsTooltip__pf724873442.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "BGWithFramesx2__pfG948159406.h"
#include "Runtime/UMG/Public/Components/WrapBox.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Dungeoner/SortingArray.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/Subsystem.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "AddingSeparatorsToGroupingNumber__pf503790866.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UStatsTooltip_C__pf724873442::UStatsTooltip_C__pf724873442(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BGWithFramesx2__pfG = nullptr;
	bpv__Border__pf = nullptr;
	bpv__DecorativeEllement__pf = nullptr;
	bpv__Description__pf = nullptr;
	bpv__Formula__pf = nullptr;
	bpv__IncreasesPanel__pf = nullptr;
	bpv__IncreaseTemplate__pf = nullptr;
	bpv__Name__pf = nullptr;
	bpv__Value__pf = nullptr;
	bpv__HasFormula__pf = true;
	bpv__Increases__pf = TArray<FIncrease> ();
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsTooltip_C__pf724873442::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsTooltip_C__pf724873442::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UBGWithFramesx2_C__pfG948159406::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAddingSeparatorsToGroupingNumber_C__pf503790866::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Right = 331.731628f;
	__Local__3->LayoutData.Offsets.Bottom = 125.125076f;
	__Local__3->bAutoSize = true;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_1"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(2);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Right = 0.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UBGWithFramesx2_C__pfG948159406>(__Local__0, TEXT("BGWithFrames-2"), (EObjectFlags)0x00280008);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Right = 0.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__8->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__8->bAutoSize = true;
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<UWrapBox>(__Local__0, TEXT("WrapBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UWrapBoxSlot>(__Local__9, TEXT("WrapBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__11->Padding.Left = 45.000000f;
	__Local__11->Padding.Top = 20.000000f;
	__Local__11->Padding.Right = 45.000000f;
	__Local__11->Padding.Bottom = 10.000000f;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UVerticalBox>(__Local__0, TEXT("VerticalBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(7);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("Name"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F98257D34D4EEF6A72F658B6C12F9B87]\", \"9B83B12240C287D2C5D74A892B6BE840\", \"NON\")")	);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.514918, 0.545725, 0.030713, 1.000000);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Font.OutlineSettings.OutlineSize = 1;
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 20;
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__17 = ETextJustify::Type::Center;
	static TWeakFieldPtr<FProperty> __Local__19{};
	const FProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (UTextLayoutWidget::StaticClass())->FindPropertyByName(FName(TEXT("AutoWrapText")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((__Local__15), true, 0));
	auto& __Local__20 = (*(AccessPrivateProperty<float >((__Local__15), UTextLayoutWidget::__PPO__WrapTextAt() )));
	__Local__20 = 470.000000f;
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__21 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__21->Padding.Left = -10.000000f;
	__Local__21->Padding.Top = 7.000000f;
	__Local__21->Padding.Right = -10.000000f;
	__Local__21->Padding.Bottom = 10.000000f;
	__Local__21->Parent = __Local__12;
	auto __Local__22 = NewObject<UImage>(__Local__0, TEXT("Border"), (EObjectFlags)0x00280008);
	__Local__22->Brush.ImageSize = FVector2D(32.000000, 1.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__13.Add(__Local__21);
	auto __Local__24 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__24->Padding.Bottom = 10.000000f;
	__Local__24->Parent = __Local__12;
	auto __Local__25 = NewObject<UTextBlock>(__Local__0, TEXT("Value"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F98257D34D4EEF6A72F658B6C12F9B87]\", \"F24238834C082D3264C596A7397A9819\", \"0\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__25->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__25->Font.OutlineSettings.OutlineSize = 1;
	__Local__25->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__25->Font.Size = 18;
	auto& __Local__27 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__25), UTextLayoutWidget::__PPO__Justification() )));
	__Local__27 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((__Local__25), true, 0));
	auto& __Local__28 = (*(AccessPrivateProperty<float >((__Local__25), UTextLayoutWidget::__PPO__WrapTextAt() )));
	__Local__28 = 470.000000f;
	__Local__25->Slot = __Local__24;
	__Local__25->bIsVariable = true;
	__Local__24->Content = __Local__25;
	__Local__13.Add(__Local__24);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__29->Padding.Bottom = 10.000000f;
	__Local__29->Parent = __Local__12;
	auto __Local__30 = NewObject<UTextBlock>(__Local__0, TEXT("Formula"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F98257D34D4EEF6A72F658B6C12F9B87]\", \"63BEB22E4B168628E3509AB6328A329B\", \"NON\")")	);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__30->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(0.520996, 0.545725, 0.093059, 1.000000);
	__Local__30->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__30->Font.OutlineSettings.OutlineSize = 1;
	__Local__30->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__30->Font.Size = 18;
	auto& __Local__32 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__30), UTextLayoutWidget::__PPO__Justification() )));
	__Local__32 = ETextJustify::Type::Center;
	__Local__30->Slot = __Local__29;
	__Local__30->bIsVariable = true;
	__Local__29->Content = __Local__30;
	__Local__13.Add(__Local__29);
	auto __Local__33 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__33->Padding.Top = 10.000000f;
	__Local__33->Padding.Bottom = 12.000000f;
	__Local__33->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__33->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__33->Parent = __Local__12;
	auto __Local__34 = NewObject<UGridPanel>(__Local__0, TEXT("IncreasesPanel"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UGridSlot>(__Local__34, TEXT("GridSlot_2"), (EObjectFlags)0x00280008);
	__Local__36->Padding.Left = 7.000000f;
	__Local__36->Padding.Top = 5.000000f;
	__Local__36->Padding.Right = 7.000000f;
	__Local__36->Padding.Bottom = 5.000000f;
	__Local__36->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__36->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__36->Row = 2;
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UTextBlock>(__Local__0, TEXT("IncreaseTemplate"), (EObjectFlags)0x00280008);
	__Local__37->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F98257D34D4EEF6A72F658B6C12F9B87]\", \"9FB874F144F6FCF9A6605BBF1DB4882D\", \"Text Block\")")	);
	__Local__37->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__37->Font.OutlineSettings.OutlineSize = 1;
	__Local__37->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__37->Font.Size = 15;
	auto& __Local__38 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__37), UTextLayoutWidget::__PPO__Justification() )));
	__Local__38 = ETextJustify::Type::Center;
	__Local__37->Slot = __Local__36;
	__Local__37->bIsVariable = true;
	__Local__37->Visibility = ESlateVisibility::Collapsed;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__34->bIsVariable = true;
	__Local__33->Content = __Local__34;
	__Local__13.Add(__Local__33);
	auto __Local__39 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__39->Padding.Bottom = 10.000000f;
	__Local__39->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__39->Parent = __Local__12;
	auto __Local__40 = NewObject<UImage>(__Local__0, TEXT("DecorativeEllement"), (EObjectFlags)0x00280008);
	__Local__40->Brush.ImageSize = FVector2D(83.000000, 13.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__13.Add(__Local__39);
	auto __Local__42 = NewObject<UVerticalBoxSlot>(__Local__12, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__42->Parent = __Local__12;
	auto __Local__43 = NewObject<UTextBlock>(__Local__0, TEXT("Description"), (EObjectFlags)0x00280008);
	__Local__43->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[F98257D34D4EEF6A72F658B6C12F9B87]\", \"D407742C4B9BC439B8AB19B67B950EA6\", \"\u0424\u0438\u0437\u0438\u0447\u0435\u0441\u043a\u0438\u0439 \u0443\u0440\u043e\u043d \u0424\u0438\u0437\u0438\u0447\u0435\u0441\u043a\u0438\u0439 \u0443\u0440\u043e\u043d")
		TEXT("  \u0424\u0438\u0437\u0438\u0447\u0435\u0441\u043a\u0438\u0439 \u0443\u0440\u043e\u043d \u0424\u0438\u0437\u0438\u0447\u0435\u0441\u043a\u0438\u0439 \u0443\u0440\u043e\u043d\")")	);
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.520996, 0.545725, 0.093059, 1.000000);
	__Local__43->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__43->Font.OutlineSettings.OutlineSize = 1;
	__Local__43->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__43->Font.Size = 12;
	auto& __Local__45 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__43), UTextLayoutWidget::__PPO__Justification() )));
	__Local__45 = ETextJustify::Type::Center;
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((__Local__43), true, 0));
	auto& __Local__46 = (*(AccessPrivateProperty<float >((__Local__43), UTextLayoutWidget::__PPO__WrapTextAt() )));
	__Local__46 = 470.000000f;
	__Local__43->Slot = __Local__42;
	__Local__43->bIsVariable = true;
	__Local__42->Content = __Local__43;
	__Local__13.Add(__Local__42);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsTooltip_C__pf724873442::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__47;
	SlotNames.Append(__Local__47);
}
void UStatsTooltip_C__pf724873442::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__48;
	TArray<FDelegateRuntimeBinding>  __Local__49;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UStatsTooltip_C__pf724873442::StaticClass())->MiscConvertedSubobjects[0]), __Local__48, __Local__49);
}
void UStatsTooltip_C__pf724873442::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UStatsTooltip_C__pf724873442::bpf__ExecuteUbergraph_StatsTooltip__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	return; // KCST_GotoReturn
}
void UStatsTooltip_C__pf724873442::bpf__ExecuteUbergraph_StatsTooltip__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	return; // KCST_GotoReturn
}
void UStatsTooltip_C__pf724873442::bpf__ExecuteUbergraph_StatsTooltip__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__BGWithFramesx2__pfG) && ::IsValid(bpv__BGWithFramesx2__pfG->bpv__Background__pf))
	{
		bpv__BGWithFramesx2__pfG->bpv__Background__pf->UImage::SetOpacity(0.970000);
	}
	return; // KCST_GotoReturn
}
void UStatsTooltip_C__pf724873442::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_StatsTooltip__pf_0(4);
}
void UStatsTooltip_C__pf724873442::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_StatsTooltip__pf_1(3);
}
void UStatsTooltip_C__pf724873442::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_StatsTooltip__pf_2(1);
}
void UStatsTooltip_C__pf724873442::bpf__CreateNewIncrease__pf(/*out*/ FIncrease& bpp__Increase__pf, int32 bpp__Row__pf, int32 bpp__Column__pf)
{
	FString bpfv__Text__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue_1__pf{};
	FText bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor_1__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin__pf{};
	UTextBlock* bpfv__CallFunc_SpawnObject_ReturnValue__pf{};
	UGridSlot* bpfv__CallFunc_SlotAsGridSlot_ReturnValue__pf{};
	UGridSlot* bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf{};
	UGridSlot* bpfv__CallFunc_AddChildToGrid_ReturnValue__pf{};
	FSlateFontInfo bpfv__K2Node_MakeStruct_SlateFontInfo__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(4);
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpp__Increase__pf.Name, FString(TEXT("...")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 3:
			{
				bpfv__Text__pf = bpp__Increase__pf.Name;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_SpawnObject_ReturnValue__pf = CastChecked<UTextBlock>(UGameplayStatics::SpawnObject(UTextBlock::StaticClass(), bpv__IncreaseTemplate__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					auto __Local__51 = FSlateFontInfo{};
					FSlateFontInfo  __Local__50 = __Local__51;
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->UTextBlock::SetFont(((::IsValid(bpv__IncreaseTemplate__pf)) ? (bpv__IncreaseTemplate__pf->Font) : (__Local__50)));
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					TEnumAsByte<ETextJustify::Type>  __Local__52 = ETextJustify::Left;
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->SetJustification(((::IsValid(bpv__IncreaseTemplate__pf)) ? ((*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((bpv__IncreaseTemplate__pf), UTextLayoutWidget::__PPO__Justification() )))) : (__Local__52)));
				}
			}
		case 7:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__Text__pf);
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpp__Increase__pf.Value, 0);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 9:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.545725,0.228859,0.093059,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->UTextBlock::SetColorAndOpacity(bpfv__K2Node_MakeStruct_SlateColor__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::EqualEqual_StrStr(bpfv__Text__pf, FString(TEXT("...")));
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue_1__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 11:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor_2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.514918,0.545725,0.051269,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor_2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->UTextBlock::SetColorAndOpacity(bpfv__K2Node_MakeStruct_SlateColor_2__pf);
				}
			}
		case 12:
			{
				UObject*  __Local__53 = ((UObject*)nullptr);
				static TWeakFieldPtr<FProperty> __Local__55{};
				const FProperty* __Local__54 = __Local__55.Get();
				if (nullptr == __Local__54)
				{
					__Local__54 = (FSlateFontInfo::StaticStruct())->FindPropertyByName(FName(TEXT("FontObject")));
					check(__Local__54);
					__Local__55 = __Local__54;
				}
				(*(__Local__54->ContainerPtrToValuePtr<UObject* >(&(bpfv__K2Node_MakeStruct_SlateFontInfo__pf), 0))) = ((::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf)) ? (const_cast<UObject*>(bpfv__CallFunc_SpawnObject_ReturnValue__pf->Font.FontObject)) : (__Local__53));
				UObject*  __Local__56 = ((UObject*)nullptr);
				bpfv__K2Node_MakeStruct_SlateFontInfo__pf.FontMaterial = ((::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf)) ? (bpfv__CallFunc_SpawnObject_ReturnValue__pf->Font.FontMaterial) : (__Local__56));
				auto __Local__58 = FFontOutlineSettings{};
				FFontOutlineSettings  __Local__57 = __Local__58;
				bpfv__K2Node_MakeStruct_SlateFontInfo__pf.OutlineSettings = ((::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf)) ? (bpfv__CallFunc_SpawnObject_ReturnValue__pf->Font.OutlineSettings) : (__Local__57));
				FName  __Local__59 = FName();
				bpfv__K2Node_MakeStruct_SlateFontInfo__pf.TypefaceFontName = ((::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf)) ? (bpfv__CallFunc_SpawnObject_ReturnValue__pf->Font.TypefaceFontName) : (__Local__59));
				bpfv__K2Node_MakeStruct_SlateFontInfo__pf.Size = 45;
				int32  __Local__60 = 0;
				bpfv__K2Node_MakeStruct_SlateFontInfo__pf.LetterSpacing = ((::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf)) ? (bpfv__CallFunc_SpawnObject_ReturnValue__pf->Font.LetterSpacing) : (__Local__60));
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->UTextBlock::SetFont(bpfv__K2Node_MakeStruct_SlateFontInfo__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__IncreasesPanel__pf))
				{
					bpfv__CallFunc_AddChildToGrid_ReturnValue__pf = bpv__IncreasesPanel__pf->UGridPanel::AddChildToGrid(bpfv__CallFunc_SpawnObject_ReturnValue__pf, bpp__Row__pf, bpp__Column__pf);
				}
			}
		case 14:
			{
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__Text__pf, FString(TEXT("...")));
				if (!bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_SlotAsGridSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsGridSlot(bpv__IncreaseTemplate__pf);
				bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsGridSlot(bpfv__CallFunc_SpawnObject_ReturnValue__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf))
				{
					auto __Local__62 = FMargin{};
					FMargin  __Local__61 = __Local__62;
					bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf->UGridSlot::SetPadding(((::IsValid(bpfv__CallFunc_SlotAsGridSlot_ReturnValue__pf)) ? (bpfv__CallFunc_SlotAsGridSlot_ReturnValue__pf->Padding) : (__Local__61)));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.266581,0.545725,0.093059,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpfv__CallFunc_SpawnObject_ReturnValue__pf))
				{
					bpfv__CallFunc_SpawnObject_ReturnValue__pf->UTextBlock::SetColorAndOpacity(bpfv__K2Node_MakeStruct_SlateColor_1__pf);
				}
				__CurrentState = 10;
				break;
			}
		case 17:
			{
				bpfv__Text__pf = bpp__Increase__pf.Name;
			}
		case 18:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, FString(TEXT(": ")));
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf;
			}
		case 19:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpp__Increase__pf.Value, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, FString(TEXT("+")));
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf;
			}
		case 21:
			{
				bpfv__CallFunc_Conv_IntToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_IntToText(bpp__Increase__pf.Value, false, true, 1, 324);
				UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ bpfv__CallFunc_Conv_IntToText_ReturnValue_1__pf, FString(TEXT("\u202f")), this, /*out*/ bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber_1__pf);
			}
		case 22:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf);
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf;
			}
		case 23:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__Increase__pf.Duration, -1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpp__Increase__pf.Duration, false, true, 1, 324);
				UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ bpfv__CallFunc_Conv_IntToText_ReturnValue__pf, FString(TEXT("\u202f")), this, /*out*/ bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
			}
		case 25:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpp__Increase__pf.Duration, 10);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 26:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, FString(TEXT(" (")));
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, FString(TEXT(" \u0445\u043e\u0434)")));
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpp__Increase__pf.Duration, 10);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, 5);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, 1);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_IntInt_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, FString(TEXT(" (")));
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, FString(TEXT(" \u0445\u043e\u0434\u0430)")));
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__Text__pf, FString(TEXT(" (")));
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, FString(TEXT(" \u0445\u043e\u0434\u043e\u0432)")));
				bpfv__Text__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__K2Node_MakeStruct_Margin__pf.Left = 0.000000;
				bpfv__K2Node_MakeStruct_Margin__pf.Top = -33.000000;
				bpfv__K2Node_MakeStruct_Margin__pf.Right = 0.000000;
				bpfv__K2Node_MakeStruct_Margin__pf.Bottom = 0.000000;
				bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsGridSlot(bpfv__CallFunc_SpawnObject_ReturnValue__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf))
				{
					bpfv__CallFunc_SlotAsGridSlot_ReturnValue_1__pf->UGridSlot::SetPadding(bpfv__K2Node_MakeStruct_Margin__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UStatsTooltip_C__pf724873442::bpf__FillingIncrease__pf(/*out*/ TArray<FIncrease>& bpp__increanses__pf)
{
	int32 bpfv__Len__pf{};
	int32 bpfv__j__pf{};
	int32 bpfv__i__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FIncrease bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FIncrease bpfv__K2Node_MakeStruct_Increase__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	FIncrease bpfv__CallFunc_Array_Get_Item_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	int32 bpfv__CallFunc_Divide_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(13);
				__StateStack.Push(5);
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_2__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__IncreasesPanel__pf))
				{
					bpv__IncreasesPanel__pf->RemoveFromParent();
				}
			}
		case 4:
			{
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_2__pf, 14);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 9:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 10:
			{
				__StateStack.Push(30);
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpp__increanses__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__CreateNewIncrease__pf(/*out*/ bpfv__CallFunc_Array_Get_Item__pf, bpfv__Temp_int_Array_Index_Variable__pf, 0);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_2__pf, 27);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 14:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__Len__pf = bpfv__CallFunc_Array_Length_ReturnValue_2__pf;
			}
		case 15:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 16:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 17:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 18:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__increanses__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 19:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 20:
			{
				__StateStack.Push(31);
			}
		case 21:
			{
				bpfv__CallFunc_Divide_IntInt_ReturnValue__pf = UKismetMathLibrary::Divide_IntInt(bpfv__Len__pf, 2);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__i__pf, bpfv__CallFunc_Divide_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 22:
			{
				bpfv__i__pf = 0;
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__j__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 24:
			{
				bpfv__j__pf = bpfv__Temp_int_Variable__pf;
			}
		case 25:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__Temp_int_Array_Index_Variable_1__pf, 26);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 26:
			{
				bpfv__K2Node_MakeStruct_Increase__pf.Name = FString(TEXT("..."));
				bpfv__K2Node_MakeStruct_Increase__pf.Value = -1;
				bpfv__K2Node_MakeStruct_Increase__pf.Duration = -1;
				bpf__CreateNewIncrease__pf(/*out*/ bpfv__K2Node_MakeStruct_Increase__pf, bpfv__i__pf, bpfv__j__pf);
			}
		case 27:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				bpfv__Len__pf = 27;
				__CurrentState = 15;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 8;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 18;
				break;
			}
		case 32:
			{
				FCustomThunkTemplates::Array_Get(bpp__increanses__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpf__CreateNewIncrease__pf(/*out*/ bpfv__CallFunc_Array_Get_Item_1__pf, bpfv__i__pf, bpfv__j__pf);
			}
		case 33:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__i__pf, 1);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 34:
			{
				bpfv__i__pf = bpfv__Temp_int_Variable_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UStatsTooltip_C__pf724873442::bpf__UpdateIncreases__pf(/*out*/ TArray<FIncrease>& bpp__Increases__pf)
{
	TArray<FIncrease> bpfv__CallFunc_IncreaseSort_SortedIncreases__pf{};
	(bpfv__CallFunc_IncreaseSort_SortedIncreases__pf).Reset();
	USortingArray::IncreaseSort(/*out*/ bpp__Increases__pf, false, /*out*/ bpfv__CallFunc_IncreaseSort_SortedIncreases__pf);
	bpf__FillingIncrease__pf(/*out*/ bpfv__CallFunc_IncreaseSort_SortedIncreases__pf);
}
void UStatsTooltip_C__pf724873442::bpf__DeleteFormula__pf()
{
	if(::IsValid(bpv__Formula__pf))
	{
		bpv__Formula__pf->RemoveFromParent();
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsTooltip_C__pf724873442::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/TextFont_Font.TextFont_Font 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/NumbersFont_Font.NumbersFont_Font 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Decorative-element-1.Decorative-element-1 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UStatsTooltip_C__pf724873442::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{41, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{43, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Dungeoner.Increase 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Dungeoner.SortingArray 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{46, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridPanel 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.GridSlot 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Slate.ETextJustify 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextLayoutWidget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Textures/Angle-2.Angle-2 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/Blanks/PanelDecoration/BGWithFrames-2.BGWithFrames-2_C 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/AddingSeparatorsToGroupingNumber.AddingSeparatorsToGroupingNumber_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UStatsTooltip_C__pf724873442
{
	FRegisterHelper__UStatsTooltip_C__pf724873442()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/View/StatsTooltip"), &UStatsTooltip_C__pf724873442::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UStatsTooltip_C__pf724873442 Instance;
};
FRegisterHelper__UStatsTooltip_C__pf724873442 FRegisterHelper__UStatsTooltip_C__pf724873442::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
