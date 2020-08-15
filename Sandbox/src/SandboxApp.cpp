#include <Hazel.h>


class Sandbox : public Hazel::Application
{
	public: 
		Sandbox() {}
	public:
		~Sandbox() {}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}