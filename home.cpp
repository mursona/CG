#include <windows.h>
#include <GL/glut.h>
void initGL() {
   glClearColor(0.0, 0.0, 0.0, 1.0);
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);


glColor3f(1.0, 0.5, 0.0);
glBegin(GL_POLYGON);
		glVertex2f (-0.3, 0.6);
        glVertex2f (-0.6, 0.6);
        glVertex2f (-0.6, 0.9);
        glVertex2f (-0.3, 0.9);
        glEnd();

//part2-chair
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
		glVertex2f (-0.3, 0.6);
        glVertex2f (-0.6, 0.6);
        glVertex2f (-0.7, 0.4);
        glVertex2f (-0.4, 0.4);
        glEnd();


//chair-piller-1
glColor3f(0.0, 0.9, 0.9);
glBegin(GL_POLYGON);
		glVertex2f (-0.33, 0.55);
        glVertex2f (-0.3, 0.6);
        glVertex2f (-0.3, 0.45);
        glVertex2f (-0.33, 0.45);
        glEnd();

//table
glColor3f(0.9, 0.9, 0.9);
		glBegin(GL_POLYGON);
		glVertex2f (-0.9, 0.45);
        glVertex2f (-0.85, 0.1);
        glVertex2f (-0.1, 0.1);
        glVertex2f (-0.2, 0.45);
        glEnd();

//table-piller-1
glColor3f(0.0, 0.9, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f (-0.85, 0.1);
        glVertex2f (-0.80, 0.1);
        glVertex2f (-0.80, -0.1);
        glVertex2f (-0.85, -0.1);
        glEnd();

//table-piller-2
glColor3f(0.0, 0.9, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f (-0.1, 0.1);
        glVertex2f (-0.15, 0.1);
        glVertex2f (-0.15, -0.1);
        glVertex2f (-0.1, -0.1);
        glEnd();

//table-piller-3
glColor3f(0.0, 0.9, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f (-0.9, 0.45);
        glVertex2f (-0.88, 0.35);
        glVertex2f (-0.9, 0.1);
        glVertex2f (-0.95, 0.1);
        glEnd();


//part1
glColor3f(0.0, 0.99, 0.3);

		glBegin(GL_POLYGON);
		glVertex2f (0.1, 0.1);
        glVertex2f (0.4, 0.1);
        glVertex2f (0.4, 0.5);
        glVertex2f (0.1, 0.5);
        glEnd();

//window
glColor3f(0.5, 0.5, 0.8);

		glBegin(GL_POLYGON);
		glVertex2f (0.18, 0.37);
        glVertex2f (0.3, 0.37);
        glVertex2f (0.3, 0.25);
        glVertex2f (0.18, 0.25);
        glEnd();

//grill-1
glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POLYGON);
		glVertex2f (0.21, 0.37);
        glVertex2f (0.22, 0.37);
        glVertex2f (0.22, 0.25);
        glVertex2f (0.21, 0.25);
        glEnd();

//grill-2
glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POLYGON);
		glVertex2f (0.24, 0.37);
        glVertex2f (0.256, 0.37);
        glVertex2f (0.256, 0.25);
        glVertex2f (0.24, 0.25);
        glEnd();

//grill-3
glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POLYGON);
		glVertex2f (0.27, 0.37);
        glVertex2f (0.277, 0.37);
        glVertex2f (0.277, 0.25);
        glVertex2f (0.27, 0.25);
        glEnd();

//part2
glColor3f(1.0, 1.0, 0.0);

		glBegin(GL_POLYGON);
		glVertex2f (0.4, 0.1);
        glVertex2f (0.8, 0.1);
        glVertex2f (0.8, 0.5);
        glVertex2f (0.4, 0.5);
        glEnd();

//siri
glColor3f(1.0, 0.0, 0.0);

		glBegin(GL_POLYGON);
		glVertex2f (0.45, 0.1);
        glVertex2f (0.7, 0.1);
        glVertex2f (0.7, -0.0);
        glVertex2f (0.45, -0.0);
        glEnd();

//door
glColor3f(0.5, 0.5, 0.8);

		glBegin(GL_POLYGON);
		glVertex2f (0.65, 0.1);
        glVertex2f (0.5, 0.1);
        glVertex2f (0.5, 0.4);
        glVertex2f (0.65, 0.4);
        glEnd();
//door grill-1
glColor3f(0.0, 0.99, 0.3);
		glBegin(GL_POLYGON);
		glVertex2f (0.56, 0.1);
        glVertex2f (0.59, 0.1);
        glVertex2f (0.59, 0.4);
        glVertex2f (0.56, 0.4);
        glEnd();

//door grill-2
glColor3f(0.0, 0.99, 0.3);
		glBegin(GL_POLYGON);
		glVertex2f (0.65, 0.23);
        glVertex2f (0.5, 0.23);
        glVertex2f (0.5, 0.25);
        glVertex2f (0.65, 0.25);
        glEnd();

//traingle
glColor3f(1.0,0.0,0.0);

		glBegin(GL_POLYGON);
		glVertex2f (-0.01, 0.5);
        glVertex2f (0.4, 0.5);
        glVertex2f (0.25, 0.75);
        glEnd();

//part3
glColor3f(1.0, 0.5, 0.0);

		glBegin(GL_POLYGON);
		glVertex2f (0.4, 0.5);
        glVertex2f (0.9, 0.5);
        glVertex2f (0.7, 0.75);
        glVertex2f (0.25, 0.75);
        glEnd();

//hexagonal-2d
 glBegin(GL_POLYGON);
      glColor3f(0.0, 0.5, 1.0);
      glVertex2f(-0.4, -0.2);
      glVertex2f(-0.6, -0.2);
      glVertex2f(-0.7, -0.4);
      glVertex2f(-0.6, -0.6);
      glVertex2f(-0.4, -0.6);
      glVertex2f(-0.3, -0.4);
   glEnd();
//hexagonal-3d
glPushMatrix();
glRotatef(-30.0, 0.0, -0.1,1.0);
 glBegin(GL_POLYGON);
      glColor3f(1.0, 0.5, 0.1);
      glVertex3f(0.4, -0.2, -0.1);
      glVertex3f(0.6, -0.2, 0.1);
      glVertex3f(0.7, -0.4, -0.1);
      glVertex3f(0.6, -0.6, 0.1);
      glVertex3f(0.4, -0.6, -0.1);
      glVertex3f(0.3, -0.4, 0.1);
   glEnd();
    glPopMatrix();

//margin-1
glColor3f(0.0, 0.9, 0.9);
		glBegin(GL_POLYGON);
		glVertex2f (0.0, 2.0);
        glVertex2f (0.02, -1.0);
        glVertex2f (0.02, 2.0);
        glVertex2f (0.0, -1.0);
        glEnd();
//margin-2
glColor3f(0.0, 0.9, 0.9);
		glBegin(GL_POLYGON);
		glVertex2f (-2.0, -0.1);
        glVertex2f (-2.0, -0.13);
        glVertex2f (2.0, -0.13);
        glVertex2f (2.0, -0.1);
        glEnd();
//margin-3
glColor3f(0.0, 0.9, 0.9);
		glBegin(GL_POLYGON);
		glVertex2f (0.0, -0.1);
        glVertex2f (0.02, -2.0);
        glVertex2f (0.02, -0.1);
        glVertex2f (0.0, -2.0);
        glEnd();


   glFlush();  // Render now
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("Vertex, Primitive & Color");
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutDisplayFunc(display);
   initGL();
   glutMainLoop();
   return 0;
}
