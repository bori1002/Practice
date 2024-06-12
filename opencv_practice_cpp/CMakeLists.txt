cmake_minimum_required(VERSION 3.0)
project(your_project_name)

find_package(OpenCV REQUIRED)

add_executable(your_executable_name your_source_code.cpp)
target_link_libraries(your_executable_name ${OpenCV_LIBS})