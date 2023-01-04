// FPS game copyright

#if WITH_AUTOMATION_TESTS

#include "FPS/Tests/GameplayTest.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGameplayTest, "FPS.GameplayTest",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority);

bool FGameplayTest::RunTest(const FString& Parameters)
{
    return true;
}

#endif
