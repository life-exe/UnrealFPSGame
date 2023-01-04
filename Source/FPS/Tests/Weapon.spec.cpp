// FPS game copyright

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

DEFINE_SPEC(FWeaponTest, "FPS",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

// BEGIN_DEFINE_SPEC(FTestClassName, "Category", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter |
// EAutomationTestFlags::HighPriority)

// END_DEFINE_SPEC(FTestClassName)

void FWeaponTest::Define()
{
    Describe("Weapon", [this]() { It("AmmoShouldBeFull", [this]() {}); });
}

#endif
