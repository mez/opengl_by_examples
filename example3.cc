/**
 * Quick example of the OLD API/ Immediate mode rendering.
 * We will be using legacy OpenGL and the fixed function pipeline.
 *
 * NOTE: this style of OpenGL is NO LONGER supported as of OpenGL 3.0
 *
 * NOTE: this can come in handy for quick debug tasks etc though...
 *
 */

#include <iostream>
#define GLEW_STATIC

#include <GL/glew.h>
#include <GLFW/glfw3.h>



using namespace std;

void draw() {
  glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex3f(-1,0,0);
    glColor3f(0,1,0);
    glVertex3f(0,1,0);
    glColor3f(0,0,1);
    glVertex3f(1,0,0);
  glEnd();
}

int main() {
  GLFWwindow *window;
  int width=1024;
  int height=768;

  if (!glfwInit()) exit(EXIT_FAILURE);
  window = glfwCreateWindow(width,height,"Immediate Rendering Example", nullptr, nullptr);

  if (!window) {
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0,0,width,height);
    glClearColor(.3,.3,.3,1);
    glClear(GL_COLOR_BUFFER_BIT);

    draw();

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwDestroyWindow(window);
  glfwTerminate();

}


