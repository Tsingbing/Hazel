#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();

int main() {
	Hazel::Log::init();

	Hazel::Log::GetCoreLogger()->warn("hazel warn ");
	Hazel::Log::GetClientLogger()->info("hello ");
	Hazel::Log::GetClientLogger()->trace("hello ");
	Hazel::Log::GetClientLogger()->error("hello ");
	HZ_CORE_TRACE("HHHH!");
	HZ_CORE_WARN("HHHH!");
	HZ_CORE_INFO("HHHH!");
	HZ_CORE_ERROR("HHHH!");

	auto app = Hazel::CreatApplication();
	app->Run();
	delete app;
}

#endif
