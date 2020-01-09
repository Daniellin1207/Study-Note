
# Version Ubuntu

# project(main)
# cmake_minimum_required(VERSION 2.8)
# aux_source_directory(. SRC_LIST)
# include_directories(/usr/local/Cellar/glew/2.1.0/include)
# link_directories(/usr/local/Cellar/glew/2.1.0/lib)
# include_directories(/usr/local/Cellar/glfw/3.3/include)
# link_directories(/usr/local/Cellar/glfw/3.3/lib)
# add_executable(${PROJECT_NAME} ${SRC_LIST})
# target_link_libraries(${PROJECT_NAME} glfw GL GLEW dl pthread Xi X11 )# Xrandr )# Xinerama Xxf86vm Xcursor)

# ============================================================================
# Version Mac

project(main)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

include_directories(/usr/local/Cellar/glew/2.1.0/include)
link_directories(/usr/local/Cellar/glew/2.1.0/lib)
include_directories(/usr/local/Cellar/glfw/3.3/include)
link_directories(/usr/local/Cellar/glfw/3.3/lib)

find_package(OpenGL REQUIRED)
if(OpenGL_FOUND)
    Message("Found Opengl")
    Message(${OPENGL_LIBRARIES})
    include_directories(${OPENGL_INCLUDE_DIR})
    link_directories(${OPENGL_LIBRARY_DIR})
    # add_definitions(${OpenGL_DEFINITIONS})
else()
    MESSAGE("Not Found Opengl")
endif()
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} glfw GLEW ${OPENGL_LIBRARIES})


