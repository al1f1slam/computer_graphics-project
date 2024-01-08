//Key Interactions:
//"S" to stop cars
//"W" to move cars

//"A" to move boat 1 to left.
//"Z" to move boat 1 to left.
//"Q" to move boat 1 to left.

//"D" to move boat 1 to Right.
//"C" to move boat 1 to Right.
//"E" to move boat 1 to Right.




#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

float _moveU1 = -1.00f;
float speedU1 = 0.005f;

float _moveU2 = -1.50f;
float speedU2 = 0.0055f;

//float _moveU3 = -1.75f;
float _moveU4 = -2.00f;
float speedU4 = 0.0055f;

float _moveU5 = -2.50f;
float speedU5 = 0.005f;

float _moveU6 = -3.00f;
float speedU6 = 0.0055f;


float _moveD1 = 1.00f;
float speedD1 = 0.0055f;

float _moveD2 = 1.50f;
float speedD2 = 0.005f;

//float _moveD3 = 1.75f;
float _moveD4 = 2.00f;
float speedD4 = 0.005f;

float _moveD5 = 2.50f;
float speedD5 = 0.0055f;

float _moveD6 = 3.00f;
float speedD6 = 0.005f;

float _moveT = -1.00f;

float _moveb1 = 0.00f;
float speedb1 = 0.002f;

float _moveb2 = -0.5f;
float speedb2 = 0.002f;

float _moveb3 = -0.7f;
float speedb3 = 0.002f;

float _angle1 = 0.0f;

void initGL() {     // Set "clearing" or background color
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);   // Window Color
}


void boat1(){    //boat1

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glTranslatef(_moveb1,-0.5f,0.0f);

    glColor3ub(255,51,51); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.075f, 0.05f);
        glVertex2f(-0.065f, 0.025f);
        glVertex2f(-0.045f, 0.0f);
        glVertex2f(0.045f, 0.0f);
        glVertex2f(0.065f, 0.025f);
        glVertex2f(0.075f, 0.05f);
    glEnd();

    glColor3ub(0,0,0); //stick
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.175f);
        glVertex2f(-0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.175f);
    glEnd();

    glColor3ub(0,51,51);
    glBegin(GL_POLYGON);
        glVertex2f(0.0025f, 0.16f);
        glVertex2f(0.03f, 0.1f);
        glVertex2f(0.03f, 0.06f);
        glVertex2f(0.0025f, 0.06f);
    glEnd();

    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.16f);
        glVertex2f(-0.03f, 0.125f);
        glVertex2f(-0.03f, 0.06f);
        glVertex2f(-0.0025f, 0.06f);
    glEnd();

}

void boat2(){    //boat2

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glTranslatef(_moveb2,-0.4f,0.0f);

    glColor3ub(255,51,51); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.075f, 0.05f);
        glVertex2f(-0.065f, 0.025f);
        glVertex2f(-0.045f, 0.0f);
        glVertex2f(0.045f, 0.0f);
        glVertex2f(0.065f, 0.025f);
        glVertex2f(0.075f, 0.05f);
    glEnd();

    glColor3ub(0,0,0); //stick
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.175f);
        glVertex2f(-0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.175f);
    glEnd();

    glColor3ub(0,51,51);
    glBegin(GL_POLYGON);
        glVertex2f(0.0025f, 0.16f);
        glVertex2f(0.03f, 0.1f);
        glVertex2f(0.03f, 0.06f);
        glVertex2f(0.0025f, 0.06f);
    glEnd();

    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.16f);
        glVertex2f(-0.03f, 0.125f);
        glVertex2f(-0.03f, 0.06f);
        glVertex2f(-0.0025f, 0.06f);
    glEnd();

}

void boat3(){    //boat3

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glTranslatef(_moveb3,-0.75f,0.0f);

    glColor3ub(255,51,51); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.075f, 0.05f);
        glVertex2f(-0.065f, 0.025f);
        glVertex2f(-0.045f, 0.0f);
        glVertex2f(0.045f, 0.0f);
        glVertex2f(0.065f, 0.025f);
        glVertex2f(0.075f, 0.05f);
    glEnd();

    glColor3ub(0,0,0); //stick
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.175f);
        glVertex2f(-0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.05f);
        glVertex2f(0.0025f, 0.175f);
    glEnd();

    glColor3ub(0,51,51);
    glBegin(GL_POLYGON);
        glVertex2f(0.0025f, 0.16f);
        glVertex2f(0.03f, 0.1f);
        glVertex2f(0.03f, 0.06f);
        glVertex2f(0.0025f, 0.06f);
    glEnd();

    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.0025f, 0.16f);
        glVertex2f(-0.03f, 0.125f);
        glVertex2f(-0.03f, 0.06f);
        glVertex2f(-0.0025f, 0.06f);
    glEnd();

}


void windmill(){    //Windmill

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glTranslatef(-0.06, 0.15, 0.0); //////////////////WM1
    glColor3ub(255, 102, 102); //base
    glBegin(GL_POLYGON);
        glVertex2f(-0.80f, 0.275f);
        glVertex2f(-0.80f, 0.25f);
        glVertex2f(-0.65f, 0.25f);
        glVertex2f(-0.65f, 0.275f);

    glEnd();

    glColor3ub(255, 255, 255); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.775f, 0.5f);
        glVertex2f(-0.79f, 0.275f);
        glVertex2f(-0.66f, 0.275f);
        glVertex2f(-0.675f, 0.5f);

    glEnd();

    glColor3ub(51, 153, 255); //door
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.35f);
        glVertex2f(-0.71f, 0.275f);
        glVertex2f(-0.74f, 0.275f);
        glVertex2f(-0.74f, 0.35f);

    glEnd();

    glColor3ub(51, 153, 255); //window
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.45f);
        glVertex2f(-0.71f, 0.4f);
        glVertex2f(-0.74f, 0.4f);
        glVertex2f(-0.74f, 0.45f);

    glEnd();

    glColor3ub(00, 102, 204); //head
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.79f, 0.5f);
        glVertex2f(-0.725f, 0.63f);
        glVertex2f(-0.66f, 0.5f);

    glEnd();

glTranslatef(-0.725f, 0.55f, 0.0f); //propeller
glRotatef(_angle1, 0.0f, 0.0f, 1.0f);

    glColor3ub(204, 229, 255);//wing1
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing2
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glRotatef(90,0.0f, 0.0f, 1.0f);
    glColor3ub(204, 229, 255); //wing3
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing4
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(255, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
glEnd();

}


void windmill2(){    //Windmill2

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glTranslatef(0.4, 0.0, 0.0); //////////////////WM2
    glColor3ub(255, 102, 102); //base
    glBegin(GL_POLYGON);
        glVertex2f(-0.80f, 0.275f);
        glVertex2f(-0.80f, 0.25f);
        glVertex2f(-0.65f, 0.25f);
        glVertex2f(-0.65f, 0.275f);

    glEnd();

    glColor3ub(255, 255, 255); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.775f, 0.5f);
        glVertex2f(-0.79f, 0.275f);
        glVertex2f(-0.66f, 0.275f);
        glVertex2f(-0.675f, 0.5f);

    glEnd();

    glColor3ub(51, 153, 255); //door
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.35f);
        glVertex2f(-0.71f, 0.275f);
        glVertex2f(-0.74f, 0.275f);
        glVertex2f(-0.74f, 0.35f);

    glEnd();

    glColor3ub(51, 153, 255); //window
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.45f);
        glVertex2f(-0.71f, 0.4f);
        glVertex2f(-0.74f, 0.4f);
        glVertex2f(-0.74f, 0.45f);

    glEnd();

    glColor3ub(00, 102, 204); //head
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.79f, 0.5f);
        glVertex2f(-0.725f, 0.63f);
        glVertex2f(-0.66f, 0.5f);

    glEnd();

glTranslatef(-0.725f, 0.55f, 0.0f); //propeller
glRotatef(_angle1, 0.0f, 0.0f, 1.0f);

    glColor3ub(204, 229, 255);//wing1
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing2
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glRotatef(90,0.0f, 0.0f, 1.0f);
    glColor3ub(204, 229, 255); //wing3
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing4
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(255, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
glEnd();

}


void windmill3(){    //Windmill3

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glTranslatef(0.9, 0.24, 0.0); //////////////////WM3
    glColor3ub(255, 102, 102); //base
    glBegin(GL_POLYGON);
        glVertex2f(-0.80f, 0.275f);
        glVertex2f(-0.80f, 0.25f);
        glVertex2f(-0.65f, 0.25f);
        glVertex2f(-0.65f, 0.275f);

    glEnd();

    glColor3ub(255, 255, 255); //body
    glBegin(GL_POLYGON);
        glVertex2f(-0.775f, 0.5f);
        glVertex2f(-0.79f, 0.275f);
        glVertex2f(-0.66f, 0.275f);
        glVertex2f(-0.675f, 0.5f);

    glEnd();

    glColor3ub(51, 153, 255); //door
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.35f);
        glVertex2f(-0.71f, 0.275f);
        glVertex2f(-0.74f, 0.275f);
        glVertex2f(-0.74f, 0.35f);

    glEnd();

    glColor3ub(51, 153, 255); //window
    glBegin(GL_POLYGON);
        glVertex2f(-0.71f, 0.45f);
        glVertex2f(-0.71f, 0.4f);
        glVertex2f(-0.74f, 0.4f);
        glVertex2f(-0.74f, 0.45f);

    glEnd();

    glColor3ub(00, 102, 204); //head
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.79f, 0.5f);
        glVertex2f(-0.725f, 0.63f);
        glVertex2f(-0.66f, 0.5f);

    glEnd();

glTranslatef(-0.725f, 0.55f, 0.0f); //propeller
glRotatef(_angle1, 0.0f, 0.0f, 1.0f);

    glColor3ub(204, 229, 255);//wing1
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing2
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glRotatef(90,0.0f, 0.0f, 1.0f);
    glColor3ub(204, 229, 255); //wing3
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(0.20f, 0.00f);
        glVertex2f(0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.05f);
        glVertex2f(0.03f, 0.01f);
        glVertex2f(0.20f, 0.01f);
        glVertex2f(0.20f, 0.05f);
    glEnd();

    glColor3ub(204, 229, 255); //wing4
    glBegin(GL_POLYGON);
        glVertex2f(0.00f, 0.01f);
        glVertex2f(0.00f, 0.00f);
        glVertex2f(-0.20f, 0.00f);
        glVertex2f(-0.20f, 0.01f);
    glEnd();

    glColor3ub(255, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03f, -0.04f);
        glVertex2f(-0.03f, -0.00f);
        glVertex2f(-0.20f, -0.00f);
        glVertex2f(-0.20f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(255, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
glEnd();

}




void rail_lineground(){    //rail line ground

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(210,180,140);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.15f);
        glVertex2f(-1.0f, -0.05f);
        glVertex2f(1.0f, -0.05f);
        glVertex2f(1.0f, 0.15f);

    glEnd();

}

void rail_line(){    //rail line

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(51, 51, 51);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(-1.0f, -0.015f);
        glVertex2f(1.0f, -0.015f);
        glVertex2f(1.0f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.115f);
        glVertex2f(-1.0f, 0.1f);
        glVertex2f(1.0f, 0.1f);
        glVertex2f(1.0f, 0.115f);

    glEnd();

}


void railbar(){    //railbar

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();

    glPushMatrix();
    glTranslatef(0.05f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.1f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.15f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.2f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.25f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.3f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.35f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.4f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.45f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.5f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.55f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.6f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.65f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.7f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.75f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.8f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.85f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.9f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(0.95f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.0f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.05f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.1f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.15f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.2f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.25f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.3f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.35f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.4f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.91f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glPushMatrix();
    glTranslatef(1.96f,0.0, 0.0f);
    glColor3ub(100,69,19);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0f, 0.125f);
        glVertex2f(-1.0f, -0.025f);
        glVertex2f(-0.99f, -0.025f);
        glVertex2f(-0.99f, 0.125f);

    glEnd();
    glPopMatrix();
    glutSwapBuffers();

}



void ground(){    //ground

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(0, 102, 0);
    glBegin(GL_POLYGON);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.00f, -0.2f);
        glVertex2f(0.40f, -0.2f);
        glVertex2f(0.40f, -1.0f);
        glVertex2f(1.0f, -1.0f);



    glEnd();

}


void river(){    //River

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(84, 164, 222);
    glBegin(GL_POLYGON);
        glVertex2f(-1.00f, -0.2f);
        glVertex2f(-1.00f, -1.0f);
        glVertex2f(0.4f, -1.0f);
        glVertex2f(0.4f, -0.2f);
    glEnd();

    glColor3ub(84, 164, 222);
    glBegin(GL_POLYGON);
        glVertex2f(0.925f, -0.2f);
        glVertex2f(0.925f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.2f);
    glEnd();

}


void road(){    //Road

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

    glColor3ub(100,100,100); //main road
    glBegin(GL_QUADS);
        glVertex2f(0.45f, 1.0f);
        glVertex2f(0.45f, -1.0f);
        glVertex2f(0.9f, -1.0f);
        glVertex2f(0.9f, 1.0f);

    glEnd();

    glColor3d(1.0f, 1.0f, 1.0f); //Left side bar
    glBegin(GL_QUADS);
        glVertex2f(0.46f, 1.0f);
        glVertex2f(0.46f, -1.0f);
        glVertex2f(0.475f, -1.0f);
        glVertex2f(0.475f, 1.0f);

    glEnd();

    glColor3d(1.0f, 1.0f, 1.0f); //Right middle bar
    glBegin(GL_QUADS);
        glVertex2f(0.875f, 1.0f);
        glVertex2f(0.875f, -1.0f);
        glVertex2f(0.89f, -1.0f);
        glVertex2f(0.89f, 1.0f);

    glEnd();


    glColor3d(1.0f, 1.0f, 0.0f); //Left middle bar
    glBegin(GL_QUADS);
        glVertex2f(0.658f, 1.0f);
        glVertex2f(0.658f, -1.0f);
        glVertex2f(0.67f, -1.0f);
        glVertex2f(0.67f, 1.0f);

    glEnd();

    glColor3d(1.0f, 1.0f, 0.0f); //Right middle bar
    glBegin(GL_QUADS);
        glVertex2f(0.68f, 1.0f);
        glVertex2f(0.68f, -1.0f);
        glVertex2f(0.692f, -1.0f);
        glVertex2f(0.692f, 1.0f);

    glEnd();

    glColor3ub(100,100,100); //bar remover
    glBegin(GL_POLYGON);
        glVertex2f(0.45f, 0.15f);
        glVertex2f(0.45f, -0.05f);
        glVertex2f(0.9f, -0.05f);
        glVertex2f(0.9f, 0.15f);

    glEnd();


}


void train(){    //train

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(_moveT, 0.0f, 0.0f);

    glColor3d(0.0f,0.0f,0.0f); ////engine
    glBegin(GL_POLYGON);

        glVertex2f(-0.06f, 0.15f);
        glVertex2f(-0.06f, 0.025f);
        glVertex2f(0.06f, 0.025f);
        glVertex2f(0.06f, 0.15f);
    glEnd();

    glColor3d(1.0f,0.0f,0.0f); ////engine cover1
    glBegin(GL_POLYGON);

        glVertex2f(0.06f, 0.15f);
        glVertex2f(0.06f, 0.06f);
        glVertex2f(0.062f, 0.06f);
        glVertex2f(0.062f, 0.15f);
    glEnd();

    glColor3d(1.0f,1.0f,0.0f); ////engine cover2
    glBegin(GL_POLYGON);

        glVertex2f(0.062f, 0.068f);
        glVertex2f(0.062f, 0.135f);
        glVertex2f(0.067f, 0.135f);
        glVertex2f(0.067f, 0.068f);
    glEnd();

    glColor3d(0.0f,0.0f,0.0f); /////Cabin
    glBegin(GL_POLYGON);
        glVertex2f(-0.15f, 0.2f);
        glVertex2f(-0.15f, 0.025f);
        glVertex2f(-0.05f, 0.025f);
        glVertex2f(-0.05f, 0.2f);
    glEnd();

    glColor3d(0.0f,0.0f,0.0f); /////Exhaust
    glBegin(GL_POLYGON);
        glVertex2f(0.03f, 0.2f);
        glVertex2f(0.03f, 0.15f);
        glVertex2f(-0.0f, 0.15f);
        glVertex2f(-0.0f, 0.2f);
    glEnd();

    glColor3d(1.0f,1.0f,0.0f); /////door
    glBegin(GL_POLYGON);
        glVertex2f(-0.145f, 0.175f);
        glVertex2f(-0.145f, 0.028f);
        glVertex2f(-0.105f, 0.028f);
        glVertex2f(-0.105f, 0.175f);
    glEnd();

    glColor3d(1.0f,1.0f,0.0f); /////window
    glBegin(GL_POLYGON);
        glVertex2f(-0.1f, 0.175f);
        glVertex2f(-0.1f, 0.115f);
        glVertex2f(-0.06f, 0.115f);
        glVertex2f(-0.06f, 0.175f);
    glEnd();

    glColor3d(1.0f,0.0f,0.0f); ////roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.155f, 0.225f);
        glVertex2f(-0.155f, 0.2f);
        glVertex2f(-0.045f, 0.2f);
        glVertex2f(-0.045f, 0.225f);
    glEnd();

    glColor3d(0.0f,0.0f,0.0f); ////bumper
    glBegin(GL_POLYGON);
        glVertex2f(0.055f, 0.06f);
        glVertex2f(0.055f, 0.0075f);
        glVertex2f(0.085f, 0.0075f);
        glVertex2f(0.06f, 0.06f);
    glEnd();

    glColor3d(1.0f,0.0f,0.0f); ////floor
    glBegin(GL_POLYGON);
        glVertex2f(-0.155f, 0.06f);
        glVertex2f(-0.155f, 0.0175f);
        glVertex2f(0.055f, 0.0175f);
        glVertex2f(0.055f, 0.06f);
    glEnd();

    glTranslatef(0.028f, 0.0175f, 0.0f); //// Wheel 1
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.045f, 0.0f, 0.0f); //// Wheel 2
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.1f, 0.005f, 0.0f); //// Wheel 3
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.023;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


glTranslatef(-0.1f, -0.025f, 0.0f);////////boggey1

glColor3d(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.15f, 0.145f);
        glVertex2f(-0.15f, 0.0175f);
        glVertex2f(0.05f, 0.0175f);
        glVertex2f(0.05f, 0.145f);
    glEnd();

    glColor3d(1.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.155f, 0.045f);
        glVertex2f(-0.155f, 0.0175f);
        glVertex2f(0.055f, 0.0175f);
        glVertex2f(0.055f, 0.045f);
    glEnd();

    glTranslatef(0.028f, 0.0175f, 0.0f); //// Wheel 1
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.045f, 0.0f, 0.0f); //// Wheel 2
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.065f, 0.0025f, 0.0f); //// Wheel 3
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glTranslatef(-0.045f, 0.0f, 0.0f); //// Whee4
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

glTranslatef(-0.09f, -0.025f, 0.0f);////////boggey2

glColor3d(0.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.15f, 0.145f);
        glVertex2f(-0.15f, 0.0175f);
        glVertex2f(0.05f, 0.0175f);
        glVertex2f(0.05f, 0.145f);
    glEnd();

    glColor3d(1.0f,0.0f,0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.155f, 0.045f);
        glVertex2f(-0.155f, 0.0175f);
        glVertex2f(0.055f, 0.0175f);
        glVertex2f(0.055f, 0.045f);
    glEnd();

    glTranslatef(0.028f, 0.0175f, 0.0f); //// Wheel 1
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.045f, 0.0f, 0.0f); //// Wheel 2
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


    glTranslatef(-0.065f, 0.0025f, 0.0f); //// Wheel 3
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glTranslatef(-0.05f, 0.0f, 0.0f); //// Whee4
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(51, 51, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(100,100,100);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.013;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

glEnd();


glPopMatrix();
glutSwapBuffers();


}


void carU1(){    //Upward Car1

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.515f,_moveU1, 0.0f);



        glColor3d(1.0,0.0,0.0); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(1.0,0.0,0.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}


void carU2(){    //Upward Car2

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.615f,_moveU2, 0.0f);



        glColor3d(1.0,1.0,0.0); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(1.0,1.0,0.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}


/*void carU3(){    //Upward Car3

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.515f,_moveU3, 0.0f);



        glColor3d(1.0,0.0,1.0); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(1.0,0.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}*/

void carU4(){    //Upward Car4

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.615f,_moveU4, 0.0f);



        glColor3d(0.0,1.0,1.0); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(0.0,1.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}

void carU5(){    //Upward Car5

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.515f,_moveU5, 0.0f);



        glColor3d(0.0,0.0,1.0); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(0.0,0.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}

void carU6(){    //Upward Car6

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef(0.615f,_moveU6, 0.0f);



        glColor3ub(000,000,000); //body
        glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(1.0f,1.0f,1.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(1.0f,1.0f,1.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3ub(000,000,000);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();

}


void carD1(){  //Downward Car1

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.82f,_moveD1, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3ub(000,000,000); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(1.0f,1.0f,1.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(1.0f,1.0f,1.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3ub(000,000,000);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}


void carD2(){  //Downward Car2

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.735f,_moveD2, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3d(0.0,0.0,1.0); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(0.0,0.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}

/*void carD3(){  //Downward Car3

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.82f,_moveD3, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3ub(000,000,000); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(1.0f,1.0f,1.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(1.0f,1.0f,1.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(1.0f,1.0f,1.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3ub(000,000,000);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}*/

void carD4(){  //Downward Car4

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.735f,_moveD4, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3d(0.0,1.0,1.0); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(0.0,1.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}

void carD5(){  //Downward Car5

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.82f,_moveD5, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3d(1.0,0.0,1.0); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(1.0,0.0,1.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}

void carD6(){  //Downward Car6

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);

glPushMatrix();
glTranslatef( 0.735f,_moveD6, 0.0f);
glRotatef(180,0.0f, 0.0f, 1.0f);


    glColor3d(1.0,1.0,0.0); //body
    glBegin(GL_POLYGON);

        glVertex2f(-0.01f, 0.1f);
        glVertex2f(-0.03f, 0.09f);
        glVertex2f(-0.035f, 0.07f);

        glVertex2f(-0.035f, -0.09f);
        glVertex2f(-0.02f, -0.1f);

        glVertex2f(0.02f, -0.1f);
        glVertex2f(0.035f, -0.09f);

        glVertex2f(0.035f, 0.07f);
        glVertex2f(0.03f, 0.09f);
        glVertex2f(0.01f, 0.1f);


    glEnd();

     glColor3d(0.0f,0.0f,0.0f);// front glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.005f, 0.055f);
        glVertex2f(-0.02f, 0.05f);
        glVertex2f(-0.03f, 0.045f);
        glVertex2f(-0.022f, 0.02f);

        glVertex2f(0.022f, 0.02f);
        glVertex2f(0.03f, 0.045f);
        glVertex2f(0.02f, 0.05f);
        glVertex2f(0.005f, 0.055f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 1
    glBegin(GL_POLYGON);
        glVertex2f(0.025f, -0.02f);
        glVertex2f(0.025f, -0.055f);
        glVertex2f(0.0325f, -0.075f);
        glVertex2f(0.0325f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//Right glass 2
    glBegin(GL_POLYGON);

        glVertex2f(0.0325f, 0.0375f);
        glVertex2f(0.025f, 0.0175f);
        glVertex2f(0.025f, -0.015f);
        glVertex2f(0.0325f, -0.0125f);

    glEnd();



    glColor3d(0.0f,0.0f,0.0f);//left glass 1
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, -0.02f);
        glVertex2f(-0.0325f, -0.075f);
        glVertex2f(-0.025f, -0.055f);
        glVertex2f(-0.025f, -0.02f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);//left glass 2
    glBegin(GL_POLYGON);
        glVertex2f(-0.0325f, 0.0375f);
        glVertex2f(-0.0325f, -0.0125f);
        glVertex2f(-0.025f, -0.015f);
        glVertex2f(-0.025f, 0.0175f);

    glEnd();

    glColor3d(0.0f,0.0f,0.0f);// rear glass
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f, -0.06f);
        glVertex2f(-0.03f, -0.08f);
        glVertex2f(0.03f, -0.08f);
        glVertex2f(0.02f, -0.06f);

    glEnd();

    glColor3d(1.0,1.0,0.0);//roof
    glBegin(GL_POLYGON);
        glVertex2f(-0.025f, 0.02f);
        glVertex2f(-0.025f, -0.06f);
        glVertex2f(0.025f, -0.06f);
        glVertex2f(0.025f, 0.02f);

    glEnd();

gluOrtho2D(-120,120,-60,60);
glPopMatrix();
glutSwapBuffers();


}


void drawScene() {

glClear(GL_COLOR_BUFFER_BIT);

ground();
windmill();
windmill2();
windmill3();
river();
rail_lineground();
railbar();
road();
rail_line();


carU1();
carU2();
//carU3();
carU4();
carU5();
carU6();

carD1();
carD2();
//carD3();
carD4();
carD5();
carD6();
train();

boat2();
boat1();
boat3();

glFlush();

}




void updateU1(int value) {
_moveU1 += 0.00;
if(_moveU1 > 1.2)
{
_moveU1 = -1.2;
}
_moveU1 += speedU1;
glutPostRedisplay();

 glutTimerFunc(1, updateU1, 0);
}

void updateU2(int value) {
_moveU2 += 0.00;
if(_moveU2 > 1.2)
{
_moveU2 = -1.2;
}
_moveU2 += speedU2;
glutPostRedisplay();

 glutTimerFunc(1, updateU2, 0);
}

/*void updateU3(int value) {
_moveU3 += 0.005;
if(_moveU3 > 1.2)
{
_moveU3 = -1.2;
}

glutPostRedisplay();

 glutTimerFunc(1, updateU3, 0);
}*/

void updateU4(int value) {
_moveU4 += 0.00;
if(_moveU4 > 1.2)
{
_moveU4 = -1.2;
}
_moveU4 += speedU4;
glutPostRedisplay();

 glutTimerFunc(1, updateU4, 0);
}

void updateU5(int value) {
_moveU5 += 0.00;
if(_moveU5 > 1.2)
{
_moveU5 = -1.2;
}
_moveU5 += speedU5;
glutPostRedisplay();

 glutTimerFunc(1, updateU5, 0);
}

void updateU6(int value) {
_moveU6 += 0.00;
if(_moveU6 > 1.2)
{
_moveU6 = -1.2;
}
_moveU6 += speedU6;
glutPostRedisplay();

 glutTimerFunc(1, updateU6, 0);
}

void updateD1(int value) {
_moveD1 -= 0.00;
if(_moveD1 < -1.2)
{
_moveD1 = 1.2;
}
_moveD1 += -speedD1;
glutPostRedisplay();

 glutTimerFunc(1, updateD1, 0);
}

void updateD2(int value) {
_moveD2 -= 0.00;
if(_moveD2 < -1.2)
{
_moveD2 = 1.2;
}
_moveD2 += -speedD2;
glutPostRedisplay();

 glutTimerFunc(1, updateD2, 0);
}

/*void updateD3(int value) {
_moveD3 -= 0.0055;
if(_moveD3 < -1.2)
{
_moveD3 = 1.2;
}
glutPostRedisplay();

 glutTimerFunc(1, updateD3, 0);
}*/

void updateD4(int value) {
_moveD4 -= 0.00;
if(_moveD4 < -1.2)
{
_moveD4 = 1.2;
}
_moveD4 += -speedD4;
glutPostRedisplay();

 glutTimerFunc(1, updateD4, 0);
}

void updateD5(int value) {
_moveD5 -= 0.00;
if(_moveD5 < -1.2)
{
_moveD5 = 1.2;
}
_moveD5 += -speedD5;
glutPostRedisplay();

 glutTimerFunc(1, updateD5, 0);
}

void updateD6(int value) {
_moveD6 -= 0.00;
if(_moveD6 < -1.2)
{
_moveD6 = 1.2;
}
_moveD6 += -speedD6;
glutPostRedisplay();

 glutTimerFunc(1, updateD6, 0);
}


void updateT(int value) {
_moveT += 0.005;
if(_moveT > 3.0)
{
_moveT = -2.0;
}

glutPostRedisplay();

 glutTimerFunc(1, updateT, 0);
}

void updateb1(int value) {
_moveb1 += 0.00;
if(_moveb1 > 0.25)
{
_moveb1 = 0.25;
}

else if(_moveb1 < -0.7)
{
_moveb1 = -0.7;
}
_moveb1 += speedb1;
glutPostRedisplay();

 glutTimerFunc(20, updateb1, 0);
}

void updateb2(int value) {
_moveb2 += 0.00;
if(_moveb2 > -0.2)
{
_moveb2 = -0.2;
}

else if(_moveb2 < -0.8)
{
_moveb2 = -0.8;
}
_moveb2 += speedb2;
glutPostRedisplay();

 glutTimerFunc(20, updateb2, 0);
}

void updateb3(int value) {
_moveb3 += 0.00;
if(_moveb3 > -0.35)
{
_moveb3 = -0.35;
}

else if(_moveb3 < -0.9)
{
_moveb3 = -0.9;
}
_moveb3 += speedb3;
glutPostRedisplay();

 glutTimerFunc(20, updateb3, 0);
}

void updatew(int value) {

    _angle1-=2.0f;
    if(_angle1 < 360.0)
    {
        _angle1 +=360;
    }
	glutPostRedisplay();

	glutTimerFunc(80, updatew, 0);
}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':

    if(_moveU1 < -0.05f)
    {
        speedU1 = 0.0f;
    }

    if(_moveU2 < -0.05f)
    {
        speedU2 = 0.0f;
    }

    if(_moveU4 < -0.05f)
    {
        speedU4 = 0.0f;
    }

    if(_moveU5 < -0.05f)
    {
        speedU5 = 0.0f;
    }

    if(_moveU6 < -0.05f)
    {
        speedU6 = 0.0f;
    }


    if(_moveD1 > 0.15f)
    {
        speedD1 = 0.0f;
    }

    if(_moveD2 > 0.15f)
    {
        speedD2 = 0.0f;
    }

    if(_moveD4 > 0.15f)
    {
        speedD4 = 0.0f;
    }

    if(_moveD5 > 0.15f)
    {
        speedD5 = 0.0f;
    }

    if(_moveD6 > 0.15f)
    {
        speedD6 = 0.0f;
    }

    break;
case 'w':
    speedU1 = 0.005;
    speedU2 = 0.0055;
    speedU4 = 0.0055;
    speedU5 = 0.005;
    speedU6 = 0.0055;

    speedD1 = 0.0055;
    speedD2 = 0.0055;
    speedD4 = 0.0055;
    speedD5 = 0.0055;
    speedD6 = 0.0055;
    break;

    case 'a':
    speedb1 = -0.002;
    break;
    case 'd':
    speedb1 = 0.002;
    break;

    case 'c':
    speedb2 = 0.002;
    break;
    case 'z':
    speedb2 = -0.002;
    break;

    case 'q':
    speedb3 = -0.002;
    break;
    case 'e':
    speedb3 = 0.002;
    break;
glutPostRedisplay();
	}
}

int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitWindowSize(1920, 1080); // Initialize GLUT
glutCreateWindow("Final_Project");
initGL();
glutDisplayFunc(drawScene);

glutTimerFunc(1, updateU1, 0);
glutTimerFunc(1, updateU2, 0);
//glutTimerFunc(1, updateU3, 0);
glutTimerFunc(1, updateU4, 0);
glutTimerFunc(1, updateU5, 0);
glutTimerFunc(1, updateU6, 0);

glutTimerFunc(1, updateD1, 0);
glutTimerFunc(1, updateD2, 0);
//glutTimerFunc(1, updateD3, 0);
glutTimerFunc(1, updateD4, 0);
glutTimerFunc(1, updateD5, 0);
glutTimerFunc(1, updateD6, 0);

glutTimerFunc(1, updateb1, 0);
glutTimerFunc(1, updateb2, 0);
glutTimerFunc(1, updateb3, 0);

glutTimerFunc(1, updateT, 0);
glutTimerFunc(80, updatew, 0);

glutKeyboardFunc(handleKeypress);
glutMainLoop();
return 0;

}
