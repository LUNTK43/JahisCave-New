#include "NativizedAssets.h"
#include "BP_ItemParent__pf476478934.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
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
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "HeadsUpDisplay__pf1489439355.h"
#include "InspectionScreen__pf1489439355.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_ItemParent_C__pf476478934::ABP_ItemParent_C__pf476478934(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = bpv__StaticMesh__pf;
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_ItemParent_C__pf476478934::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__StaticMesh__pf->SetCollisionProfileName(FName(TEXT("PhysicsActor")));
	auto& __Local__1 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__1 = FVector(0.250000, 0.250000, 0.250000);
	static TWeakFieldPtr<FProperty> __Local__3{};
	const FProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	(((FBoolProperty*)__Local__2)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	bpv__Player__pf = nullptr;
	bpv__isRotating__pf = false;
	bpv__ZoomLevel__pf = 10;
	bpv__ItemName__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FCCFADB244332B43EBF2ECBE8439271E]\", \"C6AEDC9C4E0949BB88C0DF85070BBD77\", \"ItemName\")")	);
	bpv__ItemDescription__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FCCFADB244332B43EBF2ECBE8439271E]\", \"FF9BB6D744E6E8A2748578807514B98D\", \"Look at this awesome piece of pergament!\")")	);
	bpv__ZoomMinValue__pf = 1;
	bpv__ZoomMaxValue__pf = 20;
	bpv__ZoomAdd__pf = 1;
	bpv__MouseRotationValue__pf = -5.000000f;
	bpv__ZoomSpeed__pf = 20.000000f;
	bpv__InspectionDistance__pf = 200.000000f;
	bpv__InspectionUI__pf = nullptr;
	auto& __Local__4 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__4 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ItemParent_C__pf476478934::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ItemParent_C__pf476478934::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(AFirstPersonCharacter_C__pf205484891::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UHeadsUpDisplay_C__pf1489439355::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInspectionScreen_C__pf1489439355::StaticClass());
	extern UClass* Z_Construct_UClass_UInteract_Interface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInteract_Interface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__5 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<UInputAxisKeyDelegateBinding>(InDynamicClass, UInputAxisKeyDelegateBinding::StaticClass(), TEXT("InputAxisKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__6);
	auto __Local__7 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__7);
	auto __Local__8 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__8);
	static TWeakFieldPtr<FProperty> __Local__10{};
	const FProperty* __Local__9 = __Local__10.Get();
	if (nullptr == __Local__9)
	{
		__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__9);
		__Local__10 = __Local__9;
	}
	(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__5), false, 0));
	__Local__6->InputAxisKeyDelegateBindings = TArray<FBlueprintInputAxisKeyDelegateBinding> ();
	__Local__6->InputAxisKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__6->InputAxisKeyDelegateBindings.GetData(), 2);
	auto& __Local__11 = __Local__6->InputAxisKeyDelegateBindings[0];
	__Local__11.AxisKey = FKey(TEXT("MouseY"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1"));
	auto& __Local__12 = __Local__6->InputAxisKeyDelegateBindings[1];
	__Local__12.AxisKey = FKey(TEXT("MouseX"));
	__Local__12.FunctionNameToBind = FName(TEXT("InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0"));
	__Local__7->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__7->InputKeyDelegateBindings.AddUninitialized(4);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__7->InputKeyDelegateBindings.GetData(), 4);
	auto& __Local__13 = __Local__7->InputKeyDelegateBindings[0];
	__Local__13.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__13.InputKeyEvent = EInputEvent::IE_Released;
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"));
	auto& __Local__14 = __Local__7->InputKeyDelegateBindings[1];
	__Local__14.InputChord.Key = FKey(TEXT("MouseScrollDown"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0"));
	auto& __Local__15 = __Local__7->InputKeyDelegateBindings[2];
	__Local__15.InputChord.Key = FKey(TEXT("MouseScrollUp"));
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1"));
	auto& __Local__16 = __Local__7->InputKeyDelegateBindings[3];
	__Local__16.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__16.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"));
	__Local__8->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__8->InputActionDelegateBindings.AddUninitialized(1);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__8->InputActionDelegateBindings.GetData(), 1);
	auto& __Local__17 = __Local__8->InputActionDelegateBindings[0];
	__Local__17.InputActionName = FName(TEXT("Interact"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__ZoomLevel__pf, bpv__ZoomAdd__pf);
	bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, bpv__ZoomMinValue__pf, bpv__ZoomMaxValue__pf);
	bpv__ZoomLevel__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
	bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__ZoomLevel__pf, bpv__ZoomMinValue__pf);
	if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf))
	{
		bpfv__CallFunc_GetCameraLocation_ReturnValue_1__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf->GetCameraLocation();
	}
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf))
	{
		bpfv__CallFunc_GetCameraRotation_ReturnValue_1__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf->GetCameraRotation();
	}
	bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetCameraRotation_ReturnValue_1__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__ZoomLevel__pf, bpv__ZoomSpeed__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue_1__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetCameraLocation_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue_1__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf, false);
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_1(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	if (!bpv__isRotating__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisKeyEvent_AxisValue__pf, bpv__MouseRotationValue__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 0.000000);
	bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf, bpfv__CallFunc_MakeRotator_ReturnValue_1__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue_1__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf, false);
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_2(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	if (!bpv__isRotating__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisKeyEvent_AxisValue_1__pf, bpv__MouseRotationValue__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, false);
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ZoomLevel__pf, bpv__ZoomAdd__pf);
	bpfv__CallFunc_Clamp_ReturnValue_1__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_Add_IntInt_ReturnValue__pf, bpv__ZoomMinValue__pf, bpv__ZoomMaxValue__pf);
	bpv__ZoomLevel__pf = bpfv__CallFunc_Clamp_ReturnValue_1__pf;
	bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__ZoomLevel__pf, bpv__ZoomMaxValue__pf);
	if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraLocation();
	}
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpv__ZoomLevel__pf, bpv__ZoomSpeed__pf);
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraRotation();
	}
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_4(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("name"));
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Text;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = bpv__ItemName__pf;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = 0.000000;
	b0l__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
	b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
	b0l__K2Node_MakeArray_Array__pf[0] = b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[FCCFADB244332B43EBF2ECBE8439271E]\", \"CE7516FF4771C0EA0BFE8F85E5A901FF\", \"Press E to Pick Up {name}\")")	), b0l__K2Node_MakeArray_Array__pf);
	if(::IsValid(b0l__K2Node_Event_PlayerCharacter__pf) && ::IsValid(b0l__K2Node_Event_PlayerCharacter__pf->bpv__HUD__pf))
	{
		b0l__K2Node_Event_PlayerCharacter__pf->bpv__HUD__pf->bpf__UpdateMessage__pf(bpfv__CallFunc_Format_ReturnValue__pf, /*out*/ b0l__CallFunc_UpdateMessage_IsVisible__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpf__StopInspect__pf();
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_6(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				ABP_ItemParent_C__pf476478934*  __Local__18 = ((ABP_ItemParent_C__pf476478934*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__Player__pf)) ? (bpv__Player__pf->bpv__CurrentlyHeldItem__pf) : (__Local__18)));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				bpf__StartInspect__pf();
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__PickUpItem__pf();
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpv__Player__pf = b0l__K2Node_Event_PlayerCharacter_1__pf;
				__CurrentState = 8;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key_3__pf;
	bpv__isRotating__pf = false;
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__ExecuteUbergraph_BP_ItemParent__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key_2__pf;
	bpv__isRotating__pf = true;
	return; // KCST_GotoReturn
}
void ABP_ItemParent_C__pf476478934::bpf__LookAt__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf)
{
	b0l__K2Node_Event_PlayerCharacter__pf = bpp__PlayerCharacter__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_4(28);
}
void ABP_ItemParent_C__pf476478934::bpf__InteractWith__pf(AFirstPersonCharacter_C__pf205484891* bpp__PlayerCharacter__pf)
{
	b0l__K2Node_Event_PlayerCharacter_1__pf = bpp__PlayerCharacter__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_6(26);
}
void ABP_ItemParent_C__pf476478934::bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_1(25);
}
void ABP_ItemParent_C__pf476478934::bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisKeyEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_2(20);
}
void ABP_ItemParent_C__pf476478934::bpf__InpActEvt_Interact_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_5(15);
}
void ABP_ItemParent_C__pf476478934::bpf__InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_0(11);
}
void ABP_ItemParent_C__pf476478934::bpf__InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_3(4);
}
void ABP_ItemParent_C__pf476478934::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_8(1);
}
void ABP_ItemParent_C__pf476478934::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_ItemParent__pf_7(17);
}
void ABP_ItemParent_C__pf476478934::bpf__PickUpItem__pf()
{
	USceneComponent*  __Local__19 = ((USceneComponent*)nullptr);
	AActor::K2_AttachToComponent(((::IsValid(bpv__Player__pf)) ? (bpv__Player__pf->bpv__ItemGrip__pf) : (__Local__19)), FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, true);
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpv__StaticMesh__pf->SetSimulatePhysics(false);
	}
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpv__StaticMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if(::IsValid(bpv__Player__pf))
	{
		bpv__Player__pf->bpv__CurrentlyHeldItem__pf = this;
	}
}
void ABP_ItemParent_C__pf476478934::bpf__StartInspect__pf()
{
	UInspectionScreen_C__pf1489439355* bpfv__CallFunc_Create_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	if(::IsValid(bpv__Player__pf) && ::IsValid(bpv__Player__pf->bpv__HUD__pf))
	{
		bpv__Player__pf->bpv__HUD__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UInspectionScreen_C__pf1489439355>(UWidgetBlueprintLibrary::Create(this, UInspectionScreen_C__pf1489439355::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	UKismetSystemLibrary::SetTextPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("ItemDescription")), bpv__ItemDescription__pf);
	bpv__InspectionUI__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	if(::IsValid(bpv__InspectionUI__pf))
	{
		bpv__InspectionUI__pf->UUserWidget::AddToViewport(0);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpv__Player__pf))
	{
		bpv__Player__pf->DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	EnableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraLocation();
	}
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraRotation();
	}
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__InspectionDistance__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
}
void ABP_ItemParent_C__pf476478934::bpf__DropItem__pf()
{
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	AActor::K2_DetachFromActor(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld);
	bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraLocation();
	}
	if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
	{
		bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->GetCameraRotation();
	}
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__InspectionDistance__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetCameraLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpv__StaticMesh__pf->SetSimulatePhysics(true);
	}
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpv__StaticMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
void ABP_ItemParent_C__pf476478934::bpf__StopInspect__pf()
{
	FHitResult bpfv__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorRelativeLocation_SweepHitResult__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpv__Player__pf))
	{
		bpv__Player__pf->EnableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	}
	AActor::K2_SetActorRelativeLocation(FVector(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorRelativeLocation_SweepHitResult__pf, false);
	AActor::K2_SetActorRelativeRotation(FRotator(0.000000,0.000000,0.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorRelativeRotation_SweepHitResult__pf, false);
	if(::IsValid(bpv__InspectionUI__pf))
	{
		bpv__InspectionUI__pf->RemoveFromParent();
	}
	if(::IsValid(bpv__Player__pf) && ::IsValid(bpv__Player__pf->bpv__HUD__pf))
	{
		bpv__Player__pf->bpv__HUD__pf->SetVisibility(ESlateVisibility::Visible);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ItemParent_C__pf476478934::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Geometry/Meshes/1M_Cube.1M_Cube 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ItemParent_C__pf476478934::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/Interact_Interface.Interact_Interface_C 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.World 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Border 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Infobox/Controls_UI.Controls_UI 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Infobox/Text_UI.Text_UI 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/ForgetMeKnot-Roman_Font.ForgetMeKnot-Roman_Font 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/HeadsUpDisplay.HeadsUpDisplay_C 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UI/InspectionScreen.InspectionScreen_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_ItemParent_C__pf476478934
{
	FRegisterHelper__ABP_ItemParent_C__pf476478934()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Items/BP_ItemParent"), &ABP_ItemParent_C__pf476478934::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_ItemParent_C__pf476478934 Instance;
};
FRegisterHelper__ABP_ItemParent_C__pf476478934 FRegisterHelper__ABP_ItemParent_C__pf476478934::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
