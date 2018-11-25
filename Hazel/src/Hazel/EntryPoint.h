#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::init();
	HZ_CORE_WARN("Initialized Log!"); 

	int a = 10;
	HZ_INFO("Hello Var={0}", a);


	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#endif
