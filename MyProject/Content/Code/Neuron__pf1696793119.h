#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Node__pf1696793119.h"
class USynapse_C__pf1696793119;
#include "Neuron__pf1696793119.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/NN/Neuron.Neuron_C", OverrideNativeName="Neuron_C"))
class UNeuron_C__pf1696793119 : public UNode_C__pf1696793119
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Synapses", Category="Default", OverrideNativeName="Synapses"))
	TArray<USynapse_C__pf1696793119*> bpv__Synapses__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, SaveGame, meta=(DisplayName="Bias", Category="Default", OverrideNativeName="Bias"))
	float bpv__Bias__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Sigmoid_Out"))
	float b1l__CallFunc_Sigmoid_Out__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	USynapse_C__pf1696793119* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_Weighted_Value_Value"))
	float b1l__CallFunc_Get_Weighted_Value_Value__pf;
	UNeuron_C__pf1696793119(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Neuron__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Activate"))
	virtual void bpf__Activate__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Sigmoid"))
	virtual void bpf__Sigmoid__pf(float bpp__In__pf, /*out*/ float& bpp__Out__pf);
public:
};
