#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hazel
{

class HAZEL_API Log
{
public:
  static void Init();
  static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_coreLogger; }
  static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_clientLogger; }

private:
static std::shared_ptr<spdlog::logger> s_coreLogger;
static std::shared_ptr<spdlog::logger> s_clientLogger;
};


} // namespace Hazel