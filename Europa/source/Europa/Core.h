#pragma once

#ifdef ER_PLATFORM_WINDOWS
	#ifdef ER_BUILD_DLL
		#define EUROPA_API __declspec(dllexport)
	#else
		#define EUROPA_API __declspec(dllimport)
	#endif // ER_BUILD_DLL
#else
	#error Europa only supports Windows!
#endif