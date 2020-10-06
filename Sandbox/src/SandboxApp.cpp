#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
  Sandbox() {}
  ~Sandbox() final {}
};

Hazel::Application *Hazel::CreateApplication() { return new Sandbox(); }
