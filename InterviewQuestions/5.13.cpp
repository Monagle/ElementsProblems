#include "stdafx.h"
#include "5.13.h"
#include <math.h>
#include <gl/glut.h>

static int r1x = 1;
static int r1y = 2;
static int r1h = 20;
static int r1w = 20;

static int r2x = 50;
static int r2y = 50;
static int r2h = -20;
static int r2w = -10;

static int rix;
static int riy;
static int rih;
static int riw;

using namespace std;

void main5_13(int argc, _TCHAR* argv[]){
	argc = 0;
	//glutInit(&argc, NULL);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50,100);
	glutInitWindowSize(400,300);
	glutCreateWindow("Intersecting Rectangles");

	
	/* Init the GL state */
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,100.0,0.0,100.0);
	glutDisplayFunc(redraw);

	/* Main loop */
	glutMainLoop();
	cin.ignore();
	//Calculate

}

/* Redrawing func */
void redraw(void)
{
	
	drawRectangles();
	
	glFlush();
		
};

void drawRectangles(){

	glColor3f(1,0,0);
	//glBegin(GL_QUADS);
	glRecti(r1x, r1y, (r1x + r1w), (r1y + r1h)) ;
	glColor3f(0,0,1);
	glRecti(r2x, r2y, (r2x + r2w), (r2y + r2h)) ;
	glColor3f(.75,0,.75);
	glRecti(rix, riy, (rix + riw), (riy + rih)) ;
	//glEnd( );

}

void calculateIntersection(){


}