#include "NativizedAssets.h"
#include "Credits__pf608494304.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
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
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UCredits_C__pf608494304::UCredits_C__pf608494304(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button__pf = nullptr;
	bpv__Button_1__pf = nullptr;
	bpv__Button_2__pf = nullptr;
	bpv__Button_3__pf = nullptr;
	bpv__Button_4__pf = nullptr;
	bpv__Button_5__pf = nullptr;
	bpv__Button_66__pf = nullptr;
	bpv__Credits__pf = nullptr;
	bpv__Play__pf = nullptr;
	bpv__Quit__pf = nullptr;
	bpv__Titlescreen__pf = nullptr;
	bpv__ArtStationxJanxLink__pfTT = FString(TEXT("https://www.artstation.com/janneidigk"));
	bpv__NewVar_0__pf = FString(TEXT("https://www.artstation.com/julralf"));
	bpv__NewVar_1__pf = FString(TEXT("https://www.artstation.com/emilyliebo"));
	bpv__NewVar_2__pf = FString(TEXT("https://www.artstation.com/bloodypixell"));
	bpv__NewVar_3__pf = FString(TEXT("https://www.artstation.com/pascalkruse"));
	bpv__NewVar_4__pf = FString(TEXT("https://www.artstation.com/percival0705"));
	bpv__NewVar_5__pf = FString(TEXT("https://www.artstation.com/kito4444"));
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UCredits_C__pf608494304::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UCredits_C__pf608494304::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(10);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 10);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_5"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_4"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_3"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_2"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_1"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Button"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Button_66"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Credits_Button_66_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Quit"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Credits"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("Play"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__12 = NewObject<UCanvasPanel>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(10);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Right = 1.921875f;
	__Local__14->LayoutData.Offsets.Bottom = 1.081055f;
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UImage>(__Local__1, TEXT("Titlescreen"), (EObjectFlags)0x00280008);
	__Local__15->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = 32.000000f;
	__Local__17->LayoutData.Offsets.Top = 28.000000f;
	__Local__17->LayoutData.Offsets.Right = 1127.026978f;
	__Local__17->LayoutData.Offsets.Bottom = 1047.016968f;
	__Local__17->Parent = __Local__12;
	auto __Local__18 = NewObject<UBorder>(__Local__1, TEXT("Border_379"), (EObjectFlags)0x00280008);
	__Local__18->Background.ImageSize = FVector2D(562.000000, 496.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Background), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__13.Add(__Local__17);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = 1200.000000f;
	__Local__20->LayoutData.Offsets.Top = 227.528107f;
	__Local__20->LayoutData.Offsets.Right = 560.460449f;
	__Local__20->LayoutData.Offsets.Bottom = 666.922668f;
	__Local__20->Parent = __Local__12;
	auto __Local__21 = NewObject<UVerticalBox>(__Local__1, TEXT("Msain"), (EObjectFlags)0x00280008);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(3);
	auto __Local__23 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<UButton>(__Local__1, TEXT("Play"), (EObjectFlags)0x00280008);
	__Local__24->WidgetStyle.Normal.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__24->WidgetStyle.Hovered.ImageSize = FVector2D(700.000000, 240.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__24->WidgetStyle.Pressed.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	auto __Local__28 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__28->Parent = __Local__21;
	auto __Local__29 = NewObject<UButton>(__Local__1, TEXT("Credits"), (EObjectFlags)0x00280008);
	__Local__29->WidgetStyle.Normal.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.Hovered.ImageSize = FVector2D(700.000000, 240.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.Pressed.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__22.Add(__Local__28);
	auto __Local__33 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__33->Parent = __Local__21;
	auto __Local__34 = NewObject<UButton>(__Local__1, TEXT("Quit"), (EObjectFlags)0x00280008);
	__Local__34->WidgetStyle.Normal.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__34->WidgetStyle.Hovered.ImageSize = FVector2D(700.000000, 240.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__36 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__34->WidgetStyle.Pressed.ImageSize = FVector2D(675.000000, 211.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__22.Add(__Local__33);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__13.Add(__Local__20);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__38->LayoutData.Offsets.Left = 144.000000f;
	__Local__38->LayoutData.Offsets.Top = 60.000000f;
	__Local__38->LayoutData.Offsets.Right = 914.147522f;
	__Local__38->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__38->Parent = __Local__12;
	auto __Local__39 = NewObject<UButton>(__Local__1, TEXT("Button_66"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__39->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__13.Add(__Local__38);
	auto __Local__43 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_31"), (EObjectFlags)0x00280008);
	__Local__43->LayoutData.Offsets.Left = 144.000000f;
	__Local__43->LayoutData.Offsets.Top = 176.000000f;
	__Local__43->LayoutData.Offsets.Right = 914.147522f;
	__Local__43->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__43->Parent = __Local__12;
	auto __Local__44 = NewObject<UButton>(__Local__1, TEXT("Button"), (EObjectFlags)0x00280008);
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__44->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__13.Add(__Local__43);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_33"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Left = 148.000000f;
	__Local__48->LayoutData.Offsets.Top = 292.000000f;
	__Local__48->LayoutData.Offsets.Right = 914.147522f;
	__Local__48->LayoutData.Offsets.Bottom = 118.977867f;
	__Local__48->Parent = __Local__12;
	auto __Local__49 = NewObject<UButton>(__Local__1, TEXT("Button_1"), (EObjectFlags)0x00280008);
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__51 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__52 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__52 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__49->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__13.Add(__Local__48);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Left = 140.000000f;
	__Local__53->LayoutData.Offsets.Top = 444.000000f;
	__Local__53->LayoutData.Offsets.Right = 914.147522f;
	__Local__53->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__53->Parent = __Local__12;
	auto __Local__54 = NewObject<UButton>(__Local__1, TEXT("Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__55 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__54->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__13.Add(__Local__53);
	auto __Local__58 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_25"), (EObjectFlags)0x00280008);
	__Local__58->LayoutData.Offsets.Left = 124.000000f;
	__Local__58->LayoutData.Offsets.Top = 556.000000f;
	__Local__58->LayoutData.Offsets.Right = 954.187561f;
	__Local__58->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__58->Parent = __Local__12;
	auto __Local__59 = NewObject<UButton>(__Local__1, TEXT("Button_3"), (EObjectFlags)0x00280008);
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__62 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__62 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__59->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__13.Add(__Local__58);
	auto __Local__63 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_30"), (EObjectFlags)0x00280008);
	__Local__63->LayoutData.Offsets.Left = 314.813477f;
	__Local__63->LayoutData.Offsets.Top = 708.000000f;
	__Local__63->LayoutData.Offsets.Right = 567.133850f;
	__Local__63->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__63->Parent = __Local__12;
	auto __Local__64 = NewObject<UButton>(__Local__1, TEXT("Button_4"), (EObjectFlags)0x00280008);
	auto& __Local__65 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__65 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__66 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__66 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__64->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__64->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__13.Add(__Local__63);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__12, TEXT("CanvasPanelSlot_32"), (EObjectFlags)0x00280008);
	__Local__68->LayoutData.Offsets.Left = 296.000000f;
	__Local__68->LayoutData.Offsets.Top = 932.000000f;
	__Local__68->LayoutData.Offsets.Right = 604.949463f;
	__Local__68->LayoutData.Offsets.Bottom = 85.611168f;
	__Local__68->Parent = __Local__12;
	auto __Local__69 = NewObject<UButton>(__Local__1, TEXT("Button_5"), (EObjectFlags)0x00280008);
	auto& __Local__70 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__70 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__71 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__71 = FLinearColor(0.000000, 0.000000, 0.000000, 0.266000);
	auto& __Local__72 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__72 = FLinearColor(1.000000, 0.969105, 0.138749, 0.421000);
	__Local__69->ColorAndOpacity = FLinearColor(1.000000, 0.000000, 0.506555, 1.000000);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__13.Add(__Local__68);
	__Local__1->RootWidget = __Local__12;
}
PRAGMA_ENABLE_OPTIMIZATION
void UCredits_C__pf608494304::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__73;
	SlotNames.Append(__Local__73);
}
void UCredits_C__pf608494304::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__74;
	TArray<FDelegateRuntimeBinding>  __Local__75;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UCredits_C__pf608494304::StaticClass())->MiscConvertedSubobjects[0]), __Local__74, __Local__75);
}
void UCredits_C__pf608494304::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_4__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_5__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_3__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_2__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_1__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__NewVar_0__pf);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(bpv__ArtStationxJanxLink__pfTT);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit, false);
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_8(int32 bpp__EntryPoint__pf)
{
	UCredits_C__pf608494304* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UCredits_C__pf608494304>(UWidgetBlueprintLibrary::Create(this, GetClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	RemoveFromParent();
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__ExecuteUbergraph_Credits__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
	}
	UGameplayStatics::OpenLevel(this, FName(TEXT("Jahis_Cave")), false, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_1(24);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_4_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_0(22);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_3_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_2(20);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_3(18);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_4(16);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_5(14);
}
void UCredits_C__pf608494304::bpf__BndEvt__Credits_Button_66_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_6(12);
}
void UCredits_C__pf608494304::bpf__BndEvt__MainMenu_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_7(10);
}
void UCredits_C__pf608494304::bpf__BndEvt__MainMenu_Credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_8(6);
}
void UCredits_C__pf608494304::bpf__BndEvt__MainMenu_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Credits__pf_9(2);
}
FText  UCredits_C__pf608494304::bpf__Get_Play_ToolTipText_0__pf()
{
	FText bpp__ReturnValue__pf{};
	bpp__ReturnValue__pf = FText::GetEmpty();
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UCredits_C__pf608494304::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/titlescreen.titlescreen 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Text_Credits2.Text_Credits2 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Play_UI.Play_UI 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/PlayGlow_UI.PlayGlow_UI 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/PlayHighlight_UI.PlayHighlight_UI 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Credits_UI.Credits_UI 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/CreditsGlow_UI.CreditsGlow_UI 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/CreditsHighlight_UI.CreditsHighlight_UI 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/Quit_UI.Quit_UI 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/QuitGlow_UI.QuitGlow_UI 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Assets/Internal-External/UI/QuitHighlight_UI.QuitHighlight_UI 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UCredits_C__pf608494304::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{32, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{82, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UCredits_C__pf608494304
{
	FRegisterHelper__UCredits_C__pf608494304()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Scenes/Gate_2_Levels/Credits"), &UCredits_C__pf608494304::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UCredits_C__pf608494304 Instance;
};
FRegisterHelper__UCredits_C__pf608494304 FRegisterHelper__UCredits_C__pf608494304::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
