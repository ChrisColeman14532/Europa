#pragma once

#include "Core.h"

namespace Europa
{
	class EUROPA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

