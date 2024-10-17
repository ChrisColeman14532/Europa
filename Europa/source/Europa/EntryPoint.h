#pragma once

#ifdef ER_PLATFORM_WINDOWS

extern Europa::Application* Europa::CreateApplication();

int main(int argc, char** argv)
{
	Europa::Log::Init();
	ER_CORE_WARN("Initialized Log!");
	int a = 5;
	ER_INFO("Hello! Var={0}", a);

	auto app = Europa::CreateApplication();
	app->Run();
	delete app;
}

#endif // ER_PLATFORM_WINDOWS

