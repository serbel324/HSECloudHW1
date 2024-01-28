cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 17)

project(App)

set(SOURCES
    main.cpp
    deep_thought.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
