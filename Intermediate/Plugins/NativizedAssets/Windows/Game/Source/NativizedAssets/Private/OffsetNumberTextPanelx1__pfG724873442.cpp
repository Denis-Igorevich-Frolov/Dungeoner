#include "NativizedAssets.h"
#include "OffsetNumberTextPanelx1__pfG724873442.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "AnimatedNumberTextBlock__pf724873442.h"
#include "Runtime/UMG/Public/Components/WrapBox.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/EditableText.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
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
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneIntegerTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneIntegerSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneFloatTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneByteTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneByteSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#include "Runtime/Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
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


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UOffsetNumberTextPanelx1_C__pfG724873442::UOffsetNumberTextPanelx1_C__pfG724873442(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__AngleBT__pf = nullptr;
	bpv__AngleLB__pf = nullptr;
	bpv__AngleLT__pf = nullptr;
	bpv__AngleRB__pf = nullptr;
	bpv__Background__pf = nullptr;
	bpv__BorderBottom__pf = nullptr;
	bpv__BorderLeft__pf = nullptr;
	bpv__BorderRight__pf = nullptr;
	bpv__BorderTop__pf = nullptr;
	bpv__CanvasPanel_2__pf = nullptr;
	bpv__Delimiter__pf = nullptr;
	bpv__FocusLossTex__pf = nullptr;
	bpv__GradientL__pf = nullptr;
	bpv__GradientR__pf = nullptr;
	bpv__Shedow__pf = nullptr;
	bpv__Value__pf = nullptr;
	bpv__WrapBox_1__pf = nullptr;
	bpv__Wrapper__pf = nullptr;
	bpv__IsRightMovement__pf = false;
	bpv__PanelIsSkrolling__pf = false;
	bpv__Text__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"C33BE24C4385631D7A14A9BED449B915\", \"0\")")	);
	bpv__IsFocuse__pf = false;
	bpv__MaximumNoScrollingNumber__pf = 6;
	bpv__IsHiddenDelimiter__pf = false;
	bpv__PreviousText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"5690F3814F140609E7FAEAB89E87D968\", \"eee\")")	);
	bpv__TotalValue__pf = 0;
	bpv__ValueInt__pf = 0;
	bpv__TotalIncrease__pf = 0;
	bpv__NewVar_0__pf = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOffsetNumberTextPanelx1_C__pfG724873442::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOffsetNumberTextPanelx1_C__pfG724873442::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UAnimatedNumberTextBlock_C__pf724873442::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("ShowGradient_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("HideGradient_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("HiddenDelimiter_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[0];
	__Local__5.ComponentPropertyName = FName(TEXT("Value"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnTextCommitted"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[1];
	__Local__6.ComponentPropertyName = FName(TEXT("Value"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnTextChanged"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Right = 92.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, TEXT("Wrapper"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(2);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -2.000000f;
	__Local__12->LayoutData.Offsets.Right = 2.000000f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__12->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__1, TEXT("Delimiter"), (EObjectFlags)0x00280008);
	__Local__13->Brush.ImageSize = FVector2D(1.000000, 32.000000);
	__Local__13->ColorAndOpacity = FLinearColor(0.080220, 0.088656, 0.010330, 1.000000);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Right = 82.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__14->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__10;
	auto __Local__15 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_2"), (EObjectFlags)0x00280008);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(14);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = 10.000000f;
	__Local__17->LayoutData.Offsets.Top = 10.000000f;
	__Local__17->LayoutData.Offsets.Right = -10.000000f;
	__Local__17->LayoutData.Offsets.Bottom = -10.000000f;
	__Local__17->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UImage>(__Local__1, TEXT("Shedow"), (EObjectFlags)0x00280008);
	__Local__18->Brush.Margin.Left = 0.500000f;
	__Local__18->Brush.Margin.Top = 0.500000f;
	__Local__18->Brush.Margin.Right = 0.500000f;
	__Local__18->Brush.Margin.Bottom = 0.500000f;
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__18->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(0.000000, 0.000000, 0.000000, 0.578000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__18->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__18->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.624000);
	__Local__18->Slot = __Local__17;
	__Local__18->Visibility = ESlateVisibility::Hidden;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Right = 0.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__21->Parent = __Local__15;
	auto __Local__22 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__22->Brush.Margin.Left = 0.500000f;
	__Local__22->Brush.Margin.Top = 0.500000f;
	__Local__22->Brush.Margin.Right = 0.500000f;
	__Local__22->Brush.Margin.Bottom = 0.500000f;
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.028426, 0.009134, 0.018500, 1.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__22->Slot = __Local__21;
	__Local__22->Visibility = ESlateVisibility::Hidden;
	__Local__21->Content = __Local__22;
	__Local__16.Add(__Local__21);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__25->LayoutData.Offsets.Left = 14.000000f;
	__Local__25->LayoutData.Offsets.Right = 14.000000f;
	__Local__25->LayoutData.Offsets.Bottom = 1.000000f;
	__Local__25->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__25->Parent = __Local__15;
	auto __Local__26 = NewObject<UImage>(__Local__1, TEXT("BorderTop"), (EObjectFlags)0x00280008);
	__Local__26->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__26->ColorAndOpacity = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__26->Slot = __Local__25;
	__Local__26->Visibility = ESlateVisibility::Hidden;
	__Local__25->Content = __Local__26;
	__Local__16.Add(__Local__25);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = 14.000000f;
	__Local__27->LayoutData.Offsets.Right = 14.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 1.000000f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__27->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__27->Parent = __Local__15;
	auto __Local__28 = NewObject<UImage>(__Local__1, TEXT("BorderBottom"), (EObjectFlags)0x00280008);
	__Local__28->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__28->ColorAndOpacity = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__28->Slot = __Local__27;
	__Local__28->Visibility = ESlateVisibility::Hidden;
	__Local__27->Content = __Local__28;
	__Local__16.Add(__Local__27);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Top = 14.000000f;
	__Local__29->LayoutData.Offsets.Right = 1.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__29->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__29->Parent = __Local__15;
	auto __Local__30 = NewObject<UImage>(__Local__1, TEXT("BorderLeft"), (EObjectFlags)0x00280008);
	__Local__30->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__30->ColorAndOpacity = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__30->Slot = __Local__29;
	__Local__30->Visibility = ESlateVisibility::Hidden;
	__Local__29->Content = __Local__30;
	__Local__16.Add(__Local__29);
	auto __Local__31 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__31->LayoutData.Offsets.Top = 14.000000f;
	__Local__31->LayoutData.Offsets.Right = 1.000000f;
	__Local__31->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__31->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__31->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__31->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__31->Parent = __Local__15;
	auto __Local__32 = NewObject<UImage>(__Local__1, TEXT("BorderRight"), (EObjectFlags)0x00280008);
	__Local__32->Brush.DrawAs = ESlateBrushDrawType::Type::Box;
	__Local__32->ColorAndOpacity = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	__Local__32->Slot = __Local__31;
	__Local__32->Visibility = ESlateVisibility::Hidden;
	__Local__31->Content = __Local__32;
	__Local__16.Add(__Local__31);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Right = 14.000000f;
	__Local__33->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__33->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__33->bAutoSize = true;
	__Local__33->Parent = __Local__15;
	auto __Local__34 = NewObject<UImage>(__Local__1, TEXT("AngleLB"), (EObjectFlags)0x00280008);
	__Local__34->Brush.ImageSize = FVector2D(14.000000, 14.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__34->Slot = __Local__33;
	__Local__34->Visibility = ESlateVisibility::Hidden;
	__Local__33->Content = __Local__34;
	__Local__16.Add(__Local__33);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_8"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Right = 14.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__36->bAutoSize = true;
	__Local__36->Parent = __Local__15;
	auto __Local__37 = NewObject<UImage>(__Local__1, TEXT("AngleLT"), (EObjectFlags)0x00280008);
	__Local__37->Brush.ImageSize = FVector2D(14.000000, 14.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__37->RenderTransform.Angle = 90.000000f;
	__Local__37->Visibility = ESlateVisibility::Hidden;
	__Local__36->Content = __Local__37;
	__Local__16.Add(__Local__36);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Right = 14.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__39->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__39->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__39->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__39->bAutoSize = true;
	__Local__39->Parent = __Local__15;
	auto __Local__40 = NewObject<UImage>(__Local__1, TEXT("AngleRB"), (EObjectFlags)0x00280008);
	__Local__40->Brush.ImageSize = FVector2D(14.000000, 14.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__40->RenderTransform.Angle = -90.000000f;
	__Local__40->Visibility = ESlateVisibility::Hidden;
	__Local__39->Content = __Local__40;
	__Local__16.Add(__Local__39);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Right = 14.000000f;
	__Local__42->LayoutData.Offsets.Bottom = 14.000000f;
	__Local__42->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__42->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__42->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__42->bAutoSize = true;
	__Local__42->Parent = __Local__15;
	auto __Local__43 = NewObject<UImage>(__Local__1, TEXT("AngleBT"), (EObjectFlags)0x00280008);
	__Local__43->Brush.ImageSize = FVector2D(14.000000, 14.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__43->Slot = __Local__42;
	__Local__43->RenderTransform.Angle = -180.000000f;
	__Local__43->Visibility = ESlateVisibility::Hidden;
	__Local__42->Content = __Local__43;
	__Local__16.Add(__Local__42);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = 7.000000f;
	__Local__45->LayoutData.Offsets.Right = 7.000000f;
	__Local__45->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__45->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__45->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__45->bAutoSize = true;
	__Local__45->Parent = __Local__15;
	auto __Local__46 = NewObject<UAnimatedNumberTextBlock_C__pf724873442>(__Local__1, TEXT("FocusLossTex"), (EObjectFlags)0x00280008);
	__Local__46->bpv__IsMultiline__pf = false;
	__Local__46->bpv__SeparatingMark__pf = FString(TEXT(""));
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__16.Add(__Local__45);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_17"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Top = 7.000000f;
	__Local__47->LayoutData.Offsets.Right = 15.000000f;
	__Local__47->LayoutData.Offsets.Bottom = 26.000000f;
	__Local__47->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__47->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__47->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__47->ZOrder = -1;
	__Local__47->Parent = __Local__15;
	auto __Local__48 = NewObject<UImage>(__Local__1, TEXT("GradientR"), (EObjectFlags)0x00280008);
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__48->Slot = __Local__47;
	__Local__48->RenderOpacity = 0.000000f;
	__Local__47->Content = __Local__48;
	__Local__16.Add(__Local__47);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Top = 7.000000f;
	__Local__50->LayoutData.Offsets.Right = 16.000000f;
	__Local__50->LayoutData.Offsets.Bottom = 24.000000f;
	__Local__50->ZOrder = -1;
	__Local__50->Parent = __Local__15;
	auto __Local__51 = NewObject<UImage>(__Local__1, TEXT("GradientL"), (EObjectFlags)0x00280008);
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__51->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__51->Slot = __Local__50;
	__Local__51->RenderTransform.Angle = 180.000000f;
	__Local__51->RenderOpacity = 0.000000f;
	__Local__50->Content = __Local__51;
	__Local__16.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Top = 2.021252f;
	__Local__53->LayoutData.Offsets.Right = 0.000000f;
	__Local__53->LayoutData.Offsets.Bottom = 27.489491f;
	__Local__53->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__53->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__53->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__53->bAutoSize = true;
	__Local__53->ZOrder = 1;
	__Local__53->Parent = __Local__15;
	auto __Local__54 = NewObject<UWrapBox>(__Local__1, TEXT("WrapBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(1);
	auto __Local__56 = NewObject<UWrapBoxSlot>(__Local__54, TEXT("WrapBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__56->Padding.Left = 6.000000f;
	__Local__56->Padding.Right = 6.000000f;
	__Local__56->bFillEmptySpace = true;
	__Local__56->Parent = __Local__54;
	auto __Local__57 = NewObject<UEditableText>(__Local__1, TEXT("Value"), (EObjectFlags)0x00280008);
	__Local__57->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"9410514C4B74D7D475B3D9B2221C43B1\", \"0\")")	);
	__Local__57->WidgetStyle.Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__57->WidgetStyle.Font.OutlineSettings.OutlineSize = 1;
	__Local__57->WidgetStyle.Font.OutlineSettings.OutlineColor = FLinearColor(0.030713, 0.025187, 0.009134, 1.000000);
	__Local__57->WidgetStyle.Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__57->WidgetStyle.Font.Size = 19;
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.514918, 0.545725, 0.051269, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__57->WidgetStyle.ColorAndOpacity), FSlateColor::__PPO__ColorUseRule() )));
	__Local__59 = ESlateColorStylingMode::Type::UseColor_Specified;
	__Local__57->RevertTextOnEscape = true;
	__Local__57->KeyboardType = EVirtualKeyboardType::Type::Number;
	__Local__57->Justification = ETextJustify::Type::Center;
	__Local__57->Slot = __Local__56;
	__Local__57->bOverride_Cursor = true;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	__Local__54->Slot = __Local__53;
	__Local__54->bIsVariable = true;
	__Local__53->Content = __Local__54;
	__Local__16.Add(__Local__53);
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__15->Clipping = EWidgetClipping::ClipToBounds;
	__Local__14->Content = __Local__15;
	__Local__11.Add(__Local__14);
	__Local__10->Slot = __Local__9;
	__Local__10->bIsVariable = true;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__1->RootWidget = __Local__7;
	auto __Local__60 = NewObject<UMovieScene>(__Local__2, TEXT("ShowGradient"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__60), UMovieScene::__PPO__Possessables() )));
	__Local__61 = TArray<FMovieScenePossessable> ();
	__Local__61.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__61.GetData(), 4);
	auto& __Local__62 = __Local__61[0];
	auto& __Local__63 = (*(AccessPrivateProperty<FGuid >(&(__Local__62), FMovieScenePossessable::__PPO__Guid() )));
	__Local__63 = FGuid(0xE563D0BB, 0x4033CFF1, 0x1B741397, 0xBCD86A93);
	auto& __Local__64 = (*(AccessPrivateProperty<FString >(&(__Local__62), FMovieScenePossessable::__PPO__Name() )));
	__Local__64 = FString(TEXT("CanvasPanelSlot_17"));
	auto& __Local__65 = (*(AccessPrivateProperty<UClass* >(&(__Local__62), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__65 = UCanvasPanelSlot::StaticClass();
	auto& __Local__66 = (*(AccessPrivateProperty<FGuid >(&(__Local__62), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__66 = FGuid(0x8C852363, 0x4EC2FF5A, 0x869DE8A8, 0xF1DFE2FD);
	auto& __Local__67 = __Local__61[1];
	auto& __Local__68 = (*(AccessPrivateProperty<FGuid >(&(__Local__67), FMovieScenePossessable::__PPO__Guid() )));
	__Local__68 = FGuid(0x8C852363, 0x4EC2FF5A, 0x869DE8A8, 0xF1DFE2FD);
	auto& __Local__69 = (*(AccessPrivateProperty<FString >(&(__Local__67), FMovieScenePossessable::__PPO__Name() )));
	__Local__69 = FString(TEXT("GradientR"));
	auto& __Local__70 = (*(AccessPrivateProperty<UClass* >(&(__Local__67), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__70 = UImage::StaticClass();
	auto& __Local__71 = __Local__61[2];
	auto& __Local__72 = (*(AccessPrivateProperty<FGuid >(&(__Local__71), FMovieScenePossessable::__PPO__Guid() )));
	__Local__72 = FGuid(0xE664631E, 0x4D2BC7A9, 0xFDA30183, 0xAFDCE9BA);
	auto& __Local__73 = (*(AccessPrivateProperty<FString >(&(__Local__71), FMovieScenePossessable::__PPO__Name() )));
	__Local__73 = FString(TEXT("CanvasPanelSlot_18"));
	auto& __Local__74 = (*(AccessPrivateProperty<UClass* >(&(__Local__71), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__74 = UCanvasPanelSlot::StaticClass();
	auto& __Local__75 = (*(AccessPrivateProperty<FGuid >(&(__Local__71), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__75 = FGuid(0x9A5D132D, 0x4824F936, 0xD321EF8A, 0xF6988B5C);
	auto& __Local__76 = __Local__61[3];
	auto& __Local__77 = (*(AccessPrivateProperty<FGuid >(&(__Local__76), FMovieScenePossessable::__PPO__Guid() )));
	__Local__77 = FGuid(0x9A5D132D, 0x4824F936, 0xD321EF8A, 0xF6988B5C);
	auto& __Local__78 = (*(AccessPrivateProperty<FString >(&(__Local__76), FMovieScenePossessable::__PPO__Name() )));
	__Local__78 = FString(TEXT("GradientL"));
	auto& __Local__79 = (*(AccessPrivateProperty<UClass* >(&(__Local__76), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__79 = UImage::StaticClass();
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__60), UMovieScene::__PPO__ObjectBindings() )));
	__Local__80 = TArray<FMovieSceneBinding> ();
	__Local__80.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__80.GetData(), 4);
	auto& __Local__81 = __Local__80[0];
	auto& __Local__82 = (*(AccessPrivateProperty<FGuid >(&(__Local__81), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__82 = FGuid(0xE563D0BB, 0x4033CFF1, 0x1B741397, 0xBCD86A93);
	auto& __Local__83 = (*(AccessPrivateProperty<FString >(&(__Local__81), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__83 = FString(TEXT("CanvasPanelSlot_17"));
	auto& __Local__84 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__81), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__84 = TArray<UMovieSceneTrack*> ();
	__Local__84.Reserve(1);
	auto __Local__85 = NewObject<UMovieSceneIntegerTrack>(__Local__60, TEXT("MovieSceneIntegerTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__86 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__85), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__86.PropertyName = FName(TEXT("ZOrder"));
	__Local__86.PropertyPath = FName(TEXT("ZOrder"));
	__Local__86.bCanUseClassLookup = true;
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__85), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__87 = TArray<UMovieSceneSection*> ();
	__Local__87.Reserve(1);
	auto __Local__88 = NewObject<UMovieSceneIntegerSection>(__Local__85, TEXT("MovieSceneIntegerSection_0"), (EObjectFlags)0x00280008);
	auto __Local__89 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__88->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__90 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__88->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__89)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__90)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__91 = (*(AccessPrivateProperty<FMovieSceneIntegerChannel >((__Local__88), UMovieSceneIntegerSection::__PPO__IntegerCurve() )));
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__91), FMovieSceneIntegerChannel::__PPO__Times() )));
	__Local__92 = TArray<FFrameNumber> ();
	__Local__92.Reserve(1);
	__Local__92.Add(FFrameNumber{});
	auto& __Local__93 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__91), FMovieSceneIntegerChannel::__PPO__Values() )));
	__Local__93 = TArray<int32> ();
	__Local__93.Reserve(1);
	__Local__93.Add(1);
	__Local__88->Easing.EaseIn = __Local__89;
	__Local__88->Easing.EaseOut = __Local__90;
	auto& __Local__94 = (*(AccessPrivateProperty<FGuid >((__Local__88), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__94 = FGuid(0xC81BBD53, 0x4B5FF530, 0x2DE6E7BE, 0xC782CB08);
	__Local__87.Add(__Local__88);
	auto& __Local__95 = (*(AccessPrivateProperty<FGuid >((__Local__85), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__95 = FGuid(0x376E7BBA, 0x49E5A86A, 0x751DAE8B, 0xEA1EFD48);
	auto& __Local__96 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__85), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__96.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__96.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__96.Entries.GetData(), 1);
	auto& __Local__97 = __Local__96.Entries[0];
	__Local__97.Section = __Local__88;
	static TWeakFieldPtr<FProperty> __Local__99{};
	const FProperty* __Local__98 = __Local__99.Get();
	if (nullptr == __Local__98)
	{
		__Local__98 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__98);
		__Local__99 = __Local__98;
	}
	auto& __Local__100 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__97.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__102{};
	const FProperty* __Local__101 = __Local__102.Get();
	if (nullptr == __Local__101)
	{
		__Local__101 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__101);
		__Local__102 = __Local__101;
	}
	auto& __Local__103 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__100), 0)));
	__Local__103 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__105{};
	const FProperty* __Local__104 = __Local__105.Get();
	if (nullptr == __Local__104)
	{
		__Local__104 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__104);
		__Local__105 = __Local__104;
	}
	auto& __Local__106 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__97.Range), 0)));
	auto& __Local__107 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__106), 0)));
	__Local__107 = ERangeBoundTypes::Type::Inclusive;
	__Local__97.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__108 = (*(AccessPrivateProperty<FGuid >((__Local__85), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__108 = FGuid(0x376E7BBA, 0x49E5A86A, 0x751DAE8B, 0xEA1EFD48);
	__Local__84.Add(__Local__85);
	auto& __Local__109 = __Local__80[1];
	auto& __Local__110 = (*(AccessPrivateProperty<FGuid >(&(__Local__109), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__110 = FGuid(0x8C852363, 0x4EC2FF5A, 0x869DE8A8, 0xF1DFE2FD);
	auto& __Local__111 = (*(AccessPrivateProperty<FString >(&(__Local__109), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__111 = FString(TEXT("GradientL"));
	auto& __Local__112 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__109), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__112 = TArray<UMovieSceneTrack*> ();
	__Local__112.Reserve(1);
	auto __Local__113 = NewObject<UMovieSceneFloatTrack>(__Local__60, TEXT("MovieSceneFloatTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__114 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__113), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__114.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__114.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__114.bCanUseClassLookup = true;
	auto& __Local__115 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__113), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__115 = TArray<UMovieSceneSection*> ();
	__Local__115.Reserve(1);
	auto __Local__116 = NewObject<UMovieSceneFloatSection>(__Local__113, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__117 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__116->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__118 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__116->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__117)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__118)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__119 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__116), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__120 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__119), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__120 = TArray<FFrameNumber> ();
	__Local__120.Reserve(1);
	__Local__120.Add(FFrameNumber{});
	auto& __Local__121 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__119), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__121 = TArray<FMovieSceneFloatValue> ();
	__Local__121.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__121.GetData(), 1);
	auto& __Local__122 = __Local__121[0];
	__Local__122.Value = 1.000000f;
	__Local__116->Easing.EaseIn = __Local__117;
	__Local__116->Easing.EaseOut = __Local__118;
	auto& __Local__123 = (*(AccessPrivateProperty<FGuid >((__Local__116), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__123 = FGuid(0x9D1EDE68, 0x447017BB, 0x09DED9BA, 0xF9306038);
	__Local__115.Add(__Local__116);
	auto& __Local__124 = (*(AccessPrivateProperty<FGuid >((__Local__113), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__124 = FGuid(0x3F2ED6F0, 0x48FD22A2, 0x65A6BEA7, 0x7CED9B73);
	auto& __Local__125 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__113), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__125.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__125.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__125.Entries.GetData(), 1);
	auto& __Local__126 = __Local__125.Entries[0];
	__Local__126.Section = __Local__116;
	auto& __Local__127 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__126.Range), 0)));
	auto& __Local__128 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__127), 0)));
	__Local__128 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__129 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__126.Range), 0)));
	auto& __Local__130 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__129), 0)));
	__Local__130 = ERangeBoundTypes::Type::Inclusive;
	__Local__126.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__131 = (*(AccessPrivateProperty<FGuid >((__Local__113), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__131 = FGuid(0x3F2ED6F0, 0x48FD22A2, 0x65A6BEA7, 0x7CED9B73);
	__Local__112.Add(__Local__113);
	auto& __Local__132 = __Local__80[2];
	auto& __Local__133 = (*(AccessPrivateProperty<FGuid >(&(__Local__132), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__133 = FGuid(0xE664631E, 0x4D2BC7A9, 0xFDA30183, 0xAFDCE9BA);
	auto& __Local__134 = (*(AccessPrivateProperty<FString >(&(__Local__132), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__134 = FString(TEXT("CanvasPanelSlot_18"));
	auto& __Local__135 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__132), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__135 = TArray<UMovieSceneTrack*> ();
	__Local__135.Reserve(1);
	auto __Local__136 = NewObject<UMovieSceneIntegerTrack>(__Local__60, TEXT("MovieSceneIntegerTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__137 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__136), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__137.PropertyName = FName(TEXT("ZOrder"));
	__Local__137.PropertyPath = FName(TEXT("ZOrder"));
	__Local__137.bCanUseClassLookup = true;
	auto& __Local__138 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__136), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__138 = TArray<UMovieSceneSection*> ();
	__Local__138.Reserve(1);
	auto __Local__139 = NewObject<UMovieSceneIntegerSection>(__Local__136, TEXT("MovieSceneIntegerSection_0"), (EObjectFlags)0x00280008);
	auto __Local__140 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__139->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__141 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__139->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__140)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__141)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__142 = (*(AccessPrivateProperty<FMovieSceneIntegerChannel >((__Local__139), UMovieSceneIntegerSection::__PPO__IntegerCurve() )));
	auto& __Local__143 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__142), FMovieSceneIntegerChannel::__PPO__Times() )));
	__Local__143 = TArray<FFrameNumber> ();
	__Local__143.Reserve(1);
	__Local__143.Add(FFrameNumber{});
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__142), FMovieSceneIntegerChannel::__PPO__Values() )));
	__Local__144 = TArray<int32> ();
	__Local__144.Reserve(1);
	__Local__144.Add(1);
	__Local__139->Easing.EaseIn = __Local__140;
	__Local__139->Easing.EaseOut = __Local__141;
	auto& __Local__145 = (*(AccessPrivateProperty<FGuid >((__Local__139), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__145 = FGuid(0x20C9F619, 0x43BAB028, 0xE49FE89B, 0x5A98A9D8);
	__Local__138.Add(__Local__139);
	auto& __Local__146 = (*(AccessPrivateProperty<FGuid >((__Local__136), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__146 = FGuid(0x8C753A9A, 0x4083F28A, 0x513386BD, 0xFF67F747);
	auto& __Local__147 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__136), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__147.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__147.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__147.Entries.GetData(), 1);
	auto& __Local__148 = __Local__147.Entries[0];
	__Local__148.Section = __Local__139;
	auto& __Local__149 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__148.Range), 0)));
	auto& __Local__150 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__149), 0)));
	__Local__150 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__151 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__148.Range), 0)));
	auto& __Local__152 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__151), 0)));
	__Local__152 = ERangeBoundTypes::Type::Inclusive;
	__Local__148.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >((__Local__136), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__153 = FGuid(0x8C753A9A, 0x4083F28A, 0x513386BD, 0xFF67F747);
	__Local__135.Add(__Local__136);
	auto& __Local__154 = __Local__80[3];
	auto& __Local__155 = (*(AccessPrivateProperty<FGuid >(&(__Local__154), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__155 = FGuid(0x9A5D132D, 0x4824F936, 0xD321EF8A, 0xF6988B5C);
	auto& __Local__156 = (*(AccessPrivateProperty<FString >(&(__Local__154), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__156 = FString(TEXT("GradientR"));
	auto& __Local__157 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__154), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__157 = TArray<UMovieSceneTrack*> ();
	__Local__157.Reserve(1);
	auto __Local__158 = NewObject<UMovieSceneFloatTrack>(__Local__60, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__159 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__158), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__159.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__159.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__159.bCanUseClassLookup = true;
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__158), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__160 = TArray<UMovieSceneSection*> ();
	__Local__160.Reserve(1);
	auto __Local__161 = NewObject<UMovieSceneFloatSection>(__Local__158, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__162 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__163 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__162)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__163)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__164 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__161), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__164), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__165 = TArray<FFrameNumber> ();
	__Local__165.Reserve(1);
	__Local__165.Add(FFrameNumber{});
	auto& __Local__166 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__164), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__166 = TArray<FMovieSceneFloatValue> ();
	__Local__166.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__166.GetData(), 1);
	auto& __Local__167 = __Local__166[0];
	__Local__167.Value = 1.000000f;
	__Local__161->Easing.EaseIn = __Local__162;
	__Local__161->Easing.EaseOut = __Local__163;
	auto& __Local__168 = (*(AccessPrivateProperty<FGuid >((__Local__161), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__168 = FGuid(0x18B775F7, 0x47D82E56, 0xAB312A87, 0xE239D609);
	__Local__160.Add(__Local__161);
	auto& __Local__169 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__169 = FGuid(0x2D900B23, 0x49974941, 0xA0AF7C8D, 0x3068BD57);
	auto& __Local__170 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__158), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__170.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__170.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__170.Entries.GetData(), 1);
	auto& __Local__171 = __Local__170.Entries[0];
	__Local__171.Section = __Local__161;
	auto& __Local__172 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__171.Range), 0)));
	auto& __Local__173 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__172), 0)));
	__Local__173 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__174 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__171.Range), 0)));
	auto& __Local__175 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__174), 0)));
	__Local__175 = ERangeBoundTypes::Type::Inclusive;
	__Local__171.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__176 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__176 = FGuid(0x2D900B23, 0x49974941, 0xA0AF7C8D, 0x3068BD57);
	__Local__157.Add(__Local__158);
	auto& __Local__177 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__60), UMovieScene::__PPO__PlaybackRange() )));
	__Local__177 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(300001)));
	auto& __Local__178 = (*(AccessPrivateProperty<FFrameRate >((__Local__60), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__180{};
	const FProperty* __Local__179 = __Local__180.Get();
	if (nullptr == __Local__179)
	{
		__Local__179 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__179);
		__Local__180 = __Local__179;
	}
	auto& __Local__181 = (*(__Local__179->ContainerPtrToValuePtr<int32 >(&(__Local__178), 0)));
	__Local__181 = 20;
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >((__Local__60), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__182 = FGuid(0xE46A36CF, 0x4371C887, 0xE8FD67A7, 0x96741BD1);
	__Local__2->MovieScene = __Local__60;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 4);
	auto& __Local__183 = __Local__2->AnimationBindings[0];
	__Local__183.WidgetName = FName(TEXT("GradientR"));
	__Local__183.AnimationGuid = FGuid(0x8C852363, 0x4EC2FF5A, 0x869DE8A8, 0xF1DFE2FD);
	auto& __Local__184 = __Local__2->AnimationBindings[1];
	__Local__184.WidgetName = FName(TEXT("GradientR"));
	__Local__184.SlotWidgetName = FName(TEXT("CanvasPanelSlot_17"));
	__Local__184.AnimationGuid = FGuid(0xE563D0BB, 0x4033CFF1, 0x1B741397, 0xBCD86A93);
	auto& __Local__185 = __Local__2->AnimationBindings[2];
	__Local__185.WidgetName = FName(TEXT("GradientL"));
	__Local__185.AnimationGuid = FGuid(0x9A5D132D, 0x4824F936, 0xD321EF8A, 0xF6988B5C);
	auto& __Local__186 = __Local__2->AnimationBindings[3];
	__Local__186.WidgetName = FName(TEXT("GradientL"));
	__Local__186.SlotWidgetName = FName(TEXT("CanvasPanelSlot_18"));
	__Local__186.AnimationGuid = FGuid(0xE664631E, 0x4D2BC7A9, 0xFDA30183, 0xAFDCE9BA);
	auto& __Local__187 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__187 = FString(TEXT("ShowGradient"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__188 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__188 = FGuid(0xEC6BD5E2, 0x46B8D1E0, 0x030D4F9E, 0xE485215D);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__189 = NewObject<UMovieScene>(__Local__3, TEXT("HideGradient"), (EObjectFlags)0x00280008);
	auto& __Local__190 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__189), UMovieScene::__PPO__Possessables() )));
	__Local__190 = TArray<FMovieScenePossessable> ();
	__Local__190.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__190.GetData(), 4);
	auto& __Local__191 = __Local__190[0];
	auto& __Local__192 = (*(AccessPrivateProperty<FGuid >(&(__Local__191), FMovieScenePossessable::__PPO__Guid() )));
	__Local__192 = FGuid(0x1375C414, 0x4C2F5F81, 0x9D18F6A8, 0x73C33CD9);
	auto& __Local__193 = (*(AccessPrivateProperty<FString >(&(__Local__191), FMovieScenePossessable::__PPO__Name() )));
	__Local__193 = FString(TEXT("GradientR"));
	auto& __Local__194 = (*(AccessPrivateProperty<UClass* >(&(__Local__191), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__194 = UImage::StaticClass();
	auto& __Local__195 = __Local__190[1];
	auto& __Local__196 = (*(AccessPrivateProperty<FGuid >(&(__Local__195), FMovieScenePossessable::__PPO__Guid() )));
	__Local__196 = FGuid(0xB2198B06, 0x47C716E0, 0x52A7E2A2, 0x7EE77371);
	auto& __Local__197 = (*(AccessPrivateProperty<FString >(&(__Local__195), FMovieScenePossessable::__PPO__Name() )));
	__Local__197 = FString(TEXT("GradientL"));
	auto& __Local__198 = (*(AccessPrivateProperty<UClass* >(&(__Local__195), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__198 = UImage::StaticClass();
	auto& __Local__199 = __Local__190[2];
	auto& __Local__200 = (*(AccessPrivateProperty<FGuid >(&(__Local__199), FMovieScenePossessable::__PPO__Guid() )));
	__Local__200 = FGuid(0x884E2761, 0x4CEA7845, 0xBF956A95, 0xAA54C341);
	auto& __Local__201 = (*(AccessPrivateProperty<FString >(&(__Local__199), FMovieScenePossessable::__PPO__Name() )));
	__Local__201 = FString(TEXT("CanvasPanelSlot_18"));
	auto& __Local__202 = (*(AccessPrivateProperty<UClass* >(&(__Local__199), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__202 = UCanvasPanelSlot::StaticClass();
	auto& __Local__203 = (*(AccessPrivateProperty<FGuid >(&(__Local__199), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__203 = FGuid(0xB2198B06, 0x47C716E0, 0x52A7E2A2, 0x7EE77371);
	auto& __Local__204 = __Local__190[3];
	auto& __Local__205 = (*(AccessPrivateProperty<FGuid >(&(__Local__204), FMovieScenePossessable::__PPO__Guid() )));
	__Local__205 = FGuid(0x4A4B7FF9, 0x492D43DA, 0x5D4F028A, 0x6009F662);
	auto& __Local__206 = (*(AccessPrivateProperty<FString >(&(__Local__204), FMovieScenePossessable::__PPO__Name() )));
	__Local__206 = FString(TEXT("CanvasPanelSlot_17"));
	auto& __Local__207 = (*(AccessPrivateProperty<UClass* >(&(__Local__204), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__207 = UCanvasPanelSlot::StaticClass();
	auto& __Local__208 = (*(AccessPrivateProperty<FGuid >(&(__Local__204), FMovieScenePossessable::__PPO__ParentGuid() )));
	__Local__208 = FGuid(0x1375C414, 0x4C2F5F81, 0x9D18F6A8, 0x73C33CD9);
	auto& __Local__209 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__189), UMovieScene::__PPO__ObjectBindings() )));
	__Local__209 = TArray<FMovieSceneBinding> ();
	__Local__209.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__209.GetData(), 4);
	auto& __Local__210 = __Local__209[0];
	auto& __Local__211 = (*(AccessPrivateProperty<FGuid >(&(__Local__210), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__211 = FGuid(0x1375C414, 0x4C2F5F81, 0x9D18F6A8, 0x73C33CD9);
	auto& __Local__212 = (*(AccessPrivateProperty<FString >(&(__Local__210), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__212 = FString(TEXT("GradientL"));
	auto& __Local__213 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__210), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__213 = TArray<UMovieSceneTrack*> ();
	__Local__213.Reserve(1);
	auto __Local__214 = NewObject<UMovieSceneFloatTrack>(__Local__189, TEXT("MovieSceneFloatTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__215 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__214), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__215.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__215.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__215.bCanUseClassLookup = true;
	auto& __Local__216 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__214), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__216 = TArray<UMovieSceneSection*> ();
	__Local__216.Reserve(1);
	auto __Local__217 = NewObject<UMovieSceneFloatSection>(__Local__214, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__218 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__217->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__219 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__217->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__218)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__219)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__220 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__217), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__221 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__220), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__221 = TArray<FFrameNumber> ();
	__Local__221.Reserve(1);
	__Local__221.Add(FFrameNumber{});
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__220), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__222 = TArray<FMovieSceneFloatValue> ();
	__Local__222.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__222.GetData(), 1);
	auto& __Local__223 = __Local__222[0];
	__Local__217->Easing.EaseIn = __Local__218;
	__Local__217->Easing.EaseOut = __Local__219;
	auto& __Local__224 = (*(AccessPrivateProperty<FGuid >((__Local__217), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__224 = FGuid(0xDF39C1E7, 0x407812F1, 0xA710EFBF, 0x3E459B21);
	__Local__216.Add(__Local__217);
	auto& __Local__225 = (*(AccessPrivateProperty<FGuid >((__Local__214), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__225 = FGuid(0x3C851F1E, 0x4A6AC517, 0x288BA693, 0x329D8E67);
	auto& __Local__226 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__214), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__226.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__226.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__226.Entries.GetData(), 1);
	auto& __Local__227 = __Local__226.Entries[0];
	__Local__227.Section = __Local__217;
	auto& __Local__228 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__227.Range), 0)));
	auto& __Local__229 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__228), 0)));
	__Local__229 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__230 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__227.Range), 0)));
	auto& __Local__231 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__230), 0)));
	__Local__231 = ERangeBoundTypes::Type::Inclusive;
	__Local__227.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__232 = (*(AccessPrivateProperty<FGuid >((__Local__214), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__232 = FGuid(0x3C851F1E, 0x4A6AC517, 0x288BA693, 0x329D8E67);
	__Local__213.Add(__Local__214);
	auto& __Local__233 = __Local__209[1];
	auto& __Local__234 = (*(AccessPrivateProperty<FGuid >(&(__Local__233), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__234 = FGuid(0xB2198B06, 0x47C716E0, 0x52A7E2A2, 0x7EE77371);
	auto& __Local__235 = (*(AccessPrivateProperty<FString >(&(__Local__233), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__235 = FString(TEXT("GradientR"));
	auto& __Local__236 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__233), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__236 = TArray<UMovieSceneTrack*> ();
	__Local__236.Reserve(1);
	auto __Local__237 = NewObject<UMovieSceneFloatTrack>(__Local__189, TEXT("MovieSceneFloatTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__238 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__237), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__238.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__238.PropertyPath = FName(TEXT("RenderOpacity"));
	__Local__238.bCanUseClassLookup = true;
	auto& __Local__239 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__237), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__239 = TArray<UMovieSceneSection*> ();
	__Local__239.Reserve(1);
	auto __Local__240 = NewObject<UMovieSceneFloatSection>(__Local__237, TEXT("MovieSceneFloatSection_0"), (EObjectFlags)0x00280008);
	auto __Local__241 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__240->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__242 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__240->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__241)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__242)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__243 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__240), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	auto& __Local__244 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__243), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__244 = TArray<FFrameNumber> ();
	__Local__244.Reserve(1);
	__Local__244.Add(FFrameNumber{});
	auto& __Local__245 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__243), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__245 = TArray<FMovieSceneFloatValue> ();
	__Local__245.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__245.GetData(), 1);
	auto& __Local__246 = __Local__245[0];
	__Local__240->Easing.EaseIn = __Local__241;
	__Local__240->Easing.EaseOut = __Local__242;
	auto& __Local__247 = (*(AccessPrivateProperty<FGuid >((__Local__240), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__247 = FGuid(0x4C5C9DD8, 0x4AD8FFCC, 0xB50A0D9C, 0xCCFBFF43);
	__Local__239.Add(__Local__240);
	auto& __Local__248 = (*(AccessPrivateProperty<FGuid >((__Local__237), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__248 = FGuid(0x9F0FD7CD, 0x42B6A409, 0x34555291, 0xCFA648B3);
	auto& __Local__249 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__237), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__249.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__249.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__249.Entries.GetData(), 1);
	auto& __Local__250 = __Local__249.Entries[0];
	__Local__250.Section = __Local__240;
	auto& __Local__251 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__250.Range), 0)));
	auto& __Local__252 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__251), 0)));
	__Local__252 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__253 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__250.Range), 0)));
	auto& __Local__254 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__253), 0)));
	__Local__254 = ERangeBoundTypes::Type::Inclusive;
	__Local__250.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__255 = (*(AccessPrivateProperty<FGuid >((__Local__237), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__255 = FGuid(0x9F0FD7CD, 0x42B6A409, 0x34555291, 0xCFA648B3);
	__Local__236.Add(__Local__237);
	auto& __Local__256 = __Local__209[2];
	auto& __Local__257 = (*(AccessPrivateProperty<FGuid >(&(__Local__256), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__257 = FGuid(0x884E2761, 0x4CEA7845, 0xBF956A95, 0xAA54C341);
	auto& __Local__258 = (*(AccessPrivateProperty<FString >(&(__Local__256), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__258 = FString(TEXT("CanvasPanelSlot_18"));
	auto& __Local__259 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__256), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__259 = TArray<UMovieSceneTrack*> ();
	__Local__259.Reserve(1);
	auto __Local__260 = NewObject<UMovieSceneIntegerTrack>(__Local__189, TEXT("MovieSceneIntegerTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__261 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__260), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__261.PropertyName = FName(TEXT("ZOrder"));
	__Local__261.PropertyPath = FName(TEXT("ZOrder"));
	__Local__261.bCanUseClassLookup = true;
	auto& __Local__262 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__260), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__262 = TArray<UMovieSceneSection*> ();
	__Local__262.Reserve(1);
	auto __Local__263 = NewObject<UMovieSceneIntegerSection>(__Local__260, TEXT("MovieSceneIntegerSection_0"), (EObjectFlags)0x00280008);
	auto __Local__264 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__263->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__265 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__263->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__264)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__265)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__266 = (*(AccessPrivateProperty<FMovieSceneIntegerChannel >((__Local__263), UMovieSceneIntegerSection::__PPO__IntegerCurve() )));
	auto& __Local__267 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__266), FMovieSceneIntegerChannel::__PPO__Times() )));
	__Local__267 = TArray<FFrameNumber> ();
	__Local__267.Reserve(1);
	__Local__267.Add(FFrameNumber{});
	auto& __Local__268 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__266), FMovieSceneIntegerChannel::__PPO__Values() )));
	__Local__268 = TArray<int32> ();
	__Local__268.Reserve(1);
	__Local__268.Add(-1);
	__Local__263->Easing.EaseIn = __Local__264;
	__Local__263->Easing.EaseOut = __Local__265;
	auto& __Local__269 = (*(AccessPrivateProperty<FGuid >((__Local__263), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__269 = FGuid(0xA79BB1C6, 0x438814F7, 0xF13B2B92, 0x26FE5207);
	__Local__262.Add(__Local__263);
	auto& __Local__270 = (*(AccessPrivateProperty<FGuid >((__Local__260), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__270 = FGuid(0x99CAB42A, 0x4C3FB831, 0xE38C8CA7, 0xAF7D858E);
	auto& __Local__271 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__260), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__271.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__271.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__271.Entries.GetData(), 1);
	auto& __Local__272 = __Local__271.Entries[0];
	__Local__272.Section = __Local__263;
	auto& __Local__273 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__272.Range), 0)));
	auto& __Local__274 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__273), 0)));
	__Local__274 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__275 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__272.Range), 0)));
	auto& __Local__276 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__275), 0)));
	__Local__276 = ERangeBoundTypes::Type::Inclusive;
	__Local__272.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__277 = (*(AccessPrivateProperty<FGuid >((__Local__260), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__277 = FGuid(0x99CAB42A, 0x4C3FB831, 0xE38C8CA7, 0xAF7D858E);
	__Local__259.Add(__Local__260);
	auto& __Local__278 = __Local__209[3];
	auto& __Local__279 = (*(AccessPrivateProperty<FGuid >(&(__Local__278), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__279 = FGuid(0x4A4B7FF9, 0x492D43DA, 0x5D4F028A, 0x6009F662);
	auto& __Local__280 = (*(AccessPrivateProperty<FString >(&(__Local__278), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__280 = FString(TEXT("CanvasPanelSlot_17"));
	auto& __Local__281 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__278), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__281 = TArray<UMovieSceneTrack*> ();
	__Local__281.Reserve(1);
	auto __Local__282 = NewObject<UMovieSceneIntegerTrack>(__Local__189, TEXT("MovieSceneIntegerTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__283 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__282), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__283.PropertyName = FName(TEXT("ZOrder"));
	__Local__283.PropertyPath = FName(TEXT("ZOrder"));
	__Local__283.bCanUseClassLookup = true;
	auto& __Local__284 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__282), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__284 = TArray<UMovieSceneSection*> ();
	__Local__284.Reserve(1);
	auto __Local__285 = NewObject<UMovieSceneIntegerSection>(__Local__282, TEXT("MovieSceneIntegerSection_0"), (EObjectFlags)0x00280008);
	auto __Local__286 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__285->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__287 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__285->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__286)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__287)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__288 = (*(AccessPrivateProperty<FMovieSceneIntegerChannel >((__Local__285), UMovieSceneIntegerSection::__PPO__IntegerCurve() )));
	auto& __Local__289 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__288), FMovieSceneIntegerChannel::__PPO__Times() )));
	__Local__289 = TArray<FFrameNumber> ();
	__Local__289.Reserve(1);
	__Local__289.Add(FFrameNumber{});
	auto& __Local__290 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__288), FMovieSceneIntegerChannel::__PPO__Values() )));
	__Local__290 = TArray<int32> ();
	__Local__290.Reserve(1);
	__Local__290.Add(-1);
	__Local__285->Easing.EaseIn = __Local__286;
	__Local__285->Easing.EaseOut = __Local__287;
	auto& __Local__291 = (*(AccessPrivateProperty<FGuid >((__Local__285), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__291 = FGuid(0x4AC8168C, 0x4B2F7763, 0x214C09BE, 0x1BC5A2AB);
	__Local__284.Add(__Local__285);
	auto& __Local__292 = (*(AccessPrivateProperty<FGuid >((__Local__282), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__292 = FGuid(0x4CF67E3B, 0x46481C8C, 0xC6053497, 0xAE0927E9);
	auto& __Local__293 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__282), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__293.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__293.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__293.Entries.GetData(), 1);
	auto& __Local__294 = __Local__293.Entries[0];
	__Local__294.Section = __Local__285;
	auto& __Local__295 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__294.Range), 0)));
	auto& __Local__296 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__295), 0)));
	__Local__296 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__297 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__294.Range), 0)));
	auto& __Local__298 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__297), 0)));
	__Local__298 = ERangeBoundTypes::Type::Inclusive;
	__Local__294.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__299 = (*(AccessPrivateProperty<FGuid >((__Local__282), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__299 = FGuid(0x4CF67E3B, 0x46481C8C, 0xC6053497, 0xAE0927E9);
	__Local__281.Add(__Local__282);
	auto& __Local__300 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__189), UMovieScene::__PPO__PlaybackRange() )));
	__Local__300 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(300001)));
	auto& __Local__301 = (*(AccessPrivateProperty<FFrameRate >((__Local__189), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__302 = (*(__Local__179->ContainerPtrToValuePtr<int32 >(&(__Local__301), 0)));
	__Local__302 = 20;
	auto& __Local__303 = (*(AccessPrivateProperty<FGuid >((__Local__189), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__303 = FGuid(0xE15BE08E, 0x4B978EA8, 0xE130368D, 0xD4978FD4);
	__Local__3->MovieScene = __Local__189;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 4);
	auto& __Local__304 = __Local__3->AnimationBindings[0];
	__Local__304.WidgetName = FName(TEXT("GradientR"));
	__Local__304.AnimationGuid = FGuid(0x1375C414, 0x4C2F5F81, 0x9D18F6A8, 0x73C33CD9);
	auto& __Local__305 = __Local__3->AnimationBindings[1];
	__Local__305.WidgetName = FName(TEXT("GradientL"));
	__Local__305.AnimationGuid = FGuid(0xB2198B06, 0x47C716E0, 0x52A7E2A2, 0x7EE77371);
	auto& __Local__306 = __Local__3->AnimationBindings[2];
	__Local__306.WidgetName = FName(TEXT("GradientL"));
	__Local__306.SlotWidgetName = FName(TEXT("CanvasPanelSlot_18"));
	__Local__306.AnimationGuid = FGuid(0x884E2761, 0x4CEA7845, 0xBF956A95, 0xAA54C341);
	auto& __Local__307 = __Local__3->AnimationBindings[3];
	__Local__307.WidgetName = FName(TEXT("GradientR"));
	__Local__307.SlotWidgetName = FName(TEXT("CanvasPanelSlot_17"));
	__Local__307.AnimationGuid = FGuid(0x4A4B7FF9, 0x492D43DA, 0x5D4F028A, 0x6009F662);
	auto& __Local__308 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__308 = FString(TEXT("HideGradient"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__309 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__309 = FGuid(0xB19999B5, 0x453EA16D, 0x9C771FA7, 0xE64EE8D7);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__310 = NewObject<UMovieScene>(__Local__4, TEXT("HiddenDelimiter"), (EObjectFlags)0x00280008);
	auto& __Local__311 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__310), UMovieScene::__PPO__Possessables() )));
	__Local__311 = TArray<FMovieScenePossessable> ();
	__Local__311.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__311.GetData(), 1);
	auto& __Local__312 = __Local__311[0];
	auto& __Local__313 = (*(AccessPrivateProperty<FGuid >(&(__Local__312), FMovieScenePossessable::__PPO__Guid() )));
	__Local__313 = FGuid(0xC4216142, 0x4A4225EB, 0xEC3C31B7, 0x6C803044);
	auto& __Local__314 = (*(AccessPrivateProperty<FString >(&(__Local__312), FMovieScenePossessable::__PPO__Name() )));
	__Local__314 = FString(TEXT("Delimiter"));
	auto& __Local__315 = (*(AccessPrivateProperty<UClass* >(&(__Local__312), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__315 = UImage::StaticClass();
	auto& __Local__316 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__310), UMovieScene::__PPO__ObjectBindings() )));
	__Local__316 = TArray<FMovieSceneBinding> ();
	__Local__316.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__316.GetData(), 1);
	auto& __Local__317 = __Local__316[0];
	auto& __Local__318 = (*(AccessPrivateProperty<FGuid >(&(__Local__317), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__318 = FGuid(0xC4216142, 0x4A4225EB, 0xEC3C31B7, 0x6C803044);
	auto& __Local__319 = (*(AccessPrivateProperty<FString >(&(__Local__317), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__319 = FString(TEXT("Delimiter"));
	auto& __Local__320 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__317), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__320 = TArray<UMovieSceneTrack*> ();
	__Local__320.Reserve(1);
	auto __Local__321 = NewObject<UMovieSceneByteTrack>(__Local__310, TEXT("MovieSceneByteTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__322 = (*(AccessPrivateProperty<UEnum* >((__Local__321), UMovieSceneByteTrack::__PPO__Enum() )));
	__Local__322 = CastChecked<UEnum>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	auto& __Local__323 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__321), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__323.PropertyName = FName(TEXT("Visibility"));
	__Local__323.PropertyPath = FName(TEXT("Visibility"));
	__Local__323.bCanUseClassLookup = true;
	auto& __Local__324 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__321), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__324 = TArray<UMovieSceneSection*> ();
	__Local__324.Reserve(1);
	auto __Local__325 = NewObject<UMovieSceneByteSection>(__Local__321, TEXT("MovieSceneByteSection_0"), (EObjectFlags)0x00280008);
	auto __Local__326 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__325->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__327 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__325->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__326)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__327)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__328 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__325->ByteCurve), FMovieSceneByteChannel::__PPO__Times() )));
	__Local__328 = TArray<FFrameNumber> ();
	__Local__328.Reserve(1);
	__Local__328.Add(FFrameNumber{});
	auto& __Local__329 = (*(AccessPrivateProperty<TArray<uint8> >(&(__Local__325->ByteCurve), FMovieSceneByteChannel::__PPO__Values() )));
	__Local__329 = TArray<uint8> ();
	__Local__329.Reserve(1);
	__Local__329.Add(2);
	auto& __Local__330 = (*(AccessPrivateProperty<UEnum* >(&(__Local__325->ByteCurve), FMovieSceneByteChannel::__PPO__Enum() )));
	__Local__330 = CastChecked<UEnum>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__325->Easing.EaseIn = __Local__326;
	__Local__325->Easing.EaseOut = __Local__327;
	auto& __Local__331 = (*(AccessPrivateProperty<FGuid >((__Local__325), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__331 = FGuid(0xD9011A2B, 0x45B2E29D, 0x5154B3BE, 0xAFCDAADE);
	__Local__324.Add(__Local__325);
	auto& __Local__332 = (*(AccessPrivateProperty<FGuid >((__Local__321), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__332 = FGuid(0x779CD653, 0x48C15B0C, 0x41EAA0B2, 0xB6CB78DC);
	auto& __Local__333 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__321), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__333.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__333.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__333.Entries.GetData(), 1);
	auto& __Local__334 = __Local__333.Entries[0];
	__Local__334.Section = __Local__325;
	auto& __Local__335 = (*(__Local__98->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__334.Range), 0)));
	auto& __Local__336 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__335), 0)));
	__Local__336 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__337 = (*(__Local__104->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__334.Range), 0)));
	auto& __Local__338 = (*(__Local__101->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__337), 0)));
	__Local__338 = ERangeBoundTypes::Type::Inclusive;
	__Local__334.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__339 = (*(AccessPrivateProperty<FGuid >((__Local__321), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__339 = FGuid(0x779CD653, 0x48C15B0C, 0x41EAA0B2, 0xB6CB78DC);
	__Local__320.Add(__Local__321);
	auto& __Local__340 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__310), UMovieScene::__PPO__PlaybackRange() )));
	__Local__340 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(300001)));
	auto& __Local__341 = (*(AccessPrivateProperty<FFrameRate >((__Local__310), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__342 = (*(__Local__179->ContainerPtrToValuePtr<int32 >(&(__Local__341), 0)));
	__Local__342 = 20;
	auto& __Local__343 = (*(AccessPrivateProperty<FGuid >((__Local__310), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__343 = FGuid(0xF349D6E7, 0x45B7F7E6, 0x45CAC198, 0xB103B20A);
	__Local__4->MovieScene = __Local__310;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__344 = __Local__4->AnimationBindings[0];
	__Local__344.WidgetName = FName(TEXT("Delimiter"));
	__Local__344.AnimationGuid = FGuid(0xC4216142, 0x4A4225EB, 0xEC3C31B7, 0x6C803044);
	auto& __Local__345 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__345 = FString(TEXT("HiddenDelimiter"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__346 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__346 = FGuid(0x7D9CF9F5, 0x49B2EDEA, 0x48F2F9AA, 0x5D58CB1B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
}
PRAGMA_ENABLE_OPTIMIZATION
void UOffsetNumberTextPanelx1_C__pfG724873442::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__347;
	SlotNames.Append(__Local__347);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__348;
	__Local__348.Reserve(3);
	__Local__348.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__348.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__348.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->MiscConvertedSubobjects[3]));
	TArray<FDelegateRuntimeBinding>  __Local__349;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOffsetNumberTextPanelx1_C__pfG724873442::StaticClass())->MiscConvertedSubobjects[0]), __Local__348, __Local__349);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateTextScrolling__pf(0.000000);
	if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
	{
		bpv__FocusLossTex__pf->bpv__TextBlock__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; // KCST_GotoReturn
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_1(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_GetText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if (!bpv__IsFocuse__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__IsFocuse__pf = true;
			}
		case 4:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UWidget::SetFocus();
				}
			}
		case 5:
			{
				if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
				{
					bpv__FocusLossTex__pf->bpv__TextBlock__pf->SetVisibility(ESlateVisibility::Collapsed);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpfv__CallFunc_GetText_ReturnValue__pf = bpv__Value__pf->UEditableText::GetText();
				}
				bpf__AssignmentxStatxText__pfTT(bpfv__CallFunc_GetText_ReturnValue__pf, /*out*/ bpv__Text__pf);
			}
		case 7:
			{
				bpf__DiateCheck__pf(bpv__Text__pf, /*out*/ b0l__CallFunc_DiateCheck_OutIsSkrolling_1__pf);
			}
		case 8:
			{
				if (!b0l__CallFunc_DiateCheck_OutIsSkrolling_1__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(0.000000, 0.000000);
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->UWidget::SetRenderTranslation(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 10:
			{
				bpv__PanelIsSkrolling__pf = false;
			}
		case 11:
			{
				bpf__SelectedLarge__pf();
			}
		case 12:
			{
				bpf__GradientStatus__pf();
			}
		case 13:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue_4__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue_3__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_Conv_TextToString_ReturnValue_4__pf);
				bpv__ValueInt__pf = bpfv__CallFunc_Conv_StringToInt_ReturnValue_3__pf;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpv__TotalValue__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpf__SelectedSmall__pf();
				__CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_2(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	FText bpfv__CallFunc_GetText_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf{};
	int64 bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf{};
	FText bpfv__CallFunc_GetText_ReturnValue_2__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 30:
			{
				if (!bpv__IsHiddenDelimiter__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 31:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__HiddenDelimiter__pf, 0.000000, 0, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 32:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpfv__CallFunc_GetText_ReturnValue_2__pf = bpv__Value__pf->UEditableText::GetText();
				}
				bpv__Text__pf = bpfv__CallFunc_GetText_ReturnValue_2__pf;
			}
		case 33:
			{
				bpf__ScrollingCheck__pf(bpv__Text__pf, /*out*/ bpv__PanelIsSkrolling__pf, /*out*/ b0l__CallFunc_ScrollingCheck_OutIsSkrolling__pf);
			}
		case 34:
			{
				if (!b0l__CallFunc_ScrollingCheck_OutIsSkrolling__pf)
				{
					__CurrentState = 40;
					break;
				}
			}
		case 35:
			{
				bpf__UnselectedLarge__pf();
			}
		case 36:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue_2__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_Conv_TextToString_ReturnValue_2__pf);
				bpv__ValueInt__pf = bpfv__CallFunc_Conv_StringToInt_ReturnValue_1__pf;
			}
		case 37:
			{
				if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
				{
					bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetAutoWrapText(false);
				}
			}
		case 38:
			{
				UTextBlock*  __Local__350 = ((UTextBlock*)nullptr);
				bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__350)));
				if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
				{
					bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetAutoSize(true);
				}
			}
		case 39:
			{
				UObject*  __Local__351 = ((UObject*)nullptr);
				static TWeakFieldPtr<FProperty> __Local__353{};
				const FProperty* __Local__352 = __Local__353.Get();
				if (nullptr == __Local__352)
				{
					__Local__352 = (FSlateFontInfo::StaticStruct())->FindPropertyByName(FName(TEXT("FontObject")));
					check(__Local__352);
					__Local__353 = __Local__352;
				}
				(*(__Local__352->ContainerPtrToValuePtr<UObject* >(&(b0l__K2Node_MakeStruct_SlateFontInfo__pf), 0))) = ((::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf)) ? (const_cast<UObject*>(bpv__FocusLossTex__pf->bpv__TextBlock__pf->Font.FontObject)) : (__Local__351));
				UObject*  __Local__354 = ((UObject*)nullptr);
				b0l__K2Node_MakeStruct_SlateFontInfo__pf.FontMaterial = ((::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf->Font.FontMaterial) : (__Local__354));
				auto __Local__356 = FFontOutlineSettings{};
				FFontOutlineSettings  __Local__355 = __Local__356;
				b0l__K2Node_MakeStruct_SlateFontInfo__pf.OutlineSettings = ((::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf->Font.OutlineSettings) : (__Local__355));
				FName  __Local__357 = FName();
				b0l__K2Node_MakeStruct_SlateFontInfo__pf.TypefaceFontName = ((::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf->Font.TypefaceFontName) : (__Local__357));
				b0l__K2Node_MakeStruct_SlateFontInfo__pf.Size = 19;
				int32  __Local__358 = 0;
				b0l__K2Node_MakeStruct_SlateFontInfo__pf.LetterSpacing = ((::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf->Font.LetterSpacing) : (__Local__358));
				if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
				{
					bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetFont(b0l__K2Node_MakeStruct_SlateFontInfo__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 40:
			{
				bpf__UnselectedSmall__pf();
				__CurrentState = 36;
				break;
			}
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpfv__CallFunc_GetText_ReturnValue_1__pf = bpv__Value__pf->UEditableText::GetText();
				}
				bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf = UKismetTextLibrary::Conv_TextToString(bpfv__CallFunc_GetText_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_Conv_TextToString_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf = UKismetMathLibrary::Conv_IntToInt64(bpfv__CallFunc_Conv_StringToInt_ReturnValue__pf);
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->bpf__SetValue__pf(bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf, 0.000000);
				}
				__CurrentState = 30;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsHovered_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 41:
			{
				__CurrentState = 42;
				break;
			}
		case 42:
			{
				if(::IsValid(bpv__WrapBox_1__pf))
				{
					bpfv__CallFunc_IsHovered_ReturnValue__pf = bpv__WrapBox_1__pf->IsHovered();
				}
				if (!bpfv__CallFunc_IsHovered_ReturnValue__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 43:
			{
				UTextBlock*  __Local__359 = ((UTextBlock*)nullptr);
				bpf__ScrollingContent__pf(b0l__K2Node_Event_InDeltaTime__pf, /*out*/ ((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__359)), bpv__PanelIsSkrolling__pf, /*out*/ bpv__IsRightMovement__pf);
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				UTextBlock*  __Local__360 = ((UTextBlock*)nullptr);
				bpf__ReturnToOriginalPosition__pf(b0l__K2Node_Event_InDeltaTime__pf, /*out*/ ((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__360)));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_4(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Left_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Conv_StringToInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 16:
			{
				bpf__DiateCheck__pf(bpv__Text__pf, /*out*/ b0l__CallFunc_DiateCheck_OutIsSkrolling__pf);
			}
		case 17:
			{
				if (!b0l__CallFunc_DiateCheck_OutIsSkrolling__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
				bpfv__CallFunc_Left_ReturnValue__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_Left_ReturnValue__pf, FString(TEXT("0")));
				if (!bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 19:
			{
				bpf__SelectedLarge__pf();
			}
		case 20:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue_3__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
				bpfv__CallFunc_Conv_StringToInt_ReturnValue_2__pf = UKismetStringLibrary::Conv_StringToInt(bpfv__CallFunc_Conv_TextToString_ReturnValue_3__pf);
				bpv__ValueInt__pf = bpfv__CallFunc_Conv_StringToInt_ReturnValue_2__pf;
			}
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpv__TotalValue__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpf__SelectedSmall__pf();
				__CurrentState = 20;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpf__AssignmentxStatxText__pfTT(b0l__K2Node_ComponentBoundEvent_Text_1__pf, /*out*/ bpv__Text__pf);
				__CurrentState = 16;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	bpv__ValueChanged__pf.Broadcast(bpv__ValueInt__pf, bpv__TotalValue__pf);
	return; // KCST_GotoReturn
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	return; // KCST_GotoReturn
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature__pf(FText const& bpp__Text__pf__const, ETextCommit::Type bpp__CommitMethod__pf)
{
	typedef FText  T__Local__361;
	T__Local__361& bpp__Text__pf = *const_cast<T__Local__361 *>(&bpp__Text__pf__const);
	b0l__K2Node_ComponentBoundEvent_Text__pf = bpp__Text__pf;
	b0l__K2Node_ComponentBoundEvent_CommitMethod__pf = bpp__CommitMethod__pf;
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_5(28);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__OnRemovedFromFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf)
{
	b0l__K2Node_Event_InFocusEvent__pf = bpp__InFocusEvent__pf;
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_0(23);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__OnAddedToFocusPath__pf(FFocusEvent bpp__InFocusEvent__pf)
{
	b0l__K2Node_Event_InFocusEvent_1__pf = bpp__InFocusEvent__pf;
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_1(1);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__BndEvt__StatValueArea_Value_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature__pf(FText const& bpp__Text__pf__const)
{
	typedef FText  T__Local__362;
	T__Local__362& bpp__Text__pf = *const_cast<T__Local__362 *>(&bpp__Text__pf__const);
	b0l__K2Node_ComponentBoundEvent_Text_1__pf = bpp__Text__pf;
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_4(26);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_3(41);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_6(45);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_OffsetNumberTextPanelx1__pfG_2(46);
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ScrollingCheck__pf(const FText& bpp__Text__pf__const, /*out*/ bool& bpp__IsSkrolling__pf, /*out*/ bool& bpp__OutIsSkrolling__pf)
{
	typedef FText  T__Local__363;
	T__Local__363& bpp__Text__pf = *const_cast<T__Local__363 *>(&bpp__Text__pf__const);
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
	bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
	bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, bpv__MaximumNoScrollingNumber__pf);
	bpp__IsSkrolling__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
	bpp__OutIsSkrolling__pf = bpp__IsSkrolling__pf;
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ScrollingContent__pf(float bpp__DeltaTime__pf, /*out*/ UTextBlock*& bpp__Text__pf, bool bpp__IsSkrolling__pf, /*out*/ bool& bpp__IsRightMovement__pf)
{
	bool bpfv__LIsRightMovement__pf{};
	float bpfv__xmplitude__pfTj{};
	float bpfv__Shift__pf{};
	int32 bpfv__DirectionMultiplier__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_GetDesiredSize_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector2D_X_1__pf{};
	float bpfv__CallFunc_BreakVector2D_Y_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__LIsRightMovement__pf = false;
			}
		case 2:
			{
				if (!bpp__IsSkrolling__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				__StateStack.Push(9);
				__StateStack.Push(7);
			}
		case 4:
			{
				if (!bpp__IsRightMovement__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 5:
			{
				bpfv__DirectionMultiplier__pf = 1;
			}
		case 6:
			{
				if(::IsValid(bpp__Text__pf))
				{
					bpfv__CallFunc_GetDesiredSize_ReturnValue__pf = bpp__Text__pf->UWidget::GetDesiredSize();
				}
				UKismetMathLibrary::BreakVector2D(bpfv__CallFunc_GetDesiredSize_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BreakVector2D_X__pf, 92.000000);
				bpfv__xmplitude__pfTj = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				FVector2D  __Local__364 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpp__Text__pf)) ? (bpp__Text__pf->RenderTransform.Translation) : (__Local__364)), /*out*/ bpfv__CallFunc_BreakVector2D_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__DeltaTime__pf, 25.000000);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__DirectionMultiplier__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, bpfv__CallFunc_BreakVector2D_X_1__pf);
				bpfv__Shift__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf;
			}
		case 8:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpfv__Shift__pf, 0.000000);
				if(::IsValid(bpp__Text__pf))
				{
					bpp__Text__pf->UWidget::SetRenderTranslation(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				if (!bpp__IsRightMovement__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__Shift__pf, 6.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				bpp__IsRightMovement__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__xmplitude__pfTj, 16.000000);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__Shift__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpp__IsRightMovement__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__DirectionMultiplier__pf = -1;
				__CurrentState = 6;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__IsNumeric__pf(const FText& bpp__Text__pf__const, const FText& bpp__ValueVariable__pf__const, /*out*/ FText& bpp__TextValid__pf)
{
	typedef FText  T__Local__365;
	T__Local__365& bpp__Text__pf = *const_cast<T__Local__365 *>(&bpp__Text__pf__const);
	typedef FText  T__Local__366;
	T__Local__366& bpp__ValueVariable__pf = *const_cast<T__Local__366 *>(&bpp__ValueVariable__pf__const);
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Left_ReturnValue__pf{};
	bool bpfv__CallFunc_IsNumeric_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Left_ReturnValue__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_IsNumeric_ReturnValue__pf = UKismetStringLibrary::IsNumeric(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_Left_ReturnValue__pf, FString(TEXT("+")));
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue_1__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_Left_ReturnValue__pf, FString(TEXT("-")));
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_NotEqual_StrStr_ReturnValue_1__pf, bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_IsNumeric_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpp__TextValid__pf = bpp__Text__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(bpp__Text__pf);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UEditableText::SetText(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"1BC0C14845AD8A770CCFE2B4249DDDB2\", \"0\")")	));
				}
			}
		case 5:
			{
				bpp__TextValid__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"B29E9A4A45C0E32D9CECAD979E219F53\", \"0\")")	);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UEditableText::SetText(bpp__ValueVariable__pf);
				}
			}
		case 7:
			{
				bpp__TextValid__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"0385EDE140EABDFB44DF02815C6EE73A\", \"NAN\")")	);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__AssignmentxStatxText__pfTT(const FText& bpp__Text__pf__const, /*out*/ FText& bpp__ValueVariable__pf)
{
	typedef FText  T__Local__367;
	T__Local__367& bpp__Text__pf = *const_cast<T__Local__367 *>(&bpp__Text__pf__const);
	FString bpfv__String__pf{};
	FText bpfv__CallFunc_IsNumeric_TextValid__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Left_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_TextText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue_1__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_RightChop_ReturnValue__pf{};
	FString bpfv__CallFunc_Left_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf{};
	bool bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__IsNumeric__pf(bpp__Text__pf, bpp__ValueVariable__pf, /*out*/ bpfv__CallFunc_IsNumeric_TextValid__pf);
			}
		case 2:
			{
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(FString(TEXT("NAN")));
				bpfv__CallFunc_NotEqual_TextText_ReturnValue__pf = UKismetTextLibrary::NotEqual_TextText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf, bpfv__CallFunc_IsNumeric_TextValid__pf);
				if (!bpfv__CallFunc_NotEqual_TextText_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Left_ReturnValue_1__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::NotEqual_StrStr(bpfv__CallFunc_Left_ReturnValue_1__pf, FString(TEXT("0")));
				if (!bpfv__CallFunc_NotEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Len_ReturnValue_1__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Len_ReturnValue_1__pf, 9);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 5:
			{
				bpp__ValueVariable__pf = bpp__Text__pf;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpp__ValueVariable__pf = bpp__ValueVariable__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_RightChop_ReturnValue__pf = UKismetStringLibrary::RightChop(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_RightChop_ReturnValue__pf);
				bpp__ValueVariable__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf;
			}
		case 8:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 1);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_RightChop_ReturnValue__pf = UKismetStringLibrary::RightChop(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 1);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_RightChop_ReturnValue__pf);
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UEditableText::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf);
				}
			}
		case 10:
			{
				bpp__ValueVariable__pf = bpp__Text__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UEditableText::SetText(bpp__Text__pf);
				}
				__CurrentState = 10;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Left_ReturnValue__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 9);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Left_ReturnValue__pf);
				if(::IsValid(bpv__Value__pf))
				{
					bpv__Value__pf->UEditableText::SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 13:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
				bpfv__CallFunc_Left_ReturnValue__pf = UKismetStringLibrary::Left(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf, 9);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Left_ReturnValue__pf);
				bpp__ValueVariable__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__DiateCheck__pf(const FText& bpp__Text__pf__const, /*out*/ bool& bpp__OutIsSkrolling__pf)
{
	typedef FText  T__Local__368;
	T__Local__368& bpp__Text__pf = *const_cast<T__Local__368 *>(&bpp__Text__pf__const);
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpp__Text__pf);
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaximumNoScrollingNumber__pf, 1);
	bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
	bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	bpp__OutIsSkrolling__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__ReturnToOriginalPosition__pf(float bpp__DeltaTime__pf, /*out*/ UTextBlock*& bpp__Text__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector2D_X__pf{};
	float bpfv__CallFunc_BreakVector2D_Y__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__IsRightMovement__pf = false;
			}
		case 2:
			{
				FVector2D  __Local__369 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpp__Text__pf)) ? (bpp__Text__pf->RenderTransform.Translation) : (__Local__369)), /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_BreakVector2D_X__pf, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(180, bpp__DeltaTime__pf);
				FVector2D  __Local__370 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpp__Text__pf)) ? (bpp__Text__pf->RenderTransform.Translation) : (__Local__370)), /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_X__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(180, bpp__DeltaTime__pf);
				FVector2D  __Local__371 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpp__Text__pf)) ? (bpp__Text__pf->RenderTransform.Translation) : (__Local__371)), /*out*/ bpfv__CallFunc_BreakVector2D_X__pf, /*out*/ bpfv__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector2D_X__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000);
				if(::IsValid(bpp__Text__pf))
				{
					bpp__Text__pf->UWidget::SetRenderTranslation(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(0.000000, 0.000000);
				if(::IsValid(bpp__Text__pf))
				{
					bpp__Text__pf->UWidget::SetRenderTranslation(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__GradientStatus__pf()
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsFocuse__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__PanelIsSkrolling__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__ShowGradient__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__HideGradient__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__UpdateTextScrolling__pf(float bpp__DeltaTime__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int64 bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int64 bpfv__CallFunc_Conv_IntToInt64_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_TextToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Len_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_ScrollingCheck_OutIsSkrolling__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__IsFocuse__pf = false;
			}
		case 2:
			{
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->bpv__SeparatingMark__pf = FString(TEXT(""));
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpfv__CallFunc_Conv_IntToInt64_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToInt64(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf);
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->bpf__SetValue__pf(bpfv__CallFunc_Conv_IntToInt64_ReturnValue_1__pf, bpp__DeltaTime__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, false, true, 1, 324);
				bpv__Text__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
			}
		case 6:
			{
				bpf__ScrollingCheck__pf(bpv__Text__pf, /*out*/ bpv__PanelIsSkrolling__pf, /*out*/ bpfv__CallFunc_ScrollingCheck_OutIsSkrolling__pf);
			}
		case 7:
			{
				if (!bpfv__CallFunc_ScrollingCheck_OutIsSkrolling__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 8:
			{
				bpf__UnselectedLarge__pf();
			}
		case 9:
			{
				bpfv__CallFunc_Conv_TextToString_ReturnValue__pf = UKismetTextLibrary::Conv_TextToString(bpv__Text__pf);
				bpfv__CallFunc_Len_ReturnValue__pf = UKismetStringLibrary::Len(bpfv__CallFunc_Conv_TextToString_ReturnValue__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Len_ReturnValue__pf, 6);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->bpv__SeparatingMark__pf = FString(TEXT("\u00b7"));
				}
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ValueInt__pf, bpv__TotalIncrease__pf);
				bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf = UKismetMathLibrary::Conv_IntToInt64(bpfv__CallFunc_Add_IntInt_ReturnValue__pf);
				if(::IsValid(bpv__FocusLossTex__pf))
				{
					bpv__FocusLossTex__pf->bpf__SetValue__pf(bpfv__CallFunc_Conv_IntToInt64_ReturnValue__pf, bpp__DeltaTime__pf);
				}
			}
		case 12:
			{
				bpf__GradientStatus__pf();
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				bpv__Text__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4FDB34AE4917C64E4ED1839FEFD3163A]\", \"433463594F8DDCB293BCBF89D821094D\", \"0\")")	);
				__CurrentState = 6;
				break;
			}
		case 14:
			{
				bpf__UnselectedSmall__pf();
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__SelectedLarge__pf()
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UWrapBoxSlot* bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors_1__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	if(::IsValid(bpv__AngleBT__pf))
	{
		bpv__AngleBT__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleLB__pf))
	{
		bpv__AngleLB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleLT__pf))
	{
		bpv__AngleLT__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleRB__pf))
	{
		bpv__AngleRB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Background__pf))
	{
		bpv__Background__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderLeft__pf))
	{
		bpv__BorderLeft__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderRight__pf))
	{
		bpv__BorderRight__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderTop__pf))
	{
		bpv__BorderTop__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__CanvasPanel_2__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetAutoSize(true);
	}
	if(::IsValid(bpv__CanvasPanel_2__pf))
	{
		bpv__CanvasPanel_2__pf->UWidget::SetClipping(EWidgetClipping::Inherit);
	}
	if(::IsValid(bpv__Shedow__pf))
	{
		bpv__Shedow__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsWrapBoxSlot(bpv__Value__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf->UWrapBoxSlot::SetFillEmptySpace(false);
	}
	UTextBlock*  __Local__372 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__372)));
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	UTextBlock*  __Local__373 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__373)));
	bpfv__K2Node_MakeStruct_Anchors__pf.Minimum = FVector2D(0.500000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors__pf.Maximum = FVector2D(0.500000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors__pf);
	}
	UTextBlock*  __Local__374 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__374)));
	bpfv__K2Node_MakeStruct_Margin__pf.Left = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Right = 7.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin__pf);
	}
	if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
	{
		bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetOpacity(0.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Minimum = FVector2D(0.500000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Maximum = FVector2D(0.500000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors_1__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Margin_1__pf.Left = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Right = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin_1__pf);
	}
	if(::IsValid(bpv__WrapBox_1__pf))
	{
		bpv__WrapBox_1__pf->UWidget::SetRenderOpacity(1.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Wrapper__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetZOrder(99);
	}
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__UnselectedLarge__pf()
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UWrapBoxSlot* bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors_1__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	if(::IsValid(bpv__AngleBT__pf))
	{
		bpv__AngleBT__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleLB__pf))
	{
		bpv__AngleLB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleLT__pf))
	{
		bpv__AngleLT__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleRB__pf))
	{
		bpv__AngleRB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Background__pf))
	{
		bpv__Background__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderLeft__pf))
	{
		bpv__BorderLeft__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderRight__pf))
	{
		bpv__BorderRight__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderTop__pf))
	{
		bpv__BorderTop__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__CanvasPanel_2__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetAutoSize(false);
	}
	if(::IsValid(bpv__CanvasPanel_2__pf))
	{
		bpv__CanvasPanel_2__pf->UWidget::SetClipping(EWidgetClipping::ClipToBounds);
	}
	if(::IsValid(bpv__Shedow__pf))
	{
		bpv__Shedow__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsWrapBoxSlot(bpv__Value__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf->UWrapBoxSlot::SetFillEmptySpace(true);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.000000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	bpfv__K2Node_MakeStruct_Anchors__pf.Minimum = FVector2D(0.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors__pf.Maximum = FVector2D(0.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	bpfv__K2Node_MakeStruct_Margin__pf.Left = 2.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Right = 7.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin__pf);
	}
	if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
	{
		bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetOpacity(1.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.000000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Minimum = FVector2D(0.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Maximum = FVector2D(0.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors_1__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Margin_1__pf.Left = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Right = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin_1__pf);
	}
	if(::IsValid(bpv__WrapBox_1__pf))
	{
		bpv__WrapBox_1__pf->UWidget::SetRenderOpacity(0.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Wrapper__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetZOrder(0);
	}
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__SelectedSmall__pf()
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UWrapBoxSlot* bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors_1__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	if(::IsValid(bpv__AngleBT__pf))
	{
		bpv__AngleBT__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleLB__pf))
	{
		bpv__AngleLB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleLT__pf))
	{
		bpv__AngleLT__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__AngleRB__pf))
	{
		bpv__AngleRB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Background__pf))
	{
		bpv__Background__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderLeft__pf))
	{
		bpv__BorderLeft__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderRight__pf))
	{
		bpv__BorderRight__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__BorderTop__pf))
	{
		bpv__BorderTop__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__CanvasPanel_2__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetAutoSize(false);
	}
	if(::IsValid(bpv__CanvasPanel_2__pf))
	{
		bpv__CanvasPanel_2__pf->UWidget::SetClipping(EWidgetClipping::Inherit);
	}
	if(::IsValid(bpv__Shedow__pf))
	{
		bpv__Shedow__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsWrapBoxSlot(bpv__Value__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf->UWrapBoxSlot::SetFillEmptySpace(true);
	}
	UTextBlock*  __Local__375 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__375)));
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	UTextBlock*  __Local__376 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__376)));
	bpfv__K2Node_MakeStruct_Anchors__pf.Minimum = FVector2D(0.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors__pf.Maximum = FVector2D(1.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors__pf);
	}
	UTextBlock*  __Local__377 = ((UTextBlock*)nullptr);
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(((::IsValid(bpv__FocusLossTex__pf)) ? (bpv__FocusLossTex__pf->bpv__TextBlock__pf) : (__Local__377)));
	bpfv__K2Node_MakeStruct_Margin__pf.Left = 6.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Right = 8.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin__pf);
	}
	if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
	{
		bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetOpacity(0.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Minimum = FVector2D(0.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Maximum = FVector2D(1.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors_1__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Margin_1__pf.Left = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Right = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin_1__pf);
	}
	if(::IsValid(bpv__WrapBox_1__pf))
	{
		bpv__WrapBox_1__pf->UWidget::SetRenderOpacity(1.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Wrapper__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetZOrder(99);
	}
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__UnselectedSmall__pf()
{
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf{};
	UWrapBoxSlot* bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf{};
	FAnchors bpfv__K2Node_MakeStruct_Anchors_1__pf{};
	FMargin bpfv__K2Node_MakeStruct_Margin_1__pf{};
	UCanvasPanelSlot* bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf{};
	if(::IsValid(bpv__AngleBT__pf))
	{
		bpv__AngleBT__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleLB__pf))
	{
		bpv__AngleLB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleLT__pf))
	{
		bpv__AngleLT__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__AngleRB__pf))
	{
		bpv__AngleRB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Background__pf))
	{
		bpv__Background__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderBottom__pf))
	{
		bpv__BorderBottom__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderLeft__pf))
	{
		bpv__BorderLeft__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderRight__pf))
	{
		bpv__BorderRight__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__BorderTop__pf))
	{
		bpv__BorderTop__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__CanvasPanel_2__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_3__pf->UCanvasPanelSlot::SetAutoSize(false);
	}
	if(::IsValid(bpv__CanvasPanel_2__pf))
	{
		bpv__CanvasPanel_2__pf->UWidget::SetClipping(EWidgetClipping::ClipToBounds);
	}
	if(::IsValid(bpv__Shedow__pf))
	{
		bpv__Shedow__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsWrapBoxSlot(bpv__Value__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsWrapBoxSlot_ReturnValue__pf->UWrapBoxSlot::SetFillEmptySpace(true);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	bpfv__K2Node_MakeStruct_Anchors__pf.Minimum = FVector2D(1.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors__pf.Maximum = FVector2D(0.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__FocusLossTex__pf);
	bpfv__K2Node_MakeStruct_Margin__pf.Left = 2.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Right = 0.000000;
	bpfv__K2Node_MakeStruct_Margin__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_1__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin__pf);
	}
	if(::IsValid(bpv__FocusLossTex__pf) && ::IsValid(bpv__FocusLossTex__pf->bpv__TextBlock__pf))
	{
		bpv__FocusLossTex__pf->bpv__TextBlock__pf->UTextBlock::SetOpacity(1.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAlignment(FVector2D(0.500000,0.500000));
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Minimum = FVector2D(0.000000,0.500000);
	bpfv__K2Node_MakeStruct_Anchors_1__pf.Maximum = FVector2D(1.000000,0.500000);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetAnchors(bpfv__K2Node_MakeStruct_Anchors_1__pf);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__WrapBox_1__pf);
	bpfv__K2Node_MakeStruct_Margin_1__pf.Left = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Top = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Right = 0.000000;
	bpfv__K2Node_MakeStruct_Margin_1__pf.Bottom = 0.000000;
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue_2__pf->UCanvasPanelSlot::SetOffsets(bpfv__K2Node_MakeStruct_Margin_1__pf);
	}
	if(::IsValid(bpv__WrapBox_1__pf))
	{
		bpv__WrapBox_1__pf->UWidget::SetRenderOpacity(0.000000);
	}
	bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf = UWidgetLayoutLibrary::SlotAsCanvasSlot(bpv__Wrapper__pf);
	if(::IsValid(bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf))
	{
		bpfv__CallFunc_SlotAsCanvasSlot_ReturnValue__pf->UCanvasPanelSlot::SetZOrder(0);
	}
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__SetValue__pf(int32 bpp__Value__pf)
{
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	bool bpfv__CallFunc_DiateCheckByNumber_OutIsSkrolling__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__DiateCheckByNumber__pf(bpp__Value__pf, /*out*/ bpfv__CallFunc_DiateCheckByNumber_OutIsSkrolling__pf);
			}
		case 2:
			{
				if (!bpfv__CallFunc_DiateCheckByNumber_OutIsSkrolling__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpf__UnselectedLarge__pf();
			}
		case 4:
			{
				bpf__GradientStatus__pf();
			}
		case 5:
			{
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpf__UpdateTextScrolling__pf(bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpf__UnselectedSmall__pf();
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOffsetNumberTextPanelx1_C__pfG724873442::bpf__DiateCheckByNumber__pf(int32 bpp__Number__pf, /*out*/ bool& bpp__OutIsSkrolling__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__MaximumNoScrollingNumber__pf, 1);
	bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpp__Number__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
	bpp__OutIsSkrolling__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UOffsetNumberTextPanelx1_C__pfG724873442::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Materials/BackgroundWithRoundedCorners_Inst.BackgroundWithRoundedCorners_Inst 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Materials/BackgroundWithRoundedCorners.BackgroundWithRoundedCorners 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Textures/Angle-1.Angle-1 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Materials/Gradient.Gradient 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Game/Fonts/NumbersFont_Font.NumbersFont_Font 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UOffsetNumberTextPanelx1_C__pfG724873442::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FocusEvent 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ETextCommit 
		{41, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.EditableText 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.FontOutlineSettings 
		{93, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBox 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{94, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WrapBoxSlot 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Slate.Anchors 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/View/AnimatedNumberTextBlock.AnimatedNumberTextBlock_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UOffsetNumberTextPanelx1_C__pfG724873442
{
	FRegisterHelper__UOffsetNumberTextPanelx1_C__pfG724873442()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/View/OffsetNumberTextPanel-1"), &UOffsetNumberTextPanelx1_C__pfG724873442::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOffsetNumberTextPanelx1_C__pfG724873442 Instance;
};
FRegisterHelper__UOffsetNumberTextPanelx1_C__pfG724873442 FRegisterHelper__UOffsetNumberTextPanelx1_C__pfG724873442::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
