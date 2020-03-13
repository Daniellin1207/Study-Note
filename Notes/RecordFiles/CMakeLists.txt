cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE DEBUG)
project(Demo)
set (INC_DIR "")
set (LINK_DIR "")
include_directories(${INC_DIR})  //加载了include的文件夹  
link_directories(${LINK_DIR})    //加载了lib的文件夹  
target_link_libraries("")
add_executable(main main.cc)
# add_executable(main1 template_test.cc)