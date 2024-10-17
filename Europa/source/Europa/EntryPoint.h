#pragma once

#ifdef ER_PLATFORM_WINDOWS

extern Europa::Application* Europa::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Europa::CreateApplication();
	app->Run();
	delete app;
}

#endif // ER_PLATFORM_WINDOWS

