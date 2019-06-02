cmake_minimum_required(VERSION 3.14)
project(myApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(myApp main.cpp StatePatten/State.cpp StatePatten/State.h StatePatten/ConcreteState.cpp StatePatten/ConcreteState.h StatePatten/Context.cpp StatePatten/Context.h StatePatten/ConcreteStateA.cpp StatePatten/ConcreteStateA.h AdapterPatter/Target.cpp AdapterPatter/Target.h AdapterPatter/Adaptee.cpp AdapterPatter/Adaptee.h AdapterPatter/Adapter.cpp AdapterPatter/Adapter.h Adapter-object/OTarget.cpp Adapter-object/OTarget.h Adapter-object/OAdapter.cpp Adapter-object/OAdapter.h Adapter-object/OAdaptee.cpp Adapter-object/OAdaptee.h)