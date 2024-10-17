#include <Europa.h>

class Sandbox : public Europa::Application
{

public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Europa::Application* Europa::CreateApplication()
{
	return new Sandbox();
}