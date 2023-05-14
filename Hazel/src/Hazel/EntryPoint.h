#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();

int main(int argc,char**argv)
{
	printf("HAHAHHAHAHH");
	auto app = Hazel::CreatApplication();
	app->run();
	delete app;
}


#endif 
