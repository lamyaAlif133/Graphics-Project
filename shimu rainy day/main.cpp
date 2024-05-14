/*
    Color Codes:
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glColor3f(0.0f, 0.0f, 0.0f); //Black

    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glColor3f(0.8f, 0.8f, 0.0f);//type yellow
    glColor3f(0.6f, 1.0f, 1.0f); // Light Sky

    glColor3f(0.6f, 0.6f, 0.5f);//Ash
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glColor3f(0.1f, 0.0f, 0.0f);//Brown
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glColor3f(1.0f, 0.0f, 1.0f);//Purple
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate

    glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    glColor3f(0.1f, 0.1f, 0.0f);//Bronze
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glColor3f(0.5f, 0.5f, 0.5f);//grey


    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glColor3f(0.1f, 0.0f, 0.1f);//Dark Purple
    glColor3f(0.0f, 0.1f, 0.1f);//Dark blue
    glColor3f(0.0f, 0.1f, 0.0f);//Forest Green

*/
#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include<cstdio>
#include<time.h>
#include <cstdlib>
#include <ctime>

# define PI 3.14159265358979323846
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080
#define NUM_RAINDROPS 1000

int i;
float radius9 =0.10f;
int triangleAmount = 100; //# of lines used to draw circle
GLfloat twicePi = 2.0f * PI;

///For cloud 1
GLfloat position = 0.0f;
GLfloat speed = 0.01f;

///For cloud 2
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.015f;

///for Boat 1
GLfloat position9 = 0.0f;
GLfloat speed9 = 0.01f;


void cloud1();
void cloud2();
void boat1();


float raindrops[NUM_RAINDROPS][2]; // Array to store positions of raindrops

void initGL() {
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Light blue background
}

///********************************************Drawing Cloud 1*******************************************///
void cloud1()
{

	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

        //circle1
        GLfloat x1=-0.5f; GLfloat y1=0.90f; GLfloat radius1 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x1, y1); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
                            y1 + (radius1 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle2
        GLfloat x2=-0.5f; GLfloat y2=0.85f; GLfloat radius2 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x2, y2); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
                            y2 + (radius2 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
//circle3
        GLfloat x3=-0.45f; GLfloat y3=0.90f; GLfloat radius3 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x3, y3); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
                            y3 + (radius3 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle4
        GLfloat x4=-0.45f; GLfloat y4=0.85f; GLfloat radius4 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x4, y4); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x4 + (radius4 * cos(i *  twicePi / triangleAmount)),
                            y4 + (radius4 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle5
        GLfloat x5=-0.55f; GLfloat y5=0.87f; GLfloat radius5 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x5, y5); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x5 + (radius5 * cos(i *  twicePi / triangleAmount)),
                            y5 + (radius5 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle6
        GLfloat x6=-0.42f; GLfloat y6=0.87f; GLfloat radius6 =-0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x6, y6); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x6 + (radius6 * cos(i *  twicePi / triangleAmount)),
                            y6 + (radius6 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        glPopMatrix();

}

///****************************************Drawing Cloud 2***************************************///
void cloud2()
{
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

        //circle12
        GLfloat x12=0.95f; GLfloat y12=0.90f; GLfloat radius12 =0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x12, y12); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x12 + (radius12 * cos(i *  twicePi / triangleAmount)),
                            y12 + (radius12 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle13
        GLfloat x13=0.90f; GLfloat y13=0.90f; GLfloat radius13 =0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x13, y13); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x13 + (radius13 * cos(i *  twicePi / triangleAmount)),
                            y13 + (radius13 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle14
        GLfloat x14=0.87f; GLfloat y14=0.88f; GLfloat radius14 =0.04f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x14, y14); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x14 + (radius14 * cos(i *  twicePi / triangleAmount)),
                            y14 + (radius14 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle15
         GLfloat x15=0.92f; GLfloat y15=0.88f; GLfloat radius15 =0.05f;
        glColor3f(0.5f, 0.5f, 0.5f); // Gray
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x15, y15); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x15 + (radius15 * cos(i *  twicePi / triangleAmount)),
                            y15 + (radius15 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
   glPopMatrix();
}

///*******************************************Boat-1 Drawing***********************************///
void boat1(){
    glPushMatrix();
    glTranslatef(position9,0.0f, 0.0f);


        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);//black-base of the boat-2
        glVertex2f(0.50f,-0.60f);
        glVertex2f(0.45f,-0.55f);
        glVertex2f(0.85f,-0.55f);
        glVertex2f(0.80f,-0.60f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(0.6f,0.3f,0.3f);//hood-1 of the boat-2
        glVertex2f(0.65f,-0.55f);
        glVertex2f(0.60f,-0.45f);
        glVertex2f(0.72f,-0.45f);
        glVertex2f(0.77f,-0.55f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(0.8f,0.4f,0.3f );//hood-2 of the boat-2
        glVertex2f(0.65f,-0.55f);
        glVertex2f(0.60f,-0.45f);
        glVertex2f(0.56f,-0.55f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);//stick of boat-2
        glVertex2f(0.555f,-0.55f);
        glVertex2f(0.555f,-0.25f);
        glVertex2f(0.56f,-0.25f);
        glVertex2f(0.56f,-0.55f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3f(0.8f,0.8f,0.7f);//paal
        glVertex2f(0.555f,-0.25f);
        glVertex2f(0.45f,-0.50f);
        glVertex2f(0.54f,-0.50f);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);//rope-1
        glVertex2f(0.54f,-0.50f);
        glVertex2f(0.555f,-0.55f);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);//rope-2
        glVertex2f(0.45f,-0.50f);
        glVertex2f(0.555f,-0.55f);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);//rope-3
        glVertex2f(0.56f,-0.25f);
        glVertex2f(0.85f,-0.55f);
        glEnd();

    glPopMatrix();

}

/// move cloud1
void update(int value)
{
    if(position <-1.0)
        position = 2.0f;
    position -= speed;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

///move cloud 2
void update2(int value)
{
    if(position2 <-2.0)
        position2 = 2.0f;
    position2 -= speed2;

	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}

///move boat1
void update9(int value)
{
    if(position9 >=2.0)
        position9 = -2.0f;
    position9 += speed9;

	glutPostRedisplay();
	glutTimerFunc(100, update9, 0);
}




void displayDay_view() {
    glClear(GL_COLOR_BUFFER_BIT);


    ///*******************************************Drawing River***********************************///
    glBegin(GL_QUADS);  // These vertices form a closed polygon
	glColor3f(0.2f, 0.3f, 0.4f); // Muddy Gray-Blue
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.48f);
	glVertex2f(-1.0f, 0.45f);
	glEnd();


	///*******************************************Drawing Sky***********************************///
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
	glColor3f(0.3f, 0.5f, 0.7f); // Rainy Sky Shade
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.00f);
	glVertex2f(-1.0f, 0.00f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); // White (Lightning Color)
	// Main Bolt
	glVertex2f(0.0f, 0.0f); // Starting point
	glVertex2f(0.1f, 0.2f); // Endpoint 1
	glVertex2f(0.1f, 0.2f); // Starting point
	glVertex2f(-0.05f, 0.35f); // Endpoint 2
	glVertex2f(-0.05f, 0.35f); // Starting point
	glVertex2f(0.05f, 0.5f); // Endpoint 3
	glVertex2f(0.05f, 0.5f); // Starting point
	glVertex2f(-0.05f, 0.65f); // Endpoint 4
	glVertex2f(-0.05f, 0.65f); // Starting point
	glVertex2f(0.1f, 0.8f); // Endpoint 5
	glVertex2f(0.1f, 0.8f); // Starting point
	glVertex2f(0.0f, 1.0f); // Endpoint 6
	// Branches
	glVertex2f(0.1f, 0.2f); // Starting point
	glVertex2f(0.12f, 0.18f); // Endpoint 7
	glVertex2f(-0.05f, 0.35f); // Starting point
	glVertex2f(-0.07f, 0.33f); // Endpoint 8
	glVertex2f(0.05f, 0.5f); // Starting point
	glVertex2f(0.07f, 0.5f); // Endpoint 9
	glVertex2f(-0.05f, 0.65f); // Starting point
	glVertex2f(-0.08f, 0.63f); // Endpoint 10
	glVertex2f(0.1f, 0.8f); // Starting point
	glVertex2f(0.12f, 0.78f); // Endpoint 11
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); // White (Lightning Color)
	// Main Bolt
	glVertex2f(-0.5f, 0.0f); // Starting point
	glVertex2f(-0.6f, 0.2f); // Endpoint 1
	glVertex2f(-0.6f, 0.2f); // Starting point
	glVertex2f(-0.45f, 0.35f); // Endpoint 2
	glVertex2f(-0.45f, 0.35f); // Starting point
	glVertex2f(-0.55f, 0.5f); // Endpoint 3
	glVertex2f(-0.55f, 0.5f); // Starting point
	glVertex2f(-0.45f, 0.65f); // Endpoint 4
	glVertex2f(-0.45f, 0.65f); // Starting point
	glVertex2f(-0.6f, 0.8f); // Endpoint 5
	glVertex2f(-0.6f, 0.8f); // Starting point
	glVertex2f(-0.5f, 1.0f); // Endpoint 6
	// Branches
	glVertex2f(-0.6f, 0.2f); // Starting point
	glVertex2f(-0.62f, 0.18f); // Endpoint 7
	glVertex2f(-0.45f, 0.35f); // Starting point
	glVertex2f(-0.47f, 0.33f); // Endpoint 8
	glVertex2f(-0.55f, 0.5f); // Starting point
	glVertex2f(-0.57f, 0.5f); // Endpoint 9
	glVertex2f(-0.45f, 0.65f); // Starting point
	glVertex2f(-0.48f, 0.63f); // Endpoint 10
	glVertex2f(-0.6f, 0.8f); // Starting point
	glVertex2f(-0.62f, 0.78f); // Endpoint 11
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); // White (Lightning Color)
	// Main Bolt
	glVertex2f(0.5f, 0.0f); // Starting point
	glVertex2f(0.6f, 0.2f); // Endpoint 1
	glVertex2f(0.6f, 0.2f); // Starting point
	glVertex2f(0.45f, 0.35f); // Endpoint 2
	glVertex2f(0.45f, 0.35f); // Starting point
	glVertex2f(0.55f, 0.5f); // Endpoint 3
	glVertex2f(0.55f, 0.5f); // Starting point
	glVertex2f(0.45f, 0.65f); // Endpoint 4
	glVertex2f(0.45f, 0.65f); // Starting point
	glVertex2f(0.6f, 0.8f); // Endpoint 5
	glVertex2f(0.6f, 0.8f); // Starting point
	glVertex2f(0.5f, 1.0f); // Endpoint 6
	// Branches
	glVertex2f(0.6f, 0.2f); // Starting point
	glVertex2f(0.62f, 0.18f); // Endpoint 7
	glVertex2f(0.45f, 0.35f); // Starting point
	glVertex2f(0.47f, 0.33f); // Endpoint 8
	glVertex2f(0.55f, 0.5f); // Starting point
	glVertex2f(0.57f, 0.5f); // Endpoint 9
	glVertex2f(0.45f, 0.65f); // Starting point
	glVertex2f(0.48f, 0.63f); // Endpoint 10
	glVertex2f(0.6f, 0.8f); // Starting point
	glVertex2f(0.62f, 0.78f); // Endpoint 11
	// Additional Branches
	glVertex2f(0.6f, 0.2f); // Starting point
	glVertex2f(0.63f, 0.22f); // Endpoint 12
	glVertex2f(0.45f, 0.35f); // Starting point
	glVertex2f(0.43f, 0.37f); // Endpoint 13
	glVertex2f(0.55f, 0.5f); // Starting point
	glVertex2f(0.58f, 0.52f); // Endpoint 14
	glVertex2f(0.45f, 0.65f); // Starting point
	glVertex2f(0.47f, 0.67f); // Endpoint 15
	glVertex2f(0.6f, 0.8f); // Starting point
	glVertex2f(0.63f, 0.82f); // Endpoint 16
glEnd();



	///calling cloud1
        cloud1();

    ///cloud2 calling
        cloud2();


    ///**********************************************Drawing Hill****************************************///

	glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f); // Light Gray
    glVertex2f(-.69f, 0.00f);
    glVertex2f(-0.33f, 0.40f);
    glVertex2f(0.10f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6f, 0.6f, 0.6f); // Light Gray
    glVertex2f(0.19f, 0.00f);
    glVertex2f(0.40f, 0.35f);
    glVertex2f(0.72f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2f, 0.8f, 0.4f); // Bright Green
    glVertex2f(-1.0f, 0.28f);
    glVertex2f(-0.70f, 0.60f);
    glVertex2f(-0.20f, 0.00f);
    glVertex2f(-1.00f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f); // Gray
    glVertex2f(0.30f, 0.00f);
    glVertex2f(0.70f, 0.55f);
    glVertex2f(1.00f, 0.30f);
    glVertex2f(1.00f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.6f, 0.3f); // Medium Green
    glVertex2f(-.45f, 0.00f);
    glVertex2f(0.00f, 0.70f);
    glVertex2f(0.50f, 0.00f);
    glEnd();



    ///***************************************Drawing Grassy Ground*****************************///
    glBegin(GL_QUADS);  // These vertices form a closed polygon

	glColor3f(0.0f, 0.7f, 0.3f); //Green
	glVertex2f(-1.0f, -0.50f);
	glVertex2f(1.0f, -0.50f);
	glVertex2f(1.0f, 0.00f);
	glVertex2f(-1.0f, 0.00f);
	glEnd();


	///*****************************************Drawing Tree*********************************///

	//Drawing Log Shape
	glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate

	glVertex2f(-0.43f, -0.30f);
	glVertex2f(-0.46f, -0.37f);
	glVertex2f(-0.46f, -0.31f);
	glVertex2f(-0.55f, -0.35f);
	glVertex2f(-0.49f, -0.30f);
	glVertex2f(-0.47f, -0.26f);
	glVertex2f(-0.46f, -0.20f);
	glVertex2f(-0.48f, -0.10f);
	glVertex2f(-0.50f, -0.05f);
	glVertex2f(-0.46f, -0.09f);
	glVertex2f(-0.46f, -0.05f);
	glVertex2f(-0.44f, -0.05f);
	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.40f, -0.05f);
	glVertex2f(-0.38f, -0.05f);
	glVertex2f(-0.39f, -0.10f);
	glVertex2f(-0.39f, -0.15f);
	glVertex2f(-0.38f, -0.20f);
	glVertex2f(-0.38f, -0.26f);
	glVertex2f(-0.37f, -0.30f);
	glVertex2f(-0.32f, -0.35f);
	glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.38f, -0.37f);

	glEnd();


	///Drawing tree leaf
    //circle 7 middle

    GLfloat x27=-0.44f; GLfloat y27=0.14f;

    glColor3f(0.0f, 0.4f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x27, y27); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x27 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y27+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 1

    GLfloat x20=-0.62f; GLfloat y20=0.10f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x20, y20); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x20 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y20+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 2

    GLfloat x21=-0.51f; GLfloat y21=0.23f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x21, y21); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x21 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y21+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 3

    GLfloat x22=-0.36f; GLfloat y22=0.2f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x22, y22); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x22 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y22+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	//circle 4

    GLfloat x24=-0.24f; GLfloat y24=0.11f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x24, y24); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x24 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y24+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 5

    GLfloat x25=-0.36f; GLfloat y25=0.01f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x25, y25); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x25 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y25+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 6

    GLfloat x26=-0.53f; GLfloat y26=0.02f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x26, y26); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x26 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y26+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	///***************************************river border**************************************///
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
	glColor3f(0.5f, 0.5f, 0.5f);//grey
	glVertex2f(-1.0f, -0.45f);
	glVertex2f(1.0f, -0.45f);
	glVertex2f(1.0f, -0.50f);
	glVertex2f(-1.0f, -0.50f);
	glEnd();



	///*******************************************Drawing River***********************************///
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, -0.50f);
	glVertex2f(1.0f, -0.50f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();











    ///**************************************Drawing House****************************************///
     //roofH1
     glBegin(GL_QUADS);
     glColor3ub(61, 61, 92);
     glVertex2f(0.6f, 0.35f);
     glVertex2f(1.0f, 0.35f);
     glVertex2f(1.0f, 0.15f);
     glVertex2f(0.48f, 0.15f);
    glEnd();

    //bor1
    glBegin(GL_QUADS);
     glColor3ub(20, 20, 31);
      glVertex2f(0.62f, 0.39f);
     glVertex2f(1.0f, 0.39f);
     glVertex2f(1.0f, 0.35f);

      glVertex2f(0.6f, 0.35f);

    glEnd();

    //bor2
    glBegin(GL_QUADS);
     glColor3ub(20, 20, 31);
     glVertex2f(0.60f, 0.39f);
    glVertex2f(0.62f, 0.39f);;
     glVertex2f(0.46f, 0.15f);
    glVertex2f(0.51f, 0.15f);

    glEnd();

    //bor3
     glBegin(GL_QUADS);
     glColor3ub(20, 20, 31);
     glVertex2f(0.49f, 0.15f);
     glVertex2f(1.0f, 0.15f);
     glVertex2f(1.0f, 0.13f);
     glVertex2f(0.50f, 0.13f);

    glEnd();

    //bodyH1
     glBegin(GL_QUADS);
     glColor3ub(255, 230, 230);
    glVertex2f(0.50f, 0.13f);
     glVertex2f(1.0f, 0.13f);
     glVertex2f(1.0f, -0.15f);
     glVertex2f(0.50f, -0.15f);
    glEnd();

    //bodyBorH1
     glBegin(GL_QUADS);
     glColor3ub(128, 64, 0);
   glVertex2f(0.50f, -0.15f);
   glVertex2f(1.0f, -0.15f);

     glVertex2f(1.0f, -0.19f);
     glVertex2f(0.47f, -0.19f);
    glEnd();

    //middleBorH1
     glBegin(GL_QUADS);
     glColor3ub(255, 179, 102);
    glVertex2f(0.50f, 0.04f);
     glVertex2f(1.0f, 0.04f);
     glVertex2f(1.0f, 0.0f);
     glVertex2f(0.50f, 0.0f);
    glEnd();

    //verBor1
    glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
    glVertex2f(0.60f, 0.13f);
     glVertex2f(0.62f, 0.13f);
     glVertex2f(0.62f, 0.04f);
     glVertex2f(0.60f, 0.04f);
    glEnd();

    //verBor2
    glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
    glVertex2f(0.60f, 0.0f);
     glVertex2f(0.62f, 0.0f);
     glVertex2f(0.62f, -0.15f);
     glVertex2f(0.60f, -0.15f);
    glEnd();


    //verBor1
    glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
    glVertex2f(0.90f, 0.13f);
     glVertex2f(0.92f, 0.13f);
     glVertex2f(0.92f, 0.04f);
     glVertex2f(0.90f, 0.04f);
    glEnd();

    //verBor2
    glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
    glVertex2f(0.90f, 0.0f);
     glVertex2f(0.92f, 0.0f);
     glVertex2f(0.92f, -0.15f);
     glVertex2f(0.90f, -0.15f);
    glEnd();


    ///Drawing House

	//Drawing Overall Shape
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.8f, 0.3f);//Hay Yellow
	glVertex2f(-0.90f, -0.15f);
	glVertex2f(-0.65f, -0.15f);
	glVertex2f(-0.59f, -0.24f);
	glVertex2f(-0.60f, -0.24f);
	glVertex2f(-0.60f, -0.37f);
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.95f, -0.40f);
	glVertex2f(-0.95f, -0.24f);
	glVertex2f(-0.98f, -0.24f);
	glEnd();


	//drawing roof
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.1f);
    glVertex2f(-0.73f, -0.24f);
    glVertex2f(-0.65f, -0.15f);
    glVertex2f(-0.59f, -0.24f);
	glEnd();

	//drawing Door Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.5f);//Ash
	glVertex2f(-0.72f, -.38f);
	glVertex2f(-0.72f, -.24f);
	glVertex2f(-0.60f, -.24f);
	glVertex2f(-0.60f, -.36f);
	glEnd();

	//drawing Front Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 0.8f);//Off White
    glVertex2f(-0.95f, -0.24f);
    glVertex2f(-0.72f, -0.24f);
    glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.95f, -0.38f);
	glEnd();

	//Drawing Window 1
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.92f, -.28f);
	glVertex2f(-0.92f, -.33f);
	glVertex2f(-0.87f, -.33f);
	glVertex2f(-0.87f, -.28f);
	glEnd();

	//Drawing Window 2
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.80f, -.28f);
	glVertex2f(-0.80f, -.33f);
	glVertex2f(-0.75f, -.33f);
	glVertex2f(-0.75f, -.28f);
	glEnd();

	//Drawing Door
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.68f, -.28f);
	glVertex2f(-0.68f, -.37f);
	glVertex2f(-0.64f, -.37f);
	glVertex2f(-0.64f, -.28f);
	glEnd();

	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.5f, 0.5f, 0.5f);//grey
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.97f, -0.40f);
	glVertex2f(-0.97f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
	glEnd();

	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f); //Black
	glVertex2f(-0.72f, -0.38f);
	glVertex2f(-0.58f, -0.35f);
    glVertex2f(-0.58f, -0.37f);
	glVertex2f(-0.72f, -0.40f);
	glEnd();

	boat1();


    ///********************************* Update and draw raindrops************************
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_LINES);
    for (int i = 0; i < NUM_RAINDROPS; ++i) {
        raindrops[i][1] -= 0.01f; // Move raindrop downwards
        glVertex2f(raindrops[i][0], raindrops[i][1]);
        glVertex2f(raindrops[i][0], raindrops[i][1] - 0.02f); // Length of raindrop
        // Reset raindrop if it goes below the screen
        if (raindrops[i][1] < -1.0f) {
            raindrops[i][0] = (float)(rand() % (WINDOW_WIDTH * 2)) / WINDOW_WIDTH - 1.0f; // Random x-coordinate
            raindrops[i][1] = 1.0f; // Start from top of screen
        }
    }
    glEnd();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int value) {
    glutPostRedisplay(); // Request display update
    glutTimerFunc(16, timer, 0); // 60 fps
}

int main(int argc, char **argv) {
    srand(time(NULL));

    // Initialize raindrop positions
    for (int i = 0; i < NUM_RAINDROPS; ++i) {
        raindrops[i][0] = (float)(rand() % (WINDOW_WIDTH * 2)) / WINDOW_WIDTH - 1.0f; // Random x-coordinate
        raindrops[i][1] = (float)(rand() % (WINDOW_HEIGHT * 2)) / WINDOW_HEIGHT - 1.0f; // Random y-coordinate
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("Rainfall Animation");
    glutDisplayFunc(displayDay_view);

    glutTimerFunc(100, update, 0);      //moving cloud 1
	glutTimerFunc(100, update2, 0);     //moving cloud 2
	glutTimerFunc(100, update9, 0);     //moving boat 1

    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0); // Start timer
    initGL();
    glutMainLoop();
    return 0;
}
