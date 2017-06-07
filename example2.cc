/**
 * This examples shows how to use glew to get extensions.
 *
 * "The OpenGL Extension Wrangler Library (GLEW) is a cross-platform open-source C/C++
 * extension loading library. GLEW provides efficient run-time mechanisms for
 * determining which OpenGL extensions are supported on the target platform.
 * OpenGL core and extension functionality is exposed in a single header file." - http://glew.sourceforge.net/
 *
 * Notice you have to include glew before including glfw.
 * Notice also, you must init glew AFTER you have a context.
 *
 */
#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;


int main() {
  if(glfwInit() == GLFW_FALSE) exit(EXIT_FAILURE);

  GLFWwindow * window = glfwCreateWindow(1024, 768, "window", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    exit(EXIT_FAILURE);
  }
  glfwMakeContextCurrent(window); //context is set here.

  /**
   * After context is created and set we can now use glew.
   */

  glewExperimental = true; //allows us access at the newer features.
  GLenum glewError = glewInit();
  if ( glewError != GLEW_OK) {
    cout << "GLEW init error: " << glewGetErrorString(glewError) << endl;
  }

  if (!GLEW_VERSION_2_1) {
    cout << "OpenGL 2.1 is not supported!" << endl;
    exit(EXIT_FAILURE);
  }

  const GLubyte * p = glGetString(GL_VERSION);
  std::cout << "Graphics Driver: " << p <<  std::endl;

  const GLubyte * q = glGetString(GL_SHADING_LANGUAGE_VERSION);
  std::cout << "GLSL version: " << q <<  std::endl;

  if (GLEW_ARB_vertex_array_object)
    cout << "genVertexArrays supported" << endl;

  if (GLEW_APPLE_vertex_array_object)
    cout << "genVertexArrayAPPLE supported" << endl;


  glfwDestroyWindow(window);
  glfwTerminate();
}