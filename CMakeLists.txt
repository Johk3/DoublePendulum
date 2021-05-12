cmake_minimum_required (VERSION 3.2)
project (dpendulum)
add_executable (dpendulum 
	main.cpp
	draw.h
)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(dpendulum ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
