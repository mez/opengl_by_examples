Welcome to OpenGL by Examples using C++.
---

Each example will get more complex. I am using OpenGL
to improve my linear algebra intuition while having
some fun.

### Setup I am using

1. Mac OSX
2. OpenGL 2.1
3. C++ 11
4. cmake 3.7

### Libraries you'll need

1. GLFW (for window and context creation)
2. glew (GL extension wrangler)
3. glm (GL Mathematics)
4. OpenGL

If you're on a mac, do the following.

1. `brew install glfw`
2. `brew install glew`
3. `brew install glm`
4. OpenGL comes installed already.
   * You just have to link in your cmake like
   `link_libraries(GLFW glew "-framework OpenGL")`

### How to Build and Run

1. Clone this repo and `cd` in this repo.
2. Run `mkdir build && cd build`
3. Run `cmake .. && make`

### Examples in order

0. Show what version of OpenGL you're running.
1. Show how to create a GLFW window and context.
2. Show how to use glew.
3. Show how to use legacy fixed function pipeline to render aka immediate mode.