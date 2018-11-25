#pragma once

#include <stdio.h>
#include <stdlib.h>

#include <chrono>
#include <cmath>

#if USE_GLFW

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#else

#ifndef EGL_EGLEXT_PROTOTYPES
#define EGL_EGLEXT_PROTOTYPES
#endif

#include <EGL/egl.h>
#include <EGL/eglext.h>

#ifndef GL_GLEXT_PROTOTYPES
#define GL_GLEXT_PROTOTYPES
#endif

#include <GLES3/gl3.h>
#include <GLES3/gl3ext.h>

#endif

#include <ml_graphics.h>
#include <ml_head_tracking.h>
#include <ml_perception.h>
#include <ml_lifecycle.h>
#include <ml_logging.h>