
glViewport(0, 0, w/2, h/2);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(70, (w>h) ? w/h : h/w , 1, 1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

gluLookAt(0,500,500, 0,0,0.1, 0,1,0);
glCallList(bauulmodel);

glViewport(0, h/2, w/2, h/2);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(70, (w>h) ? w/h : h/w , 1, 1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(0,0,600, 0,0.1,0, 0,1,0);
glCallList(bauulmodel);

glViewport(w/2, h/2, w/2, h/2);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(70, (w>h) ? w/h : h/w , 1, 1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

gluLookAt(600,0,0, 0,0.1,0, 0,0,1);
glCallList(bauulmodel);

// 3d in the lowerright viewpoint
glViewport(w/2, 0, w/2, h/2);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(70, (w>h) ? w/h : h/w , 1, 1000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glCallList(bauulmodel);


void Display()
{
SetFirstViewport(); // using glViewport
DrawCar();
SetSecondViewport();
DrawHouse();
}
