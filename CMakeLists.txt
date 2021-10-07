cmake_minimum_required(VERSION 3.10)

project(AP4A)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRCS
    src/AP4A.cpp
    src/Humidity.cpp
    src/Interface.cpp
    src/Light.cpp
    src/Scheduler.cpp
    src/Sensor.cpp
    src/Server.cpp
    src/Sound.cpp
    src/Temperature.cpp)

set(HEADERS 
    src/Humidity.hpp
    src/Interface.hpp
    src/Light.hpp
    src/Scheduler.hpp
    src/Sensor.hpp
    src/Server.hpp
    src/Sound.hpp
    src/Temperature.hpp)

add_executable(AP4A ${SRCS} ${HEADERS})

target_compile_features(AP4A PUBLIC cxx_nullptr)