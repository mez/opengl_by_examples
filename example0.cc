/**
 * OpenGL by Example.
 *
 * This example shows that you need to first create a context to work with OpenGL.
 * This example will also print the OpenGL version you are currently using.
 *
 * for example:
 * OpenGL version: 2.1 INTEL-10.25.13
 */
#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

int main() {
  GLFWwindow *window;
  if (!glfwInit()) exit(EXIT_FAILURE);
  window = glfwCreateWindow(1024,748,"GLFW", nullptr, nullptr);

  if (!window) {
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window);

  const GLubyte * p = glGetString(GL_VERSION);
  std::cout << "OpenGL version: " << p <<  std::endl;
  return 0;
}