cmake_minimum_required(VERSION 3.14)
project(myApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(myApp main.cpp StatePatten/State.cpp StatePatten/State.h StatePatten/ConcreteState.cpp StatePatten/ConcreteState.h)