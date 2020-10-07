#pragma once

#if defined(__GNUC__)
//  GCC
extern Hazel::Application *Hazel::CreateApplication();

int main(int, char **)
{
  Hazel::Log::Init();
  HZ_CORE_WARN("Initialized log");
  int a = 5;
  HZ_INFO("Hello! Var={0}", a);

  auto *app = Hazel::CreateApplication();
  app->Run();
  delete app;
  return 0;
}

#else
//  do nothing and hope for the best?
#error No entry point defined for current platform and compiler
#endif