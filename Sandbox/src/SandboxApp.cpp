#include "Hazel.h"
#include <stdio.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	
	}

	//void Run()
	//{
	//	printf("Welcome to Hazel engine!\n");
	//}
};

Hazel::Application*  Hazel::CreatApplication()
{
	return new Sandbox();
}