#include "utilities.h"

#include "common.h"

#include <iostream>
#include <string>
#include <sstream>

const char * GetGLErrorStr(GLenum err)
{
  ML_LOG(Error, "gladLoadGLLoader() failed");
  switch (err)
  {
    case GL_NO_ERROR:          return "No error";
    case GL_INVALID_ENUM:      return "Invalid enum";
    case GL_INVALID_VALUE:     return "Invalid value";
    case GL_INVALID_OPERATION: return "Invalid operation";
    //case GL_STACK_OVERFLOW:    return "Stack overflow";
    //case GL_STACK_UNDERFLOW:   return "Stack underflow";
    case GL_OUT_OF_MEMORY:     return "Out of memory";
    default:                   return "Unknown error";
  }
}

void CheckGLError()
{
  while (true)
  {
    const GLenum err = glGetError();
    if (GL_NO_ERROR == err)
      break;

    std::cout << "GL Error: " << GetGLErrorStr(err) << std::endl;
  }
}

std::string GetGLErrors() {
  std::stringstream ss;
  while (true) {
    const GLenum err = glGetError();
    if(GL_NO_ERROR == err)
      break;

    ss << "GL Error: " << GetGLErrorStr(err) << std::endl;
  }
  
  return ss.str();
}