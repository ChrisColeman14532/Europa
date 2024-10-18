#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Europa
{
	class EUROPA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define ER_CORE_TRACE(...) ::Europa::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ER_CORE_INFO(...)  ::Europa::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ER_CORE_WARN(...)  ::Europa::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ER_CORE_ERROR(...) ::Europa::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ER_CORE_FATAL(...) ::Europa::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ER_TRACE(...)      ::Europa::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ER_INFO(...)       ::Europa::Log::GetClientLogger()->info(__VA_ARGS__)
#define ER_WARN(...)       ::Europa::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ER_ERROR(...)      ::Europa::Log::GetClientLogger()->error(__VA_ARGS__)
#define ER_FATAL(...)      ::Europa::Log::GetClientLogger()->fatal(__VA_ARGS__)


