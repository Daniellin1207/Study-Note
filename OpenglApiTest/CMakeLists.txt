project(main)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(main glfw3 GL GLEW dl pthread Xi X11)# Xrandr )# Xinerama Xxf86vm Xcursor)


