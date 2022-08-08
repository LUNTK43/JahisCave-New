#include "NativizedAssets.h"
#include "Fire_beam_BP__pf711458173.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
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
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AFire_beam_BP_C__pf711458173::AFire_beam_BP_C__pf711458173(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UStaticMeshComponent>(this->GetDefaultSubobjectByName(TEXT("StaticMeshComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'StaticMeshComponent0' //
		__Local__0->bUseDefaultCollision = false;
		__Local__0->SetCollisionProfileName(FName(TEXT("BlockAllDynamic")));
		__Local__0->Mobility = EComponentMobility::Type::Movable;
		static TWeakFieldPtr<FProperty> __Local__2{};
		const FProperty* __Local__1 = __Local__2.Get();
		if (nullptr == __Local__1)
		{
			__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__1);
			__Local__2 = __Local__1;
		}
		(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__0), true, 0));
		// --- END default subobject 'StaticMeshComponent0' //
	}
	bpv__Billboard__pf = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	bpv__Arrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	bpv__Particlesystem__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particlesystem"));
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Arrow1__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow1"));
	bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Billboard__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	static TWeakFieldPtr<FProperty> __Local__4{};
	const FProperty* __Local__3 = __Local__4.Get();
	if (nullptr == __Local__3)
	{
		__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__3);
		__Local__4 = __Local__3;
	}
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Billboard__pf), false, 0));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<float >((bpv__Sphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__5 = 5.000000f;
	bpv__Sphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	static TWeakFieldPtr<FProperty> __Local__7{};
	const FProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UPrimitiveComponent::StaticClass())->FindPropertyByName(FName(TEXT("bGenerateOverlapEvents")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__Sphere__pf), false, 0));
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__Sphere__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->ArrowSize = 0.250000f;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Arrow__pf), false, 0));
	bpv__Particlesystem__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Particlesystem__pf->AttachToComponent(bpv__Arrow__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__Particlesystem__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(0.200000, 0.200000, 0.200000);
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Particlesystem__pf), false, 0));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(bpv__Sphere__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->TargetArmLength = 0.000000f;
	bpv__SpringArm__pf->bEnableCameraLag = true;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__SpringArm__pf), false, 0));
	bpv__Arrow1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow1__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow1__pf->ArrowColor = FColor(255, 229, 0, 255);
	bpv__Arrow1__pf->ArrowSize = 0.250000f;
	(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((bpv__Arrow1__pf), false, 0));
	bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf = 0.000000f;
	bpv__Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__particle_Fire__pf = nullptr;
	bpv__Staticmesh__pf = nullptr;
	bpv__Start_offset__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__Scale__pf = FVector(1.000000, 1.000000, 1.000000);
	bpv__Particle_Scale__pf = FVector(1.000000, 1.000000, 1.000000);
	bpv__Base_position__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__End_offset__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__Oscil_Speed__pf = 1.000000f;
	bpv__shake_speed_min__pf = 0.000000f;
	bpv__shake_speed_max__pf = 0.000000f;
	bpv__oscillate__pf = false;
	bpv__origin_top_position__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__oscil_scale__pf = FVector(1.000000, 1.000000, 1.000000);
	bpv__beam_width__pf = 1.000000f;
	bpv__shake_noise_scale__pf = 0.100000f;
	bpv__Smoke_Emitter_Enable__pf = true;
	bpv__Distortion_Emittter_Enable__pf = true;
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMeshComponent*>((this), AStaticMeshActor::__PPO__StaticMeshComponent() )));
	__Local__9 = __Local__0;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__10 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__10 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AFire_beam_BP_C__pf711458173::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Billboard__pf)
	{
		bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Particlesystem__pf)
	{
		bpv__Particlesystem__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow1__pf)
	{
		bpv__Arrow1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFire_beam_BP_C__pf711458173::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__11 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__12);
	auto __Local__13 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__13);
	static TWeakFieldPtr<FProperty> __Local__15{};
	const FProperty* __Local__14 = __Local__15.Get();
	if (nullptr == __Local__14)
	{
		__Local__14 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__14);
		__Local__15 = __Local__14;
	}
	(((FBoolProperty*)__Local__14)->SetPropertyValue_InContainer((__Local__11), false, 0));
	__Local__12->TimelineLength = 10.000000f;
	__Local__12->bLoop = true;
	__Local__12->VectorTracks = TArray<FTTVectorTrack> ();
	__Local__12->VectorTracks.AddUninitialized(1);
	FTTVectorTrack::StaticStruct()->InitializeStruct(__Local__12->VectorTracks.GetData(), 1);
	auto& __Local__16 = __Local__12->VectorTracks[0];
	auto __Local__17 = NewObject<UCurveVector>(InDynamicClass, UCurveVector::StaticClass(), TEXT("CurveVector_0"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__17);
	__Local__17->FloatCurves[0].Keys = TArray<FRichCurveKey> ();
	__Local__17->FloatCurves[0].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__17->FloatCurves[0].Keys.GetData(), 6);
	auto& __Local__18 = __Local__17->FloatCurves[0].Keys[0];
	__Local__18.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__18.ArriveTangent = -0.323385f;
	auto& __Local__19 = __Local__17->FloatCurves[0].Keys[1];
	__Local__19.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__19.Time = 2.172797f;
	__Local__19.Value = 0.222250f;
	__Local__19.ArriveTangent = -0.227147f;
	__Local__19.LeaveTangent = -0.227147f;
	auto& __Local__20 = __Local__17->FloatCurves[0].Keys[2];
	__Local__20.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__20.Time = 4.296648f;
	__Local__20.Value = -0.975969f;
	__Local__20.ArriveTangent = 0.154343f;
	__Local__20.LeaveTangent = 0.154343f;
	auto& __Local__21 = __Local__17->FloatCurves[0].Keys[3];
	__Local__21.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__21.Time = 6.117092f;
	__Local__21.Value = 0.831023f;
	__Local__21.ArriveTangent = 0.101757f;
	__Local__21.LeaveTangent = 0.101757f;
	auto& __Local__22 = __Local__17->FloatCurves[0].Keys[4];
	__Local__22.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__22.Time = 7.620336f;
	__Local__22.Value = -0.637762f;
	__Local__22.ArriveTangent = -0.214021f;
	__Local__22.LeaveTangent = -0.214021f;
	auto& __Local__23 = __Local__17->FloatCurves[0].Keys[5];
	__Local__23.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__23.Time = 10.000000f;
	__Local__17->FloatCurves[1].Keys = TArray<FRichCurveKey> ();
	__Local__17->FloatCurves[1].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__17->FloatCurves[1].Keys.GetData(), 6);
	auto& __Local__24 = __Local__17->FloatCurves[1].Keys[0];
	__Local__24.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__25 = __Local__17->FloatCurves[1].Keys[1];
	__Local__25.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__25.Time = 2.200380f;
	__Local__25.Value = -0.975969f;
	__Local__25.ArriveTangent = 0.188310f;
	__Local__25.LeaveTangent = 0.188310f;
	auto& __Local__26 = __Local__17->FloatCurves[1].Keys[2];
	__Local__26.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__26.Time = 4.310439f;
	__Local__26.Value = 0.811697f;
	__Local__26.ArriveTangent = -0.024537f;
	__Local__26.LeaveTangent = -0.024537f;
	auto& __Local__27 = __Local__17->FloatCurves[1].Keys[3];
	__Local__27.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__27.Time = 5.744728f;
	__Local__27.Value = -1.062937f;
	__Local__27.ArriveTangent = -0.067418f;
	__Local__27.LeaveTangent = -0.067418f;
	auto& __Local__28 = __Local__17->FloatCurves[1].Keys[4];
	__Local__28.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__28.Time = 8.323690f;
	__Local__28.Value = 0.541131f;
	__Local__28.ArriveTangent = 0.249793f;
	__Local__28.LeaveTangent = 0.249793f;
	auto& __Local__29 = __Local__17->FloatCurves[1].Keys[5];
	__Local__29.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__29.Time = 10.000000f;
	__Local__17->FloatCurves[2].Keys = TArray<FRichCurveKey> ();
	__Local__17->FloatCurves[2].Keys.AddUninitialized(7);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__17->FloatCurves[2].Keys.GetData(), 7);
	auto& __Local__30 = __Local__17->FloatCurves[2].Keys[0];
	__Local__30.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__31 = __Local__17->FloatCurves[2].Keys[1];
	__Local__31.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__31.Time = 2.500000f;
	__Local__31.Value = 1.000000f;
	__Local__31.ArriveTangent = -0.082824f;
	__Local__31.LeaveTangent = -0.082824f;
	auto& __Local__32 = __Local__17->FloatCurves[2].Keys[2];
	__Local__32.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__32.Time = 4.200109f;
	__Local__32.Value = -0.347870f;
	__Local__32.ArriveTangent = -0.184891f;
	__Local__32.LeaveTangent = -0.184891f;
	auto& __Local__33 = __Local__17->FloatCurves[2].Keys[3];
	__Local__33.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__33.Time = 5.399947f;
	__Local__33.Value = 0.463827f;
	__Local__33.ArriveTangent = -0.113011f;
	__Local__33.LeaveTangent = -0.113011f;
	auto& __Local__34 = __Local__17->FloatCurves[2].Keys[4];
	__Local__34.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__34.Time = 6.765279f;
	__Local__34.Value = -0.637762f;
	__Local__34.ArriveTangent = 0.092283f;
	__Local__34.LeaveTangent = 0.092283f;
	auto& __Local__35 = __Local__17->FloatCurves[2].Keys[5];
	__Local__35.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__35.Time = 8.227152f;
	__Local__35.Value = 0.724730f;
	__Local__35.ArriveTangent = 0.197161f;
	__Local__35.LeaveTangent = 0.197161f;
	auto& __Local__36 = __Local__17->FloatCurves[2].Keys[6];
	__Local__36.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__36.Time = 10.000000f;
	__Local__16.CurveVector = __Local__17;
	auto& __Local__37 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__37 = FName(TEXT("Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD"));
	auto& __Local__38 = (*(AccessPrivateProperty<FName >(&(__Local__16), FTTTrackBase::__PPO__TrackName() )));
	__Local__38 = FName(TEXT("Dir_Vector"));
	__Local__12->TimelineGuid = FGuid(0x51B39A05, 0x49049B30, 0x464030A8, 0xB654ABDD);
	auto& __Local__39 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__VariableName() )));
	__Local__39 = FName(TEXT("Timeline_0"));
	auto& __Local__40 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__40 = FName(TEXT("Timeline_0__Direction_51B39A0549049B30464030A8B654ABDD"));
	auto& __Local__41 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__41 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__42 = (*(AccessPrivateProperty<FName >((__Local__12), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__42 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__13->TimelineLength = 10.000000f;
	__Local__13->bLoop = true;
	__Local__13->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__13->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__13->FloatTracks.GetData(), 1);
	auto& __Local__43 = __Local__13->FloatTracks[0];
	auto __Local__44 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_1"), (EObjectFlags)0x00280009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__44);
	__Local__44->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__44->FloatCurve.Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__44->FloatCurve.Keys.GetData(), 8);
	auto& __Local__45 = __Local__44->FloatCurve.Keys[0];
	__Local__45.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__45.Time = -0.020010f;
	auto& __Local__46 = __Local__44->FloatCurve.Keys[1];
	__Local__46.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__46.Time = 1.256564f;
	__Local__46.Value = -0.655124f;
	__Local__46.ArriveTangent = 0.076573f;
	__Local__46.LeaveTangent = 0.076573f;
	auto& __Local__47 = __Local__44->FloatCurve.Keys[2];
	__Local__47.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__47.Time = 2.787691f;
	__Local__47.Value = 0.214995f;
	__Local__47.ArriveTangent = 0.173045f;
	__Local__47.LeaveTangent = 0.173045f;
	auto& __Local__48 = __Local__44->FloatCurve.Keys[3];
	__Local__48.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__48.Time = 4.245407f;
	__Local__48.Value = -0.137921f;
	__Local__48.ArriveTangent = 0.163800f;
	__Local__48.LeaveTangent = 0.163800f;
	auto& __Local__49 = __Local__44->FloatCurve.Keys[4];
	__Local__49.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__49.Time = 5.870918f;
	__Local__49.Value = 0.720029f;
	__Local__49.ArriveTangent = -0.186232f;
	__Local__49.LeaveTangent = -0.186232f;
	auto& __Local__50 = __Local__44->FloatCurve.Keys[5];
	__Local__50.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__50.Time = 7.361395f;
	__Local__50.Value = -0.718216f;
	__Local__50.ArriveTangent = -0.156368f;
	__Local__50.LeaveTangent = -0.156368f;
	auto& __Local__51 = __Local__44->FloatCurve.Keys[6];
	__Local__51.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__51.Time = 8.828300f;
	__Local__51.Value = 0.257588f;
	__Local__51.ArriveTangent = 0.272195f;
	__Local__51.LeaveTangent = 0.272195f;
	auto& __Local__52 = __Local__44->FloatCurve.Keys[7];
	__Local__52.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__52.Time = 10.000000f;
	__Local__43.CurveFloat = __Local__44;
	auto& __Local__53 = (*(AccessPrivateProperty<FName >(&(__Local__43), FTTPropertyTrack::__PPO__PropertyName() )));
	__Local__53 = FName(TEXT("Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0"));
	auto& __Local__54 = (*(AccessPrivateProperty<FName >(&(__Local__43), FTTTrackBase::__PPO__TrackName() )));
	__Local__54 = FName(TEXT("Random_Mul"));
	__Local__13->TimelineGuid = FGuid(0x2A2D6723, 0x45616410, 0xBE34A298, 0x8D21B4A0);
	auto& __Local__55 = (*(AccessPrivateProperty<FName >((__Local__13), UTimelineTemplate::__PPO__VariableName() )));
	__Local__55 = FName(TEXT("Timeline_1"));
	auto& __Local__56 = (*(AccessPrivateProperty<FName >((__Local__13), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__56 = FName(TEXT("Timeline_1__Direction_2A2D672345616410BE34A2988D21B4A0"));
	auto& __Local__57 = (*(AccessPrivateProperty<FName >((__Local__13), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__57 = FName(TEXT("Timeline_1__UpdateFunc"));
	auto& __Local__58 = (*(AccessPrivateProperty<FName >((__Local__13), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__58 = FName(TEXT("Timeline_1__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	FVector  __Local__59 = FVector(0.000000,0.000000,0.000000);
	bpv__origin_top_position__pf = ((::IsValid(bpv__Arrow1__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Arrow1__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__59));
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetFloatParameter(FName(TEXT("beam_Width_Scale")), bpv__beam_width__pf);
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetEmitterEnable(FName(TEXT("smoke")), bpv__Smoke_Emitter_Enable__pf);
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetEmitterEnable(FName(TEXT("Distortion")), bpv__Distortion_Emittter_Enable__pf);
	}
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_bool_Variable__pf = bpv__oscillate__pf;
	bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf, bpv__oscil_scale__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf, bpv__shake_noise_scale__pf);
	bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Add_VectorFloat(bpv__origin_top_position__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorFloat(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__origin_top_position__pf, bpfv__CallFunc_Add_VectorFloat_ReturnValue_1__pf);
	if(::IsValid(bpv__Arrow1__pf))
	{
		bpv__Arrow1__pf->USceneComponent::K2_SetRelativeLocation(TSwitchValue<bool , FVector >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf)), false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	b0l__Temp_bool_Variable__pf = bpv__oscillate__pf;
	bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__Timeline_0_Dir_Vector_51B39A0549049B30464030A8B654ABDD__pf, bpv__oscil_scale__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Timeline_1_Random_Mul_2A2D672345616410BE34A2988D21B4A0__pf, bpv__shake_noise_scale__pf);
	bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Add_VectorFloat(bpv__origin_top_position__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorFloat(bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__origin_top_position__pf, bpfv__CallFunc_Add_VectorFloat_ReturnValue_1__pf);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(TSwitchValue<bool , FVector >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_Add_VectorFloat_ReturnValue__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf)), 0.000100);
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetVectorParameter(FName(TEXT("dir")), bpfv__CallFunc_Normal_ReturnValue__pf);
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->Activate(false);
	}
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Arrow__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Arrow__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetVectorParameter(FName(TEXT("aaa")), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
	}
	if(::IsValid(bpv__Arrow1__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Arrow1__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->SetVectorParameter(FName(TEXT("bbb")), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
	}
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::SetPlayRate(bpv__Oscil_Speed__pf);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::Play();
	}
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(bpv__shake_speed_min__pf, bpv__shake_speed_max__pf);
	if(::IsValid(bpv__Timeline_1__pf))
	{
		bpv__Timeline_1__pf->UTimelineComponent::SetPlayRate(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf);
	}
	if(::IsValid(bpv__Timeline_1__pf))
	{
		bpv__Timeline_1__pf->UTimelineComponent::Play();
	}
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ExecuteUbergraph_Fire_beam_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void AFire_beam_BP_C__pf711458173::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_2(16);
}
void AFire_beam_BP_C__pf711458173::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_0(11);
}
void AFire_beam_BP_C__pf711458173::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_1(7);
}
void AFire_beam_BP_C__pf711458173::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_4(5);
}
void AFire_beam_BP_C__pf711458173::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_3(2);
}
void AFire_beam_BP_C__pf711458173::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Fire_beam_BP__pf_5(1);
}
void AFire_beam_BP_C__pf711458173::bpf__UserConstructionScript__pf()
{
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	if(::IsValid((*(AccessPrivateProperty<UStaticMeshComponent* >((this), AStaticMeshActor::__PPO__StaticMeshComponent() )))))
	{
		bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = (*(AccessPrivateProperty<UStaticMeshComponent* >((this), AStaticMeshActor::__PPO__StaticMeshComponent() )))->SetStaticMesh(bpv__Staticmesh__pf);
	}
	if(::IsValid((*(AccessPrivateProperty<UStaticMeshComponent* >((this), AStaticMeshActor::__PPO__StaticMeshComponent() )))))
	{
		(*(AccessPrivateProperty<UStaticMeshComponent* >((this), AStaticMeshActor::__PPO__StaticMeshComponent() )))->USceneComponent::SetRelativeScale3D(bpv__Scale__pf);
	}
	if(::IsValid(bpv__Sphere__pf))
	{
		bpv__Sphere__pf->USceneComponent::K2_SetRelativeLocation(bpv__Base_position__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, false);
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->UParticleSystemComponent::SetTemplate(bpv__particle_Fire__pf);
	}
	if(::IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->USceneComponent::K2_SetRelativeLocation(bpv__Start_offset__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf, false);
	}
	if(::IsValid(bpv__Arrow1__pf))
	{
		bpv__Arrow1__pf->USceneComponent::K2_SetRelativeLocation(bpv__End_offset__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	if(::IsValid(bpv__Particlesystem__pf))
	{
		bpv__Particlesystem__pf->USceneComponent::SetRelativeScale3D(bpv__Particle_Scale__pf);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFire_beam_BP_C__pf711458173::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AFire_beam_BP_C__pf711458173::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{138, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BillboardComponent 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EditorResources/S_Actor.S_Actor 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{137, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{149, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{147, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshActor 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystem 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{135, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AFire_beam_BP_C__pf711458173
{
	FRegisterHelper__AFire_beam_BP_C__pf711458173()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/M5VFXVOL2/BluePrints/Fire_beam_BP"), &AFire_beam_BP_C__pf711458173::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFire_beam_BP_C__pf711458173 Instance;
};
FRegisterHelper__AFire_beam_BP_C__pf711458173 FRegisterHelper__AFire_beam_BP_C__pf711458173::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
