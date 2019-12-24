cmake_minimum_required(VERSION 3.4)
project(Demo)
set(Demo_VERSION_MAJOR 1)
set(Demo_VERSION_MINOR 0)
find_package(CURL REQUIRED)
aux_source_directory(. DIR_SRCS)
add_subdirectory(Math)
add_executable(main ${DIR_SRCS})
target_link_libraries(main MathFunctions ${CURL_LIBRARY})
# 尝试后需要Find_Package后再将动态库链接









# cmake_minimum_required(VERSION 3.4)

# find_package(CURL REQUIRED)
# include_directories(${CURL_INCLUDE_DIR})

# add_executable(main main.cc)
# target_link_libraries(main ${CURL_LIBRARY})
# # 其中CURL_LIBRARY与CURL_INCLUDE_DIR即对应库包的路径名称需要谷歌搜索。