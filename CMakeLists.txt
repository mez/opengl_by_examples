cmake_minimum_required(VERSION 3.7)
project(OpenGL_by_example)

set(CMAKE_CXX_STANDARD 11)

link_libraries(GLFW glew "-framework OpenGL")

add_executable(example0 example0.cc)
add_executable(example1 example1.cc)
add_executable(example2 example2.cc)
add_executable(example3 example3.cc)