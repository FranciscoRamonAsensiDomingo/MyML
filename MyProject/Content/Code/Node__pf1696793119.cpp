#include "MyProject.h"
#include "Node__pf1696793119.h"
#include "GeneratedCodeHelpers.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UNode_C__pf1696793119::UNode_C__pf1696793119(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Value__pf = 0.000000f;
}
PRAGMA_ENABLE_OPTIMIZATION
void UNode_C__pf1696793119::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UNode_C__pf1696793119::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UNode_C__pf1696793119::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UNode_C__pf1696793119::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UNode_C__pf1696793119
{
	FRegisterHelper__UNode_C__pf1696793119()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/NN/Node"), &UNode_C__pf1696793119::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UNode_C__pf1696793119 Instance;
};
FRegisterHelper__UNode_C__pf1696793119 FRegisterHelper__UNode_C__pf1696793119::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
