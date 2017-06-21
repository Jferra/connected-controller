cmake_minimum_required(VERSION 3.7)
project(Controller)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp color.cpp color.h button.cpp button.h myMQTTClientTest.cpp myMQTTClientTest.h)
add_executable(Controller ${SOURCE_FILES})
add_definitions(-std=c++0x -L/home/narvena/wiringPi/wiringPi )
add_compile_options(-l -lwiringPi -lpthread)
INCLUDE_DIRECTORIES(/home/narvena/paho.mqtt.c/src)
LINK_DIRECTORIES(/home/narvena/paho.mqtt.c)