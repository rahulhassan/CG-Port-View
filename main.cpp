#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI 3.14159265358979323846
GLfloat j = 0.0f;
GLfloat i2 = 0.0f;
GLfloat i1 = 0.0f;
GLfloat k = 0.0f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.009f;

GLfloat position = 0.0f;
GLfloat speed = 0.02f;

void update(int value) {

    if(position <-1.0)
        position = 2.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 >2.4)
        position1 = -1.0f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}


void screen()
{
    gluOrtho2D(-2,2,-2,2);
}
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1.0);

	glBegin(GL_QUADS);
	glColor3ub(135, 206, 235);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(1.0f,0.0f);
	glVertex2f(1.0f,1.0f);
	glEnd();

	GLfloat x=-0.2f; GLfloat y=0.75f; GLfloat radius =0.15f;
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//sun
    glColor3ub(252,212,64);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);//hill
	glColor3ub(0, 204, 0);
    glVertex2f(-0.75f, 0.15f);
    glVertex2f(-0.85f, 0.25f);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-0.75f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);//hill
	glColor3ub(0, 204, 0);
    glVertex2f(0.35f, 0.25f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.35f, 0.0f);
	glEnd();
	glBegin(GL_POLYGON);//hill
	glColor3ub(0, 204, 0);
	glVertex2f(0.1f, 0.1f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.1f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);//hill
	glColor3ub(0, 204, 0);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.45f, 0.45f);
    glVertex2f(-0.75f, 0.15f);
    glVertex2f(-0.75f, 0.0f);
    glVertex2f(-0.2f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);//hill
	glColor3ub(0, 204, 0);
    glVertex2f(1.0f, 0.25f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.95f, 0.0f);
    glVertex2f(1.0f, 0.0f);
	glEnd();

	////////////////////////////////////////cloud
	glPushMatrix();
    glTranslatef(position1,0,0);

    glTranslatef(0.0f,0.2f,0.0f);

	GLfloat x12=-0.275f; GLfloat y12=0.65f; GLfloat radius12 =0.09f;
	glBegin(GL_TRIANGLE_FAN);//cloud
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x12 + (radius12* cos(i *  twicePi / lineAmount)),
			    y12 + (radius12* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	GLfloat x21=-0.15f; GLfloat y21=0.67f; GLfloat radius21 =0.09f;

	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x21 + (radius21* cos(i *  twicePi / lineAmount)),
			    y21 + (radius21* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x31=-0.025f; GLfloat y31=0.65f; GLfloat radius31 =0.09f;

	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x31 + (radius31* cos(i *  twicePi / lineAmount)),
			    y31 + (radius31* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x41=-0.1f; GLfloat y41=0.55f; GLfloat radius41 =0.09f;

	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x41 + (radius41* cos(i *  twicePi / lineAmount)),
			    y41 + (radius41* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x51=-0.225f; GLfloat y51=0.55f; GLfloat radius51=0.09f;

	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x51 + (radius51* cos(i *  twicePi / lineAmount)),
			    y51 + (radius51* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glPopMatrix();




    glPushMatrix();
    glTranslatef(position1,0,0);

    glTranslatef(-1.1f,0.2f,0.0f);
    glScalef(0.9f,0.9f,0.0f);

	glBegin(GL_TRIANGLE_FAN);//cloud
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x12 + (radius12* cos(i *  twicePi / lineAmount)),
			    y12 + (radius12* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x21 + (radius21* cos(i *  twicePi / lineAmount)),
			    y21 + (radius21* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x31 + (radius31* cos(i *  twicePi / lineAmount)),
			    y31 + (radius31* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x41 + (radius41* cos(i *  twicePi / lineAmount)),
			    y41 + (radius41* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);//
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x51 + (radius51* cos(i *  twicePi / lineAmount)),
			    y51 + (radius51* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();





	glPopMatrix();
	/////////////////////////////////////////end cloud







    glBegin(GL_QUADS);//building
	glColor3ub(191, 191, 191);
	glVertex2f(0.95f,0.6f);
	glVertex2f(0.35f,0.6f);
	glVertex2f(0.35f,0.0f);
	glVertex2f(0.95f,0.0f);
	glEnd();

	glBegin(GL_QUADS);//building top
	glColor3ub(0, 77, 77);
	glVertex2f(0.33f,0.6f);
	glVertex2f(0.33f,0.65f);
	glVertex2f(0.97f,0.65f);
	glVertex2f(0.97f,0.6f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(204, 102, 0);
	glVertex2f(0.775f,0.82f);
	glVertex2f(0.67f,0.75f);
	glVertex2f(0.88f,0.75f);
	glEnd();

	glBegin(GL_QUADS);//house
	glColor3ub(140, 140, 140);
	glVertex2f(.7f,.75f);
	glVertex2f(.7f,.65f);
	glVertex2f(.85f,.65f);
	glVertex2f(.85f,.75f);
	glEnd();

	glBegin(GL_QUADS);//building window1
	glColor3ub(0, 51, 51);
	glVertex2f(0.5f,0.549f);
	glVertex2f(0.4f,0.549f);
	glVertex2f(0.4f,0.449f);
	glVertex2f(0.5f,0.449f);
	glEnd();

	glBegin(GL_QUADS);//building window2
	glColor3ub(0, 51, 51);
	glVertex2f(0.5f,0.406f);
	glVertex2f(0.4f,0.406f);
	glVertex2f(0.4f,0.306f);
	glVertex2f(0.5f,0.306f);
	glEnd();

	glBegin(GL_QUADS);//building window3
	glColor3ub(0, 51, 51);
	glVertex2f(0.5f,0.263f);
	glVertex2f(0.4f,0.263f);
	glVertex2f(0.4f,0.163f);
	glVertex2f(0.5f,0.163f);
	glEnd();

	glBegin(GL_QUADS);//building window4
	glColor3ub(0, 51, 51);
	glVertex2f(0.5f,0.12f);
	glVertex2f(0.4f,0.12f);
	glVertex2f(0.4f,0.02f);
	glVertex2f(0.5f,0.02f);
	glEnd();

	glBegin(GL_QUADS);//building window1 col2
	glColor3ub(0, 51, 51);
	glVertex2f(0.7f,0.549f);
	glVertex2f(0.6f,0.549f);
	glVertex2f(0.6f,0.449f);
	glVertex2f(0.7f,0.449f);
	glEnd();

	glBegin(GL_QUADS);//building window2
	glColor3ub(0, 51, 51);
	glVertex2f(0.7f,0.406f);
	glVertex2f(0.6f,0.406f);
	glVertex2f(0.6f,0.306f);
	glVertex2f(0.7f,0.306f);
	glEnd();

	glBegin(GL_QUADS);//building window3
	glColor3ub(0, 51, 51);
	glVertex2f(0.7f,0.263f);
	glVertex2f(0.6f,0.263f);
	glVertex2f(0.6f,0.163f);
	glVertex2f(0.7f,0.163f);
	glEnd();

	glBegin(GL_QUADS);//building window4 col2
	glColor3ub(139, 110, 43);
	glVertex2f(0.7f,0.12f);
	glVertex2f(0.6f,0.12f);
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.7f,0.0f);
	glEnd();
	glBegin(GL_QUADS);//door col2
	glColor3ub(85,52,43);
	glVertex2f(0.653f,0.0f);
	glVertex2f(0.653f,0.12f);
	glVertex2f(0.647f,0.12f);
	glVertex2f(0.647f,0.0f);
	glEnd();

	glBegin(GL_QUADS);//building window1 col3
	glColor3ub(0, 51, 51);
	glVertex2f(0.9f,0.549f);
	glVertex2f(0.8f,0.549f);
	glVertex2f(0.8f,0.449f);
	glVertex2f(0.9f,0.449f);
	glEnd();

	glBegin(GL_QUADS);//building window2
	glColor3ub(0, 51, 51);
	glVertex2f(0.9f,0.406f);
	glVertex2f(0.8f,0.406f);
	glVertex2f(0.8f,0.306f);
	glVertex2f(0.9f,0.306f);
	glEnd();

	glBegin(GL_QUADS);//building window3
	glColor3ub(0, 51, 51);
	glVertex2f(0.9f,0.263f);
	glVertex2f(0.8f,0.263f);
	glVertex2f(0.8f,0.163f);
	glVertex2f(0.9f,0.163f);
	glEnd();

	glBegin(GL_QUADS);//building window4
	glColor3ub(0, 51, 51);
	glVertex2f(0.9f,0.12f);
	glVertex2f(0.8f,0.12f);
	glVertex2f(0.8f,0.02f);
	glVertex2f(0.9f,0.02f);
	glEnd();

	glBegin(GL_QUADS);//building window5
	glColor3ub(0, 51, 51);
	glVertex2f(0.8f,0.725f);
	glVertex2f(0.75f,0.725f);
	glVertex2f(0.75f,0.675f);
	glVertex2f(0.8f,0.675f);
	glEnd();

	/////////////
	/////////clock
	glBegin(GL_TRIANGLES);
	glColor3ub(179, 179, 179);
	glVertex2f(0.15f,0.6f);
	glVertex2f(0.05f,0.48f);
	glVertex2f(0.25f,0.48f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(0.25f,0.48f);
	glVertex2f(0.05f,0.48f);
	glVertex2f(0.05f,0.3f);
	glVertex2f(0.25f,0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(179, 179, 179);
	glVertex2f(0.05f,0.3f);
	glVertex2f(0.25f,0.3f);
	glVertex2f(0.3f,0.0f);
	glVertex2f(0.00f,0.0f);
	glEnd();

	glTranslatef(0.15f,0.4f,0.0f);
    glScalef(0.16f,0.16f,0.0f);

    glBegin(GL_POLYGON);//watch boarder
    glColor3ub(179, 179, 179);
    glVertex2f(-0.4f,0.55f);
    glVertex2f(-0.55f,0.4f);
    glVertex2f(-0.55f,-0.4f);
    glVertex2f(-0.4f,-0.55f);
    glVertex2f(0.4f,-0.55f);
    glVertex2f(0.55f,-0.4f);
    glVertex2f(0.55f,0.4f);
    glVertex2f(0.4f,0.55f);
    glEnd();

    glBegin(GL_POLYGON);//watch plate
    glColor3ub(64, 64, 64);
    glVertex2f(-0.35f,0.5f);
    glVertex2f(-0.5f,0.35f);
    glVertex2f(-0.5f,-0.35f);
    glVertex2f(-0.35f,-0.5f);
    glVertex2f(0.35f,-0.5f);
    glVertex2f(0.5f,-0.35f);
    glVertex2f(0.5f,0.35f);
    glVertex2f(0.35f,0.5f);
    glEnd();

     glBegin(GL_QUADS);//number 12
    glColor3ub(255,255,255);
    glVertex2f(0.02f,0.46f);
    glVertex2f(-0.02f,0.46f);
    glVertex2f(-0.02f,0.36f);
    glVertex2f(0.02f,0.36f);
    glEnd();

    glBegin(GL_QUADS);//num 6
    glColor3ub(255,255,255);
    glVertex2f(-0.02f,-0.46f);
    glVertex2f(0.02f,-0.46f);
    glVertex2f(0.02f,-0.36f);
    glVertex2f(-0.02f,-0.36f);
    glEnd();

    glBegin(GL_QUADS);// num 9
    glColor3ub(255,255,255);
    glVertex2f(-0.46f, -0.02f);
    glVertex2f(-0.46f, 0.02f);
    glVertex2f(-0.36f, 0.02f);
    glVertex2f(-0.36f,-0.02f);
    glEnd();

    glBegin(GL_QUADS);// num 3
    glColor3ub(255,255,255);
    glVertex2f(0.46f, 0.02f);
    glVertex2f(0.46f, -0.02f);
    glVertex2f(0.36f, -0.02f);
    glVertex2f(0.36f,0.02f);
    glEnd();

    glBegin(GL_QUADS);// num 4
    glColor3ub(255,255,255);
    glVertex2f(0.36f, -0.2f);
    glVertex2f(0.36f, -0.24f);
    glVertex2f(0.46f,-0.34f);
    glVertex2f(0.46f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);// num 5
    glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.36f );
    glVertex2f(0.24f,-0.36f);
    glVertex2f(0.34f,-0.46f);
    glVertex2f(0.3f,-0.46f);
    glEnd();

    glBegin(GL_QUADS);// num 10
    glColor3ub(255,255,255);
    glVertex2f(-0.36f,0.2f);
    glVertex2f(-0.36f,0.24f);
    glVertex2f(-0.46f,0.34f);
    glVertex2f(-0.46f,0.3f);
    glEnd();

    glBegin(GL_QUADS);// num 11
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,0.36f );
    glVertex2f(-0.24f,0.36f);
    glVertex2f(-0.34f,0.46f);
    glVertex2f(-0.3f,0.46f);
    glEnd();

    glBegin(GL_QUADS);// num 7
    glColor3ub(255,255,255);
    glVertex2f(-0.36f,-0.2f);
    glVertex2f(-0.36f,-0.24f);
    glVertex2f(-0.46f,-0.34f);
    glVertex2f(-0.46f,-0.3f);
    glEnd();

    glBegin(GL_QUADS);// num 8
    glColor3ub(255,255,255);
    glVertex2f(-0.2f,-0.36f );
    glVertex2f(-0.24f,-0.36f);
    glVertex2f(-0.34f,-0.46f);
    glVertex2f(-0.3f,-0.46f);
    glEnd();

     glBegin(GL_QUADS);// num 10
    glColor3ub(255,255,255);
    glVertex2f(0.36f,0.2f);
    glVertex2f(0.36f,0.24f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.3f);
    glEnd();

    glBegin(GL_QUADS);// num 11
    glColor3ub(255,255,255);
    glVertex2f(0.2f,0.36f );
    glVertex2f(0.24f,0.36f);
    glVertex2f(0.34f,0.46f);
    glVertex2f(0.3f,0.46f);
    glEnd();

    glPushMatrix();
    glRotatef(i2,0.0,0.0,1.0);// hour

    glBegin(GL_QUADS);
    glColor3ub(230, 184, 0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f, 0.1f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.03f,0.1f);
    glEnd();

    glPopMatrix();
    i2-=0.0005f;

    glPushMatrix(); //minute
    glRotatef(i1,0.0,0.0,1.0);

    glBegin(GL_QUADS);
    glColor3ub(255, 204, 0);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f, 0.1f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-0.03f,0.1f);
    glEnd();

    glPopMatrix();
    i1-=0.002f;

    glPushMatrix();
    glRotatef(k,0.0,0.0,1.0);//sec

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.005f,0.45f);
    glVertex2f(-0.005f, 0.45f);
    glVertex2f(-0.008f, 0.0f);
    glVertex2f(0.008f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.01f,0.0f);
    glVertex2f(-0.01f, 0.0f);
    glVertex2f(-0.01f, -0.15f);
    glVertex2f(0.01f,-0.15f);
    glEnd();

    glPopMatrix();
    k-=0.09f;

    GLfloat x11=0.0f; GLfloat y11=0.0f; GLfloat radius22 =0.02f;
	int l;

	glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.0f, 0.0f);
		for(l = 0; l <= lineAmount;l++) {
			glVertex2f(
			    x11 + (radius22 * cos(l *  twicePi / lineAmount)),
			    y11 + (radius22* sin(l * twicePi / lineAmount))
			);
		}
	glEnd();
    glLoadIdentity();
	///////////////////////end clock





	GLfloat x1=-0.75f; GLfloat y1=0.4f; GLfloat radius1 =0.07f;
	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x1 + (radius1* cos(i *  twicePi / lineAmount)),
			    y1 + (radius1* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	GLfloat x2=-0.85f; GLfloat y2=0.45f; GLfloat radius2 =0.07f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x2 + (radius2* cos(i *  twicePi / lineAmount)),
			    y2 + (radius2* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x3=-0.85f; GLfloat y3=0.55f; GLfloat radius3 =0.07f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x3 + (radius3* cos(i *  twicePi / lineAmount)),
			    y3 + (radius3* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x4=-0.75f; GLfloat y4=0.6f; GLfloat radius4 =0.07f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x4 + (radius4* cos(i *  twicePi / lineAmount)),
			    y4 + (radius4* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x5=-0.65f; GLfloat y5=0.55f; GLfloat radius5=0.07f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x5 + (radius5* cos(i *  twicePi / lineAmount)),
			    y5 + (radius5* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x6=-0.65f; GLfloat y6=0.45f; GLfloat radius6=0.07f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x6+ (radius6* cos(i *  twicePi / lineAmount)),
			    y6 + (radius6* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x7=-0.75f; GLfloat y7=0.5f; GLfloat radius7=0.1f;

	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(34, 139, 34);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x7+ (radius7* cos(i *  twicePi / lineAmount)),
			    y7 + (radius7* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);//tree
	glColor3ub(85,52,43);
	glVertex2f(-0.73f,0.0f);
	glVertex2f(-0.73f,0.47f);
	glVertex2f(-0.77f,0.47f);
	glVertex2f(-0.77,0.0f);
	glEnd();

    glBegin(GL_QUADS);//road
	glColor3ub(64, 64, 64);
	glVertex2f(1.0f,-0.0f);
	glVertex2f(-1.0f,-0.0f);
	glVertex2f(-1.0f,-0.15f);
	glVertex2f(1.0f,-0.15f);
	glEnd();

    glBegin(GL_LINES);//road line

	glColor3ub(242, 242, 242);
	glVertex2f(-0.8f, -0.075f);
	glVertex2f(-0.6f, -0.075f);
	glEnd();
    glBegin(GL_LINES);//road line
	glColor3ub(242, 242, 242);
	glVertex2f(-0.4f, -0.075f);
	glVertex2f(-0.2f, -0.075f);
	glEnd();

    glBegin(GL_LINES);//road line
	glColor3ub(242, 242, 242);
	glVertex2f(0.0f, -0.075f);
	glVertex2f(0.2f, -0.075f);
	glEnd();

	glBegin(GL_LINES);//road line
	glColor3ub(242, 242, 242);
	glVertex2f(0.4f, -0.075f);
	glVertex2f(0.6f, -0.075f);
	glEnd();

	glBegin(GL_LINES);//road line
	glColor3ub(242, 242, 242);
	glVertex2f(0.8f, -0.075f);
	glVertex2f(1.f, -0.075f);
	glEnd();

    glBegin(GL_QUADS);//river bank
	glColor3ub(160,146,114);
	glVertex2f(1.0f,-0.15f);
	glVertex2f(-1.0f,-0.15f);
	glVertex2f(-1.0f,-0.33f);
	glVertex2f(1.0f,-0.33f);
	glEnd();


    glBegin(GL_QUADS);//river water
	glColor3ub(86, 181, 229);
	glVertex2f(-1.0f,-0.33f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,-0.33f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(141,206,242);//river side
	glVertex2f(1.0f,-0.33f);
	glVertex2f(-1.0f,-0.33f);
	glVertex2f(-1.0f,-0.34f);
	glVertex2f(1.0f,-0.34f);
    glEnd();


	glBegin(GL_LINES);//water line3
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(-0.85f, -0.5f);
	glEnd();
    glBegin(GL_LINES);//water line4
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.35f, -0.5f);
	glEnd();

    glBegin(GL_LINES);//water line5
	glColor3ub(141,206,242);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.75f, -0.5f);
	glEnd();

	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.55f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(0.25f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(1.0f, -0.7f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.1f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(0.4f, -0.9f);
	glVertex2f(0.7f, -0.9f);
	glEnd();


   ////////////////////////////////////////////////////////////

    glTranslatef(0.5f,-0.1f,0.0f);
    glScalef(0.6f,0.6f,0.0f);
	glBegin(GL_QUADS);//cargo
	glColor3ub(47,136,220);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.05f,-0.4f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo2
	glColor3ub(225,46,49);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.35f,-0.3f);
	glVertex2f(-0.35f,-0.4f);
	glVertex2f(-0.05f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo3
	glColor3ub(241,128,6);
	glVertex2f(0.21f,-0.17f);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(0.21f,-0.3f);
	glEnd();

	glBegin(GL_QUADS);//cargo4
	glColor3ub(45,129,80);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.25f,-0.17f);
	glVertex2f(-0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glEnd();


	glBegin(GL_POLYGON); //boat
	glColor3ub(47,47,79);
	glVertex2f(-0.15f,-0.4f);
	glVertex2f(-0.2f,-0.35f);
	glVertex2f(-0.5f,-0.35f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(0.6f,-0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(228,48,51);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.33f,-0.58f);
	glVertex2f(0.42f,-0.58f);
	glEnd();

	glBegin(GL_QUADS); //boat
	glColor3ub(237,236,241);
	glVertex2f(0.55f,-0.4f);
	glVertex2f(0.55f,-0.3f);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(237,236,241);
	glVertex2f(0.46f,-0.3f);
	glVertex2f(0.46f,-0.21f);
	glVertex2f(0.25f,-0.21f);
	glVertex2f(0.25f,-0.3f);
	glEnd();

	GLfloat x8=-0.22f; GLfloat y8=-0.4f; GLfloat radius8=0.026f;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0,0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x8+ (radius8* cos(i *  twicePi / lineAmount)),
			    y8 + (radius8* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS); //boat window
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.33f);
	glVertex2f(0.25f,-0.33f);
	glVertex2f(0.25f,-0.35f);
	glVertex2f(0.4f,-0.35f);
	glEnd();


	glBegin(GL_QUADS); //boat window2
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.26f);
	glVertex2f(0.25f,-0.26f);
	glVertex2f(0.25f,-0.28f);
	glVertex2f(0.4f,-0.28f);
	glEnd();


	glBegin(GL_QUADS); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.375f,-0.21f);
	glVertex2f(0.375f,0.25f);
	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,-0.21f);
	glEnd();

    glBegin(GL_POLYGON); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.3f,0.15f);
	glVertex2f(-0.05f,0.15f);
	glVertex2f(-0.15f,0.125f);
	glVertex2f(-0.15f,0.1f);
	glEnd();
	glBegin(GL_QUADS);//Crain chain
	glColor3ub(51,0,0);
	glVertex2f(-0.051f,0.1f);
	glVertex2f(-0.058f,0.1f);
	glVertex2f(-0.058f,0.0f);
	glVertex2f(-0.051f,0.0f);
    glEnd();

    glBegin(GL_QUADS);//crain chain2
	glColor3ub(51,0,0);
	glVertex2f(-0.025f,0.1f);
	glVertex2f(-0.033f,0.1f);
	glVertex2f(-0.033f,0.0f);
	glVertex2f(-0.025f,0.0f);
    glEnd();

    glBegin(GL_QUADS);//crain chain3
	glColor3ub(51,0,0);
	glVertex2f(0.3f,0.24f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.03f,0.15f);
	glVertex2f(0.3f,0.23f);
    glEnd();



    glBegin(GL_QUADS);//crain cargo box
	glColor3ub(47,135,215);
	glVertex2f(0.05f,0.01f);
	glVertex2f(-0.15f,0.01f);
	glVertex2f(-0.15f,-0.1f);
	glVertex2f(0.05f,-0.1f);

    glBegin(GL_QUADS);//boat down water
	glColor3ub(141,206,242);
	glVertex2f(0.45f,-0.58f);
	glVertex2f(-0.35f,-0.58f);
	glVertex2f(-0.35f,-0.59f);
	glVertex2f(0.45f,-0.59f);
    glEnd();

    glLoadIdentity();
    /////////////////////////////////////////////////////////////////////////
    //boat 2
    glPushMatrix();
    glTranslatef(position,0,0);

    glTranslatef(-0.6f,-0.1f,0.0f);
    glScalef(0.9f,0.9f,0.0f);
	glBegin(GL_QUADS);//cargo
	glColor3ub(47,136,220);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.05f,-0.4f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo2
	glColor3ub(225,46,49);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.35f,-0.3f);
	glVertex2f(-0.35f,-0.4f);
	glVertex2f(-0.05f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo3
	glColor3ub(241,128,6);
	glVertex2f(0.21f,-0.17f);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(0.21f,-0.3f);
	glEnd();

	glBegin(GL_QUADS);//cargo4
	glColor3ub(45,129,80);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.25f,-0.17f);
	glVertex2f(-0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glEnd();


	glBegin(GL_POLYGON); //boat
	glColor3ub(47,47,79);
	glVertex2f(-0.15f,-0.4f);
	glVertex2f(-0.2f,-0.35f);
	glVertex2f(-0.5f,-0.35f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(0.6f,-0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(228,48,51);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.33f,-0.58f);
	glVertex2f(0.42f,-0.58f);
	glEnd();

	glBegin(GL_QUADS); //boat
	glColor3ub(237,236,241);
	glVertex2f(0.55f,-0.4f);
	glVertex2f(0.55f,-0.3f);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(237,236,241);
	glVertex2f(0.46f,-0.3f);
	glVertex2f(0.46f,-0.21f);
	glVertex2f(0.25f,-0.21f);
	glVertex2f(0.25f,-0.3f);
	glEnd();

	GLfloat x10=-0.22f; GLfloat y10=-0.4f; GLfloat radius10=0.026f;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0,0);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x10+ (radius10* cos(i *  twicePi / lineAmount)),
			    y10 + (radius10* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS); //boat window
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.33f);
	glVertex2f(0.25f,-0.33f);
	glVertex2f(0.25f,-0.35f);
	glVertex2f(0.4f,-0.35f);
	glEnd();


	glBegin(GL_QUADS); //boat window2
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.26f);
	glVertex2f(0.25f,-0.26f);
	glVertex2f(0.25f,-0.28f);
	glVertex2f(0.4f,-0.28f);
	glEnd();

    glBegin(GL_QUADS);//boat down water
	glColor3ub(141,206,242);
	glVertex2f(0.45f,-0.58f);
	glVertex2f(-0.35f,-0.58f);
	glVertex2f(-0.35f,-0.59f);
	glVertex2f(0.45f,-0.59f);
    glEnd();

    glPopMatrix();
    /////////////////////////////////////////////


    glLoadIdentity();
	glBegin(GL_QUADS);//windMill Piller
	glColor3ub(167,169,163);
	glVertex2f(-0.34f,0.35f);
	glVertex2f(-0.36f,0.35f);
	glVertex2f(-0.37f,0.0f);
	glVertex2f(-0.33f,0.0f);
	glEnd();

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glTranslatef(-0.35,0.35,0);
    glRotatef(j,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, 0.15f);
    glVertex2f( -0.06f, 0.02f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.06f, -0.02f);
    glVertex2f( 0.15f, -0.15f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.15f);
     glVertex2f(-0.02f,-0.06f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.15f, 0.15f);
    glVertex2f(0.02f,0.06f);
    glEnd();

    glPopMatrix();//while glPopMatrix pops the top matrix off the stack
    j-=0.1f;

    GLfloat x9=-0.35f; GLfloat y9=0.35f; GLfloat radius9=0.023f;
	glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(238, 240, 241);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x9+ (radius9* cos(i *  twicePi / lineAmount)),
			    y9 + (radius9* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Port View"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
