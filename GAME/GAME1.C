#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<stdio.h>
#include<unistd.h>
#include<math.h>

int i=0,j=0,k=0,f=0,l=0,m=0,n=0,p=0,score=0,chance=0,totalc=10;

void redisplay()
{
	usleep(50);
	glutPostRedisplay();
}

void normalKeys(unsigned char key,int x,int y)
{
	if(key==102)
	{
		reset();
		n=i+55;
		chance=chance+1;
		totalc--;
		if(totalc<=0)
		{
			printf("Your score is %d",score);
			printf("/%d\n",chance);
			exit(0);
		}
	}
	if(key==65)
	{
		printf("Your score is %d",score);
		printf("/%d\n",chance);
		exit(0);
	}
}

void plane()
{
	int z,y;
	glBegin(GL_LINE_LOOP);
	y=15;
	for(y=15;y>0;y--)
	{
		for(z=0;z<360;z++)
		{
			glcolor3f(0,0,0);
			glvertex2d((cos(z*3.14/180)*y)+n,(sin(z*3.14/180)*y)+390-p);
		}
	}
	glEnd();
	if(p==390-75)
	{
		if(n<j+100 && n>j)
		{
			score++;
			if(score%5==0)
			{
				totalc=totalc+5;
			}
			else
				totalc++;
		}
	}
	p=p+5;
}

void reset()
{
	n=0;
	p=0;
}

void display()
{
	int z;
	glClear(GL_COLOR_BUFFER_BIT);//draw source
	glBegin(Gl_LINES);//left
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i,490);
		glVertex2f(0+i,450);
	glEnd();
	glBegin(GL_LINES);//right
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i+110,490);
		glVertex2f(0+i+110,450);
	glEnd();
	glBegin(GL_LINES);//down
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i,450);
		glVertex2f(0+i+110,450);
	glEnd();
	glBegin(GL_LINES);//up
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i,490);
		glVertex2f(0+i+110,450);
	glEnd();
	glBegin(GL_LINES);//downleft
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i,450);
		glVertex2f(0+i+40,390);
	glEnd();
	glBegin(GL_LINES);//downright
		glColor3f(0.0,0.5,0.0);
		glVertex2f(0+i+110,450);
		glVertex2f(0+i+70,390);
	glEnd();
	glBegin(GL_LINES);//draw destination left
		glColor3f(1,0,0);
		glVertex2f(0+j,75);
		glVertex2f(0+j,30);
	glEnd();
	glBegin(GL_LINES);//draw destination right
		glColor3f(1,0,0);
		glVertex2f(0+j+100,75);
		glVertex2f(0+j+100,30);
	glEnd();
	glBegin(GL_LINES);//draw destination down
		glColor3f(1,0,0);
		glVertex2f(0+j,30);
		glVertex2f(0+j+100,30);
	glEnd();
	glBegin(GL_LINES);//draw destination up
		glColor3f(1,0,0);
		glVertex2f(0+j,75);
		glVertex2f(0+j+100,75);
	glEnd();
	if(n!=0)
	{
		plane();
	}
	if(f==0)
	{
		if(i<390)
		{
			i++;
			f=0;
		}
		else if(i==390)
		{
			i--;
			f=1;
		}
	}
	else if(f==1)
	{
		if(i>0)
		{
			i--;
		}
		else if(i==0)
		{
			i++;
			f=0;
		}
	}
	if(k==0)
	{
		if(j<400)
		{
			j=j+2;
		}
		else if(j>=400)
		{
			j=j-2;
			k=1;
		}
	}
	else if(k==1)
	{
		if(j>0)
		{
			j=j-2;
		}
		else if(j==0)
		{
			j=j+2;
			k=0;
		}
	}
	glutSwapBuffers();
	redisplay();
}

int main(int argc,char **argv)
{
	glutInit(&srgc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutWindowSize(500,500);
	glutCreateWindow("Movement of Pandulam");
	glClearColor(0.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display);
	glutKeyboardFunc(normalKeys);
	glutMainLoop();
return(0);
}
