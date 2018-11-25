#pragma once

#if USE_GLFW
  #include <glad/glad.h>
  #include <GLFW/glfw3.h>
#else
  #include <EGL/egl.h>
  #include <EGL/eglext.h>
  #include <GLES3/gl3.h>
  #include <GLES3/gl3ext.h>
#endif

#include <string>

const char * GetGLErrorStr(GLenum err);
void CheckGLError();
std::string GetGLErrors();