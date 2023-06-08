cmake_minimum_required(VERSION 3.25)
project(DrawTheKitty)

set(CMAKE_CXX_STANDARD 17)

add_executable(DrawTheKitty main.cpp myStart.cpp myStart.h myCats.cpp myCats.h)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

target_link_libraries(DrawTheKitty PRIVATE sfml-graphics sfml-window sfml-system)