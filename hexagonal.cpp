#include <windows.h>
#include <GL/glut.h>
void initGL() {
   glClearColor(0.0, 0.0, 0.0, 1.0);
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0, 0.99, 0.3);

    glBegin(GL_POLYGON);
        glVertex2f(0.0,0.3);
        glVertex2f(0.3,0.1);
        glVertex2f(0.3,-0.1);
        glVertex2f(0.0,-0.3);
        glVertex2f(-0.3,-0.1);
        glVertex2f(-0.3,0.1);
        glEnd();
   glFlush();
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
