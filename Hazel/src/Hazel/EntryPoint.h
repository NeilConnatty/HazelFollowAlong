#pragma once

#if defined(__GNUC__)
//  GCC
extern Hazel::Application *Hazel::CreateApplication();

int main(int, char **)
{
  auto *app = Hazel::CreateApplication();
  app->Run();
  delete app;
  return 0;
}

#else
//  do nothing and hope for the best?
#error No entry point defined for current platform and compiler
#endif