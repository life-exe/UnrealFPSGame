// My game copyright

#pragma once

#include "FPS/Tests/Utils/InputRecordingUtils.h"
#include "CoreMinimal.h"

namespace TPS
{
namespace Test
{

class JsonUtils
{
public:
    static bool WriteInputData(const FString& FileName, const FInputData& InputData);
    static bool ReadInputData(const FString& FileName, FInputData& InputData);
};

}  // namespace Test
}  // namespace TPS
