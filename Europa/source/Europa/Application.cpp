#include "erpch.h"
#include "Application.h"

#include "Europa/Events/ApplicationEvent.h"
#include "Europa/Log.h"

namespace Europa
{
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		ER_TRACE(e.ToString());

		while (true);
	}
}
