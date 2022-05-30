#include <iostream>
using namespace std;
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include<cstdio>
#include <GL/gl.h>
GLfloat position = 0.0f;
GLfloat speed = 0.035f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.035f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.035f;
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.035f;
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.035f;

GLfloat position100 = 0.0f;
GLfloat speed100 = 0.020f;

void update100(int value) {

  if( position100 <-.15)
        position100 = .25f;

    position100 -= speed100;

	glutPostRedisplay();


	glutTimerFunc(100, update100, 0);
}

GLfloat position101 = 0.0f;
GLfloat speed101 = 0.020f;

void update101(int value) {

  if( position101 >.15)
        position101 = -.2f;

    position101 += speed101;

	glutPostRedisplay();


	glutTimerFunc(100, update101, 0);
}

void update(int value) {

    if(position >0.55)
        position = -1.0f;
    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 >0.65)
        position1 = -1.0f;
    position1 += speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 >0.75)
        position2 = -1.0f;
    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 >0.85)
        position3 = -1.0f;
    position3 += speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 >0.95)
        position4 = -1.0f;
    position4 += speed4; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}


GLfloat position00 = 0.0f;
GLfloat speed00 = 0.035f;

GLfloat position11 = 0.0f;
GLfloat speed11 = 0.035f;
GLfloat position21 = 0.0f;
GLfloat speed21 = 0.035f;
GLfloat position31 = 0.0f;
GLfloat speed31 = 0.035f;
GLfloat position41 = 0.0f;
GLfloat speed41 = 0.035f;
void update00(int value) {

    if(position00 <-0.55)
        position00 =  1.0f;
    position00 -= speed00; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update00, 0);
}

void update11(int value) {

    if(position11 <-0.65)
        position11 =  1.0f;
    position11 -= speed11; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update11, 0);
}

void update21(int value) {

    if(position21 <-0.75)
        position21 =  1.0f;
    position21 -= speed21; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update21, 0);
}

void update31(int value) {

    if(position31 <-0.85)
        position31 = 1.0f;
    position31 -= speed31; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update31, 0);
}

void update41(int value) {

    if(position41 <-0.95)
        position41 =  1.0f;
    position41 -= speed41; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update41, 0);
}

GLfloat position12 = 0.0f;
GLfloat speed12 = 0.15f;
void update12(int value) {

    if(position12 <-3.0)
        position12 =  1.0f;
    position12 -= speed12; //position=position-speed;1-.1=.9

	glutPostRedisplay();



	glutTimerFunc(100, update12, 0);
}

GLfloat position13 = 0.0f;
GLfloat speed13 = 0.08f;
void update13(int value) {

    if(position13 <-3.5)
        position13 =  1.0f;
    position13 -= speed13; //position=position-speed;1-.1=.9

	glutPostRedisplay();



	glutTimerFunc(100, update13, 0);
}

GLfloat position14 = 0.0f;
GLfloat speed14 = 0.15f;
void update14(int value) {

    if(position14 >3.5)
        position14 = -1.0f;
    position14 += speed14; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update14, 0);
}

GLfloat position15 = 0.0f;
GLfloat speed15 = 0.09f;
void update15(int value) {

    if(position15 >3.5)
        position15 = -1.0f;
    position15 += speed15; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update15, 0);
}
//forrain
GLfloat position699 = 0.0f;
GLfloat speed699 = 0.09f;
void update699(int value) {

    if(position699 >2.)
        position699 = +1.0f;
    position699 += speed699; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update699, 0);
}

GLfloat position111 = 0.0f;
GLfloat speed111 = 0.0f;
void update111(int value) {

     if(position111 <-2.0)
        position111 =  1.0f;
    position111 -= speed111; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update111, 0);
}

GLfloat position222 = 0.0f;
GLfloat speed222 = 0.0f;
void update222(int value) {

    if(position222 >2.0)
        position222 = -1.0f;
    position222 += speed222; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update222, 0);
}

void Idle()
{


    glutPostRedisplay();//// marks the current window as needing to be redisplayed


}

void screen()
{
    gluOrtho2D(-2,2,-2,2);
}
void day() {

   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

   glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS);    //BACKGROUND--->SUNLIGHT
glColor3ub(193, 224, 227);
glVertex2f(-2.0f,2.0f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,2.0f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->footpath
glColor3ub(255, 230, 128);
glVertex2f(-2.0f,-.7f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-.7f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->ROAD
glColor3ub(94, 97, 95);
glVertex2f(-2.0f,-1.15f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-1.15f);
glEnd();


glLineWidth(2.5);  //ROAD LINES 1
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-2.0f,-1.4f);
glVertex2f(-1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 2
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-1.4f);
glVertex2f(-1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 3
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.4f);
glVertex2f(-1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 4
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.8f,-1.4f);
glVertex2f(-0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 5
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.4f,-1.4f);
glVertex2f(-0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 6
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.0f,-1.4f);
glVertex2f(0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 7
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.4f,-1.4f);
glVertex2f(0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 8
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.8f,-1.4f);
glVertex2f(1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 9
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 10
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-1.4f);
glVertex2f(1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 11
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.9f,-1.4f);
glVertex2f(2.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //HOSPITALS ROAD BORDER
glBegin(GL_LINES);
glColor3ub(0, 9, 10);
glVertex2f(-2.0f,-.7f);
glVertex2f(2.0f,-.7f);
glEnd();


glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glVertex2f(.8f,-.7f);
glVertex2f(.8f,1.3f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING ROOFTOP
glColor3ub(237, 244, 245);
glVertex2f(-0.9f,1.3f);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glVertex2f(.9f,1.3f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(.9f,1.3f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.35f);
glVertex2f(.9f,1.35f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(-.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(.9f,1.3f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(.8f,1.3f);
glVertex2f(.8f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glVertex2f(-.8f,-.7f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glVertex2f(-.8f,.9f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.8f);
glVertex2f(-1.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.9f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.85f);
glVertex2f(-1.8f,.85f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(1.7f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,-.7f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(1.8f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar right
glColor3ub(115, 38, 38);
glVertex2f(.95f,.9);
glVertex2f(1.f,.9);
glVertex2f(1.f,1.5f);
glVertex2f(.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light right
glColor3ub(0,0,0);
glVertex2f(.9f,1.5);
glVertex2f(1.05f,1.5);
glVertex2f(1.05f,1.6f);
glVertex2f(.9f,1.6f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar left
glColor3ub(115, 38, 38);
glVertex2f(-.95f,.9);
glVertex2f(-1.f,.9);
glVertex2f(-1.f,1.5f);
glVertex2f(-.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light left
glColor3ub(0,0,0);
glVertex2f(-.9f,1.5);
glVertex2f(-1.05f,1.5);
glVertex2f(-1.05f,1.6f);
glVertex2f(-.9f,1.6f);
glEnd();


# define PI           3.14159265358979323846 //hospital's circle
int a6;
 GLfloat x6=-.01f; GLfloat y6=1.4f; GLfloat radius6 =.2f;
int triangleAmount6 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x6, y6); // center of circle
		for(a6 = 0; a6<= triangleAmount6;a6++) {
			glVertex2f(
		            x6 + (radius6 * cos(a6 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(a6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //sun
int a81;
 GLfloat x81=1.7f; GLfloat y81=1.8f; GLfloat radius81 =.2f;
int triangleAmount81 = 81; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi81 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 209, 277);
		glVertex2f(x81, y81); // center of circle
		for(a81 = 0; a81<= triangleAmount81;a81++) {
			glVertex2f(
		            x81 + (radius81 * cos(a81 *  twicePi81 / triangleAmount81)),
			    y81 + (radius81 * sin(a81 * twicePi81 / triangleAmount81))
			);
		}
	glEnd();

glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(-.01f,1.5f);
glVertex2f(-.01,1.25f);
glEnd();

glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(0.14f,1.4f);
glVertex2f(-.16,1.4f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES);//right building border
glColor3ub(20, 1, 13);
glVertex2f(1.7f,.8f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_LINES);//right building border--rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.85f);
glVertex2f(1.8f,.85f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.8f);
glVertex2f(1.8f,.8f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(1.8f,.8f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //window 1's background behind nurse in middle building
glColor3ub(231, 232, 188);
glVertex2f(-.6f,.8f);
glVertex2f(-.6f,.5f);
glVertex2f(-.04f,.5f);
glVertex2f(-.04f,.8f);
glEnd();

glBegin(GL_POLYGON); //window 2's background behind nurse in middle building
glColor3ub(231, 232, 188);
glVertex2f(0.1f,.8f);
glVertex2f(.1f,.5f);
glVertex2f(.7f,.5f);
glVertex2f(.7f,.8f);
glEnd();


glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.04f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.6f,.5f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.5f);
glVertex2f(-.6f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.5f);
glVertex2f(0.1f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.8f);
glVertex2f(0.7f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.8f);
glVertex2f(0.7f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.5f);
glVertex2f(0.1f,.5f);
glEnd();

glPushMatrix();//<------------------------WINDOW NURSE ANIMATION------------------------------------------------->
glTranslatef(position100,0.0f, 0.0f);

glBegin(GL_TRIANGLES);//middle building window 1-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(-.35f,.7f);
glVertex2f(-.4f,.5f);
glVertex2f(-.3f,.5f);
glEnd();


# define PI           3.14159265358979323846 //middle building window 1-->NurseHead
glColor3ub(0,0,0);
		GLfloat xxx1=-.351f; GLfloat yyy1=.7f; GLfloat radiusxx1 =.05f;
	int triangleAmountxx1 = 20; //# of triangles used to draw circle
int i;
	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx1, yyy1); // center of circle
		for(i = 0; i <= triangleAmountxx1;i++) {
			glVertex2f(
		            xxx1 + (



                      radiusxx1 * cos(i *  twicePixx1 / triangleAmountxx1)),
			    yyy1 + (radiusxx1 * sin(i * twicePixx1 / triangleAmountxx1))
			);
		}
	glEnd();

glPopMatrix();
glPushMatrix();//<------------------------WINDOW NURSE  2 ANIMATION------------------------------------------------->
glTranslatef(position101,0.0f, 0.0f);

	glBegin(GL_TRIANGLES);//middle building window 2-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(.35f,.7f);
glVertex2f(.4f,.5f);
glVertex2f(.3f,.5f);
glEnd();

# define PI           3.14159265358979323846 //middle building window 2-->NurseHead
glColor3ub(0,0,0);
GLfloat xxx2=.35f; GLfloat yyy2=.7f; GLfloat radiusxx2 =.05f;
	int triangleAmountxx2 = 20; //# of triangles used to draw circle

	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx2, yyy2); // center of circle
		for(i = 0; i <= triangleAmountxx2;i++) {
			glVertex2f(
		            xxx2 + (radiusxx2 * cos(i *  twicePixx2 / triangleAmountxx2)),
			    yyy2 + (radiusxx2 * sin(i * twicePixx2 / triangleAmountxx2))
			);
		}
	glEnd();

glPopMatrix();

glBegin(GL_POLYGON); //Fixed window 1 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.61f,1.21f);
glVertex2f(-.61f,.89f);
glVertex2f(-.393f,.89f);
glVertex2f(-.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of middle building
glColor3ub(231, 232, 188);
glVertex2f(-.6f,1.2f);
glVertex2f(-.6f,.9f);
glVertex2f(-.4f,.9f);
glVertex2f(-.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.31f,1.21f);
glVertex2f(-.31f,.89f);
glVertex2f(-.093f,.89f);
glVertex2f(-.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of middle building
glColor3ub(231, 232, 188);
glVertex2f(-.3f,1.2f);
glVertex2f(-.3f,.9f);
glVertex2f(-.1f,.9f);
glVertex2f(-.1f,1.2f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 3 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.31f,1.21f);
glVertex2f(.31f,.89f);
glVertex2f(.093f,.89f);
glVertex2f(.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of middle building
glColor3ub(231, 232, 188);
glVertex2f(.3f,1.2f);
glVertex2f(.3f,.9f);
glVertex2f(.1f,.9f);
glVertex2f(.1f,1.2f);
glEnd();



glBegin(GL_POLYGON); //Fixed window 4 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.61f,1.21f);
glVertex2f(.61f,.89f);
glVertex2f(.393f,.89f);
glVertex2f(.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 4 of middle building
glColor3ub(231, 232, 188);
glVertex2f(.6f,1.2f);
glVertex2f(.6f,.9f);
glVertex2f(.4f,.9f);
glVertex2f(.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.6f,.6f);
glVertex2f(-1.6f,.4f);
glVertex2f(-1.4f,.4f);
glVertex2f(-1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.3f,.6f);
glVertex2f(-1.3f,.4f);
glVertex2f(-1.1f,.4f);
glVertex2f(-1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.0f,.6f);
glVertex2f(-1.0f,.4f);
glVertex2f(-.8f,.4f);
glVertex2f(-.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.6f,.3f);
glVertex2f(-1.6f,.1f);
glVertex2f(-1.4f,.1f);
glVertex2f(-1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2nd row) of Left building
glVertex2f(-1.3f,.3f);
glVertex2f(-1.3f,.1f);
glVertex2f(-1.1f,.1f);
glVertex2f(-1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.0f,.3f);
glVertex2f(-1.0f,.1f);
glVertex2f(-.8f,.1f);
glVertex2f(-.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of Right building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,.6f);
glVertex2f(1.6f,.4f);
glVertex2f(1.4f,.4f);
glVertex2f(1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Right building
glColor3ub(231, 232, 188);
glVertex2f(1.3f,.6f);
glVertex2f(1.3f,.4f);
glVertex2f(1.1f,.4f);
glVertex2f(1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,.6f);
glVertex2f(1.0f,.4f);
glVertex2f(.8f,.4f);
glVertex2f(.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,.3f);
glVertex2f(1.6f,.1f);
glVertex2f(1.4f,.1f);
glVertex2f(1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2nd row) of RIGHT building
glVertex2f(1.3f,.3f);
glVertex2f(1.3f,.1f);
glVertex2f(1.1f,.1f);
glVertex2f(1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,.3f);
glVertex2f(1.0f,.1f);
glVertex2f(.8f,.1f);
glVertex2f(.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1(3rd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,-.2f);
glVertex2f(1.6f,0.0f);
glVertex2f(1.4f,0.0f);
glVertex2f(1.4f,-.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2rd row) of RIGHT building
glVertex2f(1.3f,-.2f);
glVertex2f(1.3f,0.0f);
glVertex2f(1.1f,0.0f);
glVertex2f(1.1f,-.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(3rd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,-.2f);
glVertex2f(1.0f,0.0f);
glVertex2f(.8f,0.0f);
glVertex2f(.8f,-.2f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-0.9f,.05f);
glEnd();

glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.9f,.05);
glVertex2f(-0.9f,-.7f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-1.5f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(.5f,.3f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.2);
glVertex2f(.5f,.2f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(-.5f,-.7f);
glEnd();

glLineWidth(1.0);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.3);
glVertex2f(0.0f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.5f,.3);
glVertex2f(.5f,-.7f);
glEnd();

glBegin(GL_POLYGON); //VACCINE BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(1.6f,.2f);
glVertex2f(1.6f,-.7f);
glVertex2f(1.97f,-.7);
glVertex2f(1.97f,.2f);
glEnd();




glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.6f,.2);
glVertex2f(1.6f,-.7f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.97f,.2);
glVertex2f(1.97,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(244, 245, 240);
glVertex2f(1.66f,.2);
glVertex2f(1.89f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glLineWidth(3.5);  //VACCINE BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glEnd();


# define PI           3.14159265358979323846 //VACCINE BOOTH
int a7;
 GLfloat x7=1.77f; GLfloat y7=.5f; GLfloat radius7 =.05f;
int triangleAmount7 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x7, y7); // center of circle
		for(a7 = 0; a7<= triangleAmount7;a7++) {
			glVertex2f(
		            x7 + (radius7 * cos(a7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(a7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();


//VACCINE BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.3);
glVertex2f(1.55f,-.5f);
glVertex2f(1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE HEAD
int a3;
 GLfloat x3=1.65f; GLfloat y3=-.3f; GLfloat radius3 =.045f;
int triangleAmount3 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x3, y3); // center of circle
		for(a3 = 0; a3<= triangleAmount3;a3++) {
			glVertex2f(
		            x3 + (radius3 * cos(a3 *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(a3 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a31;
 GLfloat x31=1.67f; GLfloat y31=-.29f; GLfloat radius31 =.009f;
int triangleAmount31 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi31 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x31, y31); // center of circle
		for(a31 = 0; a31<= triangleAmount31;a31++) {
			glVertex2f(
		            x31 + (radius31 * cos(a31 *  twicePi31 / triangleAmount31)),
			    y31 + (radius31 * sin(a31 * twicePi31 / triangleAmount31))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a312;
 GLfloat x312=1.64f; GLfloat y312=-.29f; GLfloat radius312 =.009f;
int triangleAmount312 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi312 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x312, y312); // center of circle
		for(a312 = 0; a312<= triangleAmount312;a312++) {
			glVertex2f(
		            x312 + (radius312 * cos(a312 *  twicePi312 / triangleAmount312)),
			    y312 + (radius312 * sin(a312 * twicePi312 / triangleAmount312))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.2f);
glVertex2f(1.63f,-.27f);
glVertex2f(1.68f,-.27f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(1.54f,-.4f);
glVertex2f(1.54f,-.7f);
glVertex2f(1.75f,-.7f);
glVertex2f(1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //VACCINE BOOTH--->TABLE'S SYMBOL
int a1;
 GLfloat x1=1.65f; GLfloat y1=-.55f; GLfloat radius1 =.05f;
int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x1, y1); // center of circle
		for(a1 = 0; a1<= triangleAmount7;a1++) {
			glVertex2f(
		            x1+ (radius1 * cos(a1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(a1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.65f,-.6f);
glVertex2f(1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-.55f);
glVertex2f(1.7,-.55f);
glEnd();


glBegin(GL_POLYGON); //COVID TEST BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(-1.6f,.2f);
glVertex2f(-1.6f,-.7f);
glVertex2f(-1.97f,-.7);
glVertex2f(-1.97f,.2f);
glEnd();



glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.97f,.2);
glVertex2f(-1.97,-.7f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.6f,.2);
glVertex2f(-1.6,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(244, 245, 240);
glVertex2f(-1.66f,.2);
glVertex2f(-1.89f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH
int a8;
 GLfloat x8=-1.77f; GLfloat y8=.5f; GLfloat radius8 =.05f;
int triangleAmount8 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x8, y8); // center of circle
		for(a8 = 0; a8<= triangleAmount7;a8++) {
			glVertex2f(
		            x8 + (radius8 * cos(a8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(a8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();




//COVID TEST BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.3);
glVertex2f(-1.55f,-.5f);
glVertex2f(-1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //COVID TEST BOOTH--->NURSE HEAD
int a33;
 GLfloat x33=-1.65f; GLfloat y33=-.3f; GLfloat radius33 =.045f;
int triangleAmount33 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi33 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x33, y33); // center of circle
		for(a33 = 0; a33<= triangleAmount33;a33++) {
			glVertex2f(
		            x33 + (radius33 * cos(a33 *  twicePi33 / triangleAmount33)),
			    y33 + (radius33 * sin(a33 * twicePi33 / triangleAmount33))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a314;
 GLfloat x314=-1.67f; GLfloat y314=-.29f; GLfloat radius314 =.009f;
int triangleAmount314 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi314 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x314, y314); // center of circle
		for(a314 = 0; a314<= triangleAmount314;a314++) {
			glVertex2f(
		            x314 + (radius314 * cos(a314 *  twicePi314 / triangleAmount314)),
			    y314 + (radius314 * sin(a314 * twicePi314 / triangleAmount314))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a3112;
 GLfloat x3112=-1.64f; GLfloat y3112=-.29f; GLfloat radius3112 =.009f;
int triangleAmount3112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x3112, y3112); // center of circle
		for(a3112 = 0; a3112<= triangleAmount3112;a3112++) {
			glVertex2f(
		            x3112 + (radius3112 * cos(a3112 *  twicePi3112 / triangleAmount3112)),
			    y3112 + (radius312 * sin(a3112 * twicePi3112 / triangleAmount3112))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.2f);
glVertex2f(-1.63f,-.27f);
glVertex2f(-1.68f,-.27f);
glEnd();






glBegin(GL_POLYGON); //COVID TEST BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(-1.54f,-.4f);
glVertex2f(-1.54f,-.7f);
glVertex2f(-1.75f,-.7f);
glVertex2f(-1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH--->TABLE'S SYMBOL
int a12;
 GLfloat x12=-1.65f; GLfloat y12=-.55f; GLfloat radius12 =.05f;
int triangleAmount12 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x12, y12); // center of circle
		for(a12 = 0; a12<= triangleAmount12;a12++) {
			glVertex2f(
		            x12+ (radius1 * cos(a12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(a12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.65f,-.6f);
glVertex2f(-1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-.55f);
glVertex2f(-1.7,-.55f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(2.00f,-.5f);
glVertex2f(1.9,-.5f);
glVertex2f(1.9f,-.7f);
glVertex2f(2.00F,-.7f);
glEnd();

glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(1.87f,-.5f);
glVertex2f(1.9f,-.5f);
glVertex2f(1.87f,-.7f);
glVertex2f(1.9f,-.7f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(2.00f,-.3f);
glVertex2f(1.96f,-.3f);
glVertex2f(1.94f,-.5f);
glVertex2f(2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(1.945f,-.45f);
glVertex2f(1.89f,-.43f);
glVertex2f(1.89f,-.58f);
glVertex2f(1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(1.99f,-.35f);
glVertex2f(1.97f,-.36f);
glVertex2f(1.96f,-.48f);
glVertex2f(1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a121;
 GLfloat x121=1.97f; GLfloat y121=-.32f; GLfloat radius121 =.04f;
int triangleAmount121 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi121 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x121, y121); // center of circle
		for(a121 = 0; a121<= triangleAmount121;a121++) {
			glVertex2f(
		            x121+ (radius121 * cos(a121 *  twicePi121 / triangleAmount121)),
			    y121 + (radius121 * sin(a121 * twicePi121 / triangleAmount121))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(1.8f,-.5f);
glVertex2f(1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(1.79f,-.2f);
glVertex2f(1.78f,-.6f);
glVertex2f(1.85f,-.6f);
glVertex2f(1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a1211;
 GLfloat x1211=1.82f; GLfloat y1211=-.23f; GLfloat radius1211 =.04f;
int triangleAmount1211 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1211, y1211); // center of circle
		for(a1211 = 0; a1211<= triangleAmount1211;a1211++) {
			glVertex2f(
		            x1211+ (radius1211 * cos(a1211 *  twicePi1211 / triangleAmount1211)),
			    y1211 + (radius1211 * sin(a1211 * twicePi1211 / triangleAmount1211))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.3f);
glVertex2f(1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.4f);
glVertex2f(1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(1.78f,-.27f);
glVertex2f(1.84f,-.18f);
glVertex2f(1.8f,-.15f);
glEnd();



//

glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(-2.00f,-.5f);
glVertex2f(-1.9,-.5f);
glVertex2f(-1.9f,-.7f);
glVertex2f(-2.00F,-.7f);
glEnd();

glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(-1.87f,-.5f);
glVertex2f(-1.9f,-.5f);
glVertex2f(-1.87f,-.7f);
glVertex2f(-1.9f,-.7f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-2.00f,-.3f);
glVertex2f(-1.96f,-.3f);
glVertex2f(-1.94f,-.5f);
glVertex2f(-2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-1.945f,-.45f);
glVertex2f(-1.89f,-.43f);
glVertex2f(-1.89f,-.58f);
glVertex2f(-1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(-1.99f,-.35f);
glVertex2f(-1.97f,-.36f);
glVertex2f(-1.96f,-.48f);
glVertex2f(-1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a1212;
 GLfloat x1212=-1.97f; GLfloat y1212=-.32f; GLfloat radius1212 =.04f;
int triangleAmount1212 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1212 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1212, y1212); // center of circle
		for(a1212 = 0; a1212<= triangleAmount1212;a1212++) {
			glVertex2f(
		            x1212+ (radius1212 * cos(a1212 *  twicePi1212 / triangleAmount1212)),
			    y1212 + (radius1212 * sin(a1212 * twicePi1212 / triangleAmount1212))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(-1.8f,-.5f);
glVertex2f(-1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(-1.79f,-.2f);
glVertex2f(-1.78f,-.6f);
glVertex2f(-1.85f,-.6f);
glVertex2f(-1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a12112;
 GLfloat x12112=-1.82f; GLfloat y12112=-.23f; GLfloat radius12112 =.04f;
int triangleAmount12112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x12112, y12112); // center of circle
		for(a12112 = 0; a12112<= triangleAmount12112;a12112++) {
			glVertex2f(
		            x12112+ (radius12112 * cos(a12112 *  twicePi12112 / triangleAmount12112)),
			    y12112 + (radius12112 * sin(a12112 * twicePi12112 / triangleAmount12112))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.3f);
glVertex2f(-1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.4f);
glVertex2f(-1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(-1.78f,-.27f);
glVertex2f(-1.84f,-.18f);
glVertex2f(-1.8f,-.15f);
glEnd();




GLfloat x23=1.68f; GLfloat y23=-0.8f; GLfloat radius23 =.05f;//distance
glColor3ub(255,255,255);
	int i23;
	int lineAmount23 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i23 = 0; i23 <= lineAmount23;i23++) {
			glVertex2f(
			    x23 + (radius23 * cos(i23 *  twicePi23 / lineAmount23)),
			    y23 + (radius23* sin(i23 * twicePi23 / lineAmount23))
			);
		}
	glEnd();

GLfloat x24=1.38f; GLfloat y24=-0.8f; GLfloat radius24 =.05f;//distance
glColor3ub(255,255,255);
	int i24;
	int lineAmount24 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i24 = 0; i24 <= lineAmount24;i24++) {
			glVertex2f(
			    x24 + (radius24 * cos(i24 *  twicePi24 / lineAmount24)),
			    y24 + (radius24* sin(i24 * twicePi24 / lineAmount24))
			);
		}
	glEnd();


GLfloat x25=1.08f; GLfloat y25=-0.8f; GLfloat radius25 =.05f;//distance
glColor3ub(255,255,255);
	int i25;
	int lineAmount25 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i25 = 0; i25 <= lineAmount25;i25++) {
			glVertex2f(
			    x25 + (radius25 * cos(i25 *  twicePi25 / lineAmount25)),
			    y25 + (radius25* sin(i25 * twicePi25 / lineAmount25))
			);
		}
	glEnd();


GLfloat x26=0.78f; GLfloat y26=-0.8f; GLfloat radius26 =.05f;//distance
glColor3ub(255,255,255);
	int i26;
	int lineAmount26 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i26 = 0; i26 <= lineAmount26;i26++) {
			glVertex2f(
			    x26 + (radius26 * cos(i26 *  twicePi26 / lineAmount26)),
			    y26 + (radius26* sin(i26 * twicePi26 / lineAmount26))
			);
		}
	glEnd();


GLfloat x27=-1.68f; GLfloat y27=-0.8f; GLfloat radius27 =.05f;//distance
glColor3ub(255,255,255);
	int i27;
	int lineAmount27 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i27 = 0; i27 <= lineAmount27;i27++) {
			glVertex2f(
			    x27 + (radius27 * cos(i27 *  twicePi27 / lineAmount27)),
			    y27 + (radius27* sin(i27 * twicePi27 / lineAmount27))
			);
		}
	glEnd();

GLfloat x28=-1.38f; GLfloat y28=-0.8f; GLfloat radius28 =.05f;//distance
glColor3ub(255,255,255);
	int i28;
	int lineAmount28 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i28 = 0; i28 <= lineAmount28;i28++) {
			glVertex2f(
			    x28 + (radius28 * cos(i28 *  twicePi28 / lineAmount28)),
			    y28 + (radius28* sin(i28 * twicePi28 / lineAmount28))
			);
		}
	glEnd();


GLfloat x29=-1.08f; GLfloat y29=-0.8f; GLfloat radius29 =.05f;//distance
glColor3ub(255,255,255);
	int i29;
	int lineAmount29 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi29 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i29 = 0; i29 <= lineAmount29;i29++) {
			glVertex2f(
			    x29 + (radius29 * cos(i29 *  twicePi29 / lineAmount29)),
			    y29 + (radius29* sin(i29 * twicePi29 / lineAmount29))
			);
		}
	glEnd();


GLfloat x30=-0.78f; GLfloat y30=-0.8f; GLfloat radius30 =.05f;//distance
glColor3ub(255,255,255);
	int i30;
	int lineAmount30 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi30 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i30 = 0; i30 <= lineAmount30;i30++) {
			glVertex2f(
			    x30 + (radius30 * cos(i30 *  twicePi30 / lineAmount30)),
			    y30 + (radius30* sin(i30 * twicePi30 / lineAmount30))
			);
		}
	glEnd();



/*-------------------------------------------------------------------Human for covid test boot-------------------------------------------------*/


/*_______________Human 2___________________*/
glPushMatrix();
glTranslatef(position111,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.49f);
glVertex2f(-1.7f,-.49f);
glVertex2f(-1.7f,-.73f);
glVertex2f(-1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.49f);
glVertex2f(-1.68f,-.49f);
glVertex2f(-1.68f,-.63f);
glVertex2f(-1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.4f);
glVertex2f(-1.62f,-.4f);
glVertex2f(-1.63f,-.42f);
glEnd();

int a62;
 GLfloat x62=-1.65f; GLfloat y62=-.45f; GLfloat radius62 =.05f;
int triangleAmount62 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi62 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x62, y62); // center of circle
		for(a62 = 0; a62<= triangleAmount62;a62++) {
			glVertex2f(
		            x62+ (radius1 * cos(a62 *  twicePi62 / triangleAmount62)),
			    y62 + (radius62 * sin(a62 * twicePi62 / triangleAmount62))
			);
		}
	glEnd();

int a63;
 GLfloat x63=-1.65f; GLfloat y63=-.63f; GLfloat radius63 =.01f;
int triangleAmount63 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi63 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x63, y63); // center of circle
		for(a63 = 0; a63<= triangleAmount63;a63++) {
			glVertex2f(
		            x63+ (radius1 * cos(a63 *  twicePi63 / triangleAmount63)),
			    y63 + (radius63 * sin(a63 * twicePi63 / triangleAmount63))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.45f);
glVertex2f(-1.7f,-.5f);
glVertex2f(-1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.72f);
glVertex2f(-1.67f,-0.72f);
glVertex2f(-1.675f,-0.85f);
glVertex2f(-1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.72f);
glVertex2f(-1.63f,-0.72f);
glVertex2f(-1.635f,-0.85f);
glVertex2f(-1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*/


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.32f,-.49f);
glVertex2f(-1.4f,-.49f);
glVertex2f(-1.4f,-.73f);
glVertex2f(-1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.49f);
glVertex2f(-1.38f,-.49f);
glVertex2f(-1.38f,-.63f);
glVertex2f(-1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.4f);
glVertex2f(-1.32f,-.4f);
glVertex2f(-1.33f,-.42f);
glEnd();

int a64;
 GLfloat x64=-1.35f; GLfloat y64=-.45f; GLfloat radius64 =.05f;
int triangleAmount64 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi64 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x64, y64); // center of circle
		for(a64 = 0; a64<= triangleAmount64;a64++) {
			glVertex2f(
		            x64+ (radius1 * cos(a64 *  twicePi64 / triangleAmount64)),
			    y64 + (radius64 * sin(a64 * twicePi64 / triangleAmount64))
			);
		}
	glEnd();

int a65;
 GLfloat x65=-1.35f; GLfloat y65=-.63f; GLfloat radius65 =.01f;
int triangleAmount65 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi65 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x65, y65); // center of circle
		for(a65 = 0; a65<= triangleAmount65;a65++) {
			glVertex2f(
		            x65+ (radius1 * cos(a65 *  twicePi65 / triangleAmount65)),
			    y65 + (radius65 * sin(a65 * twicePi65 / triangleAmount65))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-.4f);
glVertex2f(-1.3f,-.4f);
glVertex2f(-1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.35f,-.45f);
glVertex2f(-1.4f,-.5f);
glVertex2f(-1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.72f);
glVertex2f(-1.37f,-0.72f);
glVertex2f(-1.375f,-0.85f);
glVertex2f(-1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.36f,-0.72f);
glVertex2f(-1.33f,-0.72f);
glVertex2f(-1.335f,-0.85f);
glVertex2f(-1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*/


glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-.75f,-.49f);
glVertex2f(-.8f,-.49f);
glVertex2f(-.84f,-.73f);
glVertex2f(-.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.49f);
glVertex2f(-.78f,-.49f);
glVertex2f(-.78f,-.63f);
glVertex2f(-.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.4f);
glVertex2f(-.72f,-.4f);
glVertex2f(-.73f,-.42f);
glEnd();

int a66;
 GLfloat x66=-.75f; GLfloat y66=-.45f; GLfloat radius66 =.05f;
int triangleAmount66 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi66 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x66, y66); // center of circle
		for(a66 = 0; a66<= triangleAmount66;a66++) {
			glVertex2f(
		            x66+ (radius1 * cos(a66 *  twicePi66 / triangleAmount66)),
			    y66 + (radius66 * sin(a66 * twicePi66 / triangleAmount66))
			);
		}
	glEnd();

int a67;
 GLfloat x67=-.75f; GLfloat y67=-.63f; GLfloat radius67 =.01f;
int triangleAmount67 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi67 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x67, y67); // center of circle
		for(a67 = 0; a67<= triangleAmount67;a67++) {
			glVertex2f(
		            x67+ (radius1 * cos(a67 *  twicePi67 / triangleAmount67)),
			    y67 + (radius67 * sin(a67 * twicePi67 / triangleAmount67))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.8f,-.4f);
glVertex2f(-.65f,-.6f);
glVertex2f(-.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-.75f,-.45f);
glVertex2f(-.8f,-.5f);
glVertex2f(-.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.8f,-0.72f);
glVertex2f(-.77f,-0.72f);
glVertex2f(-.775f,-0.85f);
glVertex2f(-.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.76f,-0.72f);
glVertex2f(-.73f,-0.72f);
glVertex2f(-.735f,-0.85f);
glVertex2f(-.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/


glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-1.02f,-.49f);
glVertex2f(-1.1f,-.49f);
glVertex2f(-1.1f,-.73f);
glVertex2f(-1.02f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.49f);
glVertex2f(-1.08f,-.49f);
glVertex2f(-1.08f,-.63f);
glVertex2f(-1.05f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.4f);
glVertex2f(-1.02f,-.4f);
glVertex2f(-1.03f,-.42f);
glEnd();

int a68;
 GLfloat x68=-1.05f; GLfloat y68=-.45f; GLfloat radius68 =.05f;
int triangleAmount68 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi68 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x68, y68); // center of circle
		for(a68 = 0; a68<= triangleAmount68;a68++) {
			glVertex2f(
		            x68+ (radius1 * cos(a68 *  twicePi68 / triangleAmount68)),
			    y68 + (radius68 * sin(a68 * twicePi68 / triangleAmount68))
			);
		}
	glEnd();

int a69;
 GLfloat x69=-1.05f; GLfloat y69=-.63f; GLfloat radius69 =.01f;
int triangleAmount69 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi69 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x69, y69); // center of circle
		for(a69 = 0; a69<= triangleAmount69;a69++) {
			glVertex2f(
		            x69+ (radius1 * cos(a69 *  twicePi69 / triangleAmount69)),
			    y69 + (radius69 * sin(a69 * twicePi69 / triangleAmount69))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.4f);
glVertex2f(-1.1f,-.4f);
glVertex2f(-1.11f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.05f,-.45f);
glVertex2f(-1.1f,-.5f);
glVertex2f(-1.11f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-0.72f);
glVertex2f(-1.07f,-0.72f);
glVertex2f(-1.075f,-0.85f);
glVertex2f(-1.1f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.06f,-0.72f);
glVertex2f(-1.03f,-0.72f);
glVertex2f(-1.035f,-0.85f);
glVertex2f(-1.06f,-0.85f);
glEnd();

glPopMatrix();

/*_______________End Human 5___________________*/

/*----------------------------------------------------------------------END covid boot human---------------------------------------------------*/

glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(-1.95f,0.2f);
glVertex2f(-1.95f,-.9f);
glVertex2f(-2.0f,-.9);
glVertex2f(-2.0f,0.2f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.55f,.2);
glVertex2f(-1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.57f,.2);
glVertex2f(-1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.59f,.2);
glVertex2f(-1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.61f,.2);
glVertex2f(-1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.63f,.2);
glVertex2f(-1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.65f,.2);
glVertex2f(-1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.68f,.2);
glVertex2f(-1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.7f,.2);
glVertex2f(-1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.72f,.2);
glVertex2f(-1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.74f,.2);
glVertex2f(-1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.76f,.2);
glVertex2f(-1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.78f,.2);
glVertex2f(-1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.8f,.2);
glVertex2f(-1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.82f,.2);
glVertex2f(-1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.84f,.2);
glVertex2f(-1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.86f,.2);
glVertex2f(-1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.88f,.2);
glVertex2f(-1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.9f,.2);
glVertex2f(-1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.92f,.2);
glVertex2f(-1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.94f,.2);
glVertex2f(-1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.96f,.2);
glVertex2f(-1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.98f,.2);
glVertex2f(-1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-2.00f,.2);
glVertex2f(-2.00f,.1f);
glEnd();



glLineWidth(3.5);  //COVID TEST BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glEnd();

/*-------------------------------------------------------------------Human for Vaccine boot-------------------------------------------------*/
glPushMatrix();
glTranslatef(position222,0,0);

/*_______________Human 2___________________*/


glBegin(GL_QUADS);
glColor3ub(0, 153, 153);
glVertex2f(1.62f,-.49f);
glVertex2f(1.7f,-.49f);
glVertex2f(1.7f,-.73f);
glVertex2f(1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.49f);
glVertex2f(1.68f,-.49f);
glVertex2f(1.68f,-.63f);
glVertex2f(1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.4f);
glVertex2f(1.62f,-.4f);
glVertex2f(1.63f,-.42f);
glEnd();

int a72;
 GLfloat x72=1.65f; GLfloat y72=-.45f; GLfloat radius72 =.05f;
int triangleAmount72 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi72 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x72, y72); // center of circle
		for(a72 = 0; a72<= triangleAmount72;a72++) {
			glVertex2f(
		            x72+ (radius1 * cos(a72 *  twicePi72 / triangleAmount72)),
			    y72 + (radius72 * sin(a72 * twicePi72 / triangleAmount72))
			);
		}
	glEnd();

int a73;
 GLfloat x73=1.65f; GLfloat y73=-.63f; GLfloat radius73 =.01f;
int triangleAmount73 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi73 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x73, y73); // center of circle
		for(a73 = 0; a73<= triangleAmount73;a73++) {
			glVertex2f(
		            x73+ (radius1 * cos(a73 *  twicePi73 / triangleAmount73)),
			    y73 + (radius73 * sin(a73 * twicePi73 / triangleAmount73))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.45f);
glVertex2f(1.7f,-.5f);
glVertex2f(1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.72f);
glVertex2f(1.67f,-0.72f);
glVertex2f(1.675f,-0.85f);
glVertex2f(1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.72f);
glVertex2f(1.63f,-0.72f);
glVertex2f(1.635f,-0.85f);
glVertex2f(1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*/


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.32f,-.49f);
glVertex2f(1.4f,-.49f);
glVertex2f(1.4f,-.73f);
glVertex2f(1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.49f);
glVertex2f(1.38f,-.49f);
glVertex2f(1.38f,-.63f);
glVertex2f(1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.4f);
glVertex2f(1.32f,-.4f);
glVertex2f(1.33f,-.42f);
glEnd();

int a74;
 GLfloat x74=1.35f; GLfloat y74=-.45f; GLfloat radius74 =.05f;
int triangleAmount74 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi74 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x74, y74); // center of circle
		for(a74 = 0; a74<= triangleAmount74;a74++) {
			glVertex2f(
		            x74+ (radius1 * cos(a74 *  twicePi74 / triangleAmount74)),
			    y74 + (radius74 * sin(a74 * twicePi74 / triangleAmount74))
			);
		}
	glEnd();

int a75;
 GLfloat x75=1.35f; GLfloat y75=-.63f; GLfloat radius75 =.01f;
int triangleAmount75 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi75 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x75, y75); // center of circle
		for(a75 = 0; a75<= triangleAmount75;a75++) {
			glVertex2f(
		            x75+ (radius1 * cos(a75 *  twicePi75 / triangleAmount75)),
			    y75 + (radius75 * sin(a75 * twicePi75 / triangleAmount75))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.4f,-.4f);
glVertex2f(1.3f,-.4f);
glVertex2f(1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.35f,-.45f);
glVertex2f(1.4f,-.5f);
glVertex2f(1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.4f,-0.72f);
glVertex2f(1.37f,-0.72f);
glVertex2f(1.375f,-0.85f);
glVertex2f(1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.36f,-0.72f);
glVertex2f(1.33f,-0.72f);
glVertex2f(1.335f,-0.85f);
glVertex2f(1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*/


glBegin(GL_QUADS);
glColor3ub(255, 153, 0);
glVertex2f(.75f,-.49f);
glVertex2f(.8f,-.49f);
glVertex2f(.84f,-.73f);
glVertex2f(.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.75f,-.49f);
glVertex2f(.78f,-.49f);
glVertex2f(.78f,-.63f);
glVertex2f(.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.75f,-.4f);
glVertex2f(.72f,-.4f);
glVertex2f(.73f,-.42f);
glEnd();

int a77;
 GLfloat x77=.75f; GLfloat y77=-.45f; GLfloat radius77 =.05f;
int triangleAmount77 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi77 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x77, y77); // center of circle
		for(a77 = 0; a77<= triangleAmount77;a77++) {
			glVertex2f(
		            x77+ (radius1 * cos(a77 *  twicePi77 / triangleAmount77)),
			    y77 + (radius77 * sin(a77 * twicePi77 / triangleAmount77))
			);
		}
	glEnd();

int a78;
 GLfloat x78=.75f; GLfloat y78=-.63f; GLfloat radius78 =.01f;
int triangleAmount78 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi78 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x78, y78); // center of circle
		for(a78 = 0; a78<= triangleAmount78;a78++) {
			glVertex2f(
		            x78+ (radius1 * cos(a78 *  twicePi78 / triangleAmount78)),
			    y78 + (radius78 * sin(a78 * twicePi78 / triangleAmount78))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.8f,-.4f);
glVertex2f(.65f,-.6f);
glVertex2f(.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(.75f,-.45f);
glVertex2f(.8f,-.5f);
glVertex2f(.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.8f,-0.72f);
glVertex2f(.77f,-0.72f);
glVertex2f(.775f,-0.85f);
glVertex2f(.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.76f,-0.72f);
glVertex2f(.73f,-0.72f);
glVertex2f(.735f,-0.85f);
glVertex2f(.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/


glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(1.02f,-.49f);
glVertex2f(1.1f,-.49f);
glVertex2f(1.1f,-.73f);
glVertex2f(1.02f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.49f);
glVertex2f(1.08f,-.49f);
glVertex2f(1.08f,-.63f);
glVertex2f(1.05f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.02f,-.4f);
glVertex2f(1.03f,-.42f);
glEnd();

int a79;
 GLfloat x79=1.05f; GLfloat y79=-.45f; GLfloat radius79 =.05f;
int triangleAmount79 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi79 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x79, y79); // center of circle
		for(a79 = 0; a79<= triangleAmount79;a79++) {
			glVertex2f(
		            x79+ (radius1 * cos(a79 *  twicePi79 / triangleAmount79)),
			    y79 + (radius79 * sin(a79 * twicePi79 / triangleAmount79))
			);
		}
	glEnd();

int a80;
 GLfloat x80=1.05f; GLfloat y80=-.63f; GLfloat radius80 =.01f;
int triangleAmount80 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi80 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x80, y80); // center of circle
		for(a80 = 0; a80<= triangleAmount80;a80++) {
			glVertex2f(
		            x80+ (radius1 * cos(a80 *  twicePi80 / triangleAmount80)),
			    y80 + (radius80 * sin(a80 * twicePi80 / triangleAmount80))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.1f,-.4f);
glVertex2f(1.11f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.45f);
glVertex2f(1.1f,-.5f);
glVertex2f(1.11f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.72f);
glVertex2f(1.07f,-0.72f);
glVertex2f(1.075f,-0.85f);
glVertex2f(1.1f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.72f);
glVertex2f(1.03f,-0.72f);
glVertex2f(1.035f,-0.85f);
glVertex2f(1.06f,-0.85f);
glEnd();


/*_______________End Human 5___________________*/

glPopMatrix();

/*----------------------------------------------------------------------END Vaccine boot human---------------------------------------------------*/


glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(1.95f,0.2f);
glVertex2f(1.95f,-.9f);
glVertex2f(2.0f,-.9);
glVertex2f(2.0f,0.2f);
glEnd();



glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.55f,.2);
glVertex2f(1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.57f,.2);
glVertex2f(1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.59f,.2);
glVertex2f(1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.61f,.2);
glVertex2f(1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.63f,.2);
glVertex2f(1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.65f,.2);
glVertex2f(1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.68f,.2);
glVertex2f(1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.7f,.2);
glVertex2f(1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.72f,.2);
glVertex2f(1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.74f,.2);
glVertex2f(1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.76f,.2);
glVertex2f(1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.78f,.2);
glVertex2f(1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.8f,.2);
glVertex2f(1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.82f,.2);
glVertex2f(1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.84f,.2);
glVertex2f(1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.86f,.2);
glVertex2f(1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.88f,.2);
glVertex2f(1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.9f,.2);
glVertex2f(1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.92f,.2);
glVertex2f(1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.94f,.2);
glVertex2f(1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.96f,.2);
glVertex2f(1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.98f,.2);
glVertex2f(1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(237, 36, 157);
glVertex2f(2.00f,.2);
glVertex2f(2.00f,.1f);
glEnd();

/*_______________Human___________________*/

glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(-1.82f,-.74f);
glVertex2f(-1.9f,-.74f);
glVertex2f(-1.9f,-.98f);
glVertex2f(-1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.74f);
glVertex2f(-1.88f,-.74f);
glVertex2f(-1.88f,-.88f);
glVertex2f(-1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.65f);
glVertex2f(-1.82f,-.65f);
glVertex2f(-1.83f,-.67f);
glEnd();

int a34;
 GLfloat x34=-1.85f; GLfloat y34=-.7f; GLfloat radius34 =.05f;
int triangleAmount34 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi34 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x34, y34); // center of circle
		for(a34 = 0; a34<= triangleAmount34;a34++) {
			glVertex2f(
		            x34+ (radius1 * cos(a34 *  twicePi34 / triangleAmount34)),
			    y34 + (radius34 * sin(a34 * twicePi34 / triangleAmount34))
			);
		}
	glEnd();

int a32;
 GLfloat x32=-1.85f; GLfloat y32=-.88f; GLfloat radius32 =.01f;
int triangleAmount32 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi32 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x32, y32); // center of circle
		for(a32 = 0; a32<= triangleAmount32;a32++) {
			glVertex2f(
		            x32+ (radius1 * cos(a32 *  twicePi32 / triangleAmount32)),
			    y32 + (radius32 * sin(a32 * twicePi32 / triangleAmount32))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.90f,-.65f);
glVertex2f(-1.8f,-.65f);
glVertex2f(-1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.85f,-.70f);
glVertex2f(-1.8f,-.75f);
glVertex2f(-1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.9f,-0.97f);
glVertex2f(-1.87f,-0.97f);
glVertex2f(-1.875f,-1.1f);
glVertex2f(-1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.86f,-0.97f);
glVertex2f(-1.83f,-0.97f);
glVertex2f(-1.835f,-1.1f);
glVertex2f(-1.86f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human___________________*/


/*_______________Human 2___________________*/
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.74f);
glVertex2f(-1.7f,-.74f);
glVertex2f(-1.7f,-.98f);
glVertex2f(-1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.74f);
glVertex2f(-1.68f,-.74f);
glVertex2f(-1.68f,-.88f);
glVertex2f(-1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.65f);
glVertex2f(-1.62f,-.65f);
glVertex2f(-1.63f,-.67f);
glEnd();

int a40;
 GLfloat x40=-1.65f; GLfloat y40=-.7f; GLfloat radius40 =.05f;
int triangleAmount40 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi40 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x40, y40); // center of circle
		for(a40 = 0; a40<= triangleAmount40;a40++) {
			glVertex2f(
		            x40+ (radius1 * cos(a40 *  twicePi40 / triangleAmount40)),
			    y40 + (radius40 * sin(a40 * twicePi40 / triangleAmount40))
			);
		}
	glEnd();

int a41;
 GLfloat x41=-1.65f; GLfloat y41=-.88f; GLfloat radius41 =.01f;
int triangleAmount41 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi41 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x41, y41); // center of circle
		for(a41 = 0; a41<= triangleAmount41;a41++) {
			glVertex2f(
		            x41+ (radius1 * cos(a41 *  twicePi41 / triangleAmount41)),
			    y41 + (radius41 * sin(a41 * twicePi41 / triangleAmount41))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-.65f);
glVertex2f(-1.6f,-.65f);
glVertex2f(-1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.70f);
glVertex2f(-1.6f,-.75f);
glVertex2f(-1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.97f);
glVertex2f(-1.67f,-0.97f);
glVertex2f(-1.675f,-1.1f);
glVertex2f(-1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.97f);
glVertex2f(-1.63f,-0.97f);
glVertex2f(-1.635f,-1.1f);
glVertex2f(-1.66f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 2___________________*/

/*_______________Human 3___________________*/
glPushMatrix();
glTranslatef(position2,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.42f,-.74f);
glVertex2f(-1.5f,-.74f);
glVertex2f(-1.5f,-.98f);
glVertex2f(-1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.74f);
glVertex2f(-1.48f,-.74f);
glVertex2f(-1.48f,-.88f);
glVertex2f(-1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.65f);
glVertex2f(-1.42f,-.65f);
glVertex2f(-1.43f,-.67f);
glEnd();

int a43;
 GLfloat x43=-1.45f; GLfloat y43=-.7f; GLfloat radius43 =.05f;
int triangleAmount43 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi43 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x43, y43); // center of circle
		for(a43 = 0; a43<= triangleAmount43;a43++) {
			glVertex2f(
		            x43+ (radius1 * cos(a43 *  twicePi43 / triangleAmount43)),
			    y43 + (radius43 * sin(a43 * twicePi43 / triangleAmount43))
			);
		}
	glEnd();

int a44;
 GLfloat x44=-1.45f; GLfloat y44=-.88f; GLfloat radius44 =.01f;
int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x44, y44); // center of circle
		for(a44 = 0; a44<= triangleAmount44;a44++) {
			glVertex2f(
		            x44+ (radius1 * cos(a44 *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(a44 * twicePi44 / triangleAmount44))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-.65f);
glVertex2f(-1.4f,-.65f);
glVertex2f(-1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.45f,-.70f);
glVertex2f(-1.4f,-.75f);
glVertex2f(-1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-0.97f);
glVertex2f(-1.47f,-0.97f);
glVertex2f(-1.475f,-1.1f);
glVertex2f(-1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.46f,-0.97f);
glVertex2f(-1.43f,-0.97f);
glVertex2f(-1.435f,-1.1f);
glVertex2f(-1.46f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*/
glPushMatrix();
glTranslatef(position1,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.3f,-.74f);
glVertex2f(-1.34f,-.98f);
glVertex2f(-1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.28f,-.74f);
glVertex2f(-1.28f,-.88f);
glVertex2f(-1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.65f);
glVertex2f(-1.22f,-.65f);
glVertex2f(-1.23f,-.67f);
glEnd();

int a45;
 GLfloat x45=-1.25f; GLfloat y45=-.7f; GLfloat radius45 =.05f;
int triangleAmount45 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi45 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x45, y45); // center of circle
		for(a45 = 0; a45<= triangleAmount45;a45++) {
			glVertex2f(
		            x45+ (radius1 * cos(a45 *  twicePi45 / triangleAmount45)),
			    y45 + (radius45 * sin(a45 * twicePi45 / triangleAmount45))
			);
		}
	glEnd();

int a46;
 GLfloat x46=-1.25f; GLfloat y46=-.88f; GLfloat radius46 =.01f;
int triangleAmount46 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi46 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x46, y46); // center of circle
		for(a46 = 0; a46<= triangleAmount46;a46++) {
			glVertex2f(
		            x46+ (radius1 * cos(a46 *  twicePi46 / triangleAmount46)),
			    y46 + (radius46 * sin(a46 * twicePi46 / triangleAmount46))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-.65f);
glVertex2f(-1.4f,-.85f);
glVertex2f(-1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.25f,-.70f);
glVertex2f(-1.2f,-.75f);
glVertex2f(-1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-0.97f);
glVertex2f(-1.27f,-0.97f);
glVertex2f(-1.275f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.26f,-0.97f);
glVertex2f(-1.23f,-0.97f);
glVertex2f(-1.235f,-1.1f);
glVertex2f(-1.26f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-1.02f,-.74f);
glVertex2f(-1.1f,-.74f);
glVertex2f(-1.1f,-.98f);
glVertex2f(-1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.74f);
glVertex2f(-1.08f,-.74f);
glVertex2f(-1.08f,-.88f);
glVertex2f(-1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.65f);
glVertex2f(-1.02f,-.65f);
glVertex2f(-1.03f,-.67f);
glEnd();

int a48;
 GLfloat x48=-1.05f; GLfloat y48=-.7f; GLfloat radius48 =.05f;
int triangleAmount48 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi48 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x48, y48); // center of circle
		for(a48 = 0; a48<= triangleAmount48;a48++) {
			glVertex2f(
		            x48+ (radius1 * cos(a48 *  twicePi48 / triangleAmount48)),
			    y48 + (radius48 * sin(a48 * twicePi48 / triangleAmount48))
			);
		}
	glEnd();

int a49;
 GLfloat x49=-1.05f; GLfloat y49=-.88f; GLfloat radius49 =.01f;
int triangleAmount49 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi49 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x49, y49); // center of circle
		for(a49 = 0; a49<= triangleAmount49;a49++) {
			glVertex2f(
		            x49+ (radius1 * cos(a49 *  twicePi49 / triangleAmount49)),
			    y49 + (radius49 * sin(a49 * twicePi49 / triangleAmount49))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-.65f);
glVertex2f(-1.0f,-.65f);
glVertex2f(-0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.05f,-.70f);
glVertex2f(-1.0f,-.75f);
glVertex2f(-.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-0.97f);
glVertex2f(-1.07f,-0.97f);
glVertex2f(-1.075f,-1.1f);
glVertex2f(-1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.06f,-0.97f);
glVertex2f(-1.03f,-0.97f);
glVertex2f(-1.035f,-1.1f);
glVertex2f(-1.06f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 5___________________*/

/*_______________Human___________________*/
glPushMatrix();
glTranslatef(position41,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(1.82f,-.74f);
glVertex2f(1.9f,-.74f);
glVertex2f(1.9f,-.98f);
glVertex2f(1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.74f);
glVertex2f(1.88f,-.74f);
glVertex2f(1.88f,-.88f);
glVertex2f(1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.65f);
glVertex2f(1.82f,-.65f);
glVertex2f(1.83f,-.67f);
glEnd();

int a50;
 GLfloat x50=1.85f; GLfloat y50=-.7f; GLfloat radius50 =.05f;
int triangleAmount50 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi50 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x50, y50); // center of circle
		for(a50 = 0; a50<= triangleAmount50;a50++) {
			glVertex2f(
		            x50+ (radius1 * cos(a50 *  twicePi50 / triangleAmount50)),
			    y50 + (radius50 * sin(a50 * twicePi50 / triangleAmount50))
			);
		}
	glEnd();

int a51;
 GLfloat x51=1.85f; GLfloat y51=-.88f; GLfloat radius51 =.01f;
int triangleAmount51 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi51 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x51, y51); // center of circle
		for(a51 = 0; a51<= triangleAmount51;a51++) {
			glVertex2f(
		            x51+ (radius1 * cos(a51 *  twicePi51 / triangleAmount51)),
			    y51 + (radius51 * sin(a51 * twicePi51 / triangleAmount51))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.90f,-.65f);
glVertex2f(1.8f,-.65f);
glVertex2f(1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.85f,-.70f);
glVertex2f(1.8f,-.75f);
glVertex2f(1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.9f,-0.97f);
glVertex2f(1.87f,-0.97f);
glVertex2f(1.875f,-1.1f);
glVertex2f(1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.86f,-0.97f);
glVertex2f(1.83f,-0.97f);
glVertex2f(1.835f,-1.1f);
glVertex2f(1.86f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human___________________*/


/*_______________Human 2___________________*/
glPushMatrix();
glTranslatef(position31,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(1.62f,-.74f);
glVertex2f(1.7f,-.74f);
glVertex2f(1.7f,-.98f);
glVertex2f(1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.74f);
glVertex2f(1.68f,-.74f);
glVertex2f(1.68f,-.88f);
glVertex2f(1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.65f);
glVertex2f(1.62f,-.65f);
glVertex2f(1.63f,-.67f);
glEnd();

int a52;
 GLfloat x52=1.65f; GLfloat y52=-.7f; GLfloat radius52 =.05f;
int triangleAmount52 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi52 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x52, y52); // center of circle
		for(a52 = 0; a52<= triangleAmount52;a52++) {
			glVertex2f(
		            x52+ (radius1 * cos(a52 *  twicePi52 / triangleAmount52)),
			    y52 + (radius52 * sin(a52 * twicePi52 / triangleAmount52))
			);
		}
	glEnd();

int a53;
 GLfloat x53=1.65f; GLfloat y53=-.88f; GLfloat radius53 =.01f;
int triangleAmount53 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi53 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x53, y53); // center of circle
		for(a53 = 0; a53<= triangleAmount53;a53++) {
			glVertex2f(
		            x53+ (radius1 * cos(a53 *  twicePi53 / triangleAmount53)),
			    y53 + (radius53 * sin(a53 * twicePi53 / triangleAmount53))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.7f,-.65f);
glVertex2f(1.6f,-.65f);
glVertex2f(1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.70f);
glVertex2f(1.6f,-.75f);
glVertex2f(1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.97f);
glVertex2f(1.67f,-0.97f);
glVertex2f(1.675f,-1.1f);
glVertex2f(1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.97f);
glVertex2f(1.63f,-0.97f);
glVertex2f(1.635f,-1.1f);
glVertex2f(1.66f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*/
glPushMatrix();
glTranslatef(position21,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.42f,-.74f);
glVertex2f(1.5f,-.74f);
glVertex2f(1.5f,-.98f);
glVertex2f(1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.74f);
glVertex2f(1.48f,-.74f);
glVertex2f(1.48f,-.88f);
glVertex2f(1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.65f);
glVertex2f(1.42f,-.65f);
glVertex2f(1.43f,-.67f);
glEnd();

int a54;
 GLfloat x54=1.45f; GLfloat y54=-.7f; GLfloat radius54 =.05f;
int triangleAmount54 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi54 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x54, y54); // center of circle
		for(a54 = 0; a54<= triangleAmount54;a54++) {
			glVertex2f(
		            x54+ (radius1 * cos(a54 *  twicePi54 / triangleAmount54)),
			    y54 + (radius54 * sin(a54 * twicePi54 / triangleAmount54))
			);
		}
	glEnd();

int a55;
 GLfloat x55=1.45f; GLfloat y55=-.88f; GLfloat radius55 =.01f;
int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x55, y55); // center of circle
		for(a55 = 0; a55<= triangleAmount55;a55++) {
			glVertex2f(
		            x55+ (radius1 * cos(a55 *  twicePi55 / triangleAmount55)),
			    y55 + (radius55 * sin(a55 * twicePi55 / triangleAmount55))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.5f,-.65f);
glVertex2f(1.4f,-.65f);
glVertex2f(1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.45f,-.70f);
glVertex2f(1.4f,-.75f);
glVertex2f(1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.5f,-0.97f);
glVertex2f(1.47f,-0.97f);
glVertex2f(1.475f,-1.1f);
glVertex2f(1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.46f,-0.97f);
glVertex2f(1.43f,-0.97f);
glVertex2f(1.435f,-1.1f);
glVertex2f(1.46f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*/

glPushMatrix();
glTranslatef(position11,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(1.25f,-.74f);
glVertex2f(1.3f,-.74f);
glVertex2f(1.34f,-.98f);
glVertex2f(1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.74f);
glVertex2f(1.28f,-.74f);
glVertex2f(1.28f,-.88f);
glVertex2f(1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.65f);
glVertex2f(1.22f,-.65f);
glVertex2f(1.23f,-.67f);
glEnd();

int a56;
 GLfloat x56=1.25f; GLfloat y56=-.7f; GLfloat radius56 =.05f;
int triangleAmount56 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi56 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x56, y56); // center of circle
		for(a56 = 0; a56<= triangleAmount56;a56++) {
			glVertex2f(
		            x56+ (radius1 * cos(a56 *  twicePi56 / triangleAmount56)),
			    y56 + (radius56 * sin(a56 * twicePi56 / triangleAmount56))
			);
		}
	glEnd();

int a57;
 GLfloat x57=1.25f; GLfloat y57=-.88f; GLfloat radius57 =.01f;
int triangleAmount57 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi57 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x57, y57); // center of circle
		for(a57 = 0; a57<= triangleAmount57;a57++) {
			glVertex2f(
		            x57+ (radius1 * cos(a57 *  twicePi57 / triangleAmount57)),
			    y57 + (radius57 * sin(a57 * twicePi57 / triangleAmount57))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.3f,-.65f);
glVertex2f(1.4f,-.85f);
glVertex2f(1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.25f,-.70f);
glVertex2f(1.2f,-.75f);
glVertex2f(1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.3f,-0.97f);
glVertex2f(1.27f,-0.97f);
glVertex2f(1.275f,-1.1f);
glVertex2f(1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.26f,-0.97f);
glVertex2f(1.23f,-0.97f);
glVertex2f(1.235f,-1.1f);
glVertex2f(1.26f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/
glPushMatrix();
glTranslatef(position00,0,0);


glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(1.02f,-.74f);
glVertex2f(1.1f,-.74f);
glVertex2f(1.1f,-.98f);
glVertex2f(1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.74f);
glVertex2f(1.08f,-.74f);
glVertex2f(1.08f,-.88f);
glVertex2f(1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.65f);
glVertex2f(1.02f,-.65f);
glVertex2f(1.03f,-.67f);
glEnd();

int a58;
 GLfloat x58=1.05f; GLfloat y58=-.7f; GLfloat radius58 =.05f;
int triangleAmount58 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi58 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x58, y58); // center of circle
		for(a58 = 0; a58<= triangleAmount58;a58++) {
			glVertex2f(
		            x58+ (radius1 * cos(a58 *  twicePi58 / triangleAmount58)),
			    y58 + (radius58 * sin(a58 * twicePi58 / triangleAmount58))
			);
		}
	glEnd();

int a59;
 GLfloat x59=1.05f; GLfloat y59=-.88f; GLfloat radius59 =.01f;
int triangleAmount59 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi59 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x59, y59); // center of circle
		for(a59 = 0; a59<= triangleAmount59;a59++) {
			glVertex2f(
		            x59+ (radius1 * cos(a59 *  twicePi59 / triangleAmount59)),
			    y59 + (radius59 * sin(a59 * twicePi59 / triangleAmount59))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-.65f);
glVertex2f(1.0f,-.65f);
glVertex2f(0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.70f);
glVertex2f(1.0f,-.75f);
glVertex2f(.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.97f);
glVertex2f(1.07f,-0.97f);
glVertex2f(1.075f,-1.1f);
glVertex2f(1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.97f);
glVertex2f(1.03f,-0.97f);
glVertex2f(1.035f,-1.1f);
glVertex2f(1.06f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 5___________________*/

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glEnd();

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.349f);
glVertex2f(.75f,.349f);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(.75f,.349f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.349f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.2f);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.15f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.19f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.6f,.19f);
glVertex2f(-.6f,-1.15f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(.75f,.2f);
glVertex2f(.6f,.2f);
glVertex2f(.6f,-1.15f);
glVertex2f(.75f,-1.15f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.19f);
glVertex2f(.75f,-1.15f);
glEnd();
glBegin(GL_QUADS);//FRONT FOOR
glColor3ub(204, 230, 255);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.155f);
glVertex2f(.6f,-1.155f);
glVertex2f(.6f,0.2f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.2f);
glVertex2f(0.0f,-1.155f);
glEnd();

glLineWidth(1.0);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.6f,.19f);
glVertex2f(.6f,-1.15f);
glEnd();

/*------------------------------------------------Car----------------------------------------*/
glPushMatrix();
glTranslatef(position15,0,0);

glBegin(GL_QUADS); //car
glColor3ub(51, 102, 255);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.3f,-1.1f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(230, 0, 0);
glVertex2f(-1.2f,-1.1f);
glVertex2f(-1.8f,-1.1f);
glVertex2f(-1.85f,-1.4f);
glVertex2f(-1.15f,-1.4f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.11f);
glVertex2f(-1.25f,-1.11f);
glVertex2f(-1.25f,-1.15f);
glVertex2f(-1.2f,-1.15f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.45f,-0.9f);
glVertex2f(-1.45f,-1.4f);
glEnd();

int a16;
 GLfloat x16=-1.3f; GLfloat y16=-1.4f; GLfloat radius16 =.15f;
int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x16, y16); // center of circle
		for(a16 = 0; a16<= triangleAmount16;a16++) {
			glVertex2f(
		            x16+ (radius1 * cos(a16 *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(a16 * twicePi16 / triangleAmount16))
			);
		}
	glEnd();

int a17;
 GLfloat x17=-1.7f; GLfloat y17=-1.4f; GLfloat radius17 =.15f;
int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x17, y17); // center of circle
		for(a17 = 0; a17<= triangleAmount17;a17++) {
			glVertex2f(
		            x17+ (radius1 * cos(a17 *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(a17 * twicePi17 / triangleAmount17))
			);
		}
	glEnd();



glPopMatrix();

/*------------------------------------------------Car----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------*/
glPushMatrix();
glTranslatef(position12,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.0f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.1f,-1.1f);
glVertex2f(1.0f,-1.4f);
glVertex2f(1.0f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-1.3f);
glVertex2f(1.1f,-1.6f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(1.1f,-1.12f);
glVertex2f(1.01f,-1.38f);
glVertex2f(1.2f,-1.38f);
glVertex2f(1.2f,-1.12f);
glEnd();

int a13;
 GLfloat x13=1.15f; GLfloat y13=-1.6f; GLfloat radius13 =.15f;
int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x13, y13); // center of circle
		for(a13 = 0; a13<= triangleAmount13;a13++) {
			glVertex2f(
		            x13+ (radius1 * cos(a13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(a13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

int a14;
 GLfloat x14=1.7f; GLfloat y14=-1.6f; GLfloat radius14 =.15f;
int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x14, y14); // center of circle
		for(a14 = 0; a14<= triangleAmount14;a14++) {
			glVertex2f(
		            x14+ (radius1 * cos(a14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(a14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();


int a15;
 GLfloat x15=1.45f; GLfloat y15=-1.2f; GLfloat radius15 =.1f;
int triangleAmount15 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x15, y15); // center of circle
		for(a15 = 0; a15<= triangleAmount15;a15++) {
			glVertex2f(
		            x15+ (radius1 * cos(a15 *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(a15 * twicePi15 / triangleAmount15))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.4f,-1.2f);
glVertex2f(1.5,-1.2f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.45f,-1.1f);
glVertex2f(1.45f,-1.3f);
glEnd();

glPopMatrix();

/*------------------------------------------------Ambulance----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------*/
glPushMatrix();
glTranslatef(position14,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.05f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.1f,-1.15f);
glVertex2f(-1.0f,-1.45f);
glVertex2f(-1.0f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-1.35f);
glVertex2f(-1.1f,-1.65f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(-1.1f,-1.125f);
glVertex2f(-1.01f,-1.385f);
glVertex2f(-1.2f,-1.385f);
glVertex2f(-1.2f,-1.125f);
glEnd();

int a18;
 GLfloat x18=-1.15f; GLfloat y18=-1.65f; GLfloat radius18 =.15f;
int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x18, y18); // center of circle
		for(a18 = 0; a18<= triangleAmount18;a18++) {
			glVertex2f(
		            x18+ (radius1 * cos(a18 *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(a18 * twicePi18 / triangleAmount18))
			);
		}
	glEnd();

int a19;
 GLfloat x19=-1.7f; GLfloat y19=-1.65f; GLfloat radius19 =.15f;
int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x19, y19); // center of circle
		for(a19 = 0; a19<= triangleAmount19;a19++) {
			glVertex2f(
		            x19+ (radius1 * cos(a19 *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(a19 * twicePi19 / triangleAmount19))
			);
		}
	glEnd();


int a20;
 GLfloat x20=-1.45f; GLfloat y20=-1.25f; GLfloat radius20 =.1f;
int triangleAmount20 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x20, y20); // center of circle
		for(a20 = 0; a20<= triangleAmount20;a20++) {
			glVertex2f(
		            x20+ (radius1 * cos(a20 *  twicePi20 / triangleAmount20)),
			    y20 + (radius20 * sin(a20 * twicePi20 / triangleAmount20))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.4f,-1.25f);
glVertex2f(-1.5,-1.25f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.45f,-1.15f);
glVertex2f(-1.45f,-1.35f);
glEnd();

glPopMatrix();

/*------------------------------------------------Ambulance----------------------------------------*/

/*------------------------------------------------Car----------------------------------------*/
glPushMatrix();
glTranslatef(position13,0,0);


glBegin(GL_QUADS); //car
glColor3ub(0, 26, 0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.72f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(255, 255, 0);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.8f,-1.4f);
glVertex2f(1.85f,-1.7f);
glVertex2f(1.15f,-1.7f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.59f);
glVertex2f(1.25f,-1.59f);
glVertex2f(1.25f,-1.63f);
glVertex2f(1.2f,-1.63f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.45f,-1.2f);
glVertex2f(1.45f,-1.7f);
glEnd();

int a21;
 GLfloat x21=1.3f; GLfloat y21=-1.7f; GLfloat radius21 =.15f;
int triangleAmount21 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x21, y21); // center of circle
		for(a21 = 0; a21<= triangleAmount21;a21++) {
			glVertex2f(
		            x21+ (radius1 * cos(a21 *  twicePi21 / triangleAmount21)),
			    y21 + (radius21 * sin(a21 * twicePi21 / triangleAmount21))
			);
		}
	glEnd();

int a22;
 GLfloat x22=1.7f; GLfloat y22=-1.7f; GLfloat radius22 =.15f;
int triangleAmount22 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x22, y22); // center of circle
		for(a22 = 0; a22<= triangleAmount22;a22++) {
			glVertex2f(
		            x22+ (radius1 * cos(a22 *  twicePi22 / triangleAmount22)),
			    y22 + (radius22 * sin(a22 * twicePi22 / triangleAmount22))
			);
		}
	glEnd();
glPopMatrix();


/*------------------------------------------------Car----------------------------------------*/


	glFlush();
}

void night() {

   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

   glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);    //BACKGROUND--->SUNLIGHT
glColor3ub(0,0,0);
glVertex2f(-2.0f,2.0f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,2.0f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->footpath
glColor3ub(255, 230, 128);
glVertex2f(-2.0f,-.7f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-.7f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->ROAD
glColor3ub(94, 97, 95);
glVertex2f(-2.0f,-1.15f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-1.15f);
glEnd();


glLineWidth(2.5);  //ROAD LINES 1
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-2.0f,-1.4f);
glVertex2f(-1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 2
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-1.4f);
glVertex2f(-1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 3
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.4f);
glVertex2f(-1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 4
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.8f,-1.4f);
glVertex2f(-0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 5
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.4f,-1.4f);
glVertex2f(-0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 6
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.0f,-1.4f);
glVertex2f(0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 7
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.4f,-1.4f);
glVertex2f(0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 8
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.8f,-1.4f);
glVertex2f(1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 9
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 10
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-1.4f);
glVertex2f(1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 11
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.9f,-1.4f);
glVertex2f(2.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //HOSPITALS ROAD BORDER
glBegin(GL_LINES);
glColor3ub(0, 9, 10);
glVertex2f(-2.0f,-.7f);
glVertex2f(2.0f,-.7f);
glEnd();


glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glVertex2f(.8f,-.7f);
glVertex2f(.8f,1.3f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING ROOFTOP
glColor3ub(237, 244, 245);
glVertex2f(-0.9f,1.3f);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glVertex2f(.9f,1.3f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(.9f,1.3f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.35f);
glVertex2f(.9f,1.35f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(-.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(.9f,1.3f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(.8f,1.3f);
glVertex2f(.8f,-.7f);
glEnd();


glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glVertex2f(-.8f,-.7f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glVertex2f(-.8f,.9f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.8f);
glVertex2f(-1.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.9f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.85f);
glVertex2f(-1.8f,.85f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(1.7f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,-.7f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(1.8f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar right
glColor3ub(89,89,89);
glVertex2f(.95f,.9);
glVertex2f(1.f,.9);
glVertex2f(1.f,1.5f);
glVertex2f(.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light right
glColor3ub(242,242,242);
glVertex2f(.9f,1.5);
glVertex2f(1.05f,1.5);
glVertex2f(1.05f,1.6f);
glVertex2f(.9f,1.6f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar left
glColor3ub(89,89,89);
glVertex2f(-.95f,.9);
glVertex2f(-1.f,.9);
glVertex2f(-1.f,1.5f);
glVertex2f(-.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light left
glColor3ub(242,242,242);
glVertex2f(-.9f,1.5);
glVertex2f(-1.05f,1.5);
glVertex2f(-1.05f,1.6f);
glVertex2f(-.9f,1.6f);
glEnd();

# define PI           3.14159265358979323846 //hospital's circle
int a6;
 GLfloat x6=-.01f; GLfloat y6=1.4f; GLfloat radius6 =.2f;
int triangleAmount6 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x6, y6); // center of circle
		for(a6 = 0; a6<= triangleAmount6;a6++) {
			glVertex2f(
		            x6 + (radius6 * cos(a6 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(a6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();
		# define PI           3.14159265358979323846 //moon
int a81;
 GLfloat x81=1.3f; GLfloat y81=1.8f; GLfloat radius81 =.1f;
int triangleAmount81 = 81; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi81 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x81, y81); // center of circle
		for(a81 = 0; a81<= triangleAmount81;a81++) {
			glVertex2f(
		            x81 + (radius81 * cos(a81 *  twicePi81 / triangleAmount81)),
			    y81 + (radius81 * sin(a81 * twicePi81 / triangleAmount81))
			);
		}
	glEnd();

//stars
			# define PI           3.14159265358979323846 //star
int a82;
 GLfloat x82=-1.3f; GLfloat y82=1.8f; GLfloat radius82 =.009f;
int triangleAmount82 = 82; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi82 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x82, y82); // center of circle
		for(a82 = 0; a82<= triangleAmount82;a82++) {
			glVertex2f(
		            x82 + (radius82 * cos(a82 *  twicePi82 / triangleAmount82)),
			    y82 + (radius82 * sin(a82 * twicePi82 / triangleAmount82))
			);
		}
	glEnd();

			# define PI           3.14159265358979323846 //moon
int a83;
 GLfloat x83=-1.5f; GLfloat y83=1.9f; GLfloat radius83 =.008f;
int triangleAmount83 = 83; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi83 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x83, y83); // center of circle
		for(a83 = 0; a83<= triangleAmount83;a83++) {
			glVertex2f(
		            x83 + (radius83 * cos(a83 *  twicePi83 / triangleAmount83)),
			    y83 + (radius83 * sin(a83 * twicePi83 / triangleAmount83))
			);
		}
	glEnd();

				# define PI           3.14159265358979323846 //moon
int a84;
 GLfloat x84=-1.8f; GLfloat y84=1.7f; GLfloat radius84 =.008f;
int triangleAmount84 = 84; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi84 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x84, y84); // center of circle
		for(a84 = 0; a84<= triangleAmount84;a84++) {
			glVertex2f(
		            x84 + (radius84 * cos(a84 *  twicePi84 / triangleAmount84)),
			    y84 + (radius84 * sin(a84 * twicePi84 / triangleAmount84))
			);
		}
	glEnd();

				# define PI           3.14159265358979323846 //moon
int a85;
 GLfloat x85=-0.05f; GLfloat y85=1.95f; GLfloat radius85 =.008f;
int triangleAmount85 = 85; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi85 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x85, y85); // center of circle
		for(a85 = 0; a85<= triangleAmount85;a85++) {
			glVertex2f(
		            x85 + (radius85 * cos(a85 *  twicePi85 / triangleAmount85)),
			    y85 + (radius85 * sin(a85 * twicePi85 / triangleAmount85))
			);
		}
	glEnd();

				# define PI           3.14159265358979323846 //moon
int a86;
 GLfloat x86=-.6f; GLfloat y86=1.98f; GLfloat radius86 =.008f;
int triangleAmount86 = 86; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi86 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x86, y86); // center of circle
		for(a86 = 0; a86<= triangleAmount86;a86++) {
			glVertex2f(
		            x86 + (radius86 * cos(a86 *  twicePi86 / triangleAmount86)),
			    y86 + (radius86 * sin(a86 * twicePi86 / triangleAmount86))
			);
		}
	glEnd();

				# define PI           3.14159265358979323846 //moon
int a87;
 GLfloat x87=.6f; GLfloat y87=1.98f; GLfloat radius87 =.008f;
int triangleAmount87 = 87; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi87 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x87, y87); // center of circle
		for(a87 = 0; a87<= triangleAmount87;a87++) {
			glVertex2f(
		            x87 + (radius87 * cos(a87 *  twicePi87 / triangleAmount87)),
			    y87 + (radius87 * sin(a87 * twicePi87 / triangleAmount87))
			);
		}
	glEnd();

				# define PI           3.14159265358979323846 //moon
int a88;
 GLfloat x88=1.8f; GLfloat y88=1.9f; GLfloat radius88 =.008f;
int triangleAmount88 = 88; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi88 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x88, y88); // center of circle
		for(a88 = 0; a88<= triangleAmount88;a88++) {
			glVertex2f(
		            x88 + (radius88 * cos(a88 *  twicePi88 / triangleAmount88)),
			    y88 + (radius88 * sin(a88 * twicePi88 / triangleAmount88))
			);
		}
	glEnd();
				# define PI           3.14159265358979323846 //moon
int a89;
 GLfloat x89=1.5f; GLfloat y89=1.7f; GLfloat radius89 =.008f;
int triangleAmount89 = 89; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi89 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x89, y89); // center of circle
		for(a89 = 0; a89<= triangleAmount89;a89++) {
			glVertex2f(
		            x89 + (radius89 * cos(a89 *  twicePi89 / triangleAmount89)),
			    y89 + (radius89 * sin(a89 * twicePi89 / triangleAmount89))
			);
		}
	glEnd();
				# define PI           3.14159265358979323846 //moon
int a90;
 GLfloat x90=1.8f; GLfloat y90=1.4f; GLfloat radius90 =.008f;
int triangleAmount90 = 90; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi90 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(254, 252, 215);
		glVertex2f(x90, y90); // center of circle
		for(a90 = 0; a90<= triangleAmount90;a90++) {
			glVertex2f(
		            x90 + (radius90 * cos(a90 *  twicePi90 / triangleAmount90)),
			    y90 + (radius90 * sin(a90 * twicePi90 / triangleAmount90))
			);
		}
	glEnd();
	/////////////////end of stars/////////


glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(-.01f,1.5f);
glVertex2f(-.01,1.25f);
glEnd();

glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(0.14f,1.4f);
glVertex2f(-.16,1.4f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES);//right building border
glColor3ub(20, 1, 13);
glVertex2f(1.7f,.8f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_LINES);//right building border--rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.85f);
glVertex2f(1.8f,.85f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.8f);
glVertex2f(1.8f,.8f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(1.8f,.8f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //window 1's background behind nurse in middle building
glColor3ub(255, 255, 102);
glVertex2f(-.6f,.8f);
glVertex2f(-.6f,.5f);
glVertex2f(-.04f,.5f);
glVertex2f(-.04f,.8f);
glEnd();

glBegin(GL_POLYGON); //window 2's background behind nurse in middle building
glColor3ub(255, 255, 102);
glVertex2f(0.1f,.8f);
glVertex2f(.1f,.5f);
glVertex2f(.7f,.5f);
glVertex2f(.7f,.8f);
glEnd();


glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.04f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.6f,.5f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.5f);
glVertex2f(-.6f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.5f);
glVertex2f(0.1f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.8f);
glVertex2f(0.7f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.8f);
glVertex2f(0.7f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.5f);
glVertex2f(0.1f,.5f);
glEnd();

glPushMatrix();//<------------------------WINDOW NURSE ANIMATION------------------------------------------------->
glTranslatef(position100,0.0f, 0.0f);

glBegin(GL_TRIANGLES);//middle building window 1-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(-.35f,.7f);
glVertex2f(-.4f,.5f);
glVertex2f(-.3f,.5f);
glEnd();


# define PI           3.14159265358979323846 //middle building window 1-->NurseHead
glColor3ub(0,0,0);
		GLfloat xxx1=-.351f; GLfloat yyy1=.7f; GLfloat radiusxx1 =.05f;
	int triangleAmountxx1 = 20; //# of triangles used to draw circle
int i;
	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx1, yyy1); // center of circle
		for(i = 0; i <= triangleAmountxx1;i++) {
			glVertex2f(
		            xxx1 + (



                      radiusxx1 * cos(i *  twicePixx1 / triangleAmountxx1)),
			    yyy1 + (radiusxx1 * sin(i * twicePixx1 / triangleAmountxx1))
			);
		}
	glEnd();

glPopMatrix();
glPushMatrix();//<------------------------WINDOW NURSE  2 ANIMATION------------------------------------------------->
glTranslatef(position101,0.0f, 0.0f);

	glBegin(GL_TRIANGLES);//middle building window 2-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(.35f,.7f);
glVertex2f(.4f,.5f);
glVertex2f(.3f,.5f);
glEnd();

# define PI           3.14159265358979323846 //middle building window 2-->NurseHead
glColor3ub(0,0,0);
GLfloat xxx2=.35f; GLfloat yyy2=.7f; GLfloat radiusxx2 =.05f;
	int triangleAmountxx2 = 20; //# of triangles used to draw circle

	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx2, yyy2); // center of circle
		for(i = 0; i <= triangleAmountxx2;i++) {
			glVertex2f(
		            xxx2 + (radiusxx2 * cos(i *  twicePixx2 / triangleAmountxx2)),
			    yyy2 + (radiusxx2 * sin(i * twicePixx2 / triangleAmountxx2))
			);
		}
	glEnd();

glPopMatrix();

glBegin(GL_POLYGON); //Fixed window 1 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.61f,1.21f);
glVertex2f(-.61f,.89f);
glVertex2f(-.393f,.89f);
glVertex2f(-.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of middle building
glColor3ub(255, 255, 102);
glVertex2f(-.6f,1.2f);
glVertex2f(-.6f,.9f);
glVertex2f(-.4f,.9f);
glVertex2f(-.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.31f,1.21f);
glVertex2f(-.31f,.89f);
glVertex2f(-.093f,.89f);
glVertex2f(-.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of middle building
glColor3ub(255, 255, 102);
glVertex2f(-.3f,1.2f);
glVertex2f(-.3f,.9f);
glVertex2f(-.1f,.9f);
glVertex2f(-.1f,1.2f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 3 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.31f,1.21f);
glVertex2f(.31f,.89f);
glVertex2f(.093f,.89f);
glVertex2f(.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of middle building
glColor3ub(255, 255, 102);
glVertex2f(.3f,1.2f);
glVertex2f(.3f,.9f);
glVertex2f(.1f,.9f);
glVertex2f(.1f,1.2f);
glEnd();



glBegin(GL_POLYGON); //Fixed window 4 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.61f,1.21f);
glVertex2f(.61f,.89f);
glVertex2f(.393f,.89f);
glVertex2f(.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 4 of middle building
glColor3ub(255, 255, 102);
glVertex2f(.6f,1.2f);
glVertex2f(.6f,.9f);
glVertex2f(.4f,.9f);
glVertex2f(.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1 of Left building
glColor3ub(255, 255, 102);
glVertex2f(-1.6f,.6f);
glVertex2f(-1.6f,.4f);
glVertex2f(-1.4f,.4f);
glVertex2f(-1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Left building
glColor3ub(255, 255, 102);
glVertex2f(-1.3f,.6f);
glVertex2f(-1.3f,.4f);
glVertex2f(-1.1f,.4f);
glVertex2f(-1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of Left building
glColor3ub(255, 255, 102);
glVertex2f(-1.0f,.6f);
glVertex2f(-1.0f,.4f);
glVertex2f(-.8f,.4f);
glVertex2f(-.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of Left building
glColor3ub(255, 255, 102);
glVertex2f(-1.6f,.3f);
glVertex2f(-1.6f,.1f);
glVertex2f(-1.4f,.1f);
glVertex2f(-1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 102);//Fixed window 2(2nd row) of Left building
glVertex2f(-1.3f,.3f);
glVertex2f(-1.3f,.1f);
glVertex2f(-1.1f,.1f);
glVertex2f(-1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of Left building
glColor3ub(255, 255, 102);
glVertex2f(-1.0f,.3f);
glVertex2f(-1.0f,.1f);
glVertex2f(-.8f,.1f);
glVertex2f(-.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of Right building
glColor3ub(255, 255, 102);
glVertex2f(1.6f,.6f);
glVertex2f(1.6f,.4f);
glVertex2f(1.4f,.4f);
glVertex2f(1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Right building
glColor3ub(255, 255, 102);
glVertex2f(1.3f,.6f);
glVertex2f(1.3f,.4f);
glVertex2f(1.1f,.4f);
glVertex2f(1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of RIGHT building
glColor3ub(255, 255, 102);
glVertex2f(1.0f,.6f);
glVertex2f(1.0f,.4f);
glVertex2f(.8f,.4f);
glVertex2f(.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of RIGHT building
glColor3ub(255, 255, 102);
glVertex2f(1.6f,.3f);
glVertex2f(1.6f,.1f);
glVertex2f(1.4f,.1f);
glVertex2f(1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 102);//Fixed window 2(2nd row) of RIGHT building
glVertex2f(1.3f,.3f);
glVertex2f(1.3f,.1f);
glVertex2f(1.1f,.1f);
glVertex2f(1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of RIGHT building
glColor3ub(255, 255, 102);
glVertex2f(1.0f,.3f);
glVertex2f(1.0f,.1f);
glVertex2f(.8f,.1f);
glVertex2f(.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1(3rd row) of RIGHT building
glColor3ub(255, 255, 102);
glVertex2f(1.6f,-.2f);
glVertex2f(1.6f,0.0f);
glVertex2f(1.4f,0.0f);
glVertex2f(1.4f,-.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 102);//Fixed window 2(2rd row) of RIGHT building
glVertex2f(1.3f,-.2f);
glVertex2f(1.3f,0.0f);
glVertex2f(1.1f,0.0f);
glVertex2f(1.1f,-.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(3rd row) of RIGHT building
glColor3ub(255, 255, 102);
glVertex2f(1.0f,-.2f);
glVertex2f(1.0f,0.0f);
glVertex2f(.8f,0.0f);
glVertex2f(.8f,-.2f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-0.9f,.05f);
glEnd();

glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.9f,.05);
glVertex2f(-0.9f,-.7f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-1.5f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(.5f,.3f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.2);
glVertex2f(.5f,.2f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(-.5f,-.7f);
glEnd();

glLineWidth(1.0);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.3);
glVertex2f(0.0f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.5f,.3);
glVertex2f(.5f,-.7f);
glEnd();

glBegin(GL_POLYGON); //VACCINE BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(1.6f,.2f);
glVertex2f(1.6f,-.7f);
glVertex2f(1.97f,-.7);
glVertex2f(1.97f,.2f);
glEnd();




glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.6f,.2);
glVertex2f(1.6f,-.7f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.97f,.2);
glVertex2f(1.97,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(244, 245, 240);
glVertex2f(1.66f,.2);
glVertex2f(1.89f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glLineWidth(3.5);  //VACCINE BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glEnd();


# define PI           3.14159265358979323846 //VACCINE BOOTH
int a7;
 GLfloat x7=1.77f; GLfloat y7=.5f; GLfloat radius7 =.05f;
int triangleAmount7 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x7, y7); // center of circle
		for(a7 = 0; a7<= triangleAmount7;a7++) {
			glVertex2f(
		            x7 + (radius7 * cos(a7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(a7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();
/*

//VACCINE BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.3);
glVertex2f(1.55f,-.5f);
glVertex2f(1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE HEAD
int a3;
 GLfloat x3=1.65f; GLfloat y3=-.3f; GLfloat radius3 =.045f;
int triangleAmount3 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x3, y3); // center of circle
		for(a3 = 0; a3<= triangleAmount3;a3++) {
			glVertex2f(
		            x3 + (radius3 * cos(a3 *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(a3 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a31;
 GLfloat x31=1.67f; GLfloat y31=-.29f; GLfloat radius31 =.009f;
int triangleAmount31 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi31 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x31, y31); // center of circle
		for(a31 = 0; a31<= triangleAmount31;a31++) {
			glVertex2f(
		            x31 + (radius31 * cos(a31 *  twicePi31 / triangleAmount31)),
			    y31 + (radius31 * sin(a31 * twicePi31 / triangleAmount31))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a312;
 GLfloat x312=1.64f; GLfloat y312=-.29f; GLfloat radius312 =.009f;
int triangleAmount312 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi312 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x312, y312); // center of circle
		for(a312 = 0; a312<= triangleAmount312;a312++) {
			glVertex2f(
		            x312 + (radius312 * cos(a312 *  twicePi312 / triangleAmount312)),
			    y312 + (radius312 * sin(a312 * twicePi312 / triangleAmount312))
			);
		}
	glEnd();

/*
glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.2f);
glVertex2f(1.63f,-.27f);
glVertex2f(1.68f,-.27f);
glEnd();
*/

glBegin(GL_POLYGON); //VACCINE BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(1.54f,-.4f);
glVertex2f(1.54f,-.7f);
glVertex2f(1.75f,-.7f);
glVertex2f(1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //VACCINE BOOTH--->TABLE'S SYMBOL
int a1;
 GLfloat x1=1.65f; GLfloat y1=-.55f; GLfloat radius1 =.05f;
int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x1, y1); // center of circle
		for(a1 = 0; a1<= triangleAmount7;a1++) {
			glVertex2f(
		            x1+ (radius1 * cos(a1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(a1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.65f,-.6f);
glVertex2f(1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-.55f);
glVertex2f(1.7,-.55f);
glEnd();


glBegin(GL_POLYGON); //COVID TEST BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(-1.6f,.2f);
glVertex2f(-1.6f,-.7f);
glVertex2f(-1.97f,-.7);
glVertex2f(-1.97f,.2f);
glEnd();



glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.97f,.2);
glVertex2f(-1.97,-.7f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.6f,.2);
glVertex2f(-1.6,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(244, 245, 240);
glVertex2f(-1.66f,.2);
glVertex2f(-1.89f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH
int a8;
 GLfloat x8=-1.77f; GLfloat y8=.5f; GLfloat radius8 =.05f;
int triangleAmount8 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x8, y8); // center of circle
		for(a8 = 0; a8<= triangleAmount7;a8++) {
			glVertex2f(
		            x8 + (radius8 * cos(a8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(a8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();



/*
//COVID TEST BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.3);
glVertex2f(-1.55f,-.5f);
glVertex2f(-1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //COVID TEST BOOTH--->NURSE HEAD
int a33;
 GLfloat x33=-1.65f; GLfloat y33=-.3f; GLfloat radius33 =.045f;
int triangleAmount33 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi33 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x33, y33); // center of circle
		for(a33 = 0; a33<= triangleAmount33;a33++) {
			glVertex2f(
		            x33 + (radius33 * cos(a33 *  twicePi33 / triangleAmount33)),
			    y33 + (radius33 * sin(a33 * twicePi33 / triangleAmount33))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a314;
 GLfloat x314=-1.67f; GLfloat y314=-.29f; GLfloat radius314 =.009f;
int triangleAmount314 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi314 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x314, y314); // center of circle
		for(a314 = 0; a314<= triangleAmount314;a314++) {
			glVertex2f(
		            x314 + (radius314 * cos(a314 *  twicePi314 / triangleAmount314)),
			    y314 + (radius314 * sin(a314 * twicePi314 / triangleAmount314))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a3112;
 GLfloat x3112=-1.64f; GLfloat y3112=-.29f; GLfloat radius3112 =.009f;
int triangleAmount3112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x3112, y3112); // center of circle
		for(a3112 = 0; a3112<= triangleAmount3112;a3112++) {
			glVertex2f(
		            x3112 + (radius3112 * cos(a3112 *  twicePi3112 / triangleAmount3112)),
			    y3112 + (radius312 * sin(a3112 * twicePi3112 / triangleAmount3112))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.2f);
glVertex2f(-1.63f,-.27f);
glVertex2f(-1.68f,-.27f);
glEnd();


*/



glBegin(GL_POLYGON); //COVID TEST BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(-1.54f,-.4f);
glVertex2f(-1.54f,-.7f);
glVertex2f(-1.75f,-.7f);
glVertex2f(-1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH--->TABLE'S SYMBOL
int a12;
 GLfloat x12=-1.65f; GLfloat y12=-.55f; GLfloat radius12 =.05f;
int triangleAmount12 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x12, y12); // center of circle
		for(a12 = 0; a12<= triangleAmount12;a12++) {
			glVertex2f(
		            x12+ (radius1 * cos(a12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(a12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.65f,-.6f);
glVertex2f(-1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-.55f);
glVertex2f(-1.7,-.55f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(2.00f,-.5f);
glVertex2f(1.9,-.5f);
glVertex2f(1.9f,-.7f);
glVertex2f(2.00F,-.7f);
glEnd();

/*
glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(1.87f,-.5f);
glVertex2f(1.9f,-.5f);
glVertex2f(1.87f,-.7f);
glVertex2f(1.9f,-.7f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(2.00f,-.3f);
glVertex2f(1.96f,-.3f);
glVertex2f(1.94f,-.5f);
glVertex2f(2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(1.945f,-.45f);
glVertex2f(1.89f,-.43f);
glVertex2f(1.89f,-.58f);
glVertex2f(1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(1.99f,-.35f);
glVertex2f(1.97f,-.36f);
glVertex2f(1.96f,-.48f);
glVertex2f(1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a121;
 GLfloat x121=1.97f; GLfloat y121=-.32f; GLfloat radius121 =.04f;
int triangleAmount121 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi121 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x121, y121); // center of circle
		for(a121 = 0; a121<= triangleAmount121;a121++) {
			glVertex2f(
		            x121+ (radius121 * cos(a121 *  twicePi121 / triangleAmount121)),
			    y121 + (radius121 * sin(a121 * twicePi121 / triangleAmount121))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(1.8f,-.5f);
glVertex2f(1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(1.79f,-.2f);
glVertex2f(1.78f,-.6f);
glVertex2f(1.85f,-.6f);
glVertex2f(1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a1211;
 GLfloat x1211=1.82f; GLfloat y1211=-.23f; GLfloat radius1211 =.04f;
int triangleAmount1211 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1211, y1211); // center of circle
		for(a1211 = 0; a1211<= triangleAmount1211;a1211++) {
			glVertex2f(
		            x1211+ (radius1211 * cos(a1211 *  twicePi1211 / triangleAmount1211)),
			    y1211 + (radius1211 * sin(a1211 * twicePi1211 / triangleAmount1211))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.3f);
glVertex2f(1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.4f);
glVertex2f(1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(1.78f,-.27f);
glVertex2f(1.84f,-.18f);
glVertex2f(1.8f,-.15f);
glEnd();



//

glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(-2.00f,-.5f);
glVertex2f(-1.9,-.5f);
glVertex2f(-1.9f,-.7f);
glVertex2f(-2.00F,-.7f);
glEnd();

glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(-1.87f,-.5f);
glVertex2f(-1.9f,-.5f);
glVertex2f(-1.87f,-.7f);
glVertex2f(-1.9f,-.7f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-2.00f,-.3f);
glVertex2f(-1.96f,-.3f);
glVertex2f(-1.94f,-.5f);
glVertex2f(-2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-1.945f,-.45f);
glVertex2f(-1.89f,-.43f);
glVertex2f(-1.89f,-.58f);
glVertex2f(-1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(-1.99f,-.35f);
glVertex2f(-1.97f,-.36f);
glVertex2f(-1.96f,-.48f);
glVertex2f(-1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a1212;
 GLfloat x1212=-1.97f; GLfloat y1212=-.32f; GLfloat radius1212 =.04f;
int triangleAmount1212 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1212 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1212, y1212); // center of circle
		for(a1212 = 0; a1212<= triangleAmount1212;a1212++) {
			glVertex2f(
		            x1212+ (radius1212 * cos(a1212 *  twicePi1212 / triangleAmount1212)),
			    y1212 + (radius1212 * sin(a1212 * twicePi1212 / triangleAmount1212))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(-1.8f,-.5f);
glVertex2f(-1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(-1.79f,-.2f);
glVertex2f(-1.78f,-.6f);
glVertex2f(-1.85f,-.6f);
glVertex2f(-1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a12112;
 GLfloat x12112=-1.82f; GLfloat y12112=-.23f; GLfloat radius12112 =.04f;
int triangleAmount12112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x12112, y12112); // center of circle
		for(a12112 = 0; a12112<= triangleAmount12112;a12112++) {
			glVertex2f(
		            x12112+ (radius12112 * cos(a12112 *  twicePi12112 / triangleAmount12112)),
			    y12112 + (radius12112 * sin(a12112 * twicePi12112 / triangleAmount12112))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.3f);
glVertex2f(-1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.4f);
glVertex2f(-1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(-1.78f,-.27f);
glVertex2f(-1.84f,-.18f);
glVertex2f(-1.8f,-.15f);
glEnd();

*/


GLfloat x23=1.68f; GLfloat y23=-0.8f; GLfloat radius23 =.05f;//distance
glColor3ub(255,255,255);
	int i23;
	int lineAmount23 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i23 = 0; i23 <= lineAmount23;i23++) {
			glVertex2f(
			    x23 + (radius23 * cos(i23 *  twicePi23 / lineAmount23)),
			    y23 + (radius23* sin(i23 * twicePi23 / lineAmount23))
			);
		}
	glEnd();

GLfloat x24=1.38f; GLfloat y24=-0.8f; GLfloat radius24 =.05f;//distance
glColor3ub(255,255,255);
	int i24;
	int lineAmount24 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i24 = 0; i24 <= lineAmount24;i24++) {
			glVertex2f(
			    x24 + (radius24 * cos(i24 *  twicePi24 / lineAmount24)),
			    y24 + (radius24* sin(i24 * twicePi24 / lineAmount24))
			);
		}
	glEnd();


GLfloat x25=1.08f; GLfloat y25=-0.8f; GLfloat radius25 =.05f;//distance
glColor3ub(255,255,255);
	int i25;
	int lineAmount25 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i25 = 0; i25 <= lineAmount25;i25++) {
			glVertex2f(
			    x25 + (radius25 * cos(i25 *  twicePi25 / lineAmount25)),
			    y25 + (radius25* sin(i25 * twicePi25 / lineAmount25))
			);
		}
	glEnd();


GLfloat x26=0.78f; GLfloat y26=-0.8f; GLfloat radius26 =.05f;//distance
glColor3ub(255,255,255);
	int i26;
	int lineAmount26 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i26 = 0; i26 <= lineAmount26;i26++) {
			glVertex2f(
			    x26 + (radius26 * cos(i26 *  twicePi26 / lineAmount26)),
			    y26 + (radius26* sin(i26 * twicePi26 / lineAmount26))
			);
		}
	glEnd();


GLfloat x27=-1.68f; GLfloat y27=-0.8f; GLfloat radius27 =.05f;//distance
glColor3ub(255,255,255);
	int i27;
	int lineAmount27 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i27 = 0; i27 <= lineAmount27;i27++) {
			glVertex2f(
			    x27 + (radius27 * cos(i27 *  twicePi27 / lineAmount27)),
			    y27 + (radius27* sin(i27 * twicePi27 / lineAmount27))
			);
		}
	glEnd();

GLfloat x28=-1.38f; GLfloat y28=-0.8f; GLfloat radius28 =.05f;//distance
glColor3ub(255,255,255);
	int i28;
	int lineAmount28 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i28 = 0; i28 <= lineAmount28;i28++) {
			glVertex2f(
			    x28 + (radius28 * cos(i28 *  twicePi28 / lineAmount28)),
			    y28 + (radius28* sin(i28 * twicePi28 / lineAmount28))
			);
		}
	glEnd();


GLfloat x29=-1.08f; GLfloat y29=-0.8f; GLfloat radius29 =.05f;//distance
glColor3ub(255,255,255);
	int i29;
	int lineAmount29 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi29 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i29 = 0; i29 <= lineAmount29;i29++) {
			glVertex2f(
			    x29 + (radius29 * cos(i29 *  twicePi29 / lineAmount29)),
			    y29 + (radius29* sin(i29 * twicePi29 / lineAmount29))
			);
		}
	glEnd();


GLfloat x30=-0.78f; GLfloat y30=-0.8f; GLfloat radius30 =.05f;//distance
glColor3ub(255,255,255);
	int i30;
	int lineAmount30 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi30 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i30 = 0; i30 <= lineAmount30;i30++) {
			glVertex2f(
			    x30 + (radius30 * cos(i30 *  twicePi30 / lineAmount30)),
			    y30 + (radius30* sin(i30 * twicePi30 / lineAmount30))
			);
		}
	glEnd();



/*-------------------------------------------------------------------Human for covid test boot-------------------------------------------------*/


/*_______________Human 2___________________*/
/*
glPushMatrix();
glTranslatef(position111,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.49f);
glVertex2f(-1.7f,-.49f);
glVertex2f(-1.7f,-.73f);
glVertex2f(-1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.49f);
glVertex2f(-1.68f,-.49f);
glVertex2f(-1.68f,-.63f);
glVertex2f(-1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.4f);
glVertex2f(-1.62f,-.4f);
glVertex2f(-1.63f,-.42f);
glEnd();

int a62;
 GLfloat x62=-1.65f; GLfloat y62=-.45f; GLfloat radius62 =.05f;
int triangleAmount62 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi62 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x62, y62); // center of circle
		for(a62 = 0; a62<= triangleAmount62;a62++) {
			glVertex2f(
		            x62+ (radius1 * cos(a62 *  twicePi62 / triangleAmount62)),
			    y62 + (radius62 * sin(a62 * twicePi62 / triangleAmount62))
			);
		}
	glEnd();

int a63;
 GLfloat x63=-1.65f; GLfloat y63=-.63f; GLfloat radius63 =.01f;
int triangleAmount63 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi63 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x63, y63); // center of circle
		for(a63 = 0; a63<= triangleAmount63;a63++) {
			glVertex2f(
		            x63+ (radius1 * cos(a63 *  twicePi63 / triangleAmount63)),
			    y63 + (radius63 * sin(a63 * twicePi63 / triangleAmount63))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.45f);
glVertex2f(-1.7f,-.5f);
glVertex2f(-1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.72f);
glVertex2f(-1.67f,-0.72f);
glVertex2f(-1.675f,-0.85f);
glVertex2f(-1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.72f);
glVertex2f(-1.63f,-0.72f);
glVertex2f(-1.635f,-0.85f);
glVertex2f(-1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________

/*_______________Human 3___________________


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.32f,-.49f);
glVertex2f(-1.4f,-.49f);
glVertex2f(-1.4f,-.73f);
glVertex2f(-1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.49f);
glVertex2f(-1.38f,-.49f);
glVertex2f(-1.38f,-.63f);
glVertex2f(-1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.4f);
glVertex2f(-1.32f,-.4f);
glVertex2f(-1.33f,-.42f);
glEnd();

int a64;
 GLfloat x64=-1.35f; GLfloat y64=-.45f; GLfloat radius64 =.05f;
int triangleAmount64 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi64 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x64, y64); // center of circle
		for(a64 = 0; a64<= triangleAmount64;a64++) {
			glVertex2f(
		            x64+ (radius1 * cos(a64 *  twicePi64 / triangleAmount64)),
			    y64 + (radius64 * sin(a64 * twicePi64 / triangleAmount64))
			);
		}
	glEnd();

int a65;
 GLfloat x65=-1.35f; GLfloat y65=-.63f; GLfloat radius65 =.01f;
int triangleAmount65 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi65 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x65, y65); // center of circle
		for(a65 = 0; a65<= triangleAmount65;a65++) {
			glVertex2f(
		            x65+ (radius1 * cos(a65 *  twicePi65 / triangleAmount65)),
			    y65 + (radius65 * sin(a65 * twicePi65 / triangleAmount65))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-.4f);
glVertex2f(-1.3f,-.4f);
glVertex2f(-1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.35f,-.45f);
glVertex2f(-1.4f,-.5f);
glVertex2f(-1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.72f);
glVertex2f(-1.37f,-0.72f);
glVertex2f(-1.375f,-0.85f);
glVertex2f(-1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.36f,-0.72f);
glVertex2f(-1.33f,-0.72f);
glVertex2f(-1.335f,-0.85f);
glVertex2f(-1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________


/*_______________Human 4 female___________________


glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-.75f,-.49f);
glVertex2f(-.8f,-.49f);
glVertex2f(-.84f,-.73f);
glVertex2f(-.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.49f);
glVertex2f(-.78f,-.49f);
glVertex2f(-.78f,-.63f);
glVertex2f(-.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.4f);
glVertex2f(-.72f,-.4f);
glVertex2f(-.73f,-.42f);
glEnd();

int a66;
 GLfloat x66=-.75f; GLfloat y66=-.45f; GLfloat radius66 =.05f;
int triangleAmount66 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi66 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x66, y66); // center of circle
		for(a66 = 0; a66<= triangleAmount66;a66++) {
			glVertex2f(
		            x66+ (radius1 * cos(a66 *  twicePi66 / triangleAmount66)),
			    y66 + (radius66 * sin(a66 * twicePi66 / triangleAmount66))
			);
		}
	glEnd();

int a67;
 GLfloat x67=-.75f; GLfloat y67=-.63f; GLfloat radius67 =.01f;
int triangleAmount67 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi67 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x67, y67); // center of circle
		for(a67 = 0; a67<= triangleAmount67;a67++) {
			glVertex2f(
		            x67+ (radius1 * cos(a67 *  twicePi67 / triangleAmount67)),
			    y67 + (radius67 * sin(a67 * twicePi67 / triangleAmount67))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.8f,-.4f);
glVertex2f(-.65f,-.6f);
glVertex2f(-.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-.75f,-.45f);
glVertex2f(-.8f,-.5f);
glVertex2f(-.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.8f,-0.72f);
glVertex2f(-.77f,-0.72f);
glVertex2f(-.775f,-0.85f);
glVertex2f(-.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.76f,-0.72f);
glVertex2f(-.73f,-0.72f);
glVertex2f(-.735f,-0.85f);
glVertex2f(-.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________

_______________Human 5___________________


glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-1.02f,-.49f);
glVertex2f(-1.1f,-.49f);
glVertex2f(-1.1f,-.73f);
glVertex2f(-1.02f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.49f);
glVertex2f(-1.08f,-.49f);
glVertex2f(-1.08f,-.63f);
glVertex2f(-1.05f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.4f);
glVertex2f(-1.02f,-.4f);
glVertex2f(-1.03f,-.42f);
glEnd();

int a68;
 GLfloat x68=-1.05f; GLfloat y68=-.45f; GLfloat radius68 =.05f;
int triangleAmount68 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi68 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x68, y68); // center of circle
		for(a68 = 0; a68<= triangleAmount68;a68++) {
			glVertex2f(
		            x68+ (radius1 * cos(a68 *  twicePi68 / triangleAmount68)),
			    y68 + (radius68 * sin(a68 * twicePi68 / triangleAmount68))
			);
		}
	glEnd();

int a69;
 GLfloat x69=-1.05f; GLfloat y69=-.63f; GLfloat radius69 =.01f;
int triangleAmount69 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi69 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x69, y69); // center of circle
		for(a69 = 0; a69<= triangleAmount69;a69++) {
			glVertex2f(
		            x69+ (radius1 * cos(a69 *  twicePi69 / triangleAmount69)),
			    y69 + (radius69 * sin(a69 * twicePi69 / triangleAmount69))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.4f);
glVertex2f(-1.1f,-.4f);
glVertex2f(-1.11f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.05f,-.45f);
glVertex2f(-1.1f,-.5f);
glVertex2f(-1.11f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-0.72f);
glVertex2f(-1.07f,-0.72f);
glVertex2f(-1.075f,-0.85f);
glVertex2f(-1.1f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.06f,-0.72f);
glVertex2f(-1.03f,-0.72f);
glVertex2f(-1.035f,-0.85f);
glVertex2f(-1.06f,-0.85f);
glEnd();

glPopMatrix();

/*_______________End Human 5___________________

/*---------------------------------------END covid boot human---------------------------------------------------*/

glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(-1.95f,0.2f);
glVertex2f(-1.95f,-.9f);
glVertex2f(-2.0f,-.9);
glVertex2f(-2.0f,0.2f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.55f,.2);
glVertex2f(-1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.57f,.2);
glVertex2f(-1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.59f,.2);
glVertex2f(-1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.61f,.2);
glVertex2f(-1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.63f,.2);
glVertex2f(-1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.65f,.2);
glVertex2f(-1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.68f,.2);
glVertex2f(-1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.7f,.2);
glVertex2f(-1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.72f,.2);
glVertex2f(-1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.74f,.2);
glVertex2f(-1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.76f,.2);
glVertex2f(-1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.78f,.2);
glVertex2f(-1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.8f,.2);
glVertex2f(-1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.82f,.2);
glVertex2f(-1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.84f,.2);
glVertex2f(-1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.86f,.2);
glVertex2f(-1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.88f,.2);
glVertex2f(-1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.9f,.2);
glVertex2f(-1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.92f,.2);
glVertex2f(-1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.94f,.2);
glVertex2f(-1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.96f,.2);
glVertex2f(-1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.98f,.2);
glVertex2f(-1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-2.00f,.2);
glVertex2f(-2.00f,.1f);
glEnd();



glLineWidth(3.5);  //COVID TEST BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glEnd();

/*-------------------------Human for Vaccine boot-------------------------------------------------*/
glPushMatrix();
glTranslatef(position222,0,0);

/*_______________Human 2___________________


glBegin(GL_QUADS);
glColor3ub(0, 153, 153);
glVertex2f(1.62f,-.49f);
glVertex2f(1.7f,-.49f);
glVertex2f(1.7f,-.73f);
glVertex2f(1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.49f);
glVertex2f(1.68f,-.49f);
glVertex2f(1.68f,-.63f);
glVertex2f(1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.4f);
glVertex2f(1.62f,-.4f);
glVertex2f(1.63f,-.42f);
glEnd();

int a72;
 GLfloat x72=1.65f; GLfloat y72=-.45f; GLfloat radius72 =.05f;
int triangleAmount72 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi72 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x72, y72); // center of circle
		for(a72 = 0; a72<= triangleAmount72;a72++) {
			glVertex2f(
		            x72+ (radius1 * cos(a72 *  twicePi72 / triangleAmount72)),
			    y72 + (radius72 * sin(a72 * twicePi72 / triangleAmount72))
			);
		}
	glEnd();

int a73;
 GLfloat x73=1.65f; GLfloat y73=-.63f; GLfloat radius73 =.01f;
int triangleAmount73 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi73 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x73, y73); // center of circle
		for(a73 = 0; a73<= triangleAmount73;a73++) {
			glVertex2f(
		            x73+ (radius1 * cos(a73 *  twicePi73 / triangleAmount73)),
			    y73 + (radius73 * sin(a73 * twicePi73 / triangleAmount73))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.45f);
glVertex2f(1.7f,-.5f);
glVertex2f(1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.72f);
glVertex2f(1.67f,-0.72f);
glVertex2f(1.675f,-0.85f);
glVertex2f(1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.72f);
glVertex2f(1.63f,-0.72f);
glVertex2f(1.635f,-0.85f);
glVertex2f(1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.32f,-.49f);
glVertex2f(1.4f,-.49f);
glVertex2f(1.4f,-.73f);
glVertex2f(1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.49f);
glVertex2f(1.38f,-.49f);
glVertex2f(1.38f,-.63f);
glVertex2f(1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.4f);
glVertex2f(1.32f,-.4f);
glVertex2f(1.33f,-.42f);
glEnd();

int a74;
 GLfloat x74=1.35f; GLfloat y74=-.45f; GLfloat radius74 =.05f;
int triangleAmount74 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi74 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x74, y74); // center of circle
		for(a74 = 0; a74<= triangleAmount74;a74++) {
			glVertex2f(
		            x74+ (radius1 * cos(a74 *  twicePi74 / triangleAmount74)),
			    y74 + (radius74 * sin(a74 * twicePi74 / triangleAmount74))
			);
		}
	glEnd();

int a75;
 GLfloat x75=1.35f; GLfloat y75=-.63f; GLfloat radius75 =.01f;
int triangleAmount75 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi75 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x75, y75); // center of circle
		for(a75 = 0; a75<= triangleAmount75;a75++) {
			glVertex2f(
		            x75+ (radius1 * cos(a75 *  twicePi75 / triangleAmount75)),
			    y75 + (radius75 * sin(a75 * twicePi75 / triangleAmount75))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.4f,-.4f);
glVertex2f(1.3f,-.4f);
glVertex2f(1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.35f,-.45f);
glVertex2f(1.4f,-.5f);
glVertex2f(1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.4f,-0.72f);
glVertex2f(1.37f,-0.72f);
glVertex2f(1.375f,-0.85f);
glVertex2f(1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.36f,-0.72f);
glVertex2f(1.33f,-0.72f);
glVertex2f(1.335f,-0.85f);
glVertex2f(1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________


/*_______________Human 4 female___________________


glBegin(GL_QUADS);
glColor3ub(255, 153, 0);
glVertex2f(.75f,-.49f);
glVertex2f(.8f,-.49f);
glVertex2f(.84f,-.73f);
glVertex2f(.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.75f,-.49f);
glVertex2f(.78f,-.49f);
glVertex2f(.78f,-.63f);
glVertex2f(.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.75f,-.4f);
glVertex2f(.72f,-.4f);
glVertex2f(.73f,-.42f);
glEnd();

int a77;
 GLfloat x77=.75f; GLfloat y77=-.45f; GLfloat radius77 =.05f;
int triangleAmount77 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi77 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x77, y77); // center of circle
		for(a77 = 0; a77<= triangleAmount77;a77++) {
			glVertex2f(
		            x77+ (radius1 * cos(a77 *  twicePi77 / triangleAmount77)),
			    y77 + (radius77 * sin(a77 * twicePi77 / triangleAmount77))
			);
		}
	glEnd();

int a78;
 GLfloat x78=.75f; GLfloat y78=-.63f; GLfloat radius78 =.01f;
int triangleAmount78 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi78 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x78, y78); // center of circle
		for(a78 = 0; a78<= triangleAmount78;a78++) {
			glVertex2f(
		            x78+ (radius1 * cos(a78 *  twicePi78 / triangleAmount78)),
			    y78 + (radius78 * sin(a78 * twicePi78 / triangleAmount78))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.8f,-.4f);
glVertex2f(.65f,-.6f);
glVertex2f(.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(.75f,-.45f);
glVertex2f(.8f,-.5f);
glVertex2f(.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.8f,-0.72f);
glVertex2f(.77f,-0.72f);
glVertex2f(.775f,-0.85f);
glVertex2f(.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.76f,-0.72f);
glVertex2f(.73f,-0.72f);
glVertex2f(.735f,-0.85f);
glVertex2f(.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________

/*_______________Human 5___________________


glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(1.02f,-.49f);
glVertex2f(1.1f,-.49f);
glVertex2f(1.1f,-.73f);
glVertex2f(1.02f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.49f);
glVertex2f(1.08f,-.49f);
glVertex2f(1.08f,-.63f);
glVertex2f(1.05f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.02f,-.4f);
glVertex2f(1.03f,-.42f);
glEnd();

int a79;
 GLfloat x79=1.05f; GLfloat y79=-.45f; GLfloat radius79 =.05f;
int triangleAmount79 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi79 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x79, y79); // center of circle
		for(a79 = 0; a79<= triangleAmount79;a79++) {
			glVertex2f(
		            x79+ (radius1 * cos(a79 *  twicePi79 / triangleAmount79)),
			    y79 + (radius79 * sin(a79 * twicePi79 / triangleAmount79))
			);
		}
	glEnd();

int a80;
 GLfloat x80=1.05f; GLfloat y80=-.63f; GLfloat radius80 =.01f;
int triangleAmount80 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi80 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x80, y80); // center of circle
		for(a80 = 0; a80<= triangleAmount80;a80++) {
			glVertex2f(
		            x80+ (radius1 * cos(a80 *  twicePi80 / triangleAmount80)),
			    y80 + (radius80 * sin(a80 * twicePi80 / triangleAmount80))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.1f,-.4f);
glVertex2f(1.11f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.45f);
glVertex2f(1.1f,-.5f);
glVertex2f(1.11f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.72f);
glVertex2f(1.07f,-0.72f);
glVertex2f(1.075f,-0.85f);
glVertex2f(1.1f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.72f);
glVertex2f(1.03f,-0.72f);
glVertex2f(1.035f,-0.85f);
glVertex2f(1.06f,-0.85f);
glEnd();


/*_______________End Human 5___________________*/


//parked-ambulance-left


glBegin(GL_QUADS); //ambulance-->window
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.3f);
glVertex2f(-1.35f,-0.69f);
glVertex2f(-1.3f,-0.69f);
glVertex2f(-1.3f,-0.3f);
glEnd();



glBegin(GL_QUADS); //ambulance-->window
glColor3ub(0,0,0);
glVertex2f(-1.07f,-0.3f);
glVertex2f(-1.07f,-0.69f);
glVertex2f(-1.021f,-0.69f);
glVertex2f(-1.021f,-0.3f);
glEnd();

glBegin(GL_QUADS); //ambulance-->body
glColor3ub(255, 255, 255);
glVertex2f(-1.4f,-0.3f);
glVertex2f(-1.4f,-0.6f);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.98f,-0.3f);
glEnd();

glBegin(GL_LINES); //ambulance-->front
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.3f);
glVertex2f(-1.4f,-0.6f);
glEnd();

glBegin(GL_LINES); //ambulance-->front
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.6f);
glVertex2f(-0.98f,-0.6f);
glEnd();

glBegin(GL_LINES); //ambulance-->front
glColor3ub(0,0,0);
glVertex2f(-0.98f,-0.6f);
glVertex2f(-0.98f,-0.3f);
glEnd();

glBegin(GL_LINES); //ambulance-->front
glColor3ub(0,0,0);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-1.4f,-0.3f);
glEnd();

glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.35f);
glVertex2f(-1.03f,-0.35f);
glEnd();

glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.45f);
glVertex2f(-1.03f,-0.45f);
glEnd();
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.5f);
glVertex2f(-1.03f,-0.5f);
glEnd();
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.55f);
glVertex2f(-1.03f,-0.55f);
glEnd();

glBegin(GL_QUADS); //ambulance-->light
glColor3ub(255, 255, 102);
glVertex2f(-1.39f,-0.32f);
glVertex2f(-1.39f,-0.38f);
glVertex2f(-1.33f,-0.38f);
glVertex2f(-1.33f,-0.32f);
glEnd();

glBegin(GL_QUADS); //ambulance-->light
glColor3ub(255, 255, 102);
glVertex2f(-.99f,-0.32f);
glVertex2f(-.99f,-0.38f);
glVertex2f(-1.05f,-0.38f);
glVertex2f(-1.05f,-0.32f);
glEnd();

glBegin(GL_QUADS); //ambulance-->window
glColor3ub(51, 204, 255);
glVertex2f(-1.35f,-0.1f);
glVertex2f(-1.4f,-0.3f);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-1.03f,-0.1f);
glEnd();


glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.1f);
glVertex2f(-1.4f,-0.3f);
glEnd();

glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.3f);
glVertex2f(-0.98f,-0.3f);
glEnd();

glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-0.98f,-0.3f);
glVertex2f(-1.03f,-0.1f);
glEnd();

glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(0,0,0);
glVertex2f(-1.03f,-0.1f);
glVertex2f(-1.35f,-0.1f);
glEnd();

/*------------------------------------END Vaccine boot human---------------------------------------------------*/



glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(1.95f,0.2f);
glVertex2f(1.95f,-.9f);
glVertex2f(2.0f,-.9);
glVertex2f(2.0f,0.2f);
glEnd();



glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.55f,.2);
glVertex2f(1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.57f,.2);
glVertex2f(1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.59f,.2);
glVertex2f(1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.61f,.2);
glVertex2f(1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.63f,.2);
glVertex2f(1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.65f,.2);
glVertex2f(1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.68f,.2);
glVertex2f(1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.7f,.2);
glVertex2f(1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.72f,.2);
glVertex2f(1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.74f,.2);
glVertex2f(1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.76f,.2);
glVertex2f(1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.78f,.2);
glVertex2f(1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.8f,.2);
glVertex2f(1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.82f,.2);
glVertex2f(1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.84f,.2);
glVertex2f(1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.86f,.2);
glVertex2f(1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.88f,.2);
glVertex2f(1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.9f,.2);
glVertex2f(1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.92f,.2);
glVertex2f(1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.94f,.2);
glVertex2f(1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.96f,.2);
glVertex2f(1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.98f,.2);
glVertex2f(1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(237, 36, 157);
glVertex2f(2.00f,.2);
glVertex2f(2.00f,.1f);
glEnd();

//_______________Human___________________

glPushMatrix();
glTranslatef(position4,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(-1.82f,-.74f);
glVertex2f(-1.9f,-.74f);
glVertex2f(-1.9f,-.98f);
glVertex2f(-1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.74f);
glVertex2f(-1.88f,-.74f);
glVertex2f(-1.88f,-.88f);
glVertex2f(-1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.65f);
glVertex2f(-1.82f,-.65f);
glVertex2f(-1.83f,-.67f);
glEnd();

int a34;
 GLfloat x34=-1.85f; GLfloat y34=-.7f; GLfloat radius34 =.05f;
int triangleAmount34 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi34 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x34, y34); // center of circle
		for(a34 = 0; a34<= triangleAmount34;a34++) {
			glVertex2f(
		            x34+ (radius1 * cos(a34 *  twicePi34 / triangleAmount34)),
			    y34 + (radius34 * sin(a34 * twicePi34 / triangleAmount34))
			);
		}
	glEnd();

int a32;
 GLfloat x32=-1.85f; GLfloat y32=-.88f; GLfloat radius32 =.01f;
int triangleAmount32 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi32 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x32, y32); // center of circle
		for(a32 = 0; a32<= triangleAmount32;a32++) {
			glVertex2f(
		            x32+ (radius1 * cos(a32 *  twicePi32 / triangleAmount32)),
			    y32 + (radius32 * sin(a32 * twicePi32 / triangleAmount32))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.90f,-.65f);
glVertex2f(-1.8f,-.65f);
glVertex2f(-1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.85f,-.70f);
glVertex2f(-1.8f,-.75f);
glVertex2f(-1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.9f,-0.97f);
glVertex2f(-1.87f,-0.97f);
glVertex2f(-1.875f,-1.1f);
glVertex2f(-1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.86f,-0.97f);
glVertex2f(-1.83f,-0.97f);
glVertex2f(-1.835f,-1.1f);
glVertex2f(-1.86f,-1.1f);
glEnd();

glPopMatrix();

///_______________End Human___________________


/*_______________Human 2___________________
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.74f);
glVertex2f(-1.7f,-.74f);
glVertex2f(-1.7f,-.98f);
glVertex2f(-1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.74f);
glVertex2f(-1.68f,-.74f);
glVertex2f(-1.68f,-.88f);
glVertex2f(-1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.65f);
glVertex2f(-1.62f,-.65f);
glVertex2f(-1.63f,-.67f);
glEnd();

int a40;
 GLfloat x40=-1.65f; GLfloat y40=-.7f; GLfloat radius40 =.05f;
int triangleAmount40 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi40 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x40, y40); // center of circle
		for(a40 = 0; a40<= triangleAmount40;a40++) {
			glVertex2f(
		            x40+ (radius1 * cos(a40 *  twicePi40 / triangleAmount40)),
			    y40 + (radius40 * sin(a40 * twicePi40 / triangleAmount40))
			);
		}
	glEnd();

int a41;
 GLfloat x41=-1.65f; GLfloat y41=-.88f; GLfloat radius41 =.01f;
int triangleAmount41 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi41 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x41, y41); // center of circle
		for(a41 = 0; a41<= triangleAmount41;a41++) {
			glVertex2f(
		            x41+ (radius1 * cos(a41 *  twicePi41 / triangleAmount41)),
			    y41 + (radius41 * sin(a41 * twicePi41 / triangleAmount41))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-.65f);
glVertex2f(-1.6f,-.65f);
glVertex2f(-1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.70f);
glVertex2f(-1.6f,-.75f);
glVertex2f(-1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.97f);
glVertex2f(-1.67f,-0.97f);
glVertex2f(-1.675f,-1.1f);
glVertex2f(-1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.97f);
glVertex2f(-1.63f,-0.97f);
glVertex2f(-1.635f,-1.1f);
glVertex2f(-1.66f,-1.1f);
glEnd();

glPopMatrix();
_______________End Human 2___________________*/

//_______________Human 3___________________
glPushMatrix();
glTranslatef(position2,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.42f,-.74f);
glVertex2f(-1.5f,-.74f);
glVertex2f(-1.5f,-.98f);
glVertex2f(-1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.74f);
glVertex2f(-1.48f,-.74f);
glVertex2f(-1.48f,-.88f);
glVertex2f(-1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.65f);
glVertex2f(-1.42f,-.65f);
glVertex2f(-1.43f,-.67f);
glEnd();

int a43;
 GLfloat x43=-1.45f; GLfloat y43=-.7f; GLfloat radius43 =.05f;
int triangleAmount43 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi43 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x43, y43); // center of circle
		for(a43 = 0; a43<= triangleAmount43;a43++) {
			glVertex2f(
		            x43+ (radius1 * cos(a43 *  twicePi43 / triangleAmount43)),
			    y43 + (radius43 * sin(a43 * twicePi43 / triangleAmount43))
			);
		}
	glEnd();

int a44;
 GLfloat x44=-1.45f; GLfloat y44=-.88f; GLfloat radius44 =.01f;
int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x44, y44); // center of circle
		for(a44 = 0; a44<= triangleAmount44;a44++) {
			glVertex2f(
		            x44+ (radius1 * cos(a44 *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(a44 * twicePi44 / triangleAmount44))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-.65f);
glVertex2f(-1.4f,-.65f);
glVertex2f(-1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.45f,-.70f);
glVertex2f(-1.4f,-.75f);
glVertex2f(-1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-0.97f);
glVertex2f(-1.47f,-0.97f);
glVertex2f(-1.475f,-1.1f);
glVertex2f(-1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.46f,-0.97f);
glVertex2f(-1.43f,-0.97f);
glVertex2f(-1.435f,-1.1f);
glVertex2f(-1.46f,-1.1f);
glEnd();

glPopMatrix();
//_______________End Human 3___________________


/*_______________Human 4 female___________________
glPushMatrix();
glTranslatef(position1,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.3f,-.74f);
glVertex2f(-1.34f,-.98f);
glVertex2f(-1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.28f,-.74f);
glVertex2f(-1.28f,-.88f);
glVertex2f(-1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.65f);
glVertex2f(-1.22f,-.65f);
glVertex2f(-1.23f,-.67f);
glEnd();

int a45;
 GLfloat x45=-1.25f; GLfloat y45=-.7f; GLfloat radius45 =.05f;
int triangleAmount45 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi45 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x45, y45); // center of circle
		for(a45 = 0; a45<= triangleAmount45;a45++) {
			glVertex2f(
		            x45+ (radius1 * cos(a45 *  twicePi45 / triangleAmount45)),
			    y45 + (radius45 * sin(a45 * twicePi45 / triangleAmount45))
			);
		}
	glEnd();

int a46;
 GLfloat x46=-1.25f; GLfloat y46=-.88f; GLfloat radius46 =.01f;
int triangleAmount46 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi46 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x46, y46); // center of circle
		for(a46 = 0; a46<= triangleAmount46;a46++) {
			glVertex2f(
		            x46+ (radius1 * cos(a46 *  twicePi46 / triangleAmount46)),
			    y46 + (radius46 * sin(a46 * twicePi46 / triangleAmount46))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-.65f);
glVertex2f(-1.4f,-.85f);
glVertex2f(-1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.25f,-.70f);
glVertex2f(-1.2f,-.75f);
glVertex2f(-1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-0.97f);
glVertex2f(-1.27f,-0.97f);
glVertex2f(-1.275f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.26f,-0.97f);
glVertex2f(-1.23f,-0.97f);
glVertex2f(-1.235f,-1.1f);
glVertex2f(-1.26f,-1.1f);
glEnd();

glPopMatrix();
_______________End Human 4 female___________________*/

/*_______________Human 5___________________
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-1.02f,-.74f);
glVertex2f(-1.1f,-.74f);
glVertex2f(-1.1f,-.98f);
glVertex2f(-1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.74f);
glVertex2f(-1.08f,-.74f);
glVertex2f(-1.08f,-.88f);
glVertex2f(-1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.65f);
glVertex2f(-1.02f,-.65f);
glVertex2f(-1.03f,-.67f);
glEnd();

int a48;
 GLfloat x48=-1.05f; GLfloat y48=-.7f; GLfloat radius48 =.05f;
int triangleAmount48 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi48 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x48, y48); // center of circle
		for(a48 = 0; a48<= triangleAmount48;a48++) {
			glVertex2f(
		            x48+ (radius1 * cos(a48 *  twicePi48 / triangleAmount48)),
			    y48 + (radius48 * sin(a48 * twicePi48 / triangleAmount48))
			);
		}
	glEnd();

int a49;
 GLfloat x49=-1.05f; GLfloat y49=-.88f; GLfloat radius49 =.01f;
int triangleAmount49 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi49 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x49, y49); // center of circle
		for(a49 = 0; a49<= triangleAmount49;a49++) {
			glVertex2f(
		            x49+ (radius1 * cos(a49 *  twicePi49 / triangleAmount49)),
			    y49 + (radius49 * sin(a49 * twicePi49 / triangleAmount49))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-.65f);
glVertex2f(-1.0f,-.65f);
glVertex2f(-0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.05f,-.70f);
glVertex2f(-1.0f,-.75f);
glVertex2f(-.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-0.97f);
glVertex2f(-1.07f,-0.97f);
glVertex2f(-1.075f,-1.1f);
glVertex2f(-1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.06f,-0.97f);
glVertex2f(-1.03f,-0.97f);
glVertex2f(-1.035f,-1.1f);
glVertex2f(-1.06f,-1.1f);
glEnd();

glPopMatrix();*/
//_______________End Human 5___________________

//_______________Human___________________
glPushMatrix();
glTranslatef(position41,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(1.82f,-.74f);
glVertex2f(1.9f,-.74f);
glVertex2f(1.9f,-.98f);
glVertex2f(1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.74f);
glVertex2f(1.88f,-.74f);
glVertex2f(1.88f,-.88f);
glVertex2f(1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.65f);
glVertex2f(1.82f,-.65f);
glVertex2f(1.83f,-.67f);
glEnd();

int a50;
 GLfloat x50=1.85f; GLfloat y50=-.7f; GLfloat radius50 =.05f;
int triangleAmount50 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi50 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x50, y50); // center of circle
		for(a50 = 0; a50<= triangleAmount50;a50++) {
			glVertex2f(
		            x50+ (radius1 * cos(a50 *  twicePi50 / triangleAmount50)),
			    y50 + (radius50 * sin(a50 * twicePi50 / triangleAmount50))
			);
		}
	glEnd();

int a51;
 GLfloat x51=1.85f; GLfloat y51=-.88f; GLfloat radius51 =.01f;
int triangleAmount51 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi51 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x51, y51); // center of circle
		for(a51 = 0; a51<= triangleAmount51;a51++) {
			glVertex2f(
		            x51+ (radius1 * cos(a51 *  twicePi51 / triangleAmount51)),
			    y51 + (radius51 * sin(a51 * twicePi51 / triangleAmount51))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.90f,-.65f);
glVertex2f(1.8f,-.65f);
glVertex2f(1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.85f,-.70f);
glVertex2f(1.8f,-.75f);
glVertex2f(1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.9f,-0.97f);
glVertex2f(1.87f,-0.97f);
glVertex2f(1.875f,-1.1f);
glVertex2f(1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.86f,-0.97f);
glVertex2f(1.83f,-0.97f);
glVertex2f(1.835f,-1.1f);
glVertex2f(1.86f,-1.1f);
glEnd();

glPopMatrix();

//_______________End Human___________________


/*_______________Human 2___________________
glPushMatrix();
glTranslatef(position31,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(1.62f,-.74f);
glVertex2f(1.7f,-.74f);
glVertex2f(1.7f,-.98f);
glVertex2f(1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.74f);
glVertex2f(1.68f,-.74f);
glVertex2f(1.68f,-.88f);
glVertex2f(1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.65f);
glVertex2f(1.62f,-.65f);
glVertex2f(1.63f,-.67f);
glEnd();

int a52;
 GLfloat x52=1.65f; GLfloat y52=-.7f; GLfloat radius52 =.05f;
int triangleAmount52 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi52 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x52, y52); // center of circle
		for(a52 = 0; a52<= triangleAmount52;a52++) {
			glVertex2f(
		            x52+ (radius1 * cos(a52 *  twicePi52 / triangleAmount52)),
			    y52 + (radius52 * sin(a52 * twicePi52 / triangleAmount52))
			);
		}
	glEnd();

int a53;
 GLfloat x53=1.65f; GLfloat y53=-.88f; GLfloat radius53 =.01f;
int triangleAmount53 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi53 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x53, y53); // center of circle
		for(a53 = 0; a53<= triangleAmount53;a53++) {
			glVertex2f(
		            x53+ (radius1 * cos(a53 *  twicePi53 / triangleAmount53)),
			    y53 + (radius53 * sin(a53 * twicePi53 / triangleAmount53))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.7f,-.65f);
glVertex2f(1.6f,-.65f);
glVertex2f(1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.70f);
glVertex2f(1.6f,-.75f);
glVertex2f(1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.97f);
glVertex2f(1.67f,-0.97f);
glVertex2f(1.675f,-1.1f);
glVertex2f(1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.97f);
glVertex2f(1.63f,-0.97f);
glVertex2f(1.635f,-1.1f);
glVertex2f(1.66f,-1.1f);
glEnd();

glPopMatrix();*/

//_______________End Human 2___________________

/*_______________Human 3___________________
glPushMatrix();
glTranslatef(position21,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.42f,-.74f);
glVertex2f(1.5f,-.74f);
glVertex2f(1.5f,-.98f);
glVertex2f(1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.74f);
glVertex2f(1.48f,-.74f);
glVertex2f(1.48f,-.88f);
glVertex2f(1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.65f);
glVertex2f(1.42f,-.65f);
glVertex2f(1.43f,-.67f);
glEnd();

int a54;
 GLfloat x54=1.45f; GLfloat y54=-.7f; GLfloat radius54 =.05f;
int triangleAmount54 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi54 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x54, y54); // center of circle
		for(a54 = 0; a54<= triangleAmount54;a54++) {
			glVertex2f(
		            x54+ (radius1 * cos(a54 *  twicePi54 / triangleAmount54)),
			    y54 + (radius54 * sin(a54 * twicePi54 / triangleAmount54))
			);
		}
	glEnd();

int a55;
 GLfloat x55=1.45f; GLfloat y55=-.88f; GLfloat radius55 =.01f;
int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x55, y55); // center of circle
		for(a55 = 0; a55<= triangleAmount55;a55++) {
			glVertex2f(
		            x55+ (radius1 * cos(a55 *  twicePi55 / triangleAmount55)),
			    y55 + (radius55 * sin(a55 * twicePi55 / triangleAmount55))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.5f,-.65f);
glVertex2f(1.4f,-.65f);
glVertex2f(1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.45f,-.70f);
glVertex2f(1.4f,-.75f);
glVertex2f(1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.5f,-0.97f);
glVertex2f(1.47f,-0.97f);
glVertex2f(1.475f,-1.1f);
glVertex2f(1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.46f,-0.97f);
glVertex2f(1.43f,-0.97f);
glVertex2f(1.435f,-1.1f);
glVertex2f(1.46f,-1.1f);
glEnd();

glPopMatrix();

_______________End Human 3___________________

*/
//_______________Human 4 female___________________

glPushMatrix();
glTranslatef(position11,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(1.25f,-.74f);
glVertex2f(1.3f,-.74f);
glVertex2f(1.34f,-.98f);
glVertex2f(1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.74f);
glVertex2f(1.28f,-.74f);
glVertex2f(1.28f,-.88f);
glVertex2f(1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.65f);
glVertex2f(1.22f,-.65f);
glVertex2f(1.23f,-.67f);
glEnd();

int a56;
 GLfloat x56=1.25f; GLfloat y56=-.7f; GLfloat radius56 =.05f;
int triangleAmount56 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi56 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x56, y56); // center of circle
		for(a56 = 0; a56<= triangleAmount56;a56++) {
			glVertex2f(
		            x56+ (radius1 * cos(a56 *  twicePi56 / triangleAmount56)),
			    y56 + (radius56 * sin(a56 * twicePi56 / triangleAmount56))
			);
		}
	glEnd();

int a57;
 GLfloat x57=1.25f; GLfloat y57=-.88f; GLfloat radius57 =.01f;
int triangleAmount57 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi57 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x57, y57); // center of circle
		for(a57 = 0; a57<= triangleAmount57;a57++) {
			glVertex2f(
		            x57+ (radius1 * cos(a57 *  twicePi57 / triangleAmount57)),
			    y57 + (radius57 * sin(a57 * twicePi57 / triangleAmount57))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.3f,-.65f);
glVertex2f(1.4f,-.85f);
glVertex2f(1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.25f,-.70f);
glVertex2f(1.2f,-.75f);
glVertex2f(1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.3f,-0.97f);
glVertex2f(1.27f,-0.97f);
glVertex2f(1.275f,-1.1f);
glVertex2f(1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.26f,-0.97f);
glVertex2f(1.23f,-0.97f);
glVertex2f(1.235f,-1.1f);
glVertex2f(1.26f,-1.1f);
glEnd();

glPopMatrix();

//_______________End Human 4 female___________________

/*_______________Human 5___________________
glPushMatrix();
glTranslatef(position00,0,0);


glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(1.02f,-.74f);
glVertex2f(1.1f,-.74f);
glVertex2f(1.1f,-.98f);
glVertex2f(1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.74f);
glVertex2f(1.08f,-.74f);
glVertex2f(1.08f,-.88f);
glVertex2f(1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.65f);
glVertex2f(1.02f,-.65f);
glVertex2f(1.03f,-.67f);
glEnd();

int a58;
 GLfloat x58=1.05f; GLfloat y58=-.7f; GLfloat radius58 =.05f;
int triangleAmount58 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi58 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x58, y58); // center of circle
		for(a58 = 0; a58<= triangleAmount58;a58++) {
			glVertex2f(
		            x58+ (radius1 * cos(a58 *  twicePi58 / triangleAmount58)),
			    y58 + (radius58 * sin(a58 * twicePi58 / triangleAmount58))
			);
		}
	glEnd();

int a59;
 GLfloat x59=1.05f; GLfloat y59=-.88f; GLfloat radius59 =.01f;
int triangleAmount59 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi59 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x59, y59); // center of circle
		for(a59 = 0; a59<= triangleAmount59;a59++) {
			glVertex2f(
		            x59+ (radius1 * cos(a59 *  twicePi59 / triangleAmount59)),
			    y59 + (radius59 * sin(a59 * twicePi59 / triangleAmount59))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-.65f);
glVertex2f(1.0f,-.65f);
glVertex2f(0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.70f);
glVertex2f(1.0f,-.75f);
glVertex2f(.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.97f);
glVertex2f(1.07f,-0.97f);
glVertex2f(1.075f,-1.1f);
glVertex2f(1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.97f);
glVertex2f(1.03f,-0.97f);
glVertex2f(1.035f,-1.1f);
glVertex2f(1.06f,-1.1f);
glEnd();

glPopMatrix();
_______________End Human 5___________________*/

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glEnd();

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.349f);
glVertex2f(.75f,.349f);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(.75f,.349f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.349f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.2f);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.15f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.19f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.6f,.19f);
glVertex2f(-.6f,-1.15f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(.75f,.2f);
glVertex2f(.6f,.2f);
glVertex2f(.6f,-1.15f);
glVertex2f(.75f,-1.15f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.19f);
glVertex2f(.75f,-1.15f);
glEnd();
glBegin(GL_QUADS);//FRONT FOOR
glColor3ub(204, 230, 255);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.155f);
glVertex2f(.6f,-1.155f);
glVertex2f(.6f,0.2f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.2f);
glVertex2f(0.0f,-1.155f);
glEnd();

glLineWidth(1.0);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.6f,.19f);
glVertex2f(.6f,-1.15f);
glEnd();

/*------------------------------------------------Car----------------------------------------*
glPushMatrix();
glTranslatef(position15,0,0);

glBegin(GL_QUADS); //car
glColor3ub(51, 102, 255);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.3f,-1.1f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(230, 0, 0);
glVertex2f(-1.2f,-1.1f);
glVertex2f(-1.8f,-1.1f);
glVertex2f(-1.85f,-1.4f);
glVertex2f(-1.15f,-1.4f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.11f);
glVertex2f(-1.25f,-1.11f);
glVertex2f(-1.25f,-1.15f);
glVertex2f(-1.2f,-1.15f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.45f,-0.9f);
glVertex2f(-1.45f,-1.4f);
glEnd();

int a16;
 GLfloat x16=-1.3f; GLfloat y16=-1.4f; GLfloat radius16 =.15f;
int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x16, y16); // center of circle
		for(a16 = 0; a16<= triangleAmount16;a16++) {
			glVertex2f(
		            x16+ (radius1 * cos(a16 *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(a16 * twicePi16 / triangleAmount16))
			);
		}
	glEnd();

int a17;
 GLfloat x17=-1.7f; GLfloat y17=-1.4f; GLfloat radius17 =.15f;
int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x17, y17); // center of circle
		for(a17 = 0; a17<= triangleAmount17;a17++) {
			glVertex2f(
		            x17+ (radius1 * cos(a17 *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(a17 * twicePi17 / triangleAmount17))
			);
		}
	glEnd();



glPopMatrix();

/*------------------------------------------------Car----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------
glPushMatrix();
glTranslatef(position12,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.0f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.1f,-1.1f);
glVertex2f(1.0f,-1.4f);
glVertex2f(1.0f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-1.3f);
glVertex2f(1.1f,-1.6f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(1.1f,-1.12f);
glVertex2f(1.01f,-1.38f);
glVertex2f(1.2f,-1.38f);
glVertex2f(1.2f,-1.12f);
glEnd();

int a13;
 GLfloat x13=1.15f; GLfloat y13=-1.6f; GLfloat radius13 =.15f;
int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x13, y13); // center of circle
		for(a13 = 0; a13<= triangleAmount13;a13++) {
			glVertex2f(
		            x13+ (radius1 * cos(a13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(a13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

int a14;
 GLfloat x14=1.7f; GLfloat y14=-1.6f; GLfloat radius14 =.15f;
int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x14, y14); // center of circle
		for(a14 = 0; a14<= triangleAmount14;a14++) {
			glVertex2f(
		            x14+ (radius1 * cos(a14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(a14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();


int a15;
 GLfloat x15=1.45f; GLfloat y15=-1.2f; GLfloat radius15 =.1f;
int triangleAmount15 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x15, y15); // center of circle
		for(a15 = 0; a15<= triangleAmount15;a15++) {
			glVertex2f(
		            x15+ (radius1 * cos(a15 *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(a15 * twicePi15 / triangleAmount15))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.4f,-1.2f);
glVertex2f(1.5,-1.2f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.45f,-1.1f);
glVertex2f(1.45f,-1.3f);
glEnd();

glPopMatrix();
*/
/*------------------------------------------------Ambulance----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------*/
glPushMatrix();
glTranslatef(position14,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.05f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.1f,-1.15f);
glVertex2f(-1.0f,-1.45f);
glVertex2f(-1.0f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-1.35f);
glVertex2f(-1.1f,-1.65f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(-1.1f,-1.125f);
glVertex2f(-1.01f,-1.385f);
glVertex2f(-1.2f,-1.385f);
glVertex2f(-1.2f,-1.125f);
glEnd();

int a18;
 GLfloat x18=-1.15f; GLfloat y18=-1.65f; GLfloat radius18 =.15f;
int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x18, y18); // center of circle
		for(a18 = 0; a18<= triangleAmount18;a18++) {
			glVertex2f(
		            x18+ (radius1 * cos(a18 *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(a18 * twicePi18 / triangleAmount18))
			);
		}
	glEnd();

int a19;
 GLfloat x19=-1.7f; GLfloat y19=-1.65f; GLfloat radius19 =.15f;
int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x19, y19); // center of circle
		for(a19 = 0; a19<= triangleAmount19;a19++) {
			glVertex2f(
		            x19+ (radius1 * cos(a19 *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(a19 * twicePi19 / triangleAmount19))
			);
		}
	glEnd();


int a20;
 GLfloat x20=-1.45f; GLfloat y20=-1.25f; GLfloat radius20 =.1f;
int triangleAmount20 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x20, y20); // center of circle
		for(a20 = 0; a20<= triangleAmount20;a20++) {
			glVertex2f(
		            x20+ (radius1 * cos(a20 *  twicePi20 / triangleAmount20)),
			    y20 + (radius20 * sin(a20 * twicePi20 / triangleAmount20))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.4f,-1.25f);
glVertex2f(-1.5,-1.25f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.45f,-1.15f);
glVertex2f(-1.45f,-1.35f);
glEnd();

glPopMatrix();

/*------------------------------------------------Ambulance----------------------------------------*/

/*------------------------------------------------Car----------------------------------------*/
glPushMatrix();
glTranslatef(position13,0,0);


glBegin(GL_QUADS); //car
glColor3ub(0, 26, 0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.72f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(255, 255, 0);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.8f,-1.4f);
glVertex2f(1.85f,-1.7f);
glVertex2f(1.15f,-1.7f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.59f);
glVertex2f(1.25f,-1.59f);
glVertex2f(1.25f,-1.63f);
glVertex2f(1.2f,-1.63f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.45f,-1.2f);
glVertex2f(1.45f,-1.7f);
glEnd();

int a21;
 GLfloat x21=1.3f; GLfloat y21=-1.7f; GLfloat radius21 =.15f;
int triangleAmount21 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x21, y21); // center of circle
		for(a21 = 0; a21<= triangleAmount21;a21++) {
			glVertex2f(
		            x21+ (radius1 * cos(a21 *  twicePi21 / triangleAmount21)),
			    y21 + (radius21 * sin(a21 * twicePi21 / triangleAmount21))
			);
		}
	glEnd();

int a22;
 GLfloat x22=1.7f; GLfloat y22=-1.7f; GLfloat radius22 =.15f;
int triangleAmount22 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x22, y22); // center of circle
		for(a22 = 0; a22<= triangleAmount22;a22++) {
			glVertex2f(
		            x22+ (radius1 * cos(a22 *  twicePi22 / triangleAmount22)),
			    y22 + (radius22 * sin(a22 * twicePi22 / triangleAmount22))
			);
		}
	glEnd();
glPopMatrix();


/*------------------------------------------------Car----------------------------------------*/

	glFlush();
}
void rain() {

   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_QUADS);    //BACKGROUND--->SUNLIGHT
glColor3ub(193, 224, 227);
glVertex2f(-2.0f,2.0f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,2.0f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->footpath
glColor3ub(255, 230, 128);
glVertex2f(-2.0f,-.7f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-.7f);
glEnd();

glBegin(GL_QUADS);    //BACKGROUND--->ROAD
glColor3ub(94, 97, 95);
glVertex2f(-2.0f,-1.15f);
glVertex2f(-2.0f,-2.0f);
glVertex2f(2.0f,-2.0f);
glVertex2f(2.0f,-1.15f);
glEnd();


glLineWidth(2.5);  //ROAD LINES 1
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-2.0f,-1.4f);
glVertex2f(-1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 2
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-1.4f);
glVertex2f(-1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 3
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.4f);
glVertex2f(-1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 4
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.8f,-1.4f);
glVertex2f(-0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 5
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.4f,-1.4f);
glVertex2f(-0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 6
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.0f,-1.4f);
glVertex2f(0.2f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 7
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.4f,-1.4f);
glVertex2f(0.6f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 8
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.8f,-1.4f);
glVertex2f(1.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 9
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.4f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 10
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-1.4f);
glVertex2f(1.8f,-1.4f);
glEnd();

glLineWidth(2.5);  //ROAD LINES 11
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(1.9f,-1.4f);
glVertex2f(2.0f,-1.4f);
glEnd();

glLineWidth(2.5);  //HOSPITALS ROAD BORDER
glBegin(GL_LINES);
glColor3ub(0, 9, 10);
glVertex2f(-2.0f,-.7f);
glVertex2f(2.0f,-.7f);
glEnd();


glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glVertex2f(.8f,-.7f);
glVertex2f(.8f,1.3f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS MIDDLE BUILDING ROOFTOP
glColor3ub(237, 244, 245);
glVertex2f(-0.9f,1.3f);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glVertex2f(.9f,1.3f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.8f,1.3f);
glVertex2f(-.8f,-.7f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(.9f,1.3f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.35f);
glVertex2f(.9f,1.35f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.4f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.9f,1.3f);
glVertex2f(-.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border--> rooftop
glColor3ub(20, 1, 13);
glVertex2f(.9f,1.3f);
glVertex2f(.9f,1.4f);
glEnd();

glBegin(GL_LINES);//middle building border
glColor3ub(20, 1, 13);
glVertex2f(.8f,1.3f);
glVertex2f(.8f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glVertex2f(-.8f,-.7f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS LEFT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glVertex2f(-.8f,.9f);
glVertex2f(-.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.8f);
glVertex2f(-1.8f,.8f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.9f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border-->rooftop
glColor3ub(20, 1, 13);
glVertex2f(-.8f,.85f);
glVertex2f(-1.8f,.85f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.8f,.8f);
glVertex2f(-1.8f,.9f);
glEnd();

glBegin(GL_LINES);//left building border
glColor3ub(20, 1, 13);
glVertex2f(-1.7f,.8f);
glVertex2f(-1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING
glColor3ub(237, 244, 245);
glVertex2f(1.7f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,-.7f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_POLYGON); //HOSPITALS RIGHT BUILDING--->rooftop
glColor3ub(237, 244, 245);
glVertex2f(1.8f,.8f);
glVertex2f(.8f,.8f);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar right
glColor3ub(115, 38, 38);
glVertex2f(.95f,.9);
glVertex2f(1.f,.9);
glVertex2f(1.f,1.5f);
glVertex2f(.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light right
glColor3ub(0,0,0);
glVertex2f(.9f,1.5);
glVertex2f(1.05f,1.5);
glVertex2f(1.05f,1.6f);
glVertex2f(.9f,1.6f);
glEnd();

glBegin(GL_POLYGON); //Lamb pillar left
glColor3ub(115, 38, 38);
glVertex2f(-.95f,.9);
glVertex2f(-1.f,.9);
glVertex2f(-1.f,1.5f);
glVertex2f(-.95f,1.5f);
glEnd();

glBegin(GL_POLYGON); //Lamb light left
glColor3ub(0,0,0);
glVertex2f(-.9f,1.5);
glVertex2f(-1.05f,1.5);
glVertex2f(-1.05f,1.6f);
glVertex2f(-.9f,1.6f);
glEnd();


# define PI           3.14159265358979323846 //hospital's circle
int a6;
 GLfloat x6=-.01f; GLfloat y6=1.4f; GLfloat radius6 =.2f;
int triangleAmount6 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x6, y6); // center of circle
		for(a6 = 0; a6<= triangleAmount6;a6++) {
			glVertex2f(
		            x6 + (radius6 * cos(a6 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(a6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

/*	# define PI           3.14159265358979323846 //sun
int a81;
 GLfloat x81=1.7f; GLfloat y81=1.8f; GLfloat radius81 =.2f;
int triangleAmount81 = 81; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi81 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 209, 277);
		glVertex2f(x81, y81); // center of circle
		for(a81 = 0; a81<= triangleAmount81;a81++) {
			glVertex2f(
		            x81 + (radius81 * cos(a81 *  twicePi81 / triangleAmount81)),
			    y81 + (radius81 * sin(a81 * twicePi81 / triangleAmount81))
			);
		}
	glEnd();
*/
glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(-.01f,1.5f);
glVertex2f(-.01,1.25f);
glEnd();

glLineWidth(3.5);
glBegin(GL_LINES);//hospitals symbol
glColor3ub(247, 245, 245);
glVertex2f(0.14f,1.4f);
glVertex2f(-.16,1.4f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES);//right building border
glColor3ub(20, 1, 13);
glVertex2f(1.7f,.8f);
glVertex2f(1.7f,-.7f);
glEnd();

glBegin(GL_LINES);//right building border--rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.9f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.85f);
glVertex2f(1.8f,.85f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(.8f,.8f);
glVertex2f(1.8f,.8f);
glEnd();

glBegin(GL_LINES);//right building border---rooftop
glColor3ub(20, 1, 13);
glVertex2f(1.8f,.8f);
glVertex2f(1.8f,.9f);
glEnd();

glBegin(GL_POLYGON); //window 1's background behind nurse in middle building
glColor3ub(231, 232, 188);
glVertex2f(-.6f,.8f);
glVertex2f(-.6f,.5f);
glVertex2f(-.04f,.5f);
glVertex2f(-.04f,.8f);
glEnd();

glBegin(GL_POLYGON); //window 2's background behind nurse in middle building
glColor3ub(231, 232, 188);
glVertex2f(0.1f,.8f);
glVertex2f(.1f,.5f);
glVertex2f(.7f,.5f);
glVertex2f(.7f,.8f);
glEnd();


glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.04f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.8f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.6f,.5f);
glVertex2f(-.6f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window1
glColor3ub(20, 1, 13);
glVertex2f(-.04f,.5f);
glVertex2f(-.6f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.5f);
glVertex2f(0.1f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.1f,.8f);
glVertex2f(0.7f,.8f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.8f);
glVertex2f(0.7f,.5f);
glEnd();

glBegin(GL_LINES);//middle building window2
glColor3ub(20, 1, 13);
glVertex2f(0.7f,.5f);
glVertex2f(0.1f,.5f);
glEnd();

glPushMatrix();//<------------------------WINDOW NURSE ANIMATION------------------------------------------------->
glTranslatef(position100,0.0f, 0.0f);

glBegin(GL_TRIANGLES);//middle building window 1-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(-.35f,.7f);
glVertex2f(-.4f,.5f);
glVertex2f(-.3f,.5f);
glEnd();


# define PI           3.14159265358979323846 //middle building window 1-->NurseHead
glColor3ub(0,0,0);
		GLfloat xxx1=-.351f; GLfloat yyy1=.7f; GLfloat radiusxx1 =.05f;
	int triangleAmountxx1 = 20; //# of triangles used to draw circle
int i;
	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx1, yyy1); // center of circle
		for(i = 0; i <= triangleAmountxx1;i++) {
			glVertex2f(
		            xxx1 + (



                      radiusxx1 * cos(i *  twicePixx1 / triangleAmountxx1)),
			    yyy1 + (radiusxx1 * sin(i * twicePixx1 / triangleAmountxx1))
			);
		}
	glEnd();

glPopMatrix();
glPushMatrix();//<------------------------WINDOW NURSE  2 ANIMATION------------------------------------------------->
glTranslatef(position101,0.0f, 0.0f);

	glBegin(GL_TRIANGLES);//middle building window 2-->Nurse
glColor3ub(155, 219, 222);
glVertex2f(.35f,.7f);
glVertex2f(.4f,.5f);
glVertex2f(.3f,.5f);
glEnd();

# define PI           3.14159265358979323846 //middle building window 2-->NurseHead
glColor3ub(0,0,0);
GLfloat xxx2=.35f; GLfloat yyy2=.7f; GLfloat radiusxx2 =.05f;
	int triangleAmountxx2 = 20; //# of triangles used to draw circle

	//GLfloat radiusxx = 0.8f; //radiusxx
	GLfloat twicePixx2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xxx2, yyy2); // center of circle
		for(i = 0; i <= triangleAmountxx2;i++) {
			glVertex2f(
		            xxx2 + (radiusxx2 * cos(i *  twicePixx2 / triangleAmountxx2)),
			    yyy2 + (radiusxx2 * sin(i * twicePixx2 / triangleAmountxx2))
			);
		}
	glEnd();

glPopMatrix();

glBegin(GL_POLYGON); //Fixed window 1 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.61f,1.21f);
glVertex2f(-.61f,.89f);
glVertex2f(-.393f,.89f);
glVertex2f(-.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of middle building
glColor3ub(231, 232, 188);
glVertex2f(-.6f,1.2f);
glVertex2f(-.6f,.9f);
glVertex2f(-.4f,.9f);
glVertex2f(-.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(-.31f,1.21f);
glVertex2f(-.31f,.89f);
glVertex2f(-.093f,.89f);
glVertex2f(-.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of middle building
glColor3ub(231, 232, 188);
glVertex2f(-.3f,1.2f);
glVertex2f(-.3f,.9f);
glVertex2f(-.1f,.9f);
glVertex2f(-.1f,1.2f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 3 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.31f,1.21f);
glVertex2f(.31f,.89f);
glVertex2f(.093f,.89f);
glVertex2f(.093f,1.21f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of middle building
glColor3ub(231, 232, 188);
glVertex2f(.3f,1.2f);
glVertex2f(.3f,.9f);
glVertex2f(.1f,.9f);
glVertex2f(.1f,1.2f);
glEnd();



glBegin(GL_POLYGON); //Fixed window 4 Frame of middle building
glColor3ub(0, 0, 0);
glVertex2f(.61f,1.21f);
glVertex2f(.61f,.89f);
glVertex2f(.393f,.89f);
glVertex2f(.393f,1.21f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 4 of middle building
glColor3ub(231, 232, 188);
glVertex2f(.6f,1.2f);
glVertex2f(.6f,.9f);
glVertex2f(.4f,.9f);
glVertex2f(.4f,1.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.6f,.6f);
glVertex2f(-1.6f,.4f);
glVertex2f(-1.4f,.4f);
glVertex2f(-1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.3f,.6f);
glVertex2f(-1.3f,.4f);
glVertex2f(-1.1f,.4f);
glVertex2f(-1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.0f,.6f);
glVertex2f(-1.0f,.4f);
glVertex2f(-.8f,.4f);
glVertex2f(-.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.6f,.3f);
glVertex2f(-1.6f,.1f);
glVertex2f(-1.4f,.1f);
glVertex2f(-1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2nd row) of Left building
glVertex2f(-1.3f,.3f);
glVertex2f(-1.3f,.1f);
glVertex2f(-1.1f,.1f);
glVertex2f(-1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of Left building
glColor3ub(231, 232, 188);
glVertex2f(-1.0f,.3f);
glVertex2f(-1.0f,.1f);
glVertex2f(-.8f,.1f);
glVertex2f(-.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1 of Right building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,.6f);
glVertex2f(1.6f,.4f);
glVertex2f(1.4f,.4f);
glVertex2f(1.4f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2 of Right building
glColor3ub(231, 232, 188);
glVertex2f(1.3f,.6f);
glVertex2f(1.3f,.4f);
glVertex2f(1.1f,.4f);
glVertex2f(1.1f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 3 of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,.6f);
glVertex2f(1.0f,.4f);
glVertex2f(.8f,.4f);
glVertex2f(.8f,.6f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 1(2nd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,.3f);
glVertex2f(1.6f,.1f);
glVertex2f(1.4f,.1f);
glVertex2f(1.4f,.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2nd row) of RIGHT building
glVertex2f(1.3f,.3f);
glVertex2f(1.3f,.1f);
glVertex2f(1.1f,.1f);
glVertex2f(1.1f,.3f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(2nd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,.3f);
glVertex2f(1.0f,.1f);
glVertex2f(.8f,.1f);
glVertex2f(.8f,.3f);
glEnd();


glBegin(GL_POLYGON); //Fixed window 1(3rd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.6f,-.2f);
glVertex2f(1.6f,0.0f);
glVertex2f(1.4f,0.0f);
glVertex2f(1.4f,-.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(231, 232, 188);//Fixed window 2(2rd row) of RIGHT building
glVertex2f(1.3f,-.2f);
glVertex2f(1.3f,0.0f);
glVertex2f(1.1f,0.0f);
glVertex2f(1.1f,-.2f);
glEnd();

glBegin(GL_POLYGON); //Fixed window 2(3rd row) of RIGHT building
glColor3ub(231, 232, 188);
glVertex2f(1.0f,-.2f);
glVertex2f(1.0f,0.0f);
glVertex2f(.8f,0.0f);
glVertex2f(.8f,-.2f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-0.9f,.05f);
glEnd();

glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.9f,.05);
glVertex2f(-0.9f,-.7f);
glEnd();


glLineWidth(1.5);  //LEFT BUILDING DOOR--->GARAGE
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.5f,.05);
glVertex2f(-1.5f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(.5f,.3f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.2);
glVertex2f(.5f,.2f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.5f,.3);
glVertex2f(-.5f,-.7f);
glEnd();

glLineWidth(1.0);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.3);
glVertex2f(0.0f,-.7f);
glEnd();

glLineWidth(1.5);  //Middle Building door
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.5f,.3);
glVertex2f(.5f,-.7f);
glEnd();

glBegin(GL_POLYGON); //VACCINE BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(1.6f,.2f);
glVertex2f(1.6f,-.7f);
glVertex2f(1.97f,-.7);
glVertex2f(1.97f,.2f);
glEnd();




glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.6f,.2);
glVertex2f(1.6f,-.7f);
glEnd();


glLineWidth(1.0);
glBegin(GL_LINES); //VACCINE BOOTH
glColor3ub(0,0,0);
glVertex2f(1.97f,.2);
glVertex2f(1.97,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//VACCINE BOOTH
glColor3ub(244, 245, 240);
glVertex2f(1.66f,.2);
glVertex2f(1.89f,.2f);
glVertex2f(1.77f,.5f);
glEnd();


glLineWidth(3.5);  //VACCINE BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(1.55f,.2);
glVertex2f(2.0f,.2f);
glEnd();


# define PI           3.14159265358979323846 //VACCINE BOOTH
int a7;
 GLfloat x7=1.77f; GLfloat y7=.5f; GLfloat radius7 =.05f;
int triangleAmount7 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x7, y7); // center of circle
		for(a7 = 0; a7<= triangleAmount7;a7++) {
			glVertex2f(
		            x7 + (radius7 * cos(a7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(a7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();


//VACCINE BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.3);
glVertex2f(1.55f,-.5f);
glVertex2f(1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE HEAD
int a3;
 GLfloat x3=1.65f; GLfloat y3=-.3f; GLfloat radius3 =.045f;
int triangleAmount3 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x3, y3); // center of circle
		for(a3 = 0; a3<= triangleAmount3;a3++) {
			glVertex2f(
		            x3 + (radius3 * cos(a3 *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(a3 * twicePi3 / triangleAmount3))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a31;
 GLfloat x31=1.67f; GLfloat y31=-.29f; GLfloat radius31 =.009f;
int triangleAmount31 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi31 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x31, y31); // center of circle
		for(a31 = 0; a31<= triangleAmount31;a31++) {
			glVertex2f(
		            x31 + (radius31 * cos(a31 *  twicePi31 / triangleAmount31)),
			    y31 + (radius31 * sin(a31 * twicePi31 / triangleAmount31))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a312;
 GLfloat x312=1.64f; GLfloat y312=-.29f; GLfloat radius312 =.009f;
int triangleAmount312 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi312 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x312, y312); // center of circle
		for(a312 = 0; a312<= triangleAmount312;a312++) {
			glVertex2f(
		            x312 + (radius312 * cos(a312 *  twicePi312 / triangleAmount312)),
			    y312 + (radius312 * sin(a312 * twicePi312 / triangleAmount312))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(1.65f,-.2f);
glVertex2f(1.63f,-.27f);
glVertex2f(1.68f,-.27f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(1.54f,-.4f);
glVertex2f(1.54f,-.7f);
glVertex2f(1.75f,-.7f);
glVertex2f(1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //VACCINE BOOTH--->TABLE'S SYMBOL
int a1;
 GLfloat x1=1.65f; GLfloat y1=-.55f; GLfloat radius1 =.05f;
int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x1, y1); // center of circle
		for(a1 = 0; a1<= triangleAmount7;a1++) {
			glVertex2f(
		            x1+ (radius1 * cos(a1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(a1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.65f,-.6f);
glVertex2f(1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //VACCINE BOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.6f,-.55f);
glVertex2f(1.7,-.55f);
glEnd();


glBegin(GL_POLYGON); //COVID TEST BOOTH-->background
glColor3ub(244, 245, 240);
glVertex2f(-1.6f,.2f);
glVertex2f(-1.6f,-.7f);
glVertex2f(-1.97f,-.7);
glVertex2f(-1.97f,.2f);
glEnd();



glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.97f,.2);
glVertex2f(-1.97,-.7f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(0,0,0);
glVertex2f(-1.6f,.2);
glVertex2f(-1.6,-.7f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();


glBegin(GL_TRIANGLES);//COVID TEST BOOTH
glColor3ub(244, 245, 240);
glVertex2f(-1.66f,.2);
glVertex2f(-1.89f,.2f);
glVertex2f(-1.77f,.5f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH
int a8;
 GLfloat x8=-1.77f; GLfloat y8=.5f; GLfloat radius8 =.05f;
int triangleAmount8 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x8, y8); // center of circle
		for(a8 = 0; a8<= triangleAmount7;a8++) {
			glVertex2f(
		            x8 + (radius8 * cos(a8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(a8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();




//COVID TEST BOOTH--->NURSE BODY
glBegin(GL_TRIANGLES);
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.3);
glVertex2f(-1.55f,-.5f);
glVertex2f(-1.75f,-.5f);
glEnd();




	# define PI           3.14159265358979323846 //COVID TEST BOOTH--->NURSE HEAD
int a33;
 GLfloat x33=-1.65f; GLfloat y33=-.3f; GLfloat radius33 =.045f;
int triangleAmount33 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi33 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(232, 208, 167);
		glVertex2f(x33, y33); // center of circle
		for(a33 = 0; a33<= triangleAmount33;a33++) {
			glVertex2f(
		            x33 + (radius33 * cos(a33 *  twicePi33 / triangleAmount33)),
			    y33 + (radius33 * sin(a33 * twicePi33 / triangleAmount33))
			);
		}
	glEnd();




	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES
int a314;
 GLfloat x314=-1.67f; GLfloat y314=-.29f; GLfloat radius314 =.009f;
int triangleAmount314 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi314 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x314, y314); // center of circle
		for(a314 = 0; a314<= triangleAmount314;a314++) {
			glVertex2f(
		            x314 + (radius314 * cos(a314 *  twicePi314 / triangleAmount314)),
			    y314 + (radius314 * sin(a314 * twicePi314 / triangleAmount314))
			);
		}
	glEnd();

	# define PI           3.14159265358979323846 //VACCINE BOOTH--->NURSE EYES(2)
int a3112;
 GLfloat x3112=-1.64f; GLfloat y3112=-.29f; GLfloat radius3112 =.009f;
int triangleAmount3112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x3112, y3112); // center of circle
		for(a3112 = 0; a3112<= triangleAmount3112;a3112++) {
			glVertex2f(
		            x3112 + (radius3112 * cos(a3112 *  twicePi3112 / triangleAmount3112)),
			    y3112 + (radius312 * sin(a3112 * twicePi3112 / triangleAmount3112))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES); //VACCINE BOOTH-->NURSE HAT
glColor3ub(186, 224, 212);
glVertex2f(-1.65f,-.2f);
glVertex2f(-1.63f,-.27f);
glVertex2f(-1.68f,-.27f);
glEnd();






glBegin(GL_POLYGON); //COVID TEST BOOTH-->TABLE
glColor3ub(18, 1, 1);
glVertex2f(-1.54f,-.4f);
glVertex2f(-1.54f,-.7f);
glVertex2f(-1.75f,-.7f);
glVertex2f(-1.75f,-.4f);
glEnd();




# define PI           3.14159265358979323846 //COVID TEST BOOTH--->TABLE'S SYMBOL
int a12;
 GLfloat x12=-1.65f; GLfloat y12=-.55f; GLfloat radius12 =.05f;
int triangleAmount12 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x12, y12); // center of circle
		for(a12 = 0; a12<= triangleAmount12;a12++) {
			glVertex2f(
		            x12+ (radius1 * cos(a12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(a12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.65f,-.6f);
glVertex2f(-1.65,-.5f);
glEnd();


	glLineWidth(1.2);
glBegin(GL_LINES); //COVID TEST BOOTH-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.6f,-.55f);
glVertex2f(-1.7,-.55f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(2.00f,-.5f);
glVertex2f(1.9,-.5f);
glVertex2f(1.9f,-.7f);
glVertex2f(2.00F,-.7f);
glEnd();

glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(1.87f,-.5f);
glVertex2f(1.9f,-.5f);
glVertex2f(1.87f,-.7f);
glVertex2f(1.9f,-.7f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(2.00f,-.3f);
glVertex2f(1.96f,-.3f);
glVertex2f(1.94f,-.5f);
glVertex2f(2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(153, 255, 102);
glVertex2f(1.945f,-.45f);
glVertex2f(1.89f,-.43f);
glVertex2f(1.89f,-.58f);
glVertex2f(1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(1.99f,-.35f);
glVertex2f(1.97f,-.36f);
glVertex2f(1.96f,-.48f);
glVertex2f(1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a121;
 GLfloat x121=1.97f; GLfloat y121=-.32f; GLfloat radius121 =.04f;
int triangleAmount121 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi121 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x121, y121); // center of circle
		for(a121 = 0; a121<= triangleAmount121;a121++) {
			glVertex2f(
		            x121+ (radius121 * cos(a121 *  twicePi121 / triangleAmount121)),
			    y121 + (radius121 * sin(a121 * twicePi121 / triangleAmount121))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(1.8f,-.5f);
glVertex2f(1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(1.79f,-.2f);
glVertex2f(1.78f,-.6f);
glVertex2f(1.85f,-.6f);
glVertex2f(1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a1211;
 GLfloat x1211=1.82f; GLfloat y1211=-.23f; GLfloat radius1211 =.04f;
int triangleAmount1211 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1211 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1211, y1211); // center of circle
		for(a1211 = 0; a1211<= triangleAmount1211;a1211++) {
			glVertex2f(
		            x1211+ (radius1211 * cos(a1211 *  twicePi1211 / triangleAmount1211)),
			    y1211 + (radius1211 * sin(a1211 * twicePi1211 / triangleAmount1211))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.3f);
glVertex2f(1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(1.82f,-.4f);
glVertex2f(1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(1.78f,-.27f);
glVertex2f(1.84f,-.18f);
glVertex2f(1.8f,-.15f);
glEnd();



//

glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT CHAIR
glColor3ub(0, 0, 0);
glVertex2f(-2.00f,-.5f);
glVertex2f(-1.9,-.5f);
glVertex2f(-1.9f,-.7f);
glVertex2f(-2.00F,-.7f);
glEnd();

glBegin(GL_POLYGON); //PATIENT legs
glColor3ub(230, 210, 149);
glVertex2f(-1.87f,-.5f);
glVertex2f(-1.9f,-.5f);
glVertex2f(-1.87f,-.7f);
glVertex2f(-1.9f,-.7f);
glEnd();



glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-2.00f,-.3f);
glVertex2f(-1.96f,-.3f);
glVertex2f(-1.94f,-.5f);
glVertex2f(-2.00f,-.5f);
glEnd();


glBegin(GL_POLYGON); //VACCINE BOOTH---> PATIENT body
glColor3ub(201, 18, 159);
glVertex2f(-1.945f,-.45f);
glVertex2f(-1.89f,-.43f);
glVertex2f(-1.89f,-.58f);
glVertex2f(-1.945f,-.5f);
glEnd();

glBegin(GL_POLYGON); //PATIENT HANDS
glColor3ub(230, 210, 149);
glVertex2f(-1.99f,-.35f);
glVertex2f(-1.97f,-.36f);
glVertex2f(-1.96f,-.48f);
glVertex2f(-1.97f,-.49f);
glEnd();



# define PI           3.14159265358979323846 //PATIENT HEAD
int a1212;
 GLfloat x1212=-1.97f; GLfloat y1212=-.32f; GLfloat radius1212 =.04f;
int triangleAmount1212 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1212 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x1212, y1212); // center of circle
		for(a1212 = 0; a1212<= triangleAmount1212;a1212++) {
			glVertex2f(
		            x1212+ (radius1212 * cos(a1212 *  twicePi1212 / triangleAmount1212)),
			    y1212 + (radius1212 * sin(a1212 * twicePi1212 / triangleAmount1212))
			);
		}
	glEnd();



glLineWidth(4.0);
glBegin(GL_LINES); //nurse legs
glColor3ub(230, 210, 149);
glVertex2f(-1.8f,-.5f);
glVertex2f(-1.8f,-.7f);
glEnd();



glBegin(GL_POLYGON); //Nurse
glColor3ub(145, 200, 204);
glVertex2f(-1.79f,-.2f);
glVertex2f(-1.78f,-.6f);
glVertex2f(-1.85f,-.6f);
glVertex2f(-1.84f,-.2f);
glEnd();




# define PI           3.14159265358979323846 //nurse HEAD
int a12112;
 GLfloat x12112=-1.82f; GLfloat y12112=-.23f; GLfloat radius12112 =.04f;
int triangleAmount12112 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 210, 149);
		glVertex2f(x12112, y12112); // center of circle
		for(a12112 = 0; a12112<= triangleAmount12112;a12112++) {
			glVertex2f(
		            x12112+ (radius12112 * cos(a12112 *  twicePi12112 / triangleAmount12112)),
			    y12112 + (radius12112 * sin(a12112 * twicePi12112 / triangleAmount12112))
			);
		}
	glEnd();


glLineWidth(3.5);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.3f);
glVertex2f(-1.82f,-.4f);
glEnd();

glLineWidth(3.0);
glBegin(GL_LINES); //hands
glColor3ub(230, 210, 149);
glVertex2f(-1.82f,-.4f);
glVertex2f(-1.874f,-.4f);
glEnd();




glBegin(GL_TRIANGLES); //NURSE HAT
glColor3ub(145, 200, 204);
glVertex2f(-1.78f,-.27f);
glVertex2f(-1.84f,-.18f);
glVertex2f(-1.8f,-.15f);
glEnd();




GLfloat x23=1.68f; GLfloat y23=-0.8f; GLfloat radius23 =.05f;//distance
glColor3ub(255,255,255);
	int i23;
	int lineAmount23 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi23 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i23 = 0; i23 <= lineAmount23;i23++) {
			glVertex2f(
			    x23 + (radius23 * cos(i23 *  twicePi23 / lineAmount23)),
			    y23 + (radius23* sin(i23 * twicePi23 / lineAmount23))
			);
		}
	glEnd();

GLfloat x24=1.38f; GLfloat y24=-0.8f; GLfloat radius24 =.05f;//distance
glColor3ub(255,255,255);
	int i24;
	int lineAmount24 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi24 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i24 = 0; i24 <= lineAmount24;i24++) {
			glVertex2f(
			    x24 + (radius24 * cos(i24 *  twicePi24 / lineAmount24)),
			    y24 + (radius24* sin(i24 * twicePi24 / lineAmount24))
			);
		}
	glEnd();


GLfloat x25=1.08f; GLfloat y25=-0.8f; GLfloat radius25 =.05f;//distance
glColor3ub(255,255,255);
	int i25;
	int lineAmount25 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi25 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i25 = 0; i25 <= lineAmount25;i25++) {
			glVertex2f(
			    x25 + (radius25 * cos(i25 *  twicePi25 / lineAmount25)),
			    y25 + (radius25* sin(i25 * twicePi25 / lineAmount25))
			);
		}
	glEnd();


GLfloat x26=0.78f; GLfloat y26=-0.8f; GLfloat radius26 =.05f;//distance
glColor3ub(255,255,255);
	int i26;
	int lineAmount26 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi26 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i26 = 0; i26 <= lineAmount26;i26++) {
			glVertex2f(
			    x26 + (radius26 * cos(i26 *  twicePi26 / lineAmount26)),
			    y26 + (radius26* sin(i26 * twicePi26 / lineAmount26))
			);
		}
	glEnd();


GLfloat x27=-1.68f; GLfloat y27=-0.8f; GLfloat radius27 =.05f;//distance
glColor3ub(255,255,255);
	int i27;
	int lineAmount27 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi27 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i27 = 0; i27 <= lineAmount27;i27++) {
			glVertex2f(
			    x27 + (radius27 * cos(i27 *  twicePi27 / lineAmount27)),
			    y27 + (radius27* sin(i27 * twicePi27 / lineAmount27))
			);
		}
	glEnd();

GLfloat x28=-1.38f; GLfloat y28=-0.8f; GLfloat radius28 =.05f;//distance
glColor3ub(255,255,255);
	int i28;
	int lineAmount28 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi28 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i28 = 0; i28 <= lineAmount28;i28++) {
			glVertex2f(
			    x28 + (radius28 * cos(i28 *  twicePi28 / lineAmount28)),
			    y28 + (radius28* sin(i28 * twicePi28 / lineAmount28))
			);
		}
	glEnd();


GLfloat x29=-1.08f; GLfloat y29=-0.8f; GLfloat radius29 =.05f;//distance
glColor3ub(255,255,255);
	int i29;
	int lineAmount29 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi29 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i29 = 0; i29 <= lineAmount29;i29++) {
			glVertex2f(
			    x29 + (radius29 * cos(i29 *  twicePi29 / lineAmount29)),
			    y29 + (radius29* sin(i29 * twicePi29 / lineAmount29))
			);
		}
	glEnd();


GLfloat x30=-0.78f; GLfloat y30=-0.8f; GLfloat radius30 =.05f;//distance
glColor3ub(255,255,255);
	int i30;
	int lineAmount30 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi30 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i30 = 0; i30 <= lineAmount30;i30++) {
			glVertex2f(
			    x30 + (radius30 * cos(i30 *  twicePi30 / lineAmount30)),
			    y30 + (radius30* sin(i30 * twicePi30 / lineAmount30))
			);
		}
	glEnd();



/*-------------------------------------------------------------------Human for covid test boot-------------------------------------------------*/


/*_______________Human 2___________________*
glPushMatrix();
glTranslatef(position111,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.49f);
glVertex2f(-1.7f,-.49f);
glVertex2f(-1.7f,-.73f);
glVertex2f(-1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.49f);
glVertex2f(-1.68f,-.49f);
glVertex2f(-1.68f,-.63f);
glVertex2f(-1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.4f);
glVertex2f(-1.62f,-.4f);
glVertex2f(-1.63f,-.42f);
glEnd();

int a62;
 GLfloat x62=-1.65f; GLfloat y62=-.45f; GLfloat radius62 =.05f;
int triangleAmount62 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi62 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x62, y62); // center of circle
		for(a62 = 0; a62<= triangleAmount62;a62++) {
			glVertex2f(
		            x62+ (radius1 * cos(a62 *  twicePi62 / triangleAmount62)),
			    y62 + (radius62 * sin(a62 * twicePi62 / triangleAmount62))
			);
		}
	glEnd();

int a63;
 GLfloat x63=-1.65f; GLfloat y63=-.63f; GLfloat radius63 =.01f;
int triangleAmount63 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi63 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x63, y63); // center of circle
		for(a63 = 0; a63<= triangleAmount63;a63++) {
			glVertex2f(
		            x63+ (radius1 * cos(a63 *  twicePi63 / triangleAmount63)),
			    y63 + (radius63 * sin(a63 * twicePi63 / triangleAmount63))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.45f);
glVertex2f(-1.7f,-.5f);
glVertex2f(-1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.72f);
glVertex2f(-1.67f,-0.72f);
glVertex2f(-1.675f,-0.85f);
glVertex2f(-1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.72f);
glVertex2f(-1.63f,-0.72f);
glVertex2f(-1.635f,-0.85f);
glVertex2f(-1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.32f,-.49f);
glVertex2f(-1.4f,-.49f);
glVertex2f(-1.4f,-.73f);
glVertex2f(-1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.49f);
glVertex2f(-1.38f,-.49f);
glVertex2f(-1.38f,-.63f);
glVertex2f(-1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.35f,-.4f);
glVertex2f(-1.32f,-.4f);
glVertex2f(-1.33f,-.42f);
glEnd();

int a64;
 GLfloat x64=-1.35f; GLfloat y64=-.45f; GLfloat radius64 =.05f;
int triangleAmount64 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi64 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x64, y64); // center of circle
		for(a64 = 0; a64<= triangleAmount64;a64++) {
			glVertex2f(
		            x64+ (radius1 * cos(a64 *  twicePi64 / triangleAmount64)),
			    y64 + (radius64 * sin(a64 * twicePi64 / triangleAmount64))
			);
		}
	glEnd();

int a65;
 GLfloat x65=-1.35f; GLfloat y65=-.63f; GLfloat radius65 =.01f;
int triangleAmount65 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi65 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x65, y65); // center of circle
		for(a65 = 0; a65<= triangleAmount65;a65++) {
			glVertex2f(
		            x65+ (radius1 * cos(a65 *  twicePi65 / triangleAmount65)),
			    y65 + (radius65 * sin(a65 * twicePi65 / triangleAmount65))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-.4f);
glVertex2f(-1.3f,-.4f);
glVertex2f(-1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.35f,-.45f);
glVertex2f(-1.4f,-.5f);
glVertex2f(-1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.4f,-0.72f);
glVertex2f(-1.37f,-0.72f);
glVertex2f(-1.375f,-0.85f);
glVertex2f(-1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.36f,-0.72f);
glVertex2f(-1.33f,-0.72f);
glVertex2f(-1.335f,-0.85f);
glVertex2f(-1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*


glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-.75f,-.49f);
glVertex2f(-.8f,-.49f);
glVertex2f(-.84f,-.73f);
glVertex2f(-.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.49f);
glVertex2f(-.78f,-.49f);
glVertex2f(-.78f,-.63f);
glVertex2f(-.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.75f,-.4f);
glVertex2f(-.72f,-.4f);
glVertex2f(-.73f,-.42f);
glEnd();

int a66;
 GLfloat x66=-.75f; GLfloat y66=-.45f; GLfloat radius66 =.05f;
int triangleAmount66 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi66 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x66, y66); // center of circle
		for(a66 = 0; a66<= triangleAmount66;a66++) {
			glVertex2f(
		            x66+ (radius1 * cos(a66 *  twicePi66 / triangleAmount66)),
			    y66 + (radius66 * sin(a66 * twicePi66 / triangleAmount66))
			);
		}
	glEnd();

int a67;
 GLfloat x67=-.75f; GLfloat y67=-.63f; GLfloat radius67 =.01f;
int triangleAmount67 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi67 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x67, y67); // center of circle
		for(a67 = 0; a67<= triangleAmount67;a67++) {
			glVertex2f(
		            x67+ (radius1 * cos(a67 *  twicePi67 / triangleAmount67)),
			    y67 + (radius67 * sin(a67 * twicePi67 / triangleAmount67))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-.8f,-.4f);
glVertex2f(-.65f,-.6f);
glVertex2f(-.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-.75f,-.45f);
glVertex2f(-.8f,-.5f);
glVertex2f(-.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.8f,-0.72f);
glVertex2f(-.77f,-0.72f);
glVertex2f(-.775f,-0.85f);
glVertex2f(-.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.76f,-0.72f);
glVertex2f(-.73f,-0.72f);
glVertex2f(-.735f,-0.85f);
glVertex2f(-.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/


/*----------------------------------------------------------------------END covid boot human---------------------------------------------------*/

glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(-1.95f,0.2f);
glVertex2f(-1.95f,-.9f);
glVertex2f(-2.0f,-.9);
glVertex2f(-2.0f,0.2f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.55f,.2);
glVertex2f(-1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.57f,.2);
glVertex2f(-1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.59f,.2);
glVertex2f(-1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.61f,.2);
glVertex2f(-1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.63f,.2);
glVertex2f(-1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.65f,.2);
glVertex2f(-1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.68f,.2);
glVertex2f(-1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.7f,.2);
glVertex2f(-1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.72f,.2);
glVertex2f(-1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.74f,.2);
glVertex2f(-1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.76f,.2);
glVertex2f(-1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.78f,.2);
glVertex2f(-1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.8f,.2);
glVertex2f(-1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.82f,.2);
glVertex2f(-1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.84f,.2);
glVertex2f(-1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.86f,.2);
glVertex2f(-1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.88f,.2);
glVertex2f(-1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.9f,.2);
glVertex2f(-1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.92f,.2);
glVertex2f(-1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.94f,.2);
glVertex2f(-1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-1.96f,.2);
glVertex2f(-1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(201, 42, 30);
glVertex2f(-1.98f,.2);
glVertex2f(-1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //COVID TEST BOOTH
glColor3ub(74, 7, 2);
glVertex2f(-2.00f,.2);
glVertex2f(-2.00f,.1f);
glEnd();



glLineWidth(3.5);  //COVID TEST BOOTH
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.55f,.2);
glVertex2f(-2.0f,.2f);
glEnd();

/*-------------------------------------------------------------------Human for Vaccine boot-------------------------------------------------*/
glPushMatrix();
glTranslatef(position222,0,0);

/*_______________Human 2___________________*


glBegin(GL_QUADS);
glColor3ub(0, 153, 153);
glVertex2f(1.62f,-.49f);
glVertex2f(1.7f,-.49f);
glVertex2f(1.7f,-.73f);
glVertex2f(1.62f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.49f);
glVertex2f(1.68f,-.49f);
glVertex2f(1.68f,-.63f);
glVertex2f(1.65f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.4f);
glVertex2f(1.62f,-.4f);
glVertex2f(1.63f,-.42f);
glEnd();

int a72;
 GLfloat x72=1.65f; GLfloat y72=-.45f; GLfloat radius72 =.05f;
int triangleAmount72 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi72 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x72, y72); // center of circle
		for(a72 = 0; a72<= triangleAmount72;a72++) {
			glVertex2f(
		            x72+ (radius1 * cos(a72 *  twicePi72 / triangleAmount72)),
			    y72 + (radius72 * sin(a72 * twicePi72 / triangleAmount72))
			);
		}
	glEnd();

int a73;
 GLfloat x73=1.65f; GLfloat y73=-.63f; GLfloat radius73 =.01f;
int triangleAmount73 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi73 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x73, y73); // center of circle
		for(a73 = 0; a73<= triangleAmount73;a73++) {
			glVertex2f(
		            x73+ (radius1 * cos(a73 *  twicePi73 / triangleAmount73)),
			    y73 + (radius73 * sin(a73 * twicePi73 / triangleAmount73))
			);
		}
	glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.45f);
glVertex2f(1.7f,-.5f);
glVertex2f(1.72f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.72f);
glVertex2f(1.67f,-0.72f);
glVertex2f(1.675f,-0.85f);
glVertex2f(1.7f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.72f);
glVertex2f(1.63f,-0.72f);
glVertex2f(1.635f,-0.85f);
glVertex2f(1.66f,-0.85f);
glEnd();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*


glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.32f,-.49f);
glVertex2f(1.4f,-.49f);
glVertex2f(1.4f,-.73f);
glVertex2f(1.32f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.49f);
glVertex2f(1.38f,-.49f);
glVertex2f(1.38f,-.63f);
glVertex2f(1.35f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.35f,-.4f);
glVertex2f(1.32f,-.4f);
glVertex2f(1.33f,-.42f);
glEnd();

int a74;
 GLfloat x74=1.35f; GLfloat y74=-.45f; GLfloat radius74 =.05f;
int triangleAmount74 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi74 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x74, y74); // center of circle
		for(a74 = 0; a74<= triangleAmount74;a74++) {
			glVertex2f(
		            x74+ (radius1 * cos(a74 *  twicePi74 / triangleAmount74)),
			    y74 + (radius74 * sin(a74 * twicePi74 / triangleAmount74))
			);
		}
	glEnd();

int a75;
 GLfloat x75=1.35f; GLfloat y75=-.63f; GLfloat radius75 =.01f;
int triangleAmount75 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi75 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x75, y75); // center of circle
		for(a75 = 0; a75<= triangleAmount75;a75++) {
			glVertex2f(
		            x75+ (radius1 * cos(a75 *  twicePi75 / triangleAmount75)),
			    y75 + (radius75 * sin(a75 * twicePi75 / triangleAmount75))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.4f,-.4f);
glVertex2f(1.3f,-.4f);
glVertex2f(1.29f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.35f,-.45f);
glVertex2f(1.4f,-.5f);
glVertex2f(1.42f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.4f,-0.72f);
glVertex2f(1.37f,-0.72f);
glVertex2f(1.375f,-0.85f);
glVertex2f(1.4f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.36f,-0.72f);
glVertex2f(1.33f,-0.72f);
glVertex2f(1.335f,-0.85f);
glVertex2f(1.36f,-0.85f);
glEnd();


/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*


glBegin(GL_QUADS);
glColor3ub(255, 153, 0);
glVertex2f(.75f,-.49f);
glVertex2f(.8f,-.49f);
glVertex2f(.84f,-.73f);
glVertex2f(.68f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.75f,-.49f);
glVertex2f(.78f,-.49f);
glVertex2f(.78f,-.63f);
glVertex2f(.75f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.75f,-.4f);
glVertex2f(.72f,-.4f);
glVertex2f(.73f,-.42f);
glEnd();

int a77;
 GLfloat x77=.75f; GLfloat y77=-.45f; GLfloat radius77 =.05f;
int triangleAmount77 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi77 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x77, y77); // center of circle
		for(a77 = 0; a77<= triangleAmount77;a77++) {
			glVertex2f(
		            x77+ (radius1 * cos(a77 *  twicePi77 / triangleAmount77)),
			    y77 + (radius77 * sin(a77 * twicePi77 / triangleAmount77))
			);
		}
	glEnd();

int a78;
 GLfloat x78=.75f; GLfloat y78=-.63f; GLfloat radius78 =.01f;
int triangleAmount78 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi78 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x78, y78); // center of circle
		for(a78 = 0; a78<= triangleAmount78;a78++) {
			glVertex2f(
		            x78+ (radius1 * cos(a78 *  twicePi78 / triangleAmount78)),
			    y78 + (radius78 * sin(a78 * twicePi78 / triangleAmount78))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(.8f,-.4f);
glVertex2f(.65f,-.6f);
glVertex2f(.72f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(.75f,-.45f);
glVertex2f(.8f,-.5f);
glVertex2f(.82f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.8f,-0.72f);
glVertex2f(.77f,-0.72f);
glVertex2f(.775f,-0.85f);
glVertex2f(.8f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.76f,-0.72f);
glVertex2f(.73f,-0.72f);
glVertex2f(.735f,-0.85f);
glVertex2f(.76f,-0.85f);
glEnd();


/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/

/*
glBegin(GL_QUADS);
glColor3ub(102, 102, 153);
glVertex2f(1.02f,-.49f);
glVertex2f(1.1f,-.49f);
glVertex2f(1.1f,-.73f);
glVertex2f(1.02f,-.73f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.49f);
glVertex2f(1.08f,-.49f);
glVertex2f(1.08f,-.63f);
glVertex2f(1.05f,-.63f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.02f,-.4f);
glVertex2f(1.03f,-.42f);
glEnd();

int a79;
 GLfloat x79=1.05f; GLfloat y79=-.45f; GLfloat radius79 =.05f;
int triangleAmount79 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi79 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x79, y79); // center of circle
		for(a79 = 0; a79<= triangleAmount79;a79++) {
			glVertex2f(
		            x79+ (radius1 * cos(a79 *  twicePi79 / triangleAmount79)),
			    y79 + (radius79 * sin(a79 * twicePi79 / triangleAmount79))
			);
		}
	glEnd();

int a80;
 GLfloat x80=1.05f; GLfloat y80=-.63f; GLfloat radius80 =.01f;
int triangleAmount80 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi80 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x80, y80); // center of circle
		for(a80 = 0; a80<= triangleAmount80;a80++) {
			glVertex2f(
		            x80+ (radius1 * cos(a80 *  twicePi80 / triangleAmount80)),
			    y80 + (radius80 * sin(a80 * twicePi80 / triangleAmount80))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.4f);
glVertex2f(1.1f,-.4f);
glVertex2f(1.11f,-.36f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.45f);
glVertex2f(1.1f,-.5f);
glVertex2f(1.11f,-.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.72f);
glVertex2f(1.07f,-0.72f);
glVertex2f(1.075f,-0.85f);
glVertex2f(1.1f,-0.85f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.72f);
glVertex2f(1.03f,-0.72f);
glVertex2f(1.035f,-0.85f);
glVertex2f(1.06f,-0.85f);
glEnd();


/*_______________End Human 5___________________*/


/*----------------------------------------------------------------------END Vaccine boot human---------------------------------------------------*/


glBegin(GL_QUADS);
glColor3ub(77, 77, 77);
glVertex2f(1.95f,0.2f);
glVertex2f(1.95f,-.9f);
glVertex2f(2.0f,-.9);
glVertex2f(2.0f,0.2f);
glEnd();



glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.55f,.2);
glVertex2f(1.55f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(red)
glColor3ub(217, 42, 11);
glVertex2f(1.57f,.2);
glVertex2f(1.57f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.59f,.2);
glVertex2f(1.59f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(orange)
glColor3ub(255, 145, 0);
glVertex2f(1.61f,.2);
glVertex2f(1.61f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.63f,.2);
glVertex2f(1.63f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(yellow)
glColor3ub(250, 246, 20);
glVertex2f(1.65f,.2);
glVertex2f(1.65f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.68f,.2);
glVertex2f(1.68f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(119, 255, 0);
glVertex2f(1.7f,.2);
glVertex2f(1.7f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.72f,.2);
glVertex2f(1.72f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(green)
glColor3ub(0, 255, 55);
glVertex2f(1.74f,.2);
glVertex2f(1.74f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.76f,.2);
glVertex2f(1.76f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seagreen)
glColor3ub(0, 255, 153);
glVertex2f(1.78f,.2);
glVertex2f(1.78f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.8f,.2);
glVertex2f(1.8f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(seablue)
glColor3ub(0, 255, 247);
glVertex2f(1.82f,.2);
glVertex2f(1.82f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.84f,.2);
glVertex2f(1.84f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(0, 115, 255);
glVertex2f(1.86f,.2);
glVertex2f(1.86f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.88f,.2);
glVertex2f(1.88f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(blue)
glColor3ub(33, 12, 171);
glVertex2f(1.9f,.2);
glVertex2f(1.9f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.92f,.2);
glVertex2f(1.92f,.1f);
glEnd();


glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(purple)
glColor3ub(98, 12, 130);
glVertex2f(1.94f,.2);
glVertex2f(1.94f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.96f,.2);
glVertex2f(1.96f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(181, 34, 169);
glVertex2f(1.98f,.2);
glVertex2f(1.98f,.1f);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(237, 36, 157);
glVertex2f(2.00f,.2);
glVertex2f(2.00f,.1f);
glEnd();

/*_______________Human___________________*/

glPushMatrix();
glTranslatef(position4,0,0);

glLineWidth(4.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.48f);
glVertex2f(-1.85f,-.74f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(-1.92f,-.48f);
glVertex2f(-1.98f,-.54f);
glVertex2f(-1.62f,-.54f);
glVertex2f(-1.68f,-.48f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 92, 51);
glVertex2f(-1.82f,-.74f);
glVertex2f(-1.9f,-.74f);
glVertex2f(-1.9f,-.98f);
glVertex2f(-1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.74f);
glVertex2f(-1.88f,-.74f);
glVertex2f(-1.88f,-.88f);
glVertex2f(-1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.85f,-.65f);
glVertex2f(-1.82f,-.65f);
glVertex2f(-1.83f,-.67f);
glEnd();

int a34;
 GLfloat x34=-1.85f; GLfloat y34=-.7f; GLfloat radius34 =.05f;
int triangleAmount34 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi34 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x34, y34); // center of circle
		for(a34 = 0; a34<= triangleAmount34;a34++) {
			glVertex2f(
		            x34+ (radius1 * cos(a34 *  twicePi34 / triangleAmount34)),
			    y34 + (radius34 * sin(a34 * twicePi34 / triangleAmount34))
			);
		}
	glEnd();

int a32;
 GLfloat x32=-1.85f; GLfloat y32=-.88f; GLfloat radius32 =.01f;
int triangleAmount32 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi32 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x32, y32); // center of circle
		for(a32 = 0; a32<= triangleAmount32;a32++) {
			glVertex2f(
		            x32+ (radius1 * cos(a32 *  twicePi32 / triangleAmount32)),
			    y32 + (radius32 * sin(a32 * twicePi32 / triangleAmount32))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.90f,-.65f);
glVertex2f(-1.8f,-.65f);
glVertex2f(-1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.85f,-.70f);
glVertex2f(-1.8f,-.75f);
glVertex2f(-1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.9f,-0.97f);
glVertex2f(-1.87f,-0.97f);
glVertex2f(-1.875f,-1.1f);
glVertex2f(-1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.86f,-0.97f);
glVertex2f(-1.83f,-0.97f);
glVertex2f(-1.835f,-1.1f);
glVertex2f(-1.86f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human___________________*/


/*_______________Human 2___________________*
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(-1.62f,-.74f);
glVertex2f(-1.7f,-.74f);
glVertex2f(-1.7f,-.98f);
glVertex2f(-1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.74f);
glVertex2f(-1.68f,-.74f);
glVertex2f(-1.68f,-.88f);
glVertex2f(-1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.65f,-.65f);
glVertex2f(-1.62f,-.65f);
glVertex2f(-1.63f,-.67f);
glEnd();

int a40;
 GLfloat x40=-1.65f; GLfloat y40=-.7f; GLfloat radius40 =.05f;
int triangleAmount40 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi40 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x40, y40); // center of circle
		for(a40 = 0; a40<= triangleAmount40;a40++) {
			glVertex2f(
		            x40+ (radius1 * cos(a40 *  twicePi40 / triangleAmount40)),
			    y40 + (radius40 * sin(a40 * twicePi40 / triangleAmount40))
			);
		}
	glEnd();

int a41;
 GLfloat x41=-1.65f; GLfloat y41=-.88f; GLfloat radius41 =.01f;
int triangleAmount41 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi41 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x41, y41); // center of circle
		for(a41 = 0; a41<= triangleAmount41;a41++) {
			glVertex2f(
		            x41+ (radius1 * cos(a41 *  twicePi41 / triangleAmount41)),
			    y41 + (radius41 * sin(a41 * twicePi41 / triangleAmount41))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-.65f);
glVertex2f(-1.6f,-.65f);
glVertex2f(-1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.65f,-.70f);
glVertex2f(-1.6f,-.75f);
glVertex2f(-1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.97f);
glVertex2f(-1.67f,-0.97f);
glVertex2f(-1.675f,-1.1f);
glVertex2f(-1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.66f,-0.97f);
glVertex2f(-1.63f,-0.97f);
glVertex2f(-1.635f,-1.1f);
glVertex2f(-1.66f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 2___________________*/

/*_______________Human 3___________________*
glPushMatrix();
glTranslatef(position2,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(-1.42f,-.74f);
glVertex2f(-1.5f,-.74f);
glVertex2f(-1.5f,-.98f);
glVertex2f(-1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.74f);
glVertex2f(-1.48f,-.74f);
glVertex2f(-1.48f,-.88f);
glVertex2f(-1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.45f,-.65f);
glVertex2f(-1.42f,-.65f);
glVertex2f(-1.43f,-.67f);
glEnd();

int a43;
 GLfloat x43=-1.45f; GLfloat y43=-.7f; GLfloat radius43 =.05f;
int triangleAmount43 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi43 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x43, y43); // center of circle
		for(a43 = 0; a43<= triangleAmount43;a43++) {
			glVertex2f(
		            x43+ (radius1 * cos(a43 *  twicePi43 / triangleAmount43)),
			    y43 + (radius43 * sin(a43 * twicePi43 / triangleAmount43))
			);
		}
	glEnd();

int a44;
 GLfloat x44=-1.45f; GLfloat y44=-.88f; GLfloat radius44 =.01f;
int triangleAmount44 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 102);
		glVertex2f(x44, y44); // center of circle
		for(a44 = 0; a44<= triangleAmount44;a44++) {
			glVertex2f(
		            x44+ (radius1 * cos(a44 *  twicePi44 / triangleAmount44)),
			    y44 + (radius44 * sin(a44 * twicePi44 / triangleAmount44))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-.65f);
glVertex2f(-1.4f,-.65f);
glVertex2f(-1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.45f,-.70f);
glVertex2f(-1.4f,-.75f);
glVertex2f(-1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.5f,-0.97f);
glVertex2f(-1.47f,-0.97f);
glVertex2f(-1.475f,-1.1f);
glVertex2f(-1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.46f,-0.97f);
glVertex2f(-1.43f,-0.97f);
glVertex2f(-1.435f,-1.1f);
glVertex2f(-1.46f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*
glPushMatrix();
glTranslatef(position1,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.3f,-.74f);
glVertex2f(-1.34f,-.98f);
glVertex2f(-1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.74f);
glVertex2f(-1.28f,-.74f);
glVertex2f(-1.28f,-.88f);
glVertex2f(-1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.25f,-.65f);
glVertex2f(-1.22f,-.65f);
glVertex2f(-1.23f,-.67f);
glEnd();

int a45;
 GLfloat x45=-1.25f; GLfloat y45=-.7f; GLfloat radius45 =.05f;
int triangleAmount45 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi45 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x45, y45); // center of circle
		for(a45 = 0; a45<= triangleAmount45;a45++) {
			glVertex2f(
		            x45+ (radius1 * cos(a45 *  twicePi45 / triangleAmount45)),
			    y45 + (radius45 * sin(a45 * twicePi45 / triangleAmount45))
			);
		}
	glEnd();

int a46;
 GLfloat x46=-1.25f; GLfloat y46=-.88f; GLfloat radius46 =.01f;
int triangleAmount46 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi46 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x46, y46); // center of circle
		for(a46 = 0; a46<= triangleAmount46;a46++) {
			glVertex2f(
		            x46+ (radius1 * cos(a46 *  twicePi46 / triangleAmount46)),
			    y46 + (radius46 * sin(a46 * twicePi46 / triangleAmount46))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-.65f);
glVertex2f(-1.4f,-.85f);
glVertex2f(-1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.25f,-.70f);
glVertex2f(-1.2f,-.75f);
glVertex2f(-1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.3f,-0.97f);
glVertex2f(-1.27f,-0.97f);
glVertex2f(-1.275f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.26f,-0.97f);
glVertex2f(-1.23f,-0.97f);
glVertex2f(-1.235f,-1.1f);
glVertex2f(-1.26f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*
glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-1.02f,-.74f);
glVertex2f(-1.1f,-.74f);
glVertex2f(-1.1f,-.98f);
glVertex2f(-1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.74f);
glVertex2f(-1.08f,-.74f);
glVertex2f(-1.08f,-.88f);
glVertex2f(-1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.05f,-.65f);
glVertex2f(-1.02f,-.65f);
glVertex2f(-1.03f,-.67f);
glEnd();

int a48;
 GLfloat x48=-1.05f; GLfloat y48=-.7f; GLfloat radius48 =.05f;
int triangleAmount48 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi48 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x48, y48); // center of circle
		for(a48 = 0; a48<= triangleAmount48;a48++) {
			glVertex2f(
		            x48+ (radius1 * cos(a48 *  twicePi48 / triangleAmount48)),
			    y48 + (radius48 * sin(a48 * twicePi48 / triangleAmount48))
			);
		}
	glEnd();

int a49;
 GLfloat x49=-1.05f; GLfloat y49=-.88f; GLfloat radius49 =.01f;
int triangleAmount49 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi49 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x49, y49); // center of circle
		for(a49 = 0; a49<= triangleAmount49;a49++) {
			glVertex2f(
		            x49+ (radius1 * cos(a49 *  twicePi49 / triangleAmount49)),
			    y49 + (radius49 * sin(a49 * twicePi49 / triangleAmount49))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-.65f);
glVertex2f(-1.0f,-.65f);
glVertex2f(-0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(-1.05f,-.70f);
glVertex2f(-1.0f,-.75f);
glVertex2f(-.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-0.97f);
glVertex2f(-1.07f,-0.97f);
glVertex2f(-1.075f,-1.1f);
glVertex2f(-1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-1.06f,-0.97f);
glVertex2f(-1.03f,-0.97f);
glVertex2f(-1.035f,-1.1f);
glVertex2f(-1.06f,-1.1f);
glEnd();

glPopMatrix();
/*_______________End Human 5___________________*/

//_______________Human___________________*
glPushMatrix();
glTranslatef(position41,0,0);

glLineWidth(4.0);
glBegin(GL_LINES); //VACCINE BOOTH(pink)
glColor3ub(0,0,0);
glVertex2f(1.85f,-.48f);
glVertex2f(1.85f,-.74f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.92f,-.48f);
glVertex2f(1.98f,-.54f);
glVertex2f(1.62f,-.54f);
glVertex2f(1.68f,-.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 255, 102);
glVertex2f(1.82f,-.74f);
glVertex2f(1.9f,-.74f);
glVertex2f(1.9f,-.98f);
glVertex2f(1.82f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.74f);
glVertex2f(1.88f,-.74f);
glVertex2f(1.88f,-.88f);
glVertex2f(1.85f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.85f,-.65f);
glVertex2f(1.82f,-.65f);
glVertex2f(1.83f,-.67f);
glEnd();

int a50;
 GLfloat x50=1.85f; GLfloat y50=-.7f; GLfloat radius50 =.05f;
int triangleAmount50 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi50 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x50, y50); // center of circle
		for(a50 = 0; a50<= triangleAmount50;a50++) {
			glVertex2f(
		            x50+ (radius1 * cos(a50 *  twicePi50 / triangleAmount50)),
			    y50 + (radius50 * sin(a50 * twicePi50 / triangleAmount50))
			);
		}
	glEnd();

int a51;
 GLfloat x51=1.85f; GLfloat y51=-.88f; GLfloat radius51 =.01f;
int triangleAmount51 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi51 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x51, y51); // center of circle
		for(a51 = 0; a51<= triangleAmount51;a51++) {
			glVertex2f(
		            x51+ (radius1 * cos(a51 *  twicePi51 / triangleAmount51)),
			    y51 + (radius51 * sin(a51 * twicePi51 / triangleAmount51))
			);
		}
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.90f,-.65f);
glVertex2f(1.8f,-.65f);
glVertex2f(1.79f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.85f,-.70f);
glVertex2f(1.8f,-.75f);
glVertex2f(1.79f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.9f,-0.97f);
glVertex2f(1.87f,-0.97f);
glVertex2f(1.875f,-1.1f);
glVertex2f(1.9f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.86f,-0.97f);
glVertex2f(1.83f,-0.97f);
glVertex2f(1.835f,-1.1f);
glVertex2f(1.86f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human___________________*/


/*_______________Human 2___________________*
glPushMatrix();
glTranslatef(position31,0,0);

glBegin(GL_QUADS);
glColor3ub(255, 26, 140);
glVertex2f(1.62f,-.74f);
glVertex2f(1.7f,-.74f);
glVertex2f(1.7f,-.98f);
glVertex2f(1.62f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.74f);
glVertex2f(1.68f,-.74f);
glVertex2f(1.68f,-.88f);
glVertex2f(1.65f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.65f,-.65f);
glVertex2f(1.62f,-.65f);
glVertex2f(1.63f,-.67f);
glEnd();

int a52;
 GLfloat x52=1.65f; GLfloat y52=-.7f; GLfloat radius52 =.05f;
int triangleAmount52 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi52 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x52, y52); // center of circle
		for(a52 = 0; a52<= triangleAmount52;a52++) {
			glVertex2f(
		            x52+ (radius1 * cos(a52 *  twicePi52 / triangleAmount52)),
			    y52 + (radius52 * sin(a52 * twicePi52 / triangleAmount52))
			);
		}
	glEnd();

int a53;
 GLfloat x53=1.65f; GLfloat y53=-.88f; GLfloat radius53 =.01f;
int triangleAmount53 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi53 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x53, y53); // center of circle
		for(a53 = 0; a53<= triangleAmount53;a53++) {
			glVertex2f(
		            x53+ (radius1 * cos(a53 *  twicePi53 / triangleAmount53)),
			    y53 + (radius53 * sin(a53 * twicePi53 / triangleAmount53))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.7f,-.65f);
glVertex2f(1.6f,-.65f);
glVertex2f(1.59f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.65f,-.70f);
glVertex2f(1.6f,-.75f);
glVertex2f(1.59f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.7f,-0.97f);
glVertex2f(1.67f,-0.97f);
glVertex2f(1.675f,-1.1f);
glVertex2f(1.7f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.66f,-0.97f);
glVertex2f(1.63f,-0.97f);
glVertex2f(1.635f,-1.1f);
glVertex2f(1.66f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 2___________________*/

/*_______________Human 3___________________*
glPushMatrix();
glTranslatef(position21,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 102, 255);
glVertex2f(1.42f,-.74f);
glVertex2f(1.5f,-.74f);
glVertex2f(1.5f,-.98f);
glVertex2f(1.42f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.74f);
glVertex2f(1.48f,-.74f);
glVertex2f(1.48f,-.88f);
glVertex2f(1.45f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.45f,-.65f);
glVertex2f(1.42f,-.65f);
glVertex2f(1.43f,-.67f);
glEnd();

int a54;
 GLfloat x54=1.45f; GLfloat y54=-.7f; GLfloat radius54 =.05f;
int triangleAmount54 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi54 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x54, y54); // center of circle
		for(a54 = 0; a54<= triangleAmount54;a54++) {
			glVertex2f(
		            x54+ (radius1 * cos(a54 *  twicePi54 / triangleAmount54)),
			    y54 + (radius54 * sin(a54 * twicePi54 / triangleAmount54))
			);
		}
	glEnd();

int a55;
 GLfloat x55=1.45f; GLfloat y55=-.88f; GLfloat radius55 =.01f;
int triangleAmount55 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi55 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x55, y55); // center of circle
		for(a55 = 0; a55<= triangleAmount55;a55++) {
			glVertex2f(
		            x55+ (radius1 * cos(a55 *  twicePi55 / triangleAmount55)),
			    y55 + (radius55 * sin(a55 * twicePi55 / triangleAmount55))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.5f,-.65f);
glVertex2f(1.4f,-.65f);
glVertex2f(1.39f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.45f,-.70f);
glVertex2f(1.4f,-.75f);
glVertex2f(1.39f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.5f,-0.97f);
glVertex2f(1.47f,-0.97f);
glVertex2f(1.475f,-1.1f);
glVertex2f(1.5f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.46f,-0.97f);
glVertex2f(1.43f,-0.97f);
glVertex2f(1.435f,-1.1f);
glVertex2f(1.46f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 3___________________*/


/*_______________Human 4 female___________________*

glPushMatrix();
glTranslatef(position11,0,0);

glBegin(GL_QUADS);
glColor3ub(0, 204, 102);
glVertex2f(1.25f,-.74f);
glVertex2f(1.3f,-.74f);
glVertex2f(1.34f,-.98f);
glVertex2f(1.18f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.74f);
glVertex2f(1.28f,-.74f);
glVertex2f(1.28f,-.88f);
glVertex2f(1.25f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.25f,-.65f);
glVertex2f(1.22f,-.65f);
glVertex2f(1.23f,-.67f);
glEnd();

int a56;
 GLfloat x56=1.25f; GLfloat y56=-.7f; GLfloat radius56 =.05f;
int triangleAmount56 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi56 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x56, y56); // center of circle
		for(a56 = 0; a56<= triangleAmount56;a56++) {
			glVertex2f(
		            x56+ (radius1 * cos(a56 *  twicePi56 / triangleAmount56)),
			    y56 + (radius56 * sin(a56 * twicePi56 / triangleAmount56))
			);
		}
	glEnd();

int a57;
 GLfloat x57=1.25f; GLfloat y57=-.88f; GLfloat radius57 =.01f;
int triangleAmount57 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi57 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x57, y57); // center of circle
		for(a57 = 0; a57<= triangleAmount57;a57++) {
			glVertex2f(
		            x57+ (radius1 * cos(a57 *  twicePi57 / triangleAmount57)),
			    y57 + (radius57 * sin(a57 * twicePi57 / triangleAmount57))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.3f,-.65f);
glVertex2f(1.4f,-.85f);
glVertex2f(1.22f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.25f,-.70f);
glVertex2f(1.2f,-.75f);
glVertex2f(1.19f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.3f,-0.97f);
glVertex2f(1.27f,-0.97f);
glVertex2f(1.275f,-1.1f);
glVertex2f(1.3f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.26f,-0.97f);
glVertex2f(1.23f,-0.97f);
glVertex2f(1.235f,-1.1f);
glVertex2f(1.26f,-1.1f);
glEnd();

glPopMatrix();

/*_______________End Human 4 female___________________*/

/*_______________Human 5___________________*/
/*glPushMatrix();
glTranslatef(position00,0,0);


glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(1.02f,-.74f);
glVertex2f(1.1f,-.74f);
glVertex2f(1.1f,-.98f);
glVertex2f(1.02f,-.98f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.74f);
glVertex2f(1.08f,-.74f);
glVertex2f(1.08f,-.88f);
glVertex2f(1.05f,-.88f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.05f,-.65f);
glVertex2f(1.02f,-.65f);
glVertex2f(1.03f,-.67f);
glEnd();

int a58;
 GLfloat x58=1.05f; GLfloat y58=-.7f; GLfloat radius58 =.05f;
int triangleAmount58 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi58 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x58, y58); // center of circle
		for(a58 = 0; a58<= triangleAmount58;a58++) {
			glVertex2f(
		            x58+ (radius1 * cos(a58 *  twicePi58 / triangleAmount58)),
			    y58 + (radius58 * sin(a58 * twicePi58 / triangleAmount58))
			);
		}
	glEnd();

int a59;
 GLfloat x59=1.05f; GLfloat y59=-.88f; GLfloat radius59 =.01f;
int triangleAmount59 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi59 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 204);
		glVertex2f(x59, y59); // center of circle
		for(a59 = 0; a59<= triangleAmount59;a59++) {
			glVertex2f(
		            x59+ (radius1 * cos(a59 *  twicePi59 / triangleAmount59)),
			    y59 + (radius59 * sin(a59 * twicePi59 / triangleAmount59))
			);
		}
	glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-.65f);
glVertex2f(1.0f,-.65f);
glVertex2f(0.99f,-.61f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(204, 255, 255);
glVertex2f(1.05f,-.70f);
glVertex2f(1.0f,-.75f);
glVertex2f(.99f,-.68f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.1f,-0.97f);
glVertex2f(1.07f,-0.97f);
glVertex2f(1.075f,-1.1f);
glVertex2f(1.1f,-1.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(1.06f,-0.97f);
glVertex2f(1.03f,-0.97f);
glVertex2f(1.035f,-1.1f);
glVertex2f(1.06f,-1.1f);
glEnd();

glPopMatrix();*/
/*_______________End Human 5___________________*/

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(-.71f,.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.71f,.48f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.71f,.48f);
glVertex2f(-.75f,.35f);
glEnd();

glBegin(GL_QUADS); //middle front
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.349f);
glVertex2f(.75f,.349f);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.35f);
glVertex2f(.75f,.35f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.2f);
glVertex2f(.75f,.349f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.349f);
glVertex2f(-.75f,.2f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(-.75f,.2f);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.15f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.75f,.19f);
glVertex2f(-.75f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-.6f,.19f);
glVertex2f(-.6f,-1.15f);
glEnd();

glBegin(GL_QUADS); //middle front piller
glColor3ub(230, 230, 230);
glVertex2f(.75f,.2f);
glVertex2f(.6f,.2f);
glVertex2f(.6f,-1.15f);
glVertex2f(.75f,-1.15f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.75f,.19f);
glVertex2f(.75f,-1.15f);
glEnd();
glBegin(GL_QUADS);//FRONT FOOR
glColor3ub(204, 230, 255);
glVertex2f(-.6f,.2f);
glVertex2f(-.6f,-1.155f);
glVertex2f(.6f,-1.155f);
glVertex2f(.6f,0.2f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.0f,.2f);
glVertex2f(0.0f,-1.155f);
glEnd();

glLineWidth(1.0);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(.6f,.19f);
glVertex2f(.6f,-1.15f);
glEnd();

/*------------------------------------------------Car----------------------------------------*/
glPushMatrix();
glTranslatef(position15,0,0);

glBegin(GL_QUADS); //car
glColor3ub(51, 102, 255);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.7f,-0.9f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.72f,-1.1f);
glVertex2f(-1.3f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.7f,-0.9f);
glVertex2f(-1.72f,-1.1f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.35f,-0.9f);
glVertex2f(-1.3f,-1.1f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(230, 0, 0);
glVertex2f(-1.2f,-1.1f);
glVertex2f(-1.8f,-1.1f);
glVertex2f(-1.85f,-1.4f);
glVertex2f(-1.15f,-1.4f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(-1.2f,-1.11f);
glVertex2f(-1.25f,-1.11f);
glVertex2f(-1.25f,-1.15f);
glVertex2f(-1.2f,-1.15f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(-1.45f,-0.9f);
glVertex2f(-1.45f,-1.4f);
glEnd();

int a16;
 GLfloat x16=-1.3f; GLfloat y16=-1.4f; GLfloat radius16 =.15f;
int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x16, y16); // center of circle
		for(a16 = 0; a16<= triangleAmount16;a16++) {
			glVertex2f(
		            x16+ (radius1 * cos(a16 *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(a16 * twicePi16 / triangleAmount16))
			);
		}
	glEnd();

int a17;
 GLfloat x17=-1.7f; GLfloat y17=-1.4f; GLfloat radius17 =.15f;
int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x17, y17); // center of circle
		for(a17 = 0; a17<= triangleAmount17;a17++) {
			glVertex2f(
		            x17+ (radius1 * cos(a17 *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(a17 * twicePi17 / triangleAmount17))
			);
		}
	glEnd();



glPopMatrix();

/*------------------------------------------------Car----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------*/
glPushMatrix();
glTranslatef(position12,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.0f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(1.1f,-1.1f);
glVertex2f(1.0f,-1.4f);
glVertex2f(1.0f,-1.6f);
glVertex2f(1.8f,-1.6f);
glVertex2f(1.8f,-1.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.2f,-1.0f);
glVertex2f(1.2f,-1.6f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.1f,-1.3f);
glVertex2f(1.1f,-1.6f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(1.1f,-1.12f);
glVertex2f(1.01f,-1.38f);
glVertex2f(1.2f,-1.38f);
glVertex2f(1.2f,-1.12f);
glEnd();

int a13;
 GLfloat x13=1.15f; GLfloat y13=-1.6f; GLfloat radius13 =.15f;
int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x13, y13); // center of circle
		for(a13 = 0; a13<= triangleAmount13;a13++) {
			glVertex2f(
		            x13+ (radius1 * cos(a13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(a13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

int a14;
 GLfloat x14=1.7f; GLfloat y14=-1.6f; GLfloat radius14 =.15f;
int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x14, y14); // center of circle
		for(a14 = 0; a14<= triangleAmount14;a14++) {
			glVertex2f(
		            x14+ (radius1 * cos(a14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(a14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();


int a15;
 GLfloat x15=1.45f; GLfloat y15=-1.2f; GLfloat radius15 =.1f;
int triangleAmount15 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x15, y15); // center of circle
		for(a15 = 0; a15<= triangleAmount15;a15++) {
			glVertex2f(
		            x15+ (radius1 * cos(a15 *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(a15 * twicePi15 / triangleAmount15))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.4f,-1.2f);
glVertex2f(1.5,-1.2f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(1.45f,-1.1f);
glVertex2f(1.45f,-1.3f);
glEnd();

glPopMatrix();

/*------------------------------------------------Ambulance----------------------------------------*/


/*------------------------------------------------Ambulance----------------------------------------*/
glPushMatrix();
glTranslatef(position14,0,0);

glBegin(GL_QUADS); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.05f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(242, 242, 242);
glVertex2f(-1.1f,-1.15f);
glVertex2f(-1.0f,-1.45f);
glVertex2f(-1.0f,-1.65f);
glVertex2f(-1.8f,-1.65f);
glVertex2f(-1.8f,-1.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.2f,-1.05f);
glVertex2f(-1.2f,-1.65f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-1.1f,-1.35f);
glVertex2f(-1.1f,-1.65f);
glEnd();

glBegin(GL_POLYGON); //ambulance
glColor3ub(0, 153, 255);
glVertex2f(-1.1f,-1.125f);
glVertex2f(-1.01f,-1.385f);
glVertex2f(-1.2f,-1.385f);
glVertex2f(-1.2f,-1.125f);
glEnd();

int a18;
 GLfloat x18=-1.15f; GLfloat y18=-1.65f; GLfloat radius18 =.15f;
int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x18, y18); // center of circle
		for(a18 = 0; a18<= triangleAmount18;a18++) {
			glVertex2f(
		            x18+ (radius1 * cos(a18 *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(a18 * twicePi18 / triangleAmount18))
			);
		}
	glEnd();

int a19;
 GLfloat x19=-1.7f; GLfloat y19=-1.65f; GLfloat radius19 =.15f;
int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x19, y19); // center of circle
		for(a19 = 0; a19<= triangleAmount19;a19++) {
			glVertex2f(
		            x19+ (radius1 * cos(a19 *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(a19 * twicePi19 / triangleAmount19))
			);
		}
	glEnd();


int a20;
 GLfloat x20=-1.45f; GLfloat y20=-1.25f; GLfloat radius20 =.1f;
int triangleAmount20 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(227, 25, 18);
		glVertex2f(x20, y20); // center of circle
		for(a20 = 0; a20<= triangleAmount20;a20++) {
			glVertex2f(
		            x20+ (radius1 * cos(a20 *  twicePi20 / triangleAmount20)),
			    y20 + (radius20 * sin(a20 * twicePi20 / triangleAmount20))
			);
		}
	glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.4f,-1.25f);
glVertex2f(-1.5,-1.25f);
glEnd();


	glLineWidth(3.0);
glBegin(GL_LINES); //ambulance-->SYMBOL
glColor3ub(255, 255, 255);
glVertex2f(-1.45f,-1.15f);
glVertex2f(-1.45f,-1.35f);
glEnd();

glPopMatrix();

/*------------------------------------------------Ambulance----------------------------------------*/

/*------------------------------------------------Car----------------------------------------*/
glPushMatrix();
glTranslatef(position13,0,0);


glBegin(GL_QUADS); //car
glColor3ub(0, 26, 0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.7f,-1.2f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.72f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.7f,-1.2f);
glVertex2f(1.72f,-1.4f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.35f,-1.2f);
glVertex2f(1.3f,-1.4f);
glEnd();


glBegin(GL_QUADS); //car
glColor3ub(255, 255, 0);
glVertex2f(1.2f,-1.4f);
glVertex2f(1.8f,-1.4f);
glVertex2f(1.85f,-1.7f);
glVertex2f(1.15f,-1.7f);
glEnd();

glBegin(GL_QUADS); //car
glColor3ub(255, 255, 255);
glVertex2f(1.2f,-1.59f);
glVertex2f(1.25f,-1.59f);
glVertex2f(1.25f,-1.63f);
glVertex2f(1.2f,-1.63f);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES); //car line
glColor3ub(0,0,0);
glVertex2f(1.45f,-1.2f);
glVertex2f(1.45f,-1.7f);
glEnd();

int a21;
 GLfloat x21=1.3f; GLfloat y21=-1.7f; GLfloat radius21 =.15f;
int triangleAmount21 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi21 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x21, y21); // center of circle
		for(a21 = 0; a21<= triangleAmount21;a21++) {
			glVertex2f(
		            x21+ (radius1 * cos(a21 *  twicePi21 / triangleAmount21)),
			    y21 + (radius21 * sin(a21 * twicePi21 / triangleAmount21))
			);
		}
	glEnd();

int a22;
 GLfloat x22=1.7f; GLfloat y22=-1.7f; GLfloat radius22 =.15f;
int triangleAmount22 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x22, y22); // center of circle
		for(a22 = 0; a22<= triangleAmount22;a22++) {
			glVertex2f(
		            x22+ (radius1 * cos(a22 *  twicePi22 / triangleAmount22)),
			    y22 + (radius22 * sin(a22 * twicePi22 / triangleAmount22))
			);
		}
	glEnd();
glPopMatrix();

//startrain
glPushMatrix();
glTranslatef(position699,0,0);

//leftrain
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,-1.4);
glVertex2f(-1.6f,-1.6f);
glEnd();


glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.9f,1.9);
glVertex2f(-1.8f,1.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.4f,1.6);
glVertex2f(-1.2f,1.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.2f,1.8);
glVertex2f(-1.f,1.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.f,.4);
glVertex2f(-.8f,.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,1.);
glVertex2f(-1.6f,.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,.6);
glVertex2f(-1.6f,.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,.2);
glVertex2f(-1.6f,0.f);
glEnd();
//minus-all
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,-1.);
glVertex2f(-1.6f,-1.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.6f,-.4);
glVertex2f(-1.4f,-.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.2f,-.2);
glVertex2f(-1.f,-.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.6f,-.2);
glVertex2f(-.4f,-.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,-1.);
glVertex2f(-1.6f,-1.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.4f,-1.6);
glVertex2f(-1.2f,-1.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.6f,-1.6);
glVertex2f(-.4f,-1.8f);
glEnd();

//right side
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.4f,-0.);
glVertex2f(1.6f,-.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.f,-.4);
glVertex2f(1.2f,-.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.6f,-.4);
glVertex2f(.8f,-.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.4f,-.2);
glVertex2f(.6f,-.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.2f,-.6);
glVertex2f(.4f,-.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(0.f,-1.);
glVertex2f(.2f,-1.2f);
glEnd();
//middle rain
   glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.1f,.2);
glVertex2f(.2f,.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.2f,.3);
glVertex2f(.3f,.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.3f,.4);
glVertex2f(.4f,.3f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.4f,.5);
glVertex2f(.5f,.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.5f,.6);
glVertex2f(.6f,.5f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.6f,.7);
glVertex2f(.7f,.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.7f,.8);
glVertex2f(.8f,.7f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.8f,.9);
glVertex2f(.9f,.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(.9f,1.);
glVertex2f(1.f,.9f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.1f,1.2);
glVertex2f(1.2f,1.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.1f,1.2);
glVertex2f(1.2f,1.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.2f,1.3);
glVertex2f(1.3f,1.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.3f,1.4);
glVertex2f(1.4f,1.3f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.4f,1.5);
glVertex2f(1.5f,1.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.6f,1.7);
glVertex2f(1.7f,1.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.6f,1.7);
glVertex2f(1.7f,1.6f);
glEnd();

glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.7f,1.8);
glVertex2f(1.8f,1.7f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(1.8f,1.9);
glVertex2f(1.9f,1.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(2.f,1.9);
glVertex2f(1.9f,2.f);
glEnd();


//minus
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.1f,-.2);
glVertex2f(-.2f,-.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.2f,-.3);
glVertex2f(-.3f,-.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.3f,-.4);
glVertex2f(-.4f,-.3f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.4f,-.5);
glVertex2f(-.5f,-.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.5f,-.6);
glVertex2f(-.6f,-.5f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.6f,-.7);
glVertex2f(-.7f,-.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.7f,-.8);
glVertex2f(-.8f,-.7f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.8f,-.9);
glVertex2f(-.9f,-.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-.9f,-1.);
glVertex2f(-1.f,-.9f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.1f,-1.2);
glVertex2f(-1.2f,-1.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.1f,-1.2);
glVertex2f(-1.2f,-1.1f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.2f,-1.3);
glVertex2f(-1.3f,-1.2f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.3f,-1.4);
glVertex2f(-1.4f,-1.3f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.4f,-1.5);
glVertex2f(-1.5f,-1.4f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.6f,-1.7);
glVertex2f(-1.7f,-1.6f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.6f,-1.7);
glVertex2f(-1.7f,-1.6f);
glEnd();

glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.7f,-1.8);
glVertex2f(-1.8f,-1.7f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,204);
glVertex2f(-1.8f,-1.9);
glVertex2f(-1.9f,-1.8f);
glEnd();
glLineWidth(.8);  //Rain test
glBegin(GL_LINES);
glColor3ub(175,195,205);
glVertex2f(-2.f,-1.9);
glVertex2f(-1.9f,-2.f);
glEnd();

glPopMatrix();

glFlush();
}
void sound()
{

    PlaySound("1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound("2.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void sound3()
{

    PlaySound("3.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'c':

    speed111=0.025f;
    break;
case 's':
    speed111=0.0f;
    break;
case 'v':
    speed222=0.035f;
    break;
case 'b':
    speed222=0.0f;
    break;
    case 'd':


   glutDisplayFunc(day);
   glutPostRedisplay();
   sound ();

    break;
case 'n':
   glutDisplayFunc(night);
glutPostRedisplay();
sound2 ();
    break;
    case 'r':
   glutDisplayFunc(rain);
glutPostRedisplay();
sound3 ();
    break;
glutPostRedisplay();
	}}



int main(int argc, char** argv) {
    cout<<"Covid Hospital\nPress d For Morning view\nPress n For Night View\nPress r For raining view\nPress c for Starting Covid test\nPress s for Stoping Covid test Patients\nPress v for Starting Vaccination \nPress b for Stoping Vaccination Patients";
	glutInit(&argc, argv);
	glutCreateWindow("Project");
	glutInitWindowSize(720,1280);
	glutInitWindowPosition(50, 50);
    screen();
	glutDisplayFunc(day);

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update101, 0);
    glutTimerFunc(100, update100, 0);
    glutTimerFunc(100, update111, 0);
    glutTimerFunc(100, update222, 0);
    glutTimerFunc(100, update12, 0);
    glutTimerFunc(100, update13, 0);
    glutTimerFunc(100, update14, 0);
    glutTimerFunc(100, update15, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, update00, 0);
    glutTimerFunc(100, update11, 0);
    glutTimerFunc(100, update21, 0);
    glutTimerFunc(100, update31, 0);
    glutTimerFunc(100, update41, 0);
    glutTimerFunc(100, update699, 0);
	glutMainLoop();
	return 0;
}
