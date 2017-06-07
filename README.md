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
3. OpenGL

If you're on a mac like I am do the following.

1. `brew install glfw`
2. `brew install glew`
3. OpenGL comes installed already.
   * You just have to link in your cmake like
   `link_libraries(GLFW glew "-framework OpenGL")`
### How to Build and Run

1. Clone this repo and `cd` in this repo.
2. Run `mkdir build && cd build`
3. Run `cmake .. && make`
