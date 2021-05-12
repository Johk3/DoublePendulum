#include <GL/freeglut_std.h>
#include<iostream>
// printf debugging
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<GL/glut.h>

void MyInit(int argc, char *argv[]){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(400, 400);
		
	int winID = glutCreateWindow("Double Pendulum");
	glutMainLoop();
}

int main(int argc, char *argv[]){
	MyInit(argc, argv);
	printf("works\n");
}

