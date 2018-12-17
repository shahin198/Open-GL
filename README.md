# Open-GL
http://www.codebind.com/linux-tutorials/install-opengl-ubuntu-linux/
# install
```
sudo apt-get update
$ sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev
```
# Code
```
#include <GL/glut.h>
 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
```
# Comile code
```
g++ main.cpp -o firstOpenGlApp -lglut -lGLU -lGL
```
# run
```
./firstOpenGlApp
```
# good tutorial
http://www3.ntu.edu.sg/home/ehchua/programming/opengl/cg_introduction.html
