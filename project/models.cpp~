#include <GL/glut.h>
#include <math.h>


#include "imageloader.h"

#define pi  3.1415926535898
using namespace std;






void box()							// Box
{
	glPushMatrix();						
	glTranslatef(0.0f,0.5f,0.0f);
	glBegin(GL_POLYGON);						//Front side
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(0.5f,0.5f,0.0f);

	glEnd();

	glBegin(GL_POLYGON);						//back side
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//left side
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//right side
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(0.5f,0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();
	
	glBegin(GL_POLYGON);						//top side
	glNormal3f(0.0f,1.0f,1.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(0.0f,1.0f,1.0f);
	glVertex3f(0.5f,0.5f,0.0f);
	glNormal3f(0.0f,1.0f,-1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);
	glNormal3f(0.0f,1.0f,-1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);
	glEnd();

	glBegin(GL_POLYGON);						//bottom side
	glNormal3f(0.0f,-1.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,-1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,-1.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(0.0f,-1.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glEnd();
	glPopMatrix();

}


void pondframe()						// Pond frame
{
	glPushMatrix();
	glTranslatef(0.0f,-0.5f,1.0f);
	glBegin(GL_POLYGON);						//Front side
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,0.5f,0.0f);

	glEnd();

	glBegin(GL_POLYGON);						//back side
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//left side
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//right side
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();
	

	glBegin(GL_POLYGON);						//bottom side
	//glColor3f(0.5f,0.7f,0.3f);	
	glNormal3f(0.0f,1.0f,-1.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,1.0f,-1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(0.0f,1.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	//glColor3f(1.0f,1.0f,1.0f);
	glEnd();
	glPopMatrix();
}




void cylinder()							// Cylinder						
{								
	glPushMatrix();
	
	int slices=1000;
	float theta;
	float nextTheta;
	float radius=1.0;
	float halflength=0.5;					
	for (int i=0;i<slices;i++)					// circle in x,z length in y
	{
		theta = ((float)(i*2))*(M_PI/slices);
		nextTheta = ((float)((i+1)*2))*(M_PI/slices);
			
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.0, halflength, 0.0);
		glVertex3f(radius*cos(theta), halflength, radius*sin(theta));
		glVertex3f(radius*cos(nextTheta), halflength, radius*sin(nextTheta));

		glVertex3f(radius*cos(nextTheta), -halflength, radius*sin(nextTheta));
		glVertex3f(radius*cos(theta), -halflength, radius*sin(theta));
		glVertex3f(0.0, -halflength, 0.0);
		glEnd();		

	}
	
	glPopMatrix();

}

void circularsteps()						// Circular steps
{									// Unit length in y
	glPushMatrix();
	//glColor3f(0.6f,0.4f,0.3f);
	glPushMatrix();							// lower pipe
	glTranslatef(0.0f,0.45f,0.0f);
	glScalef(0.1f,1.0f,0.1f);
	cylinder();
	glPopMatrix();

	glPushMatrix();							// upper circular step
	glTranslatef(0.0f,0.95f,0.0f);
	glScalef(0.5f,0.1f,0.5f);
	cylinder();
	glPopMatrix();
	//glColor3f(1.0f,1.0f,1.0f);
	glPopMatrix();
}



void longpillar()						//long pillar
{
	glPushMatrix();
	glScalef(0.5f,5.0f,0.5f);
	box();
	glPopMatrix();
}




void room()							//room
{
	glEnable(GL_TEXTURE_2D);					// Enable Texture
	glPushMatrix();
	glTranslatef(0.0f,0.5f,0.0f);
	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glBegin(GL_POLYGON);						//Front side
	glNormal3f(-1.0f,0.0f,1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(0.5f,0.5f,0.0f);

	glEnd();

	glBegin(GL_POLYGON);						//back side
	glNormal3f(-1.0f,0.0f,-1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//left side
	glNormal3f(-1.0f,0.0f,1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glNormal3f(-1.0f,0.0f,-1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);

	glEnd();

	glBegin(GL_POLYGON);						//right side
	glNormal3f(1.0f,0.0f,1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(0.5f,0.5f,0.0f);
	glNormal3f(1.0f,0.0f,1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);

	glEnd();
	
	glBegin(GL_POLYGON);						//top side
	glNormal3f(0.0f,1.0f,1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(-0.5f,0.5f,0.0f);
	glNormal3f(0.0f,1.0f,1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(0.5f,0.5f,0.0f);
	glNormal3f(0.0f,1.0f,-1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(0.5f,0.5f,-1.0f);
	glNormal3f(0.0f,1.0f,-1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(-0.5f,0.5f,-1.0f);
	glEnd();

	glBegin(GL_POLYGON);						//bottom side
	glNormal3f(0.0f,-1.0f,1.0f);
	glTexCoord2f(0.0f,0.0f);
	glVertex3f(-0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,-1.0f,1.0f);
	glTexCoord2f(1.0f,0.0f);
	glVertex3f(0.5f,-0.5f,0.0f);
	glNormal3f(0.0f,-1.0f,-1.0f);
	glTexCoord2f(1.0f,1.0f);
	glVertex3f(0.5f,-0.5f,-1.0f);
	glNormal3f(0.0f,-1.0f,-1.0f);
	glTexCoord2f(0.0f,1.0f);
	glVertex3f(-0.5f,-0.5f,-1.0f);
	glEnd();
	glPopMatrix();
	
	glDisable(GL_TEXTURE_2D);					// Texture Disable
	
}





void pillarstructure()						// Pillar base
{
	
	for (int i=0;i<5;i++)						
	{
		float deltax=(float)(i*10);
		for (int j=0;j<9;j++)
		{
			float deltaz=(float)(j*10);
			glPushMatrix();
			glTranslatef(deltax,0.0f,-deltaz);
			if (i==4 || j==0 || j==8)				// long pillars
			{
				glScalef(1.0f,5.0f,1.0f);
				longpillar();			
			}
			else							// small pillars
			{
				glScalef(1.0f,2.5f,1.0f);
				longpillar();
			}
			glPopMatrix();
			glPushMatrix();
			glTranslatef(-deltax,0.0f,-deltaz);
			if (i==4 || j==0 || j==8)				// long pillars
			{
				glScalef(1.0f,5.0f,1.0f);
				longpillar();			
			}
			else							// small pillars
			{
				glScalef(1.0f,2.5f,1.0f);
				longpillar();
			}
			glPopMatrix();
		}
	}

	glPushMatrix();							// first floor base
	glTranslatef(0.0f,12.5f,-5.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-35.5f,0.0f,0.0f);
	glVertex3f(35.5f,0.0f,0.0f);
	glVertex3f(35.5f,0.0f,-70.0f);	
	glVertex3f(-35.5f,0.0f,-70.0f);		
	glEnd();
	glPopMatrix();

	glPushMatrix();							// floor
	glTranslatef(0.0f,-1.0f,-2.5f);
	glScalef(80.5f,1.0f,78.0f);
	box();
	glPopMatrix();
}


void firstfloorstructure()					// First floor rooms
{
	glPushMatrix();							//front rooms
	glTranslatef(0.0f,0.0f,-2.5f);
	for (int i=-3;i<4;i++)
	{
		float delta=(float)(i*10);
		//glColor3f(0.5f,0.7f,0.3f);					// color
		glPushMatrix();			
		glTranslatef(delta,0.0f,0.0f);
		glScalef(10.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		
		//glColor3f(1.0f,1.0f,1.0f);					// color
		
		
	}
	glPopMatrix();

	glPushMatrix();							//back rooms
	glTranslatef(0.0f,0.0f,-67.5f);
	for (int i=-3;i<4;i++)
	{
		float delta=(float)(i*10);
		//glColor3f(0.5f,0.7f,0.3f);					// color
		glPushMatrix();			
		glTranslatef(delta,0.0f,0.0f);
		glScalef(10.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		
		//glColor3f(1.0f,1.0f,1.0f);					// color
		
		
	}
	glPopMatrix();


	glPushMatrix();							//leftside rooms
	glTranslatef(-32.5f,0.0f,-40.0f);
	for (int i=-3;i<4;i++)
	{
		float delta=(float)(i*10)+5.0;
		//glColor3f(0.5f,0.7f,0.3f);						// color
		glPushMatrix();			
		glTranslatef(0.0,0.0f,delta);
		glScalef(10.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		
		//glColor3f(1.0f,1.0f,1.0f);						// color
		
		
	}
	glPopMatrix();

	glPushMatrix();							//rightside rooms
	glTranslatef(32.5f,0.0f,-40.0f);
	for (int i=-3;i<4;i++)
	{
		float delta=(float)(i*10)+5.0;
		//glColor3f(0.5f,0.7f,0.3f);						// color
		glPushMatrix();			
		glTranslatef(0.0,0.0f,delta);
		glScalef(10.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		
		//glColor3f(1.0f,1.0f,1.0f);						// color
		
		
	}
	glPopMatrix();

	glPushMatrix();							// Second floor base
	//glColor3f(0.2f,0.6f,0.4f);	
	glTranslatef(0.0f,6.25f,0.5f);
	glScalef(79.0f,6.25f,79.0f);
	box();
	//glColor3f(1.0f,1.0f,1.0f);
	glPopMatrix();
}


void secondfloorstructure()						// Second floor rooms
{
	glPushMatrix();
	glTranslatef(0.0f,0.0f,2.5f);
	
	for (int i=-4;i<4;i++)							//front rooms
	{
		float delta=(float)(i*10)+5.0f;
		//glColor3f(0.5f,0.7f,0.3f);
		glPushMatrix();
		glTranslatef(delta,0.0f,0.0f);
		glScalef(8.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		//glColor3f(1.0f,1.0f,1.0f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f,0.0f,-72.5f);
	
	for (int i=-4;i<4;i++)							//back rooms
	{
		float delta=(float)(i*10)+5.0f;
		//glColor3f(0.5f,0.7f,0.3f);
		glPushMatrix();
		glTranslatef(delta,0.0f,0.0f);
		glScalef(8.0f,6.25f,10.0f);
		room();
		glPopMatrix();
		//glColor3f(1.0f,1.0f,1.0f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-37.5f,0.0f,-40.0f);
	
	for (int i=-4;i<4;i++)							//left side rooms
	{
		float delta=(float)(i*10)+9.0f;
		//glColor3f(0.5f,0.7f,0.3f);
		glPushMatrix();
		glTranslatef(0.0f,0.0f,delta);
		glScalef(10.0f,6.25f,8.0f);
		room();
		glPopMatrix();
		//glColor3f(1.0f,1.0f,1.0f);
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(37.5f,0.0f,-40.0f);
	
	for (int i=-4;i<4;i++)							//right side rooms
	{
		float delta=(float)(i*10)+9.0f;
		//glColor3f(0.5f,0.7f,0.3f);
		glPushMatrix();
		glTranslatef(0.0f,0.0f,delta);
		glScalef(10.0f,6.25f,8.0f);
		room();
		glPopMatrix();
		//glColor3f(1.0f,1.0f,1.0f);
	}
	glPopMatrix();
}


void groundfloorstructure()						// Ground floor rooms
{
	glTranslatef(-5.0f,6.25f,-50.0f);
	for (int i=0;i<2;i++)
	{
		float deltaz=i*10;
		for (int j=-2;j<4;j++)
		{
			float deltax=j*10;
			//glColor3f(0.5f,0.7f,0.3f);
			glPushMatrix();
			glTranslatef(deltax,0.0f,-deltaz);
			glScalef(10.0f,6.25f,10.0f);
			room();
			glPopMatrix();
			//glColor3f(1.0f,1.0f,1.0f);
			
		}
	}


}

void undergroundstructure()						// Underground rooms
{
	glTranslatef(-5.0f,0.0f,-50.0f);
	for (int i=0;i<2;i++)
	{
		float deltaz=i*10;
		for (int j=-2;j<4;j++)
		{
			float deltax=j*10;
			//glColor3f(0.5f,0.7f,0.3f);
			glPushMatrix();
			glTranslatef(deltax,0.0f,-deltaz);
			glScalef(10.0f,6.25f,10.0f);
			room();
			glPopMatrix();
			//glColor3f(1.0f,1.0f,1.0f);
			
		}
	}


}

void skywalkstructure()						//Skywalk Structure
{
	glColor3f(0.2f,0.3f,0.35f);	
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0.0f,5.75f,0.0f);
	glScalef(15.0f,0.5f,8.0f);
	box();
	glPopMatrix();
	glPushMatrix();							//pillar 1
	glTranslatef(-6.0f,0.0f,0.0f);
	glScalef(1.0f,1.15f,1.0f);	
	longpillar();
	glPopMatrix();
	glPushMatrix();							//pillar 2
	glTranslatef(-6.0f,0.0f,-7.5f);
	glScalef(1.0f,1.15f,1.0f);	
	longpillar();
	glPopMatrix();
	
	glPushMatrix();							//base
	glTranslatef(0.0f,-1.0f,0.0f);
	glScalef(15.0f,1.0f,8.0f);
	box();
	glPopMatrix();

	glPopMatrix();
	glColor3f(1.0f,1.0f,1.0f);	
}

void skywalk()							// Skywalk
{
	for(int i=0;i<20;i++)
	{
		float delta=(float)(15*i);		
		glPushMatrix();						// left						
		glTranslatef(delta,0.0f,-41.0f);
		skywalkstructure();
		glPopMatrix();

		glPushMatrix();						// right
		glTranslatef(-delta,0.0f,-41.0f);
		skywalkstructure();
		glPopMatrix();
		
	}

}


void stairs()							//Stairs
{
	glTranslatef(0.0f,5.625f,-41.1f);
	for(int i=0;i<10;i++)
	{
		float deltaz=i*1;
		float deltay=i*0.625;
		glPushMatrix();
		glTranslatef(0.0f,-deltay,deltaz);
		glScalef(8.0f,0.625f,1.0f);
		box();
		glPopMatrix();
	}	
}


void pipex()							//PipeX
{
	glColor3f(0.4f,0.6f,0.3f);
	glPushMatrix();
	glPushMatrix();							//pipe base
	glScalef(1.0f,2.5f,1.0f);
	box();
	glPopMatrix();
	glPushMatrix();							// cylindrical pipe
	glTranslatef(0.0f,2.75f,0.0f);
	glRotatef(90.0f,0.0f,0.0f,1.0f);
	glScalef(0.25f,10.0f,0.25f);
	cylinder();
	glPopMatrix();

	glPopMatrix();	
	glColor3f(1.0f,1.0f,1.0f);
}

void pipez()							//PipeZ
{
	glColor3f(0.4f,0.6f,0.3f);
	glPushMatrix();							// pipe base
	glPushMatrix();
	glScalef(1.0f,2.5f,1.0f);
	box();	
	glPopMatrix();
	glPushMatrix();							// cylindrical pipe
	glTranslatef(0.0f,2.75f,0.0f);
	glRotatef(90.0f,1.0f,0.0f,0.0f);
	glScalef(0.25f,10.0f,0.25f);
	cylinder();
	glPopMatrix();	

	glPopMatrix();
	glColor3f(1.0f,1.0f,1.0f);	
}


void pond()							// Pond
{
	glPushMatrix();
	glTranslatef(0.0f,0.0f,-2.5f);
	
	glPushMatrix();							// pond frame
	
	glScalef(85.0f,5.0f,85.0f);
	pondframe();
	glPopMatrix();

	glPushMatrix();							// pond frame
	glColor3f(0.6f,0.4f,1.0f);	
	glTranslatef(0.0f,-1.0f,0.0f);
	glScalef(84.999f,3.999f,84.999f);
	pondframe();
	glColor3f(1.0f,1.0f,1.0f);	
	glPopMatrix();

	glPushMatrix();							// central fountain top
	glTranslatef(0.0f,-1.25f,42.5f);
	glScalef(5.0f,2.5f,5.0f);
	cylinder();	
	glPopMatrix();

	glPushMatrix();							// central fountain base
	glTranslatef(0.0f,-3.75f,42.5f);
	glScalef(7.0f,2.5f,7.0f);
	cylinder();	
	glPopMatrix();

	glPushMatrix();							// cylinderical stairs
	glTranslatef(0.0f,-5.0f,42.5f);
	for (int i=2;i<8;i++)
	{
		float delta=i*5.0;
		glPushMatrix();							// left
		glTranslatef(delta,0.0f,0.0f);
		glScalef(4.0f,2.5f,4.0f);
		circularsteps();
		glPopMatrix();

		glPushMatrix();							// front
		glTranslatef(0.0f,0.0f,delta);
		glScalef(4.0f,2.5f,4.0f);
		circularsteps();
		glPopMatrix();

		glPushMatrix();							// right			
		glTranslatef(-delta,0.0f,0.0f);
		glScalef(4.0f,2.5f,4.0f);
		circularsteps();
		glPopMatrix();

		glPushMatrix();							// back
		glTranslatef(0.0f,0.0f,-delta);
		glScalef(4.0f,2.5f,4.0f);
		circularsteps();
		glPopMatrix();
	}

	glPopMatrix();

	glPushMatrix();							// side pipeline
	glTranslatef(0.0f,-5.0f,42.5f);
	for (int i=0;i<4;i++)
	{
		float delta=i*10;
		glPushMatrix();							// back
		glTranslatef(delta,0.0f,-40.0f);
		pipex();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(-delta,0.0f,-40.0f);
		pipex();
		glPopMatrix();

		glPushMatrix();							// front
		glTranslatef(delta,0.0f,40.0f);
		pipex();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(-delta,0.0f,40.0f);
		pipex();
		glPopMatrix();

		glPushMatrix();							// left
		glTranslatef(-40.0,0.0f,delta);
		pipez();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(-40.0f,0.0f,-delta);
		pipez();
		glPopMatrix();

		glPushMatrix();							// right
		glTranslatef(40.0f,0.0f,delta);
		pipez();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(40.0f,0.0f,-delta);
		pipez();
		glPopMatrix();
	}

	glPopMatrix();




	glPopMatrix();
}


void grass()								// Grass
{	
	glPushMatrix();
	glColor3f(0.5f,0.7f,0.3f);
	glTranslatef(0.0f,-1.0f,0.0f);
	glPushMatrix();								// Right side
	glBegin(GL_POLYGON);
	glVertex3f(42.5f,0.0f,-41.0f);
	glVertex3f(180.5f,0.0f,-41.0f);
	glVertex3f(180.5f,0.0f,120.0f);
	glVertex3f(42.5f,0.0f,120.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();								// Left side
	glBegin(GL_POLYGON);
	glVertex3f(-42.5f,0.0f,-41.0f);
	glVertex3f(-180.5f,0.0f,-41.0f);
	glVertex3f(-180.5f,0.0f,120.0f);
	glVertex3f(-42.5f,0.0f,120.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();								// Front side
	glBegin(GL_POLYGON);
	glVertex3f(-42.5f,0.0f,82.5f);
	glVertex3f(42.5f,0.0f,82.5f);
	glVertex3f(42.5f,0.0f,180.0f);
	glVertex3f(-42.5f,0.0f,180.0f);
	glEnd();
	glPopMatrix();

	glColor3f(1.0f,1.0f,1.0f);
	glPopMatrix();
}



void roadnetwork()
{
	glPushMatrix();							// Road
	glTranslatef(0.0f,-1.0f,0.0f);
	glPushMatrix();								// Left side
	glTranslatef(-70.0f,0.0f,90.0f);
	glScalef(8.0f,0.1f,131.0f);
	room();
	glPopMatrix();

	glPushMatrix();								// Right side
	glTranslatef(70.0f,0.0f,90.0f);
	glScalef(8.0f,0.1f,131.0f);
	room();
	glPopMatrix();

	glPushMatrix();								// Front side
	glTranslatef(0.0f,0.0f,98.0f);
	glScalef(140.0f,0.1f,8.0f);
	room();
	glPopMatrix();

	glPushMatrix();								// Left middle
	glTranslatef(-55.0f,0.0f,-11.0f);
	glScalef(30.0f,0.1f,8.0f);
	room();
	glPopMatrix();

	glPushMatrix();								// Right middle
	glTranslatef(55.0f,0.0f,-11.0f);
	glScalef(30.0f,0.1f,8.0f);
	room();
	glPopMatrix();

	glPopMatrix();
}

void circle()
{
	
	for (float r=0.8;r<=1.0;r+=0.01)
	{
		glBegin(GL_LINE_LOOP);
		for(int i=0;i<=1000;i++)
		{
			float theta=(2*pi*i)/1000;
		
			float x=r*cosf(theta);
			float y=r*sinf(theta);	
			glVertex3f(x,y,0.0f);
		}
		glEnd();
	}
}

void handle()
{
	glPushMatrix();
	glScalef(2.0f,0.2f,0.2f);
	box();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.95f,0.0f,0.0f);
	glScalef(0.2f,0.5f,0.2f);
	box();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.95f,0.0f,0.0f);
	glScalef(0.2f,0.5f,0.2f);
	box();
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(-0.75f,0.45f,0.0f);
	glScalef(0.5f,0.2f,0.2f);
	box();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.75f,0.45f,0.0f);
	glScalef(0.5f,0.2f,0.2f);
	box();
	glPopMatrix();
}


void cycle()
{
	glPushMatrix();
	glTranslatef(-2.0f,0.0f,0.0f);
	circle();		
	glPopMatrix();

	glPushMatrix();
	glTranslatef(2.0f,0.0f,0.0f);
	circle();		
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.0f,0.0f,0.2f);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1f,0.0f,0.0f);
	glVertex3f(-0.1f,2.5f,0.0f);
	glVertex3f(0.1f,2.5f,0.0f);
	glVertex3f(0.1f,0.0f,0.0f);
	glEnd();	
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex3f(0.0f,-0.1f,0.0f);
	glVertex3f(2.0f,-0.1f,0.0f);
	glVertex3f(2.0f,0.1f,0.0f);
	glVertex3f(0.0f,0.1f,0.0f);
	glEnd();	
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex3f(0.0f,-0.1f,0.0f);
	glVertex3f(0.0f,0.1f,0.0f);
	glVertex3f(-2.1f,2.0f,0.0f);
	glVertex3f(-1.9f,2.0f,0.0f);
	glEnd();	
	glPopMatrix();


	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex3f(2.0f,-0.1f,0.0f);
	glVertex3f(2.0f,0.1f,0.0f);
	glVertex3f(0.6f,2.0f,0.0f);
	glVertex3f(0.4f,2.0f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex3f(-2.0f,2.0f,0.0f);
	glVertex3f(-2.0f,1.8f,0.0f);
	glVertex3f(0.6f,2.0f,0.0f);
	glVertex3f(0.4f,1.8f,0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_POLYGON);
	glVertex3f(0.4f,2.0f,0.0f);
	glVertex3f(0.4f,2.5f,0.0f);
	glVertex3f(0.6f,2.5f,0.0f);
	glVertex3f(0.6f,2.0f,0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.9f,2.55f,0.0f);
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	handle();
	glPopMatrix();
}


void cycle1()
{
	glPushMatrix();
	glTranslatef(0.0f,0.1f,96.0f);
	cycle();
	glPopMatrix();
}

void cycle2()
{
	glPushMatrix();
	glTranslatef(0.0f,0.1f,92.0f);
	
	cycle();
	glPopMatrix();
}

void cycle3()
{
	glPushMatrix();
	glTranslatef(-70.0f,0.1f,95.0f);
	glRotatef(-90.0f,0.0f,1.0f,0.0f);
	cycle();
	glPopMatrix();
}

void cycle4()
{
	glPushMatrix();
	glTranslatef(70.0f,0.1f,-35.0f);
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	cycle();
	glPopMatrix();
}

