#include "NativizedAssets.h"
#include "AnimatedNumberTextBlock__pf724873442.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "GetNumberLengthInt64__pf503790866.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "AddingSeparatorsToGroupingNumber__pf503790866.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UAnimatedNumberTextBlock_C__pf724873442::UAnimatedNumberTextBlock_C__pf724873442(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__TextBlock__pf = nullptr;
	bpv__NewNumber__pf = 0;
	bpv__OldNumber__pf = 0;
	bpv__TickDuration__pf = 20.000000f;
	bpv__NumberOfIterations__pf = 0;
	bpv__i__pf = 0;
	bpv__ValueOfTheInc__pf = 1;
	bpv__Time__pf = 10.000000f;
	bpv__TotalTime__pf = 0.000000f;
	bpv__Text__pf = FText::GetEmpty();
	bpv__IsMultiline__pf = true;
	bpv__SeparatingMark__pf = FString(TEXT(" "));
	bpv__AnimationOn__pf = false;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UAnimatedNumberTextBlock_C__pf724873442::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UAnimatedNumberTextBlock_C__pf724873442::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UGetNumberLengthInt64_C__pf503790866::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAddingSeparatorsToGroupingNumber_C__pf503790866::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("PositiveValueChange_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("NegativeValueChange_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("NegativeValueChangeWithDepartureToMinus_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("NegativeValueChangeWithDepartureFromMinusToMisus_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("PositiveValueChangeWithStayingMinus_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("PositiveValueChangeFromMinus_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Right = 85.500000f;
	__Local__9->LayoutData.Offsets.Bottom = 26.500000f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__9->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__10->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"68844CEA47D5A7F04450A99593F025F5\", \"0\")")	);
	auto& __Local__11 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__10->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__11 = FLinearColor(0.502887, 0.545725, 0.052861, 1.000000);
	__Local__10->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__10->Font.OutlineSettings.OutlineSize = 1;
	__Local__10->Font.OutlineSettings.OutlineColor = FLinearColor(0.030713, 0.025187, 0.009134, 1.000000);
	__Local__10->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__10->Font.Size = 18;
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__10), UTextLayoutWidget::__PPO__Justification() )));
	__Local__12 = ETextJustify::Type::Center;
	auto& __Local__13 = (*(AccessPrivateProperty<ETextWrappingPolicy >((__Local__10), UTextLayoutWidget::__PPO__WrappingPolicy() )));
	__Local__13 = ETextWrappingPolicy::AllowPerCharacterWrapping;
	__Local__10->Slot = __Local__9;
	__Local__10->bIsVariable = true;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__0->RootWidget = __Local__7;
	auto __Local__14 = NewObject<UMovieScene>(__Local__1, TEXT("PositiveValueChange"), (EObjectFlags)0x00280008);
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__14), UMovieScene::__PPO__Possessables() )));
	__Local__15 = TArray<FMovieScenePossessable> ();
	__Local__15.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__15.GetData(), 1);
	auto& __Local__16 = __Local__15[0];
	auto& __Local__17 = (*(AccessPrivateProperty<FGuid >(&(__Local__16), FMovieScenePossessable::__PPO__Guid() )));
	__Local__17 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__18 = (*(AccessPrivateProperty<FString >(&(__Local__16), FMovieScenePossessable::__PPO__Name() )));
	__Local__18 = FString(TEXT("TextBlock"));
	auto& __Local__19 = (*(AccessPrivateProperty<UClass* >(&(__Local__16), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__19 = UTextBlock::StaticClass();
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__14), UMovieScene::__PPO__ObjectBindings() )));
	__Local__20 = TArray<FMovieSceneBinding> ();
	__Local__20.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__20.GetData(), 1);
	auto& __Local__21 = __Local__20[0];
	auto& __Local__22 = (*(AccessPrivateProperty<FGuid >(&(__Local__21), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__22 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__23 = (*(AccessPrivateProperty<FString >(&(__Local__21), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__23 = FString(TEXT("Text"));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__21), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__24 = TArray<UMovieSceneTrack*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<UMovieSceneColorTrack>(__Local__14, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__26 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__25), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__26.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__26.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__26.bCanUseClassLookup = true;
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__25), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__27 = TArray<UMovieSceneSection*> ();
	__Local__27.Reserve(1);
	auto __Local__28 = NewObject<UMovieSceneColorSection>(__Local__25, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__29 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__28->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__30 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__28->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__29)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__30)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__31 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__28), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__31), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__32 = TArray<FFrameNumber> ();
	__Local__32.Reserve(4);
	__Local__32.Add(FFrameNumber{});
	__Local__32.Add(FFrameNumber{});
	__Local__32[1].Value = 12000;
	__Local__32.Add(FFrameNumber{});
	__Local__32[2].Value = 21000;
	__Local__32.Add(FFrameNumber{});
	__Local__32[3].Value = 45000;
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__31), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__33 = TArray<FMovieSceneFloatValue> ();
	__Local__33.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__33.GetData(), 4);
	auto& __Local__34 = __Local__33[0];
	__Local__34.Value = 0.514918f;
	auto& __Local__35 = __Local__33[1];
	__Local__35.Value = 0.151816f;
	auto& __Local__36 = __Local__33[2];
	__Local__36.Value = 0.152926f;
	__Local__36.Tangent.ArriveTangent = 0.000000f;
	__Local__36.Tangent.LeaveTangent = 0.000000f;
	auto& __Local__37 = __Local__33[3];
	__Local__37.Value = 0.514918f;
	auto& __Local__38 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__28), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__38), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__39 = TArray<FFrameNumber> ();
	__Local__39.Reserve(4);
	__Local__39.Add(FFrameNumber{});
	__Local__39.Add(FFrameNumber{});
	__Local__39[1].Value = 12000;
	__Local__39.Add(FFrameNumber{});
	__Local__39[2].Value = 21000;
	__Local__39.Add(FFrameNumber{});
	__Local__39[3].Value = 45000;
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__38), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__40 = TArray<FMovieSceneFloatValue> ();
	__Local__40.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__40.GetData(), 4);
	auto& __Local__41 = __Local__40[0];
	__Local__41.Value = 0.545725f;
	auto& __Local__42 = __Local__40[1];
	__Local__42.Value = 0.545725f;
	auto& __Local__43 = __Local__40[2];
	__Local__43.Value = 0.545725f;
	auto& __Local__44 = __Local__40[3];
	__Local__44.Value = 0.545725f;
	auto& __Local__45 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__28), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__45), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__46 = TArray<FFrameNumber> ();
	__Local__46.Reserve(4);
	__Local__46.Add(FFrameNumber{});
	__Local__46.Add(FFrameNumber{});
	__Local__46[1].Value = 12000;
	__Local__46.Add(FFrameNumber{});
	__Local__46[2].Value = 21000;
	__Local__46.Add(FFrameNumber{});
	__Local__46[3].Value = 45000;
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__45), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__47 = TArray<FMovieSceneFloatValue> ();
	__Local__47.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__47.GetData(), 4);
	auto& __Local__48 = __Local__47[0];
	__Local__48.Value = 0.051269f;
	auto& __Local__49 = __Local__47[1];
	__Local__49.Value = 0.091808f;
	auto& __Local__50 = __Local__47[2];
	__Local__50.Value = 0.090842f;
	__Local__50.Tangent.ArriveTangent = -0.000000f;
	__Local__50.Tangent.LeaveTangent = -0.000000f;
	auto& __Local__51 = __Local__47[3];
	__Local__51.Value = 0.051269f;
	auto& __Local__52 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__28), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__52), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__53 = TArray<FFrameNumber> ();
	__Local__53.Reserve(4);
	__Local__53.Add(FFrameNumber{});
	__Local__53.Add(FFrameNumber{});
	__Local__53[1].Value = 12000;
	__Local__53.Add(FFrameNumber{});
	__Local__53[2].Value = 21000;
	__Local__53.Add(FFrameNumber{});
	__Local__53[3].Value = 45000;
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__52), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__54 = TArray<FMovieSceneFloatValue> ();
	__Local__54.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__54.GetData(), 4);
	auto& __Local__55 = __Local__54[0];
	__Local__55.Value = 1.000000f;
	auto& __Local__56 = __Local__54[1];
	__Local__56.Value = 1.000000f;
	auto& __Local__57 = __Local__54[2];
	__Local__57.Value = 1.000000f;
	auto& __Local__58 = __Local__54[3];
	__Local__58.Value = 1.000000f;
	__Local__28->Easing.EaseIn = __Local__29;
	__Local__28->Easing.EaseOut = __Local__30;
	__Local__28->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__59 = (*(AccessPrivateProperty<FGuid >((__Local__28), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__59 = FGuid(0xEF4687A4, 0x42A374A4, 0x78E4EF85, 0x52EB99B8);
	__Local__27.Add(__Local__28);
	auto& __Local__60 = (*(AccessPrivateProperty<FGuid >((__Local__25), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__60 = FGuid(0xCBB0F6E1, 0x4FF73C14, 0x735666A4, 0x4A9F4184);
	auto& __Local__61 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__25), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__61.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__61.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__61.Entries.GetData(), 1);
	auto& __Local__62 = __Local__61.Entries[0];
	__Local__62.Section = __Local__28;
	static TWeakFieldPtr<FProperty> __Local__64{};
	const FProperty* __Local__63 = __Local__64.Get();
	if (nullptr == __Local__63)
	{
		__Local__63 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__63);
		__Local__64 = __Local__63;
	}
	auto& __Local__65 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__62.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__67{};
	const FProperty* __Local__66 = __Local__67.Get();
	if (nullptr == __Local__66)
	{
		__Local__66 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__66);
		__Local__67 = __Local__66;
	}
	auto& __Local__68 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__65), 0)));
	__Local__68 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__70{};
	const FProperty* __Local__69 = __Local__70.Get();
	if (nullptr == __Local__69)
	{
		__Local__69 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__69);
		__Local__70 = __Local__69;
	}
	auto& __Local__71 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__62.Range), 0)));
	auto& __Local__72 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__71), 0)));
	__Local__72 = ERangeBoundTypes::Type::Exclusive;
	static TWeakFieldPtr<FProperty> __Local__74{};
	const FProperty* __Local__73 = __Local__74.Get();
	if (nullptr == __Local__73)
	{
		__Local__73 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__73);
		__Local__74 = __Local__73;
	}
	auto& __Local__75 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__71), 0)));
	__Local__75.Value = 45000;
	__Local__62.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__76 = (*(AccessPrivateProperty<FGuid >((__Local__25), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__76 = FGuid(0xCBB0F6E1, 0x4FF73C14, 0x735666A4, 0x4A9F4184);
	__Local__24.Add(__Local__25);
	auto& __Local__77 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__14), UMovieScene::__PPO__PlaybackRange() )));
	__Local__77 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__78 = (*(AccessPrivateProperty<FFrameRate >((__Local__14), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__80{};
	const FProperty* __Local__79 = __Local__80.Get();
	if (nullptr == __Local__79)
	{
		__Local__79 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__79);
		__Local__80 = __Local__79;
	}
	auto& __Local__81 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__78), 0)));
	__Local__81 = 20;
	auto& __Local__82 = (*(AccessPrivateProperty<FGuid >((__Local__14), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__82 = FGuid(0x961E603E, 0x42ABEABF, 0x2984798B, 0x23497757);
	__Local__1->MovieScene = __Local__14;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__83 = __Local__1->AnimationBindings[0];
	__Local__83.WidgetName = FName(TEXT("TextBlock"));
	__Local__83.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__84 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__84 = FString(TEXT("PositiveValueChange"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__85 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__85 = FGuid(0x06B1A33E, 0x4E4424BB, 0x819FA880, 0x06CBAF85);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__86 = NewObject<UMovieScene>(__Local__2, TEXT("NegativeValueChange"), (EObjectFlags)0x00280008);
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__86), UMovieScene::__PPO__Possessables() )));
	__Local__87 = TArray<FMovieScenePossessable> ();
	__Local__87.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__87.GetData(), 1);
	auto& __Local__88 = __Local__87[0];
	auto& __Local__89 = (*(AccessPrivateProperty<FGuid >(&(__Local__88), FMovieScenePossessable::__PPO__Guid() )));
	__Local__89 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__90 = (*(AccessPrivateProperty<FString >(&(__Local__88), FMovieScenePossessable::__PPO__Name() )));
	__Local__90 = FString(TEXT("TextBlock"));
	auto& __Local__91 = (*(AccessPrivateProperty<UClass* >(&(__Local__88), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__91 = UTextBlock::StaticClass();
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__86), UMovieScene::__PPO__ObjectBindings() )));
	__Local__92 = TArray<FMovieSceneBinding> ();
	__Local__92.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__92.GetData(), 1);
	auto& __Local__93 = __Local__92[0];
	auto& __Local__94 = (*(AccessPrivateProperty<FGuid >(&(__Local__93), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__94 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__95 = (*(AccessPrivateProperty<FString >(&(__Local__93), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__95 = FString(TEXT("Text"));
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__93), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__96 = TArray<UMovieSceneTrack*> ();
	__Local__96.Reserve(1);
	auto __Local__97 = NewObject<UMovieSceneColorTrack>(__Local__86, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__98 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__97), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__98.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__98.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__98.bCanUseClassLookup = true;
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__97), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__99 = TArray<UMovieSceneSection*> ();
	__Local__99.Reserve(1);
	auto __Local__100 = NewObject<UMovieSceneColorSection>(__Local__97, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__101 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__100->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__102 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__100->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__101)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__102)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__103 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__100), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__103), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__104 = TArray<FFrameNumber> ();
	__Local__104.Reserve(4);
	__Local__104.Add(FFrameNumber{});
	__Local__104.Add(FFrameNumber{});
	__Local__104[1].Value = 12000;
	__Local__104.Add(FFrameNumber{});
	__Local__104[2].Value = 21000;
	__Local__104.Add(FFrameNumber{});
	__Local__104[3].Value = 45000;
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__103), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__105 = TArray<FMovieSceneFloatValue> ();
	__Local__105.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__105.GetData(), 4);
	auto& __Local__106 = __Local__105[0];
	__Local__106.Value = 0.514918f;
	auto& __Local__107 = __Local__105[1];
	__Local__107.Value = 0.545725f;
	auto& __Local__108 = __Local__105[2];
	__Local__108.Value = 0.545725f;
	auto& __Local__109 = __Local__105[3];
	__Local__109.Value = 0.514918f;
	auto& __Local__110 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__100), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__110), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__111 = TArray<FFrameNumber> ();
	__Local__111.Reserve(4);
	__Local__111.Add(FFrameNumber{});
	__Local__111.Add(FFrameNumber{});
	__Local__111[1].Value = 12000;
	__Local__111.Add(FFrameNumber{});
	__Local__111[2].Value = 21000;
	__Local__111.Add(FFrameNumber{});
	__Local__111[3].Value = 45000;
	auto& __Local__112 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__110), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__112 = TArray<FMovieSceneFloatValue> ();
	__Local__112.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__112.GetData(), 4);
	auto& __Local__113 = __Local__112[0];
	__Local__113.Value = 0.545725f;
	auto& __Local__114 = __Local__112[1];
	__Local__114.Value = 0.056128f;
	auto& __Local__115 = __Local__112[2];
	__Local__115.Value = 0.056128f;
	auto& __Local__116 = __Local__112[3];
	__Local__116.Value = 0.545725f;
	auto& __Local__117 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__100), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__117), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__118 = TArray<FFrameNumber> ();
	__Local__118.Reserve(4);
	__Local__118.Add(FFrameNumber{});
	__Local__118.Add(FFrameNumber{});
	__Local__118[1].Value = 12000;
	__Local__118.Add(FFrameNumber{});
	__Local__118[2].Value = 21000;
	__Local__118.Add(FFrameNumber{});
	__Local__118[3].Value = 45000;
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__117), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__119 = TArray<FMovieSceneFloatValue> ();
	__Local__119.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__119.GetData(), 4);
	auto& __Local__120 = __Local__119[0];
	__Local__120.Value = 0.051269f;
	auto& __Local__121 = __Local__119[1];
	__Local__121.Value = 0.051269f;
	auto& __Local__122 = __Local__119[2];
	__Local__122.Value = 0.051269f;
	auto& __Local__123 = __Local__119[3];
	__Local__123.Value = 0.051269f;
	auto& __Local__124 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__100), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__125 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__124), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__125 = TArray<FFrameNumber> ();
	__Local__125.Reserve(4);
	__Local__125.Add(FFrameNumber{});
	__Local__125.Add(FFrameNumber{});
	__Local__125[1].Value = 12000;
	__Local__125.Add(FFrameNumber{});
	__Local__125[2].Value = 21000;
	__Local__125.Add(FFrameNumber{});
	__Local__125[3].Value = 45000;
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__124), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__126 = TArray<FMovieSceneFloatValue> ();
	__Local__126.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__126.GetData(), 4);
	auto& __Local__127 = __Local__126[0];
	__Local__127.Value = 1.000000f;
	auto& __Local__128 = __Local__126[1];
	__Local__128.Value = 1.000000f;
	auto& __Local__129 = __Local__126[2];
	__Local__129.Value = 1.000000f;
	auto& __Local__130 = __Local__126[3];
	__Local__130.Value = 1.000000f;
	__Local__100->Easing.EaseIn = __Local__101;
	__Local__100->Easing.EaseOut = __Local__102;
	__Local__100->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__131 = (*(AccessPrivateProperty<FGuid >((__Local__100), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__131 = FGuid(0x5CBC04A5, 0x4E2A9072, 0xA557FDB4, 0x8CDF85ED);
	__Local__99.Add(__Local__100);
	auto& __Local__132 = (*(AccessPrivateProperty<FGuid >((__Local__97), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__132 = FGuid(0x02A17717, 0x49D0B1C9, 0x38D1BE91, 0xF5EDBB4A);
	auto& __Local__133 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__97), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__133.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__133.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__133.Entries.GetData(), 1);
	auto& __Local__134 = __Local__133.Entries[0];
	__Local__134.Section = __Local__100;
	auto& __Local__135 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__134.Range), 0)));
	auto& __Local__136 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__135), 0)));
	__Local__136 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__137 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__134.Range), 0)));
	auto& __Local__138 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__137), 0)));
	__Local__138 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__139 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__137), 0)));
	__Local__139.Value = 45000;
	__Local__134.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__140 = (*(AccessPrivateProperty<FGuid >((__Local__97), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__140 = FGuid(0x02A17717, 0x49D0B1C9, 0x38D1BE91, 0xF5EDBB4A);
	__Local__96.Add(__Local__97);
	auto& __Local__141 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__86), UMovieScene::__PPO__PlaybackRange() )));
	__Local__141 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__142 = (*(AccessPrivateProperty<FFrameRate >((__Local__86), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__143 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__142), 0)));
	__Local__143 = 20;
	auto& __Local__144 = (*(AccessPrivateProperty<FGuid >((__Local__86), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__144 = FGuid(0xB6A37D88, 0x487573AF, 0x456F24AA, 0x7434EDE1);
	__Local__2->MovieScene = __Local__86;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__145 = __Local__2->AnimationBindings[0];
	__Local__145.WidgetName = FName(TEXT("TextBlock"));
	__Local__145.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__146 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__146 = FString(TEXT("NegativeValueChange"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__147 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__147 = FGuid(0x266E624E, 0x45EEEFE8, 0x19538FA5, 0x9DC392BC);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__148 = NewObject<UMovieScene>(__Local__3, TEXT("NegativeValueChangeWithDepartureToMinus"), (EObjectFlags)0x00280008);
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__148), UMovieScene::__PPO__Possessables() )));
	__Local__149 = TArray<FMovieScenePossessable> ();
	__Local__149.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__149.GetData(), 1);
	auto& __Local__150 = __Local__149[0];
	auto& __Local__151 = (*(AccessPrivateProperty<FGuid >(&(__Local__150), FMovieScenePossessable::__PPO__Guid() )));
	__Local__151 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__152 = (*(AccessPrivateProperty<FString >(&(__Local__150), FMovieScenePossessable::__PPO__Name() )));
	__Local__152 = FString(TEXT("TextBlock"));
	auto& __Local__153 = (*(AccessPrivateProperty<UClass* >(&(__Local__150), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__153 = UTextBlock::StaticClass();
	auto& __Local__154 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__148), UMovieScene::__PPO__ObjectBindings() )));
	__Local__154 = TArray<FMovieSceneBinding> ();
	__Local__154.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__154.GetData(), 1);
	auto& __Local__155 = __Local__154[0];
	auto& __Local__156 = (*(AccessPrivateProperty<FGuid >(&(__Local__155), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__156 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__157 = (*(AccessPrivateProperty<FString >(&(__Local__155), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__157 = FString(TEXT("Text"));
	auto& __Local__158 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__155), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__158 = TArray<UMovieSceneTrack*> ();
	__Local__158.Reserve(1);
	auto __Local__159 = NewObject<UMovieSceneColorTrack>(__Local__148, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__160 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__159), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__160.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__160.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__160.bCanUseClassLookup = true;
	auto& __Local__161 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__159), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__161 = TArray<UMovieSceneSection*> ();
	__Local__161.Reserve(1);
	auto __Local__162 = NewObject<UMovieSceneColorSection>(__Local__159, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__163 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__162->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__164 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__162->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__163)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__164)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__165 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__162), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__166 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__165), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__166 = TArray<FFrameNumber> ();
	__Local__166.Reserve(4);
	__Local__166.Add(FFrameNumber{});
	__Local__166.Add(FFrameNumber{});
	__Local__166[1].Value = 12000;
	__Local__166.Add(FFrameNumber{});
	__Local__166[2].Value = 21000;
	__Local__166.Add(FFrameNumber{});
	__Local__166[3].Value = 45000;
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__165), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__167 = TArray<FMovieSceneFloatValue> ();
	__Local__167.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__167.GetData(), 4);
	auto& __Local__168 = __Local__167[0];
	__Local__168.Value = 0.514918f;
	auto& __Local__169 = __Local__167[1];
	__Local__169.Value = 0.545725f;
	auto& __Local__170 = __Local__167[2];
	__Local__170.Value = 0.545725f;
	auto& __Local__171 = __Local__167[3];
	__Local__171.Value = 0.545725f;
	auto& __Local__172 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__162), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__173 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__172), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__173 = TArray<FFrameNumber> ();
	__Local__173.Reserve(4);
	__Local__173.Add(FFrameNumber{});
	__Local__173.Add(FFrameNumber{});
	__Local__173[1].Value = 12000;
	__Local__173.Add(FFrameNumber{});
	__Local__173[2].Value = 21000;
	__Local__173.Add(FFrameNumber{});
	__Local__173[3].Value = 45000;
	auto& __Local__174 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__172), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__174 = TArray<FMovieSceneFloatValue> ();
	__Local__174.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__174.GetData(), 4);
	auto& __Local__175 = __Local__174[0];
	__Local__175.Value = 0.545725f;
	auto& __Local__176 = __Local__174[1];
	__Local__176.Value = 0.056128f;
	auto& __Local__177 = __Local__174[2];
	__Local__177.Value = 0.056128f;
	auto& __Local__178 = __Local__174[3];
	__Local__178.Value = 0.152926f;
	auto& __Local__179 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__162), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__180 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__179), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__180 = TArray<FFrameNumber> ();
	__Local__180.Reserve(4);
	__Local__180.Add(FFrameNumber{});
	__Local__180.Add(FFrameNumber{});
	__Local__180[1].Value = 12000;
	__Local__180.Add(FFrameNumber{});
	__Local__180[2].Value = 21000;
	__Local__180.Add(FFrameNumber{});
	__Local__180[3].Value = 45000;
	auto& __Local__181 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__179), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__181 = TArray<FMovieSceneFloatValue> ();
	__Local__181.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__181.GetData(), 4);
	auto& __Local__182 = __Local__181[0];
	__Local__182.Value = 0.051269f;
	auto& __Local__183 = __Local__181[1];
	__Local__183.Value = 0.051269f;
	auto& __Local__184 = __Local__181[2];
	__Local__184.Value = 0.051269f;
	auto& __Local__185 = __Local__181[3];
	__Local__185.Value = 0.072272f;
	auto& __Local__186 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__162), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__187 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__186), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__187 = TArray<FFrameNumber> ();
	__Local__187.Reserve(4);
	__Local__187.Add(FFrameNumber{});
	__Local__187.Add(FFrameNumber{});
	__Local__187[1].Value = 12000;
	__Local__187.Add(FFrameNumber{});
	__Local__187[2].Value = 21000;
	__Local__187.Add(FFrameNumber{});
	__Local__187[3].Value = 45000;
	auto& __Local__188 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__186), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__188 = TArray<FMovieSceneFloatValue> ();
	__Local__188.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__188.GetData(), 4);
	auto& __Local__189 = __Local__188[0];
	__Local__189.Value = 1.000000f;
	auto& __Local__190 = __Local__188[1];
	__Local__190.Value = 1.000000f;
	auto& __Local__191 = __Local__188[2];
	__Local__191.Value = 1.000000f;
	auto& __Local__192 = __Local__188[3];
	__Local__192.Value = 1.000000f;
	__Local__162->Easing.EaseIn = __Local__163;
	__Local__162->Easing.EaseOut = __Local__164;
	__Local__162->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(45000)));
	auto& __Local__193 = (*(AccessPrivateProperty<FGuid >((__Local__162), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__193 = FGuid(0x65EEEB90, 0x4911CDF8, 0xA9471DBF, 0x121793CA);
	__Local__161.Add(__Local__162);
	auto& __Local__194 = (*(AccessPrivateProperty<FGuid >((__Local__159), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__194 = FGuid(0xA4DAC3F4, 0x4BF39338, 0x4FA90A83, 0xB80A9976);
	auto& __Local__195 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__159), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__195.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__195.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__195.Entries.GetData(), 1);
	auto& __Local__196 = __Local__195.Entries[0];
	__Local__196.Section = __Local__162;
	auto& __Local__197 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__196.Range), 0)));
	auto& __Local__198 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__197), 0)));
	__Local__198 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__199 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__196.Range), 0)));
	auto& __Local__200 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__199), 0)));
	__Local__200 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__201 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__199), 0)));
	__Local__201.Value = 45000;
	__Local__196.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__202 = (*(AccessPrivateProperty<FGuid >((__Local__159), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__202 = FGuid(0xA4DAC3F4, 0x4BF39338, 0x4FA90A83, 0xB80A9976);
	__Local__158.Add(__Local__159);
	auto& __Local__203 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__148), UMovieScene::__PPO__PlaybackRange() )));
	__Local__203 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45001)));
	auto& __Local__204 = (*(AccessPrivateProperty<FFrameRate >((__Local__148), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__205 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__204), 0)));
	__Local__205 = 20;
	auto& __Local__206 = (*(AccessPrivateProperty<FGuid >((__Local__148), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__206 = FGuid(0x9167CA0B, 0x4FD2D2C9, 0xA0758E8E, 0x6AE90F84);
	__Local__3->MovieScene = __Local__148;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__207 = __Local__3->AnimationBindings[0];
	__Local__207.WidgetName = FName(TEXT("TextBlock"));
	__Local__207.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__208 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__208 = FString(TEXT("NegativeValueChangeWithDepartureToMinus"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__209 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__209 = FGuid(0x8C42BFCD, 0x40E39533, 0xF0ECCEAD, 0x1F567516);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__210 = NewObject<UMovieScene>(__Local__4, TEXT("NegativeValueChangeWithDepartureFromMinusToMisus"), (EObjectFlags)0x00280008);
	auto& __Local__211 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__210), UMovieScene::__PPO__Possessables() )));
	__Local__211 = TArray<FMovieScenePossessable> ();
	__Local__211.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__211.GetData(), 1);
	auto& __Local__212 = __Local__211[0];
	auto& __Local__213 = (*(AccessPrivateProperty<FGuid >(&(__Local__212), FMovieScenePossessable::__PPO__Guid() )));
	__Local__213 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__214 = (*(AccessPrivateProperty<FString >(&(__Local__212), FMovieScenePossessable::__PPO__Name() )));
	__Local__214 = FString(TEXT("TextBlock"));
	auto& __Local__215 = (*(AccessPrivateProperty<UClass* >(&(__Local__212), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__215 = UTextBlock::StaticClass();
	auto& __Local__216 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__210), UMovieScene::__PPO__ObjectBindings() )));
	__Local__216 = TArray<FMovieSceneBinding> ();
	__Local__216.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__216.GetData(), 1);
	auto& __Local__217 = __Local__216[0];
	auto& __Local__218 = (*(AccessPrivateProperty<FGuid >(&(__Local__217), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__218 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__219 = (*(AccessPrivateProperty<FString >(&(__Local__217), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__219 = FString(TEXT("Text"));
	auto& __Local__220 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__217), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__220 = TArray<UMovieSceneTrack*> ();
	__Local__220.Reserve(1);
	auto __Local__221 = NewObject<UMovieSceneColorTrack>(__Local__210, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__222 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__221), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__222.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__222.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__222.bCanUseClassLookup = true;
	auto& __Local__223 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__221), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__223 = TArray<UMovieSceneSection*> ();
	__Local__223.Reserve(1);
	auto __Local__224 = NewObject<UMovieSceneColorSection>(__Local__221, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__225 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__224->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__226 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__224->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__225)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__226)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__227 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__224), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__228 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__227), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__228 = TArray<FFrameNumber> ();
	__Local__228.Reserve(4);
	__Local__228.Add(FFrameNumber{});
	__Local__228.Add(FFrameNumber{});
	__Local__228[1].Value = 12000;
	__Local__228.Add(FFrameNumber{});
	__Local__228[2].Value = 21000;
	__Local__228.Add(FFrameNumber{});
	__Local__228[3].Value = 45000;
	auto& __Local__229 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__227), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__229 = TArray<FMovieSceneFloatValue> ();
	__Local__229.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__229.GetData(), 4);
	auto& __Local__230 = __Local__229[0];
	__Local__230.Value = 0.545725f;
	auto& __Local__231 = __Local__229[1];
	__Local__231.Value = 0.545725f;
	auto& __Local__232 = __Local__229[2];
	__Local__232.Value = 0.545725f;
	auto& __Local__233 = __Local__229[3];
	__Local__233.Value = 0.545725f;
	auto& __Local__234 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__224), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__235 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__234), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__235 = TArray<FFrameNumber> ();
	__Local__235.Reserve(4);
	__Local__235.Add(FFrameNumber{});
	__Local__235.Add(FFrameNumber{});
	__Local__235[1].Value = 12000;
	__Local__235.Add(FFrameNumber{});
	__Local__235[2].Value = 21000;
	__Local__235.Add(FFrameNumber{});
	__Local__235[3].Value = 45000;
	auto& __Local__236 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__234), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__236 = TArray<FMovieSceneFloatValue> ();
	__Local__236.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__236.GetData(), 4);
	auto& __Local__237 = __Local__236[0];
	__Local__237.Value = 0.152926f;
	auto& __Local__238 = __Local__236[1];
	__Local__238.Value = 0.056128f;
	auto& __Local__239 = __Local__236[2];
	__Local__239.Value = 0.056128f;
	auto& __Local__240 = __Local__236[3];
	__Local__240.Value = 0.152926f;
	auto& __Local__241 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__224), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__242 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__241), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__242 = TArray<FFrameNumber> ();
	__Local__242.Reserve(4);
	__Local__242.Add(FFrameNumber{});
	__Local__242.Add(FFrameNumber{});
	__Local__242[1].Value = 12000;
	__Local__242.Add(FFrameNumber{});
	__Local__242[2].Value = 21000;
	__Local__242.Add(FFrameNumber{});
	__Local__242[3].Value = 45000;
	auto& __Local__243 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__241), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__243 = TArray<FMovieSceneFloatValue> ();
	__Local__243.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__243.GetData(), 4);
	auto& __Local__244 = __Local__243[0];
	__Local__244.Value = 0.070360f;
	auto& __Local__245 = __Local__243[1];
	__Local__245.Value = 0.051269f;
	auto& __Local__246 = __Local__243[2];
	__Local__246.Value = 0.051269f;
	auto& __Local__247 = __Local__243[3];
	__Local__247.Value = 0.072272f;
	auto& __Local__248 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__224), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__249 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__248), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__249 = TArray<FFrameNumber> ();
	__Local__249.Reserve(4);
	__Local__249.Add(FFrameNumber{});
	__Local__249.Add(FFrameNumber{});
	__Local__249[1].Value = 12000;
	__Local__249.Add(FFrameNumber{});
	__Local__249[2].Value = 21000;
	__Local__249.Add(FFrameNumber{});
	__Local__249[3].Value = 45000;
	auto& __Local__250 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__248), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__250 = TArray<FMovieSceneFloatValue> ();
	__Local__250.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__250.GetData(), 4);
	auto& __Local__251 = __Local__250[0];
	__Local__251.Value = 1.000000f;
	auto& __Local__252 = __Local__250[1];
	__Local__252.Value = 1.000000f;
	auto& __Local__253 = __Local__250[2];
	__Local__253.Value = 1.000000f;
	auto& __Local__254 = __Local__250[3];
	__Local__254.Value = 1.000000f;
	__Local__224->Easing.EaseIn = __Local__225;
	__Local__224->Easing.EaseOut = __Local__226;
	__Local__224->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(45000)));
	auto& __Local__255 = (*(AccessPrivateProperty<FGuid >((__Local__224), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__255 = FGuid(0xCC554800, 0x43A89D24, 0xD25877BC, 0x03B7E4C6);
	__Local__223.Add(__Local__224);
	auto& __Local__256 = (*(AccessPrivateProperty<FGuid >((__Local__221), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__256 = FGuid(0xEFA0C0CB, 0x4BA10440, 0x49C7698C, 0xECDE816F);
	auto& __Local__257 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__221), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__257.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__257.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__257.Entries.GetData(), 1);
	auto& __Local__258 = __Local__257.Entries[0];
	__Local__258.Section = __Local__224;
	auto& __Local__259 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__258.Range), 0)));
	auto& __Local__260 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__259), 0)));
	__Local__260 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__261 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__258.Range), 0)));
	auto& __Local__262 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__261), 0)));
	__Local__262 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__263 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__261), 0)));
	__Local__263.Value = 45000;
	__Local__258.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__264 = (*(AccessPrivateProperty<FGuid >((__Local__221), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__264 = FGuid(0xEFA0C0CB, 0x4BA10440, 0x49C7698C, 0xECDE816F);
	__Local__220.Add(__Local__221);
	auto& __Local__265 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__210), UMovieScene::__PPO__PlaybackRange() )));
	__Local__265 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45001)));
	auto& __Local__266 = (*(AccessPrivateProperty<FFrameRate >((__Local__210), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__267 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__266), 0)));
	__Local__267 = 20;
	auto& __Local__268 = (*(AccessPrivateProperty<FGuid >((__Local__210), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__268 = FGuid(0xD04A10C0, 0x4C784EE9, 0x4B8399BD, 0x22253DB2);
	__Local__4->MovieScene = __Local__210;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__269 = __Local__4->AnimationBindings[0];
	__Local__269.WidgetName = FName(TEXT("TextBlock"));
	__Local__269.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__270 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__270 = FString(TEXT("NegativeValueChangeWithDepartureFromMinusToMisus"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__271 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__271 = FGuid(0xFF09A6F0, 0x4ACA7396, 0xB8FBA384, 0xF9445006);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__272 = NewObject<UMovieScene>(__Local__5, TEXT("PositiveValueChangeWithStayingMinus"), (EObjectFlags)0x00280008);
	auto& __Local__273 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__272), UMovieScene::__PPO__Possessables() )));
	__Local__273 = TArray<FMovieScenePossessable> ();
	__Local__273.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__273.GetData(), 1);
	auto& __Local__274 = __Local__273[0];
	auto& __Local__275 = (*(AccessPrivateProperty<FGuid >(&(__Local__274), FMovieScenePossessable::__PPO__Guid() )));
	__Local__275 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__276 = (*(AccessPrivateProperty<FString >(&(__Local__274), FMovieScenePossessable::__PPO__Name() )));
	__Local__276 = FString(TEXT("TextBlock"));
	auto& __Local__277 = (*(AccessPrivateProperty<UClass* >(&(__Local__274), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__277 = UTextBlock::StaticClass();
	auto& __Local__278 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__272), UMovieScene::__PPO__ObjectBindings() )));
	__Local__278 = TArray<FMovieSceneBinding> ();
	__Local__278.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__278.GetData(), 1);
	auto& __Local__279 = __Local__278[0];
	auto& __Local__280 = (*(AccessPrivateProperty<FGuid >(&(__Local__279), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__280 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__281 = (*(AccessPrivateProperty<FString >(&(__Local__279), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__281 = FString(TEXT("Text"));
	auto& __Local__282 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__279), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__282 = TArray<UMovieSceneTrack*> ();
	__Local__282.Reserve(1);
	auto __Local__283 = NewObject<UMovieSceneColorTrack>(__Local__272, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__284 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__283), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__284.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__284.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__284.bCanUseClassLookup = true;
	auto& __Local__285 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__283), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__285 = TArray<UMovieSceneSection*> ();
	__Local__285.Reserve(1);
	auto __Local__286 = NewObject<UMovieSceneColorSection>(__Local__283, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__287 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__286->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__288 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__286->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__287)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__288)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__289 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__286), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__290 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__289), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__290 = TArray<FFrameNumber> ();
	__Local__290.Reserve(4);
	__Local__290.Add(FFrameNumber{});
	__Local__290.Add(FFrameNumber{});
	__Local__290[1].Value = 12000;
	__Local__290.Add(FFrameNumber{});
	__Local__290[2].Value = 21000;
	__Local__290.Add(FFrameNumber{});
	__Local__290[3].Value = 45000;
	auto& __Local__291 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__289), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__291 = TArray<FMovieSceneFloatValue> ();
	__Local__291.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__291.GetData(), 4);
	auto& __Local__292 = __Local__291[0];
	__Local__292.Value = 0.545725f;
	auto& __Local__293 = __Local__291[1];
	__Local__293.Value = 0.149960f;
	auto& __Local__294 = __Local__291[2];
	__Local__294.Value = 0.149960f;
	auto& __Local__295 = __Local__291[3];
	__Local__295.Value = 0.545725f;
	auto& __Local__296 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__286), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__297 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__296), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__297 = TArray<FFrameNumber> ();
	__Local__297.Reserve(4);
	__Local__297.Add(FFrameNumber{});
	__Local__297.Add(FFrameNumber{});
	__Local__297[1].Value = 12000;
	__Local__297.Add(FFrameNumber{});
	__Local__297[2].Value = 21000;
	__Local__297.Add(FFrameNumber{});
	__Local__297[3].Value = 45000;
	auto& __Local__298 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__296), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__298 = TArray<FMovieSceneFloatValue> ();
	__Local__298.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__298.GetData(), 4);
	auto& __Local__299 = __Local__298[0];
	__Local__299.Value = 0.152926f;
	auto& __Local__300 = __Local__298[1];
	__Local__300.Value = 0.545725f;
	auto& __Local__301 = __Local__298[2];
	__Local__301.Value = 0.545725f;
	auto& __Local__302 = __Local__298[3];
	__Local__302.Value = 0.152926f;
	auto& __Local__303 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__286), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__304 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__303), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__304 = TArray<FFrameNumber> ();
	__Local__304.Reserve(4);
	__Local__304.Add(FFrameNumber{});
	__Local__304.Add(FFrameNumber{});
	__Local__304[1].Value = 12000;
	__Local__304.Add(FFrameNumber{});
	__Local__304[2].Value = 21000;
	__Local__304.Add(FFrameNumber{});
	__Local__304[3].Value = 45000;
	auto& __Local__305 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__303), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__305 = TArray<FMovieSceneFloatValue> ();
	__Local__305.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__305.GetData(), 4);
	auto& __Local__306 = __Local__305[0];
	__Local__306.Value = 0.070360f;
	auto& __Local__307 = __Local__305[1];
	__Local__307.Value = 0.090842f;
	auto& __Local__308 = __Local__305[2];
	__Local__308.Value = 0.090842f;
	auto& __Local__309 = __Local__305[3];
	__Local__309.Value = 0.072272f;
	auto& __Local__310 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__286), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__311 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__310), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__311 = TArray<FFrameNumber> ();
	__Local__311.Reserve(4);
	__Local__311.Add(FFrameNumber{});
	__Local__311.Add(FFrameNumber{});
	__Local__311[1].Value = 12000;
	__Local__311.Add(FFrameNumber{});
	__Local__311[2].Value = 21000;
	__Local__311.Add(FFrameNumber{});
	__Local__311[3].Value = 45000;
	auto& __Local__312 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__310), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__312 = TArray<FMovieSceneFloatValue> ();
	__Local__312.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__312.GetData(), 4);
	auto& __Local__313 = __Local__312[0];
	__Local__313.Value = 1.000000f;
	auto& __Local__314 = __Local__312[1];
	__Local__314.Value = 1.000000f;
	auto& __Local__315 = __Local__312[2];
	__Local__315.Value = 1.000000f;
	auto& __Local__316 = __Local__312[3];
	__Local__316.Value = 1.000000f;
	__Local__286->Easing.EaseIn = __Local__287;
	__Local__286->Easing.EaseOut = __Local__288;
	__Local__286->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(45000)));
	auto& __Local__317 = (*(AccessPrivateProperty<FGuid >((__Local__286), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__317 = FGuid(0x6F6D6752, 0x46432248, 0xD8556AAB, 0x6D472064);
	__Local__285.Add(__Local__286);
	auto& __Local__318 = (*(AccessPrivateProperty<FGuid >((__Local__283), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__318 = FGuid(0x8E0C7AFF, 0x4F4C171D, 0xA2499D91, 0xA0256453);
	auto& __Local__319 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__283), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__319.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__319.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__319.Entries.GetData(), 1);
	auto& __Local__320 = __Local__319.Entries[0];
	__Local__320.Section = __Local__286;
	auto& __Local__321 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__320.Range), 0)));
	auto& __Local__322 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__321), 0)));
	__Local__322 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__323 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__320.Range), 0)));
	auto& __Local__324 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__323), 0)));
	__Local__324 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__325 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__323), 0)));
	__Local__325.Value = 45000;
	__Local__320.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__326 = (*(AccessPrivateProperty<FGuid >((__Local__283), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__326 = FGuid(0x8E0C7AFF, 0x4F4C171D, 0xA2499D91, 0xA0256453);
	__Local__282.Add(__Local__283);
	auto& __Local__327 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__272), UMovieScene::__PPO__PlaybackRange() )));
	__Local__327 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45001)));
	auto& __Local__328 = (*(AccessPrivateProperty<FFrameRate >((__Local__272), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__329 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__328), 0)));
	__Local__329 = 20;
	auto& __Local__330 = (*(AccessPrivateProperty<FGuid >((__Local__272), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__330 = FGuid(0xFD5E7A8A, 0x48FD9AAE, 0x40B08D95, 0xFA7DB681);
	__Local__5->MovieScene = __Local__272;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__331 = __Local__5->AnimationBindings[0];
	__Local__331.WidgetName = FName(TEXT("TextBlock"));
	__Local__331.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__332 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__332 = FString(TEXT("PositiveValueChangeWithStayingMinus"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__333 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__333 = FGuid(0x0CE246EA, 0x41F17693, 0x4C447085, 0xFC6F64ED);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
	auto __Local__334 = NewObject<UMovieScene>(__Local__6, TEXT("PositiveValueChangeFromMinus"), (EObjectFlags)0x00280008);
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__334), UMovieScene::__PPO__Possessables() )));
	__Local__335 = TArray<FMovieScenePossessable> ();
	__Local__335.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__335.GetData(), 1);
	auto& __Local__336 = __Local__335[0];
	auto& __Local__337 = (*(AccessPrivateProperty<FGuid >(&(__Local__336), FMovieScenePossessable::__PPO__Guid() )));
	__Local__337 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__338 = (*(AccessPrivateProperty<FString >(&(__Local__336), FMovieScenePossessable::__PPO__Name() )));
	__Local__338 = FString(TEXT("TextBlock"));
	auto& __Local__339 = (*(AccessPrivateProperty<UClass* >(&(__Local__336), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__339 = UTextBlock::StaticClass();
	auto& __Local__340 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__334), UMovieScene::__PPO__ObjectBindings() )));
	__Local__340 = TArray<FMovieSceneBinding> ();
	__Local__340.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__340.GetData(), 1);
	auto& __Local__341 = __Local__340[0];
	auto& __Local__342 = (*(AccessPrivateProperty<FGuid >(&(__Local__341), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__342 = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__343 = (*(AccessPrivateProperty<FString >(&(__Local__341), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__343 = FString(TEXT("Text"));
	auto& __Local__344 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__341), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__344 = TArray<UMovieSceneTrack*> ();
	__Local__344.Reserve(1);
	auto __Local__345 = NewObject<UMovieSceneColorTrack>(__Local__334, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__346 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__345), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__346.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__346.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__346.bCanUseClassLookup = true;
	auto& __Local__347 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__345), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__347 = TArray<UMovieSceneSection*> ();
	__Local__347.Reserve(1);
	auto __Local__348 = NewObject<UMovieSceneColorSection>(__Local__345, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__349 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__348->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__350 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__348->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__349)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__350)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__351 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__348), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__352 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__351), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__352 = TArray<FFrameNumber> ();
	__Local__352.Reserve(4);
	__Local__352.Add(FFrameNumber{});
	__Local__352.Add(FFrameNumber{});
	__Local__352[1].Value = 12000;
	__Local__352.Add(FFrameNumber{});
	__Local__352[2].Value = 21000;
	__Local__352.Add(FFrameNumber{});
	__Local__352[3].Value = 45000;
	auto& __Local__353 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__351), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__353 = TArray<FMovieSceneFloatValue> ();
	__Local__353.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__353.GetData(), 4);
	auto& __Local__354 = __Local__353[0];
	__Local__354.Value = 0.545725f;
	auto& __Local__355 = __Local__353[1];
	__Local__355.Value = 0.151816f;
	auto& __Local__356 = __Local__353[2];
	__Local__356.Value = 0.152926f;
	__Local__356.Tangent.ArriveTangent = 0.000000f;
	__Local__356.Tangent.LeaveTangent = 0.000000f;
	auto& __Local__357 = __Local__353[3];
	__Local__357.Value = 0.514918f;
	auto& __Local__358 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__348), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__359 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__358), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__359 = TArray<FFrameNumber> ();
	__Local__359.Reserve(4);
	__Local__359.Add(FFrameNumber{});
	__Local__359.Add(FFrameNumber{});
	__Local__359[1].Value = 12000;
	__Local__359.Add(FFrameNumber{});
	__Local__359[2].Value = 21000;
	__Local__359.Add(FFrameNumber{});
	__Local__359[3].Value = 45000;
	auto& __Local__360 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__358), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__360 = TArray<FMovieSceneFloatValue> ();
	__Local__360.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__360.GetData(), 4);
	auto& __Local__361 = __Local__360[0];
	__Local__361.Value = 0.152926f;
	auto& __Local__362 = __Local__360[1];
	__Local__362.Value = 0.545725f;
	auto& __Local__363 = __Local__360[2];
	__Local__363.Value = 0.545725f;
	auto& __Local__364 = __Local__360[3];
	__Local__364.Value = 0.545725f;
	auto& __Local__365 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__348), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__366 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__365), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__366 = TArray<FFrameNumber> ();
	__Local__366.Reserve(4);
	__Local__366.Add(FFrameNumber{});
	__Local__366.Add(FFrameNumber{});
	__Local__366[1].Value = 12000;
	__Local__366.Add(FFrameNumber{});
	__Local__366[2].Value = 21000;
	__Local__366.Add(FFrameNumber{});
	__Local__366[3].Value = 45000;
	auto& __Local__367 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__365), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__367 = TArray<FMovieSceneFloatValue> ();
	__Local__367.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__367.GetData(), 4);
	auto& __Local__368 = __Local__367[0];
	__Local__368.Value = 0.070360f;
	auto& __Local__369 = __Local__367[1];
	__Local__369.Value = 0.091808f;
	auto& __Local__370 = __Local__367[2];
	__Local__370.Value = 0.090842f;
	__Local__370.Tangent.ArriveTangent = -0.000000f;
	__Local__370.Tangent.LeaveTangent = -0.000000f;
	auto& __Local__371 = __Local__367[3];
	__Local__371.Value = 0.051269f;
	auto& __Local__372 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__348), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__373 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__372), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__373 = TArray<FFrameNumber> ();
	__Local__373.Reserve(4);
	__Local__373.Add(FFrameNumber{});
	__Local__373.Add(FFrameNumber{});
	__Local__373[1].Value = 12000;
	__Local__373.Add(FFrameNumber{});
	__Local__373[2].Value = 21000;
	__Local__373.Add(FFrameNumber{});
	__Local__373[3].Value = 45000;
	auto& __Local__374 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__372), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__374 = TArray<FMovieSceneFloatValue> ();
	__Local__374.AddUninitialized(4);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__374.GetData(), 4);
	auto& __Local__375 = __Local__374[0];
	__Local__375.Value = 1.000000f;
	auto& __Local__376 = __Local__374[1];
	__Local__376.Value = 1.000000f;
	auto& __Local__377 = __Local__374[2];
	__Local__377.Value = 1.000000f;
	auto& __Local__378 = __Local__374[3];
	__Local__378.Value = 1.000000f;
	__Local__348->Easing.EaseIn = __Local__349;
	__Local__348->Easing.EaseOut = __Local__350;
	__Local__348->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__379 = (*(AccessPrivateProperty<FGuid >((__Local__348), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__379 = FGuid(0xDE854DF5, 0x44B03F1C, 0x0D8685B1, 0x9C07E05F);
	__Local__347.Add(__Local__348);
	auto& __Local__380 = (*(AccessPrivateProperty<FGuid >((__Local__345), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__380 = FGuid(0xE032429B, 0x4759B3B7, 0x978C3BB0, 0x32195A15);
	auto& __Local__381 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__345), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__381.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__381.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__381.Entries.GetData(), 1);
	auto& __Local__382 = __Local__381.Entries[0];
	__Local__382.Section = __Local__348;
	auto& __Local__383 = (*(__Local__63->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__382.Range), 0)));
	auto& __Local__384 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__383), 0)));
	__Local__384 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__385 = (*(__Local__69->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__382.Range), 0)));
	auto& __Local__386 = (*(__Local__66->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__385), 0)));
	__Local__386 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__387 = (*(__Local__73->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__385), 0)));
	__Local__387.Value = 45000;
	__Local__382.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__388 = (*(AccessPrivateProperty<FGuid >((__Local__345), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__388 = FGuid(0xE032429B, 0x4759B3B7, 0x978C3BB0, 0x32195A15);
	__Local__344.Add(__Local__345);
	auto& __Local__389 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__334), UMovieScene::__PPO__PlaybackRange() )));
	__Local__389 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(45000)));
	auto& __Local__390 = (*(AccessPrivateProperty<FFrameRate >((__Local__334), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__391 = (*(__Local__79->ContainerPtrToValuePtr<int32 >(&(__Local__390), 0)));
	__Local__391 = 20;
	auto& __Local__392 = (*(AccessPrivateProperty<FGuid >((__Local__334), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__392 = FGuid(0x49E7C536, 0x4B2EBE88, 0xCA9B6687, 0xE34138C0);
	__Local__6->MovieScene = __Local__334;
	__Local__6->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__6->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__6->AnimationBindings.GetData(), 1);
	auto& __Local__393 = __Local__6->AnimationBindings[0];
	__Local__393.WidgetName = FName(TEXT("TextBlock"));
	__Local__393.AnimationGuid = FGuid(0xA2156699, 0x4A3BE27D, 0xEB3E3FB8, 0x37BEF3EC);
	auto& __Local__394 = (*(AccessPrivateProperty<FString >((__Local__6), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__394 = FString(TEXT("PositiveValueChangeFromMinus"));
	__Local__6->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__395 = (*(AccessPrivateProperty<FGuid >((__Local__6), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__395 = FGuid(0x9950DA85, 0x48BB8FCB, 0xF26E1F83, 0x61C1A683);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__6);
}
PRAGMA_ENABLE_OPTIMIZATION
void UAnimatedNumberTextBlock_C__pf724873442::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__396;
	SlotNames.Append(__Local__396);
}
void UAnimatedNumberTextBlock_C__pf724873442::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__397;
	__Local__397.Reserve(6);
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[5]));
	__Local__397.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[6]));
	TArray<FDelegateRuntimeBinding>  __Local__398;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UAnimatedNumberTextBlock_C__pf724873442::StaticClass())->MiscConvertedSubobjects[0]), __Local__397, __Local__398);
}
void UAnimatedNumberTextBlock_C__pf724873442::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UAnimatedNumberTextBlock_C__pf724873442::bpf__ExecuteUbergraph_AnimatedNumberTextBlock__pf_0(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	int64 bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->SetText(bpv__Text__pf);
	}
	bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
	bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
	bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf = UKismetMathLibrary::Conv_IntToInt64(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf);
	bpv__OldNumber__pf = bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf;
	if (!bpv__IsMultiline__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->UTextBlock::SetAutoWrapText(true);
	}
	return; // KCST_GotoReturn
}
void UAnimatedNumberTextBlock_C__pf724873442::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_AnimatedNumberTextBlock__pf_0(2);
}
void UAnimatedNumberTextBlock_C__pf724873442::bpf__SetValue__pf(int64 bpp__Value__pf, float bpp__DeltaTime__pf)
{
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf{};
	int64 bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf{};
	int64 bpfv__CallFunc_Abs_Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf{};
	bool bpfv__CallFunc_NotEqual_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_3__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Get_Number_Length_Size__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf{};
	FText bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf{};
	FText bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf{};
	int64 bpfv__CallFunc_Subtract_Int64Int64_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int64 bpfv__CallFunc_Abs_Int64_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Conv_Int64ToInt_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor_1__pf{};
	bool bpfv__CallFunc_Greater_Int64Int64_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__AnimationOn__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 2:
			{
				__StateStack.Push(12);
			}
		case 3:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__Timer__pf);
			}
		case 4:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
			}
		case 5:
			{
				UUserWidget::StopAnimation(bpv__NegativeValueChange__pf);
			}
		case 6:
			{
				UUserWidget::StopAnimation(bpv__PositiveValueChangeFromMinus__pf);
			}
		case 7:
			{
				UUserWidget::StopAnimation(bpv__PositiveValueChangeWithStayingMinus__pf);
			}
		case 8:
			{
				UUserWidget::StopAnimation(bpv__PositiveValueChange__pf);
			}
		case 9:
			{
				UUserWidget::StopAnimation(bpv__NegativeValueChangeWithDepartureToMinus__pf);
			}
		case 10:
			{
				UUserWidget::StopAnimation(bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf);
			}
		case 11:
			{
				bpv__AnimationOn__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Subtract_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Subtract_Int64Int64(bpv__OldNumber__pf, bpp__Value__pf);
				bpfv__CallFunc_Abs_Int64_ReturnValue_1__pf = UKismetMathLibrary::Abs_Int64(bpfv__CallFunc_Subtract_Int64Int64_ReturnValue_1__pf);
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_4__pf = UKismetMathLibrary::Less_Int64Int64(bpfv__CallFunc_Abs_Int64_ReturnValue_1__pf, 2147483647);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_4__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_Subtract_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Subtract_Int64Int64(bpv__OldNumber__pf, bpp__Value__pf);
				bpfv__CallFunc_Abs_Int64_ReturnValue_1__pf = UKismetMathLibrary::Abs_Int64(bpfv__CallFunc_Subtract_Int64Int64_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_Int64ToInt_ReturnValue__pf = UKismetMathLibrary::Conv_Int64ToInt(bpfv__CallFunc_Abs_Int64_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Conv_Int64ToInt_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Time__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				bpv__TickDuration__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf;
			}
		case 14:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Less_Int64Int64(bpp__Value__pf, 9999999999);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Less_Int64Int64(bpp__Value__pf, -9999999999);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 16:
			{
				bpv__NewNumber__pf = -9999999999;
			}
		case 17:
			{
				bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Subtract_Int64Int64(bpv__OldNumber__pf, bpv__NewNumber__pf);
				bpfv__CallFunc_Abs_Int64_ReturnValue__pf = UKismetMathLibrary::Abs_Int64(bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf);
				bpv__NumberOfIterations__pf = bpfv__CallFunc_Abs_Int64_ReturnValue__pf;
			}
		case 18:
			{
				bpfv__CallFunc_NotEqual_Int64Int64_ReturnValue__pf = UKismetMathLibrary::NotEqual_Int64Int64(bpv__OldNumber__pf, bpv__NewNumber__pf);
				if (!bpfv__CallFunc_NotEqual_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 19:
			{
				__StateStack.Push(52);
				__StateStack.Push(33);
			}
		case 20:
			{
				if(::IsValid(LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))))
				{
					LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))->bpf__GetxNumberxLength__pfTT(bpv__NumberOfIterations__pf, this, /*out*/ bpfv__CallFunc_Get_Number_Length_Size__pf);
				}
			}
		case 21:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 3);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 55;
					break;
				}
			}
		case 22:
			{
				bpv__ValueOfTheInc__pf = 1;
			}
		case 23:
			{
				bpv__Time__pf = 10.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Time__pf, 2147483648.000000);
				bpv__TickDuration__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
				__CurrentState = 14;
				break;
			}
		case 25:
			{
				bpv__NewNumber__pf = 9999999999;
				__CurrentState = 17;
				break;
			}
		case 26:
			{
				bpv__NewNumber__pf = bpp__Value__pf;
				__CurrentState = 17;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf = UKismetMathLibrary::Less_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 28:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"6F68CAB34D7EFBD4B8C084AC17550E3D\", \"0\")")	));
				}
			}
		case 29:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf = UKismetTextLibrary::Conv_Int64ToText(bpv__NewNumber__pf, false, true, 1, 324);
				UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf, bpv__SeparatingMark__pf, this, /*out*/ bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
			}
		case 31:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				}
			}
		case 32:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__DeltaTime__pf, bpv__TickDuration__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 34;
					break;
				}
				__CurrentState = 27;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__DeltaTime__pf, bpv__TickDuration__pf);
				bpv__TotalTime__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
			}
		case 35:
			{
				bpfv__CallFunc_Greater_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Greater_Int64Int64(bpv__NewNumber__pf, bpv__OldNumber__pf);
				if (!bpfv__CallFunc_Greater_Int64Int64_ReturnValue_1__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 36:
			{
				bpv__i__pf = 0;
			}
		case 37:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("AnimationOfPositiveValueChange")), bpv__TotalTime__pf, true, 0.000000, 0.000000);
			}
		case 38:
			{
				bpv__Timer__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue_1__pf;
			}
		case 39:
			{
				bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Greater_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 40:
			{
				bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_Int64Int64(bpv__OldNumber__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_1__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 41:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf = UUserWidget::PlayAnimation(bpv__PositiveValueChange__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__PositiveValueChangeFromMinus__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__PositiveValueChangeWithStayingMinus__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpv__i__pf = 0;
			}
		case 45:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("AnimationOfNegativeValueChange")), bpv__TotalTime__pf, true, 0.000000, 0.000000);
			}
		case 46:
			{
				bpv__Timer__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
			}
		case 47:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_3__pf = UKismetMathLibrary::Less_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_3__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 48:
			{
				bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_2__pf = UKismetMathLibrary::GreaterEqual_Int64Int64(bpv__OldNumber__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue_2__pf)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 49:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__NegativeValueChangeWithDepartureToMinus__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__NegativeValueChangeWithDepartureFromMinusToMisus__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__NegativeValueChange__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 54;
					break;
				}
			}
		case 53:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.514918,0.545725,0.051269,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->UTextBlock::SetColorAndOpacity(bpfv__K2Node_MakeStruct_SlateColor__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.545725,0.152926,0.072272,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->UTextBlock::SetColorAndOpacity(bpfv__K2Node_MakeStruct_SlateColor_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 55:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 4);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 56:
			{
				bpv__ValueOfTheInc__pf = 3;
			}
		case 57:
			{
				bpv__Time__pf = 13.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_5__pf)
				{
					__CurrentState = 61;
					break;
				}
			}
		case 59:
			{
				bpv__ValueOfTheInc__pf = 6;
			}
		case 60:
			{
				bpv__Time__pf = 55.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 5);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_4__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 62:
			{
				bpv__ValueOfTheInc__pf = 59;
			}
		case 63:
			{
				bpv__Time__pf = 550.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 6);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 67;
					break;
				}
			}
		case 65:
			{
				bpv__ValueOfTheInc__pf = 599;
			}
		case 66:
			{
				bpv__Time__pf = 5500.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 67:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 7);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 70;
					break;
				}
			}
		case 68:
			{
				bpv__ValueOfTheInc__pf = 5999;
			}
		case 69:
			{
				bpv__Time__pf = 66666.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 8);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 73;
					break;
				}
			}
		case 71:
			{
				bpv__ValueOfTheInc__pf = 60006;
			}
		case 72:
			{
				bpv__Time__pf = 666666.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 9);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 74:
			{
				bpv__ValueOfTheInc__pf = 600060;
			}
		case 75:
			{
				bpv__Time__pf = 6666666.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				bpv__ValueOfTheInc__pf = 60006000;
			}
		case 77:
			{
				bpv__Time__pf = 666666688.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UAnimatedNumberTextBlock_C__pf724873442::bpf__AnimationOfPositiveValueChange__pf()
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	int32 bpfv__CallFunc_Get_Number_Length_Size__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf{};
	FText bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf{};
	int64 bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf{};
	int64 bpfv__CallFunc_Add_Int64Int64_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__AnimationOn__pf = true;
			}
		case 2:
			{
				__StateStack.Push(13);
				__StateStack.Push(5);
			}
		case 3:
			{
				bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Add_Int64Int64(bpv__OldNumber__pf, bpv__ValueOfTheInc__pf);
				bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Greater_Int64Int64(bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf, bpv__NewNumber__pf);
				if (!bpfv__CallFunc_Greater_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 4:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Less_Int64Int64(bpv__OldNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"6C17C879425E79C8D386A29E37053226\", \"0\")")	));
				}
			}
		case 7:
			{
				if (!bpv__IsMultiline__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))))
				{
					LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))->bpf__GetxNumberxLength__pfTT(bpv__OldNumber__pf, this, /*out*/ bpfv__CallFunc_Get_Number_Length_Size__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 6);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__TextBlock__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(FVector2D(0.000000,0.000000));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf = UKismetTextLibrary::Conv_Int64ToText(bpv__OldNumber__pf, false, true, 1, 324);
				UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf, bpv__SeparatingMark__pf, this, /*out*/ bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
			}
		case 12:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Add_Int64Int64(bpv__i__pf, bpv__ValueOfTheInc__pf);
				bpv__i__pf = bpfv__CallFunc_Add_Int64Int64_ReturnValue_1__pf;
			}
		case 14:
			{
				bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_Int64Int64(bpv__i__pf, bpv__NumberOfIterations__pf);
				if (!bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpv__i__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Less_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"6F68CAB34D7EFBD4B8C084AC17550E3D\", \"0\")")	));
				}
			}
		case 18:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
			}
		case 19:
			{
				bpv__AnimationOn__pf = false;
			}
		case 20:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__Timer__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = 19;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Add_Int64Int64(bpv__OldNumber__pf, bpv__ValueOfTheInc__pf);
				bpv__OldNumber__pf = bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__TextBlock__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(FVector2D(0.000000,-15.600000));
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
void UAnimatedNumberTextBlock_C__pf724873442::bpf__AnimationOfNegativeValueChange__pf()
{
	FText bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	int32 bpfv__CallFunc_Get_Number_Length_Size__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf{};
	int64 bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf{};
	int64 bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf{};
	bool bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__AnimationOn__pf = true;
			}
		case 2:
			{
				__StateStack.Push(13);
				__StateStack.Push(5);
			}
		case 3:
			{
				bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Subtract_Int64Int64(bpv__OldNumber__pf, bpv__ValueOfTheInc__pf);
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf = UKismetMathLibrary::Less_Int64Int64(bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf, bpv__NewNumber__pf);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_2__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 4:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf = UKismetMathLibrary::Less_Int64Int64(bpv__OldNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue_1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"6C17C879425E79C8D386A29E37053226\", \"0\")")	));
				}
			}
		case 7:
			{
				if (!bpv__IsMultiline__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))))
				{
					LoadObject<UGetNumberLengthInt64_C__pf503790866>(nullptr, TEXT("/Game/Blueprint/GetNumberLengthInt64.Default__GetNumberLengthInt64_C"))->bpf__GetxNumberxLength__pfTT(bpv__OldNumber__pf, this, /*out*/ bpfv__CallFunc_Get_Number_Length_Size__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Get_Number_Length_Size__pf, 6);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__TextBlock__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(FVector2D(0.000000,0.000000));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf = UKismetTextLibrary::Conv_Int64ToText(bpv__OldNumber__pf, false, true, 1, 324);
				UAddingSeparatorsToGroupingNumber_C__pf503790866::bpf__AddingSeparatorsToGroupingNumber__pf(/*out*/ bpfv__CallFunc_Conv_Int64ToText_ReturnValue__pf, bpv__SeparatingMark__pf, this, /*out*/ bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
			}
		case 12:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(bpfv__CallFunc_AddingSeparatorsToGroupingNumber_SeparatingNumber__pf);
				}
				__CurrentState = 7;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Add_Int64Int64(bpv__i__pf, bpv__ValueOfTheInc__pf);
				bpv__i__pf = bpfv__CallFunc_Add_Int64Int64_ReturnValue__pf;
			}
		case 14:
			{
				bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_Int64Int64(bpv__i__pf, bpv__NumberOfIterations__pf);
				if (!bpfv__CallFunc_GreaterEqual_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 15:
			{
				bpv__i__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Less_Int64Int64(bpv__NewNumber__pf, 0);
				if (!bpfv__CallFunc_Less_Int64Int64_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(bpv__TextBlock__pf))
				{
					bpv__TextBlock__pf->SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0F65EE5F4D13A1E4E190B690C60F3733]\", \"6F68CAB34D7EFBD4B8C084AC17550E3D\", \"0\")")	));
				}
			}
		case 18:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
			}
		case 19:
			{
				bpv__AnimationOn__pf = false;
			}
		case 20:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__Timer__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpv__OldNumber__pf = bpv__NewNumber__pf;
				__CurrentState = 19;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf = UKismetMathLibrary::Subtract_Int64Int64(bpv__OldNumber__pf, bpv__ValueOfTheInc__pf);
				bpv__OldNumber__pf = bpfv__CallFunc_Subtract_Int64Int64_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__TextBlock__pf);
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetPosition(FVector2D(0.000000,-15.600000));
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
PRAGMA_DISABLE_OPTIMIZATION
void UAnimatedNumberTextBlock_C__pf724873442::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/Fonts/NumbersFont_Font.NumbersFont_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UAnimatedNumberTextBlock_C__pf724873442::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/GetNumberLengthInt64.GetNumberLengthInt64_C 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/AddingSeparatorsToGroupingNumber.AddingSeparatorsToGroupingNumber_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UAnimatedNumberTextBlock_C__pf724873442
{
	FRegisterHelper__UAnimatedNumberTextBlock_C__pf724873442()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/View/AnimatedNumberTextBlock"), &UAnimatedNumberTextBlock_C__pf724873442::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UAnimatedNumberTextBlock_C__pf724873442 Instance;
};
FRegisterHelper__UAnimatedNumberTextBlock_C__pf724873442 FRegisterHelper__UAnimatedNumberTextBlock_C__pf724873442::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
