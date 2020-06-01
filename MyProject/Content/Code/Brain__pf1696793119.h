#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UNode_C__pf1696793119;
class UNeuron_C__pf1696793119;
class USynapse_C__pf1696793119;
#include "Brain__pf1696793119.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/NN/Brain.Brain_C", OverrideNativeName="Brain_C"))
class UBrain_C__pf1696793119 : public UObject
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Neuron Counts", Category="Default", tooltip="Stores neuron count for each layer including input and output", ExposeOnSpawn="true", OverrideNativeName="Neuron Counts"))
	TArray<int32> bpv__NeuronxCounts__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Neurons", Category="Default", OverrideNativeName="Neurons"))
	TArray<UNode_C__pf1696793119*> bpv__Neurons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Count_Neurons_in_Layers_Number_of_Neurons"))
	int32 b0l__CallFunc_Count_Neurons_in_Layers_Number_of_Neurons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UNode_C__pf1696793119* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	int32 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsNeuron"))
	UNeuron_C__pf1696793119* b0l__K2Node_DynamicCast_AsNeuron__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnObject_ReturnValue"))
	UNode_C__pf1696793119* b0l__CallFunc_SpawnObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnObject_ReturnValue_1"))
	UNeuron_C__pf1696793119* b0l__CallFunc_SpawnObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	int32 b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnObject_ReturnValue_2"))
	USynapse_C__pf1696793119* b0l__CallFunc_SpawnObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	UNode_C__pf1696793119* b0l__CallFunc_Array_Get_Item_3__pf;
	UBrain_C__pf1696793119(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Brain__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Brain__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Fire"))
	virtual void bpf__Fire__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Setup Brain"))
	virtual void bpf__SetupxBrain__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Count Neurons in Layers"))
	virtual void bpf__CountxNeuronsxinxLayers__pfTTT(int32 bpp__StartxLayer__pfT, int32 bpp__EndxLayer__pfT, /*out*/ int32& bpp__NumberxofxNeurons__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Outputs"))
	virtual void bpf__GetxOutputs__pfT(/*out*/ TArray<UNeuron_C__pf1696793119*>& bpp__Outputs__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Inputs"))
	virtual void bpf__GetxInputs__pfT(/*out*/ TArray<UNode_C__pf1696793119*>& bpp__Inputs__pf);
public:
};
