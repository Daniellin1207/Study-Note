cmake_minimum_required(VERSION 3.4)

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})

# set(Headers http.h)

# add_library(tmpLib SHARED ${Headers})
# target_link_libraries(tmpLib ${LIBCURL_LIBS})

add_executable(main main.cc)
target_link_libraries(main ${CURL_LIBRARY})



# cmake_minimum_required(VERSION 3.0)
# set(CMAKE_CXX_STANDARD 11)

# # set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_BUILD_TYPE Release)

# find_package(OpenCV REQUIRED)
# include_directories(${OpenCV_INCLUDE_DIRS})

# find_package(Boost REQUIRED COMPONENTS filesystem)
# include_directories(${Boost_INCLUDE_DIRS})

# set(Sources src/blur_detection.cc
#             src/orb_extractor.cc
#             src/defect_detection.cc
#             src/utils.cc
#             src/timer.cc)

# set(Headers src/blur_detection.h
#             src/orb_extractor.h
#             src/defect_detection.h
#             src/utils.h
#             src/timer.h)

# add_library(defectdetect SHARED ${Sources} ${Headers})
# target_link_libraries(defectdetect ${OpenCV_LIBS})
# add_executable(main src/main.cc)
# target_link_libraries(main defectdetect ${OpenCV_LIBS} ${Boost_LIBRARIES})

# # add_executable(test src/test_single.cc)
# # target_link_libraries(test defectdetect ${OpenCV_LIBS} )
# add_executable(test_single src/test_single.cc ${Headers} ${Sources})
# target_link_libraries(test_single  ${OpenCV_LIBS})

