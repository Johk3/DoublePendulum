cmake_minimum_required(VERSION 3.0.0)
project(doublependulum VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(doublependulum main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(GLUT REQUIRED)
target_link_libraries(doublependulum PRIVATE GLUT::GLUT)

find_package(GLEW REQUIRED)
target_link_libraries(doublependulum PRIVATE GLEW::GLEW)

find_package(glm CONFIG REQUIRED)
target_link_libraries(doublependulum PRIVATE glm::glm)