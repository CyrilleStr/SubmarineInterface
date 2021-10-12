cmake_minimum_required(VERSION 3.10)

project(AP4A)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRCS
    src/AP4A.cpp
    src/Sensor.cpp
    src/Humidity.cpp
    src/Light.cpp
    src/Sound.cpp
    src/Temperature.cpp
    src/Server.cpp
    src/Scheduler.cpp
    src/Interface.cpp
    )

set(HEADERS 
src/Sensor.hpp
    src/Humidity.hpp
    src/Light.hpp
    src/Sound.hpp
    src/Temperature.hpp
    src/Interface.hpp
    src/Scheduler.hpp
    src/Server.hpp
    )

add_executable(AP4A ${SRCS} ${HEADERS})

target_compile_features(AP4A PUBLIC cxx_nullptr)