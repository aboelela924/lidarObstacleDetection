cmake_minimum_required(VERSION 3.10)

project(Lidar_Obstacle_detection)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(PCL 1.2 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
list(REMOVE_ITEM PCL_LIBRARIES "vtkproj4")

add_executable(environment src/environment.cpp src/pointCloudReader.cpp)
target_link_libraries(environment ${PCL_LIBRARIES})