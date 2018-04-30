#include <iostream>
#include <stdlib.h>
#include <GL/glew.h>
#include <math.h>
#include <GL/glut.h>
#include <string>
#include <fstream>

#include "models.h"
#include "imageloader.h"

GLfloat horizontalangle = 0.0f, verticalangle = 0.0f, xposition1=0.0f,xposition2=0.0f,zposition1=0.0f,zposition2=0.0f;

using namespace std;

GLuint loadTexture(Image* image)
{
	GLuint textureId;
	glGenTextures(1, &textureId); 				//Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); 		//Tell OpenGL which texture to edit

								//Map the image to the texture

	glTexImage2D(GL_TEXTURE_2D,                		//Always GL_TEXTURE_2D
				 0,                             //0 for now
				 GL_RGB,                        //Format OpenGL uses for image
				 image->width, image->height,   //Width and height
				 0,                             //The border of the image
				 GL_RGB, 			//GL_RGB, because pixels are stored in RGB format
				 GL_UNSIGNED_BYTE, 		//GL_UNSIGNED_BYTE, because pixels are stored
				                   		//as unsigned numbers
				 image->pixels);                //The actual pixel data
	return textureId; 					//Returns the id of the texture
}


GLuint _textureId;

void initRendering()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glEnable(GL_NORMALIZE);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_COLOR_MATERIAL);

	Image* image = loadBMP("wall.bmp");
	_textureId = loadTexture(image);
	delete image;
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
		case 27: //Escape key
			exit(0);
	}
}

void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(70.0, (double)w / (double)h, 5.0, 200.0);
}

void update(int value)						// Cycle animation
{
	
	xposition1-=0.2f;						// cycle 1 (front)
	if(xposition1<-70.0)
		xposition1=70.0;
	
	xposition2-=0.3f;						// cycle 2 (front)
	if(xposition2<-70.0)
		xposition2=70.0;

	zposition1-=0.3f;						// cycle 3 (left)
	if(zposition1<-130.0)
		zposition1=0.0;
	
	zposition2+=0.4f;						// cycle 4 (right)
	if(zposition2>130.0)
		zposition2=-0.0;

	glutPostRedisplay();
	glutTimerFunc(1,update,0);
}



void special_keys(int key, int x, int y)				// Handeling Arrow keys
{
	switch (key)
	{
		case GLUT_KEY_LEFT :						// rotation about Y axis
			horizontalangle -= 5;
			break;
		case GLUT_KEY_RIGHT:						// rotation about Y axis
			horizontalangle += 5;
			break;
		case GLUT_KEY_UP   :						// rotation about X axis
			verticalangle -= 5;
			break;
		case GLUT_KEY_DOWN :						// rotation about X axis
			verticalangle += 5;
			break;
	}
	
	glutPostRedisplay();
}



void drawScene()							// Drawing Scene
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	//GLfloat ambientColor[] = {0.2f,0.3f,0.35f, 0.0f}; 
    	//glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

	GLfloat lightColor0[] = {1.0f, 1.0f, 1.0f, 1.0f}; 			// Light0 parameters
   	GLfloat lightPos0[] = {-60.0f, 40.0f, 120.0f, 0.0f}; 
    	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
    	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);

	
	glBindTexture(GL_TEXTURE_2D, _textureId);


	glColor3f(1.0f,1.0f,1.0f);
	glTranslatef(0.0f,-10.0f,-20.0f);
	
	
	glTranslatef(0.0f,0.0f,-100.0f);					
	glRotatef(horizontalangle,0.0f,1.0f,0.0f);				// Rotation about Y axis
	glRotatef(verticalangle,1.0f,0.0f,0.0f);				// Rotation about X axis
	glTranslatef(0.0f,0.0f,100.0f);
	
	
	
	
	//glRotatef(20.0f,1.0f,0.0f,0.0f);
	//glScalef(1.0f,8.0f,1.0f);
	//longpillar();
	//box();	
	//room();
	//cylinder();
	//circularsteps();
	//pipez();	


	

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	pillarstructure();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.0f,12.5f,-100.0f);
	firstfloorstructure();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.0f,18.75f,-100.0f);
	secondfloorstructure();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	skywalk();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	stairs();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	groundfloorstructure();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	undergroundstructure();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	pond();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	grass();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	roadnetwork();
	glPopMatrix();
	
	

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	glTranslatef(xposition1,0.0f,0.0f);
	cycle1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	glTranslatef(xposition2,0.0f,0.0f);
	cycle2();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	glTranslatef(0.0f,0.0f,zposition1);
	cycle3();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-100.0f);
	glTranslatef(0.0f,0.0f,zposition2);
	cycle4();
	glPopMatrix();
	
	glutSwapBuffers();
}










char * FileRead(char *filename)						// Text File Read
{
	char *a;
	ifstream t(filename);
	t.seekg(0, ios::end);
	int size = t.tellg();
	a=(char *)malloc(sizeof(char) * (size+1));
	t.seekg(0);
	t.read(&a[0], size); 
	a[size] = '\0';

	return a;
}



void setShaders()							//Shader Setup
{
	
	char *vs=FileRead("vertexshader.txt");
	char *fs=FileRead("fragmentshader.txt");
	
	GLuint verShader=glCreateShader(GL_VERTEX_SHADER);
	GLuint fragShader=glCreateShader(GL_FRAGMENT_SHADER);
	

	const char *vv=vs;
	const char *ff=fs;
	
	glShaderSource(verShader, 1, &vv,NULL);
	glShaderSource(fragShader, 1, &ff,NULL);		
	free(vs);free(fs);

	glCompileShader(verShader);
	glCompileShader(fragShader);
	
	GLuint prog = glCreateProgram();
	glAttachShader(prog,verShader);
	glAttachShader(prog,fragShader);
	glLinkProgram(prog);
	glUseProgram(prog);	

}








int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
	glutInitWindowSize(1200,1000);
	glutCreateWindow("Library");

	initRendering();
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	glutSpecialFunc(special_keys);
	glutTimerFunc(1,update,0);

	glewInit();
	setShaders();

	glutMainLoop();
	return 0;
}


