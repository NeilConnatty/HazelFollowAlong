#include "Log.h"

namespace Hazel
{

std::shared_ptr<spdlog::logger> Log::s_coreLogger;
std::shared_ptr<spdlog::logger> Log::s_clientLogger;


void Log::Init()
{
  
}

}