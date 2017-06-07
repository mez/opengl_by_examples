#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
  /**
   * 1st we create the window and set it as the context.
   */
  if (glfwInit() == GLFW_FALSE) exit(EXIT_FAILURE);

  int width = 1024;
  int height = 768;

  GLFWwindow * window = glfwCreateWindow(width, height, "GLFW Window Example1", nullptr, nullptr);

  if (!window) { //window wasn't created.
    glfwTerminate(); //free all resource from the glfwInit() call
    exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window); //set the window as the context.

  /**
   * At this point we have a window and a context is all setup!
   * 2nd. We jump into the main loop and dump stuff into the buffers to be rendered.
   *
   */

  //This function returns the value of the close flag of the specified window.
  while(glfwWindowShouldClose(window) == GLFW_FALSE) {
    glViewport(0,0,width,height); //set the viewport of where we want to draw
    glClearColor(0,0,1,1); //clear color (R,G,B,A) for example blue
    glClear(GL_COLOR_BUFFER_BIT); //clears the window to the color you want.

    //Normal drawing code would go here.

    glfwSwapBuffers(window); //swap buffer aka render.
    glfwPollEvents(); //listen for window events
  }

  /**
   * 3rd. release all resources and terminate glfw
   *
   */
  glfwDestroyWindow(window);
  glfwTerminate();
}