#include<glut.h>
#include<glu.h>
#include<gl.h>
#include<windows.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
GLdouble X=0.0, Y=0.0,X1= -0.8,X2= 0.0,X3= 0.4,X4=0.0,X5=0.0, num=0.0,K=0.0;
GLint Random = 0, Chk = 0, Chk1 = 0, Tim = 0, Tim1 = 0, Tim10 = 0, Tim100 = 0, Tim1000 = 0,Fall = 0,START=0;
void PixelY(double X,double Y) {
	glBegin(GL_POLYGON);
	glColor3f(0.655, 0.455, 0.0);
	glVertex3f(-0.1+X, 0.1+Y, 0);
	glVertex3f(0.1+X, 0.1+Y, 0);
	glVertex3f(0.1+X, -0.1+Y, 0);
	glVertex3f(-0.1+X, -0.1+Y, 0);
	glEnd();
}
void PixelB(double X, double Y) {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, -0.1 + Y, 0);
	glVertex3f(-0.1 + X, -0.1 + Y, 0);
	glEnd();
}

void PixelG(double X, double Y) {
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.8, 0.8);
	glVertex3f(-0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, -0.1 + Y, 0);
	glVertex3f(-0.1 + X, -0.1 + Y, 0);
	glEnd();
}
void PixelW(double X, double Y) {
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, 0.1 + Y, 0);
	glVertex3f(0.1 + X, -0.1 + Y, 0);
	glVertex3f(-0.1 + X, -0.1 + Y, 0);
	glEnd();
}


void Score0() {							//����0

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(-0.2, -0.4);
	PixelB(-0.2, -0.2);
	PixelB(-0.2, 0.0);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.4);

}
void Score1() {							//����1
	PixelB(0,0.4);
	PixelB(0, 0.2);
	PixelB(0, 0);
	PixelB(0, -0.2);
	PixelB(0, -0.4);

}
void Score2() {									//����2

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.0, 0.0);
	PixelB(-0.2, 0.0);
	PixelB(-0.2, -0.2);
	PixelB(-0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(0.2, -0.4);
	
}
void Score3() {									//����3

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.0, 0.0);
	PixelB(-0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(-0.2, -0.4);

}
void Score4() {									//����4

	PixelB(-0.2, 0.4);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.0);
	PixelB(0.0, 0.0);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.4);
}
void Score5() {									//����5

	PixelB(-0.2, 0.4);
	PixelB(0.0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.0);
	PixelB(0.0, 0.0);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(-0.2, -0.4);
	
}
void Score6() {							//����6

	PixelB(-0.2, 0.4);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(-0.2, -0.4);
	PixelB(-0.2, -0.2);
	PixelB(-0.2, 0.0);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.4);
	PixelB(0.0, 0.0);

}
void Score7() {							//����7

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(-0.2, 0.4);
	PixelB(-0.2, 0.2);

}
void Score8() {							//����8

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(0.0, -0.4);
	PixelB(-0.2, -0.4);
	PixelB(-0.2, -0.2);
	PixelB(-0.2, 0.0);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.4);
	PixelB(0.0, 0.0);

}
void Score9() {							//����9

	PixelB(-0.2, 0.4);
	PixelB(0, 0.4);
	PixelB(0.2, 0.4);
	PixelB(0.2, 0.2);
	PixelB(0.2, 0.0);
	PixelB(0.2, -0.2);
	PixelB(0.2, -0.4);
	PixelB(-0.2, 0.0);
	PixelB(-0.2, 0.2);
	PixelB(-0.2, 0.4);
	PixelB(0.0, 0.0);

}
void ScoreBig() {
	glPushMatrix();													//���� �Ѱ� Ǫ��

	glPushMatrix();												//����1 Ǫ��

	glTranslatef(0.9, 0.9, 0.0);									//����1 ��ġ
	glScalef(0.1, 0.1, 0.1);													//����1 ũ��

	if (Tim1 == 1) {
		Score1();
	}
	if (Tim1 == 2) {
		Score2();
	}
	if (Tim1 == 3) {
		Score3();
	}
	if (Tim1 == 4) {
		Score4();
	}
	if (Tim1 == 5) {
		Score5();
	}
	if (Tim1 == 6) {
		Score6();
	}
	if (Tim1 == 7) {
		Score7();
	}
	if (Tim1 == 8) {
		Score8();
	}
	if (Tim1 == 9) {
		Score9();
	}
	if (Tim1 == 0) {
		Score0();
	}

	glPopMatrix();												//����1 ��

	glPushMatrix();												//����10 Ǫ��

	glTranslatef(0.83, 0.9, 0.0);									//����10 ��ġ
	glScalef(0.1, 0.1, 0.1);													//����10 ũ��

	if (Tim10 == 1) {
		Score1();
	}
	if (Tim10 == 2) {
		Score2();
	}
	if (Tim10 == 3) {
		Score3();
	}
	if (Tim10 == 4) {
		Score4();
	}
	if (Tim10 == 5) {
		Score5();
	}
	if (Tim10 == 6) {
		Score6();
	}
	if (Tim10 == 7) {
		Score7();
	}
	if (Tim10 == 8) {
		Score8();
	}
	if (Tim10 == 9) {
		Score9();
	}
	if (Tim10 == 0) {
		Score0();
	}



	glPopMatrix();												//����10 ��

	glPushMatrix();												//����100 Ǫ��

	glTranslatef(0.76, 0.9, 0.0);									//����100 ��ġ
	glScalef(0.1, 0.1, 0.1);													//����100 ũ��

	if (Tim100 == 1) {
		Score1();
	}
	if (Tim100 == 2) {
		Score2();
	}
	if (Tim100 == 3) {
		Score3();
	}
	if (Tim100 == 4) {
		Score4();
	}
	if (Tim100 == 5) {
		Score5();
	}
	if (Tim100 == 6) {
		Score6();
	}
	if (Tim100 == 7) {
		Score7();
	}
	if (Tim100 == 8) {
		Score8();
	}
	if (Tim100 == 9) {
		Score9();
	}
	if (Tim100 == 0) {
		Score0();
	}
	glPopMatrix();												//����100 ��

	glPushMatrix();												//����1000 Ǫ��

	glTranslatef(0.69, 0.9, 0.0);									//����1000 ��ġ
	glScalef(0.1, 0.1, 0.1);													//����1000 ũ��

	if (Tim1000 == 1) {
		Score1();
	}
	if (Tim1000 == 2) {
		Score2();
	}
	if (Tim1000 == 3) {
		Score3();
	}
	if (Tim1000 == 4) {
		Score4();
	}
	if (Tim1000 == 5) {
		Score5();
	}
	if (Tim1000 == 6) {
		Score6();
	}
	if (Tim1000 == 7) {
		Score7();
	}
	if (Tim1000 == 8) {
		Score8();
	}
	if (Tim1000 == 9) {
		Score9();
	}
	if (Tim1000 == 0) {
		Score0();
	}
	glPopMatrix();												//����1000 ��
	
	glPopMatrix();					//���� �Ѱ� ��


}
void Cloud() {
	//1
	PixelB(0, 0);
	PixelB(0, -0.2);
	PixelB(0, -0.4);
	//2
	PixelB(0.2, 0.2);
	PixelW(0.2, 0.0);
	PixelW(0.2, -0.2);
	PixelW(0.2, -0.4);
	PixelB(0.2, -0.6);
	//3
	PixelB(0.4, 0.4);
	PixelW(0.4, 0.2);
	PixelG(0.4, 0.0);
	PixelG(0.4, -0.2);
	PixelG(0.4, -0.4);
	PixelG(0.4, -0.6);
	PixelB(0.4, -0.8);
	//4
	PixelB(0.6, 0.4);
	PixelW(0.6, 0.2);
	PixelG(0.6, 0.0);
	PixelG(0.6, -0.2);
	PixelG(0.6, -0.4);
	PixelG(0.6, -0.6);
	PixelG(0.6, -0.8);
	PixelB(0.6, -1.0);
	//5
	PixelB(0.8, 0.4);
	PixelW(0.8, 0.2);
	PixelG(0.8, 0.0);
	PixelG(0.8, -0.2);
	PixelG(0.8, -0.4);
	PixelG(0.8, -0.6);
	PixelG(0.8, -0.8);
	PixelB(0.8, -1.0);
	//6
	PixelB(1.0, 0.8);
	PixelB(1.0, 0.6);
	PixelW(1.0, 0.4);
	PixelW(1.0, 0.2);
	PixelG(1.0, 0.0);
	PixelG(1.0, -0.2);
	PixelG(1.0, -0.4);
	PixelG(1.0, -0.6);
	PixelG(1.0, -0.8);
	PixelB(1.0, -1.0);
	//7
	PixelB(1.2,1.0);
	PixelW(1.2, 0.8);
	PixelW(1.2, 0.6);
	PixelG(1.2, 0.4);
	PixelG(1.2, 0.2);
	PixelG(1.2, 0.0);
	PixelG(1.2, -0.2);
	PixelG(1.2, -0.4);
	PixelG(1.2, -0.6);
	PixelG(1.2, -0.8);
	PixelB(1.2, -1.0);
	//8
	PixelB(1.4, 1.0);
	PixelW(1.4, 0.8);
	PixelG(1.4, 0.6);
	PixelG(1.4, 0.4);
	PixelG(1.4, 0.2);
	PixelG(1.4, 0.0);
	PixelG(1.4, -0.2);
	PixelG(1.4, -0.4);
	PixelG(1.4, -0.6);
	PixelG(1.4, -0.8);
	PixelB(1.4, -1.0);
	//9
	PixelB(1.6, 1.0);
	PixelW(1.6, 0.8);
	PixelG(1.6, 0.6);
	PixelG(1.6, 0.4);
	PixelG(1.6, 0.2);
	PixelG(1.6, 0.0);
	PixelG(1.6, -0.2);
	PixelG(1.6, -0.4);
	PixelG(1.6, -0.6);
	PixelG(1.6, -0.8);
	PixelB(1.6, -1.0);
	//10
	PixelB(1.8, 1.2);
	PixelW(1.8, 1.0);
	PixelG(1.8, 0.8);
	PixelG(1.8, 0.6);
	PixelG(1.8, 0.4);
	PixelG(1.8, 0.2);
	PixelG(1.8, 0.0);
	PixelG(1.8, -0.2);
	PixelG(1.8, -0.4);
	PixelG(1.8, -0.6);
	PixelG(1.8, -0.8);
	PixelB(1.8, -1.0);
	//11
	PixelB(2.0, 1.4);
	PixelW(2.0, 1.2);
	PixelG(2.0, 1.0);
	PixelG(2.0, 0.8);
	PixelG(2.0, 0.6);
	PixelG(2.0, 0.4);
	PixelG(2.0, 0.2);
	PixelG(2.0, 0.0);
	PixelG(2.0, -0.2);
	PixelG(2.0, -0.4);
	PixelG(2.0, -0.6);
	PixelG(2.0, -0.8);
	PixelB(2.0, -1.0);
	//12
	PixelB(2.2, 1.6);
	PixelW(2.2, 1.4);
	PixelG(2.2, 1.2);
	PixelG(2.2, 1.0);
	PixelG(2.2, 0.8);
	PixelG(2.2, 0.6);
	PixelG(2.2, 0.4);
	PixelG(2.2, 0.2);
	PixelG(2.2, 0.0);
	PixelG(2.2, -0.2);
	PixelG(2.2, -0.4);
	PixelG(2.2, -0.6);
	PixelG(2.2, -0.8);
	PixelB(2.2, -1.0);
	//13
	PixelB(2.4, 1.8);
	PixelW(2.4, 1.6);
	PixelG(2.4, 1.4);
	PixelG(2.4, 1.2);
	PixelG(2.4, 1.0);
	PixelG(2.4, 0.8);
	PixelG(2.4, 0.6);
	PixelG(2.4, 0.4);
	PixelG(2.4, 0.2);
	PixelG(2.4, 0.0);
	PixelG(2.4, -0.2);
	PixelG(2.4, -0.4);
	PixelG(2.4, -0.6);
	PixelG(2.4, -0.8);
	PixelB(2.4, -1.0);
	//14
	PixelB(2.6, 1.8);
	PixelW(2.6, 1.6);
	PixelG(2.6, 1.4);
	PixelG(2.6, 1.2);
	PixelG(2.6, 1.0);
	PixelG(2.6, 0.8);
	PixelG(2.6, 0.6);
	PixelG(2.6, 0.4);
	PixelG(2.6, 0.2);
	PixelG(2.6, 0.0);
	PixelG(2.6, -0.2);
	PixelG(2.6, -0.4);
	PixelG(2.6, -0.6);
	PixelG(2.6, -0.8);
	PixelB(2.6, -1.0);
	//15
	PixelB(2.8, 1.8);
	PixelW(2.8, 1.6);
	PixelG(2.8, 1.4);
	PixelG(2.8, 1.2);
	PixelG(2.8, 1.0);
	PixelG(2.8, 0.8);
	PixelG(2.8, 0.6);
	PixelG(2.8, 0.4);
	PixelG(2.8, 0.2);
	PixelG(2.8, 0.0);
	PixelG(2.8, -0.2);
	PixelG(2.8, -0.4);
	PixelG(2.8, -0.6);
	PixelG(2.8, -0.8);
	PixelB(2.8, -1.0);
	//16
	PixelB(3.0, 1.8);
	PixelW(3.0, 1.6);
	PixelG(3.0, 1.4);
	PixelG(3.0, 1.2);
	PixelG(3.0, 1.0);
	PixelG(3.0, 0.8);
	PixelG(3.0, 0.6);
	PixelG(3.0, 0.4);
	PixelG(3.0, 0.2);
	PixelG(3.0, 0.0);
	PixelG(3.0, -0.2);
	PixelG(3.0, -0.4);
	PixelG(3.0, -0.6);
	PixelG(3.0, -0.8);
	PixelB(3.0, -1.0);
	//17
	PixelB(3.2, 1.6);
	PixelG(3.2, 1.4);
	PixelG(3.2, 1.2);
	PixelG(3.2, 1.0);
	PixelG(3.2, 0.8);
	PixelG(3.2, 0.6);
	PixelG(3.2, 0.4);
	PixelG(3.2, 0.2);
	PixelG(3.2, 0.0);
	PixelG(3.2, -0.2);
	PixelG(3.2, -0.4);
	PixelG(3.2, -0.6);
	PixelG(3.2, -0.8);
	PixelB(3.2, -1.0);
	//18
	PixelB(3.4, 1.4);
	PixelG(3.4, 1.2);
	PixelG(3.4, 1.0);
	PixelG(3.4, 0.8);
	PixelG(3.4, 0.6);
	PixelG(3.4, 0.4);
	PixelG(3.4, 0.2);
	PixelG(3.4, 0.0);
	PixelG(3.4, -0.2);
	PixelG(3.4, -0.4);
	PixelG(3.4, -0.6);
	PixelG(3.4, -0.8);
	PixelB(3.4, -1.0);
	//19
	PixelB(3.6, 1.2);
	PixelG(3.6, 1.0);
	PixelG(3.6, 0.8);
	PixelG(3.6, 0.6);
	PixelG(3.6, 0.4);
	PixelG(3.6, 0.2);
	PixelG(3.6, 0.0);
	PixelG(3.6, -0.2);
	PixelG(3.6, -0.4);
	PixelG(3.6, -0.6);
	PixelG(3.6, -0.8);
	PixelB(3.6, -1.0);
	//20
	PixelB(3.8, 1.0);
	PixelB(3.8, 0.8);
	PixelB(3.8, 0.6);
	PixelG(3.8, 0.4);
	PixelG(3.8, 0.2);
	PixelG(3.8, 0.0);
	PixelG(3.8, -0.2);
	PixelG(3.8, -0.4);
	PixelG(3.8, -0.6);
	PixelG(3.8, -0.8);
	PixelB(3.8, -1.0);
	//21
	PixelB(4.0, 0.6);
	PixelG(4.0, 0.4);
	PixelG(4.0, 0.2);
	PixelG(4.0, 0.0);
	PixelG(4.0, -0.2);
	PixelG(4.0, -0.4);
	PixelG(4.0, -0.6);
	PixelG(4.0, -0.8);
	PixelB(4.0, -1.0);
	//22
	PixelB(4.2, 0.6);
	PixelG(4.2, 0.4);
	PixelG(4.2, 0.2);
	PixelG(4.2, 0.0);
	PixelG(4.2, -0.2);
	PixelG(4.2, -0.4);
	PixelG(4.2, -0.6);
	PixelG(4.2, -0.8);
	PixelB(4.2, -1.0);
	//23
	PixelB(4.4, 0.4);
	PixelG(4.4, 0.2);
	PixelG(4.4, 0.0);
	PixelG(4.4, -0.2);
	PixelG(4.4, -0.4);
	PixelG(4.4, -0.6);
	PixelB(4.4, -0.8);
	//24
	PixelB(4.6, 0.2);
	PixelG(4.6, 0.0);
	PixelG(4.6, -0.2);
	PixelG(4.6, -0.4);
	PixelB(4.6, -0.6);
	//25
	PixelB(4.8, 0.0);
	PixelB(4.8, -0.2);
	PixelB(4.8, -0.4);

}


void MyDisplay() {

	glClear(GL_COLOR_BUFFER_BIT);

	if ((((-0.7 + X) <= (3.0 + X4))&&((3.0 + X4) <= (-0.3 + X)))&& (-0.43+Y<=-0.35)) {					//�ùٰ� �浹�� ����
		START = 0;
		glPushMatrix();
		glTranslatef(-0.9, -0.9, -0.9);									
		glScalef(10, 10, 10);
		ScoreBig();
		glPopMatrix();
		cout << "GAME OVER " << endl << "YOUR SCORE : " << Tim << endl;
	}
	if ((((-0.7 + X) <= (3.0 + X5)) && ((3.0 + X5) <= (-0.3 + X))) && (-0.43 + Y <= -0.35)) {						//�ùٰ� �浹�� ����
		START = 0;
		cout << "GAME OVER " << endl << "YOUR SCORE : " << Tim << endl;
	}
	//cout << int(((-0.4 + X)*0.08) * 100) << "\t" << int((3.0 + X4) * 100);
	
		glPushMatrix();			//�ùٰ� Ǫ��
		glTranslatef(-0.4 + X, -0.43 + Y, 0.0);//�ùٰ�  ��ġ
		glScalef(0.08, 0.08, 0.08);				//�ùٰ� ũ��
		PixelB(0, 0);


		//�ùٰ� �� �߾�
		PixelY(0, 0.2);
		PixelY(0, 0.4);
		PixelY(0, 0.6);
		PixelY(0, 0.8);
		PixelB(0, -0.2);
		PixelG(0, -0.4);
		PixelG(0, -0.6);
		PixelG(0, -0.8);
		//�ùٰ� ����
		PixelG(-1.4, 0.0);
		PixelY(-1.6, 0.0);
		PixelY(-1.8, 0.0);
		PixelY(-2.0, 0.0);
		PixelY(-2.2, 0.0);
		PixelY(-2.4, 0.0);
		PixelY(-2.6, 0.0);
		PixelY(-2.8, 0.0);

		PixelG(-1.4, -0.2);
		PixelG(-1.6, -0.2);
		PixelY(-1.8, -0.2);
		PixelY(-2.0, -0.2);
		PixelY(-2.2, -0.2);
		PixelY(-2.4, -0.2);
		PixelY(-2.6, -0.2);
		PixelY(-2.8, -0.2);

		PixelG(-1.4, -0.4);
		PixelG(-1.6, -0.4);
		PixelG(-1.8, -0.4);
		PixelY(-2.0, -0.4);
		PixelY(-2.2, -0.4);
		PixelY(-2.4, -0.4);
		PixelY(-2.6, -0.4);
		PixelY(-2.8, -0.4);

		PixelG(-1.2, -0.6);
		PixelG(-1.4, -0.6);
		PixelG(-1.6, -0.6);
		PixelY(-1.8, -0.6);
		PixelY(-2.0, -0.6);
		PixelY(-2.2, -0.6);
		PixelY(-2.4, -0.6);
		PixelY(-2.6, -0.6);
		PixelY(-2.8, -0.6);

		PixelG(-1.0, -0.8);
		PixelG(-1.2, -0.8);
		PixelG(-1.4, -0.8);
		PixelG(-1.6, -0.8);
		PixelY(-1.8, -0.8);
		PixelY(-2.0, -0.8);
		PixelY(-2.2, -0.8);
		PixelY(-2.4, -0.8);
		PixelY(-2.6, -0.8);
		PixelY(-2.8, -0.8);

		//�ùٰ� �ٸ�
		PixelG(-1.0, -1.0);
		PixelG(-1.2, -1.0);
		PixelG(-1.4, -1.0);

		PixelG(-0.8, -1.2);
		PixelG(-1.0, -1.2);
		PixelG(-1.2, -1.2);

		PixelG(-0.6, -1.4);
		PixelG(-0.8, -1.4);
		PixelG(-1.0, -1.4);

		PixelY(-2.4, -1.0);
		PixelY(-2.6, -1.0);
		PixelY(-2.8, -1.0);

		PixelY(-2.6, -1.2);
		PixelY(-2.8, -1.2);
		PixelY(-3.0, -1.2);

		PixelY(-2.8, -1.4);
		PixelY(-3.0, -1.4);
		PixelY(-3.2, -1.4);

		//�ùٰ� ����
		PixelY(-3.0, -0.2);
		PixelY(-3.2, -0.2);
		PixelY(-3.2, -0.4);
		PixelY(-3.2, -0.6);
		PixelY(-3.4, -0.6);
		PixelY(-3.4, -0.8);




		//1
		PixelY(0.2, 0.8);
		PixelY(0.2, 0.6);
		PixelG(0.2, 0.4);
		PixelY(0.2, 0.2);
		PixelG(0.2, 0.0);
		PixelB(0.2, -0.2);
		PixelG(0.2, -0.4);
		PixelG(0.2, -0.6);
		PixelG(0.2, -0.8);
		//2
		PixelY(0.4, 0.8);
		PixelY(0.4, 0.6);
		PixelY(0.4, 0.4);
		PixelB(0.4, 0.2);
		PixelG(0.4, 0.0);
		PixelG(0.4, -0.2);
		PixelG(0.4, -0.4);
		PixelG(0.4, -0.6);
		PixelG(0.4, -0.8);
		//3
		PixelY(0.6, 1.0);
		PixelY(0.6, 0.8);
		PixelY(0.6, 0.6);
		PixelY(0.6, 0.4);
		PixelY(0.6, 0.2);
		PixelY(0.6, 0.0);
		PixelG(0.6, -0.2);
		PixelG(0.6, -0.4);
		PixelG(0.6, -0.6);
		PixelG(0.6, -0.8);
		//4
		PixelY(0.8, 1.2);
		PixelG(0.8, 1.0);
		PixelG(0.8, 0.8);
		PixelY(0.8, 0.6);
		PixelY(0.8, 0.4);
		PixelY(0.8, 0.2);
		PixelY(0.8, 0.0);
		PixelY(0.8, -0.2);
		PixelG(0.8, -0.4);
		PixelG(0.8, -0.6);
		PixelY(0.8, -0.8);
		//5
		PixelY(1.0, 0.4);
		PixelY(1.0, 0.2);
		PixelY(1.0, 0.0);
		PixelY(1.0, -0.2);
		PixelY(1.0, -0.4);
		PixelY(1.0, -0.6);
		//6
		PixelY(1.2, 0.2);
		PixelY(1.2, 0.0);
		PixelY(1.2, -0.2);
		PixelY(1.2, -0.4);
		//-1
		PixelY(-0.2, 0.8);
		PixelY(-0.2, 0.6);
		PixelG(-0.2, 0.4);
		PixelY(-0.2, 0.2);
		PixelG(-0.2, 0.0);
		PixelB(-0.2, -0.2);
		PixelG(-0.2, -0.4);
		PixelG(-0.2, -0.6);
		PixelG(-0.2, -0.8);
		//-2
		PixelY(-0.4, 0.8);
		PixelY(-0.4, 0.6);
		PixelY(-0.4, 0.4);
		PixelB(-0.4, 0.2);
		PixelG(-0.4, 0.0);
		PixelG(-0.4, -0.2);
		PixelG(-0.4, -0.4);
		PixelG(-0.4, -0.6);
		PixelG(-0.4, -0.8);
		//-3
		PixelY(-0.6, 1.0);
		PixelY(-0.6, 0.8);
		PixelY(-0.6, 0.6);
		PixelY(-0.6, 0.4);
		PixelY(-0.6, 0.2);
		PixelY(-0.6, 0.0);
		PixelG(-0.6, -0.2);
		PixelG(-0.6, -0.4);
		PixelG(-0.6, -0.6);
		PixelG(-0.6, -0.8);
		//-4
		PixelY(-0.8, 1.2);
		PixelG(-0.8, 1.0);
		PixelG(-0.8, 0.8);
		PixelY(-0.8, 0.6);
		PixelY(-0.8, 0.4);
		PixelY(-0.8, 0.2);
		PixelY(-0.8, 0.0);
		PixelY(-0.8, -0.2);
		PixelG(-0.8, -0.4);
		PixelG(-0.8, -0.6);
		PixelY(-0.8, -0.8);
		//-5
		PixelY(-1.0, 0.4);
		PixelY(-1.0, 0.2);
		PixelY(-1.0, 0.0);
		PixelY(-1.0, -0.2);
		PixelY(-1.0, -0.4);
		PixelY(-1.0, -0.6);
		//-6
		PixelY(-1.2, 0.2);
		PixelY(-1.2, 0.0);
		PixelY(-1.2, -0.2);
		PixelY(-1.2, -0.4);
		glPopMatrix();				//�ùٰ� ��

		glPushMatrix();	//����1 Ǫ��
		glTranslatef(-0.8 + X1, 0.3, 0.0);   //����1 �̵�
		glScalef(0.08, 0.08, 0.08);			//����1 ũ��
		Cloud();
		glPopMatrix();						//����1 ��

		glPushMatrix();	//����2 Ǫ��
		glTranslatef(-0.2 + X2, 0.6, 0.0);   //����2 �̵�
		glScalef(0.08, 0.08, 0.08);			//����2 ũ��
		Cloud();
		glPopMatrix();						//����2 ��

		glPushMatrix();	//����3 Ǫ��
		glTranslatef(0.4 + X3, 0.4, 0.0);   //����3 �̵�
		glScalef(0.08, 0.08, 0.08);			//����3 ũ��
		Cloud();
		glPopMatrix();						//����3 ��

		glPushMatrix();							//�� Ǫ��

		glBegin(GL_POLYGON);
		glColor3f(0.2, 1, 0.6);
		glVertex3f(-10, -0.55, 0);
		glVertex3f(10, -0.55, 0);
		glVertex3f(10, -3, 0);
		glVertex3f(-10, -3, 0);
		glEnd();

		glPopMatrix();								//�� ��

		if (Chk == 1) {											//Chk==1�϶� ��ֹ� ����

			glPushMatrix();				//��ֹ� Ǫ��
			glTranslatef(3.0 + X4, 0.0, 0.0);						//��ֹ� ��ġ
			glScalef(1, 1, 1);							//��ֹ� ũ��

			glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(-0.1, -0.35, 0);
			glVertex3f(0.1, -0.35, 0);
			glVertex3f(0.1, -0.55, 0);
			glVertex3f(-0.1, -0.55, 0);
			glEnd();
			glPopMatrix();								//��ֹ� ��

		}

		if (Chk1 == 3) {											//Chk==3�϶� ��ֹ�2 ����

			glPushMatrix();				//��ֹ�2 Ǫ��
			glTranslatef(3.0 + X5, 0.0, 0.0);						//��ֹ�2 ��ġ
			glScalef(1, 1, 1);							//��ֹ�2 ũ��

			glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(-0.1, -0.35, 0);
			glVertex3f(0.1, -0.35, 0);
			glVertex3f(0.1, -0.55, 0);
			glVertex3f(-0.1, -0.55, 0);
			glEnd();
			glPopMatrix();								//��ֹ�2 ��

		}

		glPushMatrix();															//�����Ѱ� Ǫ��
		if (START == 0) {														//������ ����ǥ��
			glTranslatef(-2.36, -2.7, -0.9);								
			glScalef(3.0, 3.0, 3.0);
		}
		ScoreBig();
		glPopMatrix();														//���� �Ѱ� ��

	glutSwapBuffers();

}
void MyReshape(int w,int h) {
	glViewport(0, 0, w, h);
	GLfloat WidthFactor = (GLfloat)w / (GLfloat)600;
	GLfloat HeightFactor = (GLfloat)h / (GLfloat)600;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0*WidthFactor, 1.0*WidthFactor, -1.0*HeightFactor, 1.0*HeightFactor, -1.0, 1.0);

}

void MySpecial(int key, int x, int y) {
	if (key == 32) {
		Y=Y+1;   
	}
	glutPostRedisplay();
}
void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {}
void MyMouseMove(GLint X, GLint Y) {}
void MyIdle() {}
void JumpTimer(int Value) {															//�ùٰ��� Ÿ�̸Ӱ����� ��
	if (START == 1) {
		if (Y < 0.5) {
			Y = Y + num;
		}
		if (Y >= 0.5) {
			num = -num;
			if (Y > 0) {
				Y = Y - 0.01;
			}
		}
		if (Y < 0) {
			num = 0;
		}
		glutPostRedisplay();
	}
	glutTimerFunc(10, JumpTimer, 1);
}
void CloudTimer1(int Value) {																//����1 Ÿ�̸�					
	if (START == 1) {
		if (X1 > -4.0) {
			X1 = X1 - 0.01;
		}
		if (X1 < -2.5) {
			X1 = X1 + 6.5;
		}
		
		glutPostRedisplay();
	}
	glutTimerFunc(10, CloudTimer1, 1);
}
void CloudTimer2(int Value) {													//����2 Ÿ�̸�
	if (START == 1) {
		if (X2 > -4.0) {
			X2 = X2 - 0.01;
		}
		if (X2 < -3.0) {
			X2 = X2 + 6;
		}
		
		glutPostRedisplay();
	}
	glutTimerFunc(10, CloudTimer2, 1);
}
void CloudTimer3(int Value) {														//����3 Ÿ�̸�
	if (START == 1) {
		if (X3 > -4.0) {
			X3 = X3 - 0.01;
		}
		if (X3 < -3.5) {
			X3 = X3 + 6;
		}
		glutPostRedisplay();
	}
	glutTimerFunc(10, CloudTimer3, 1);
}

void BarrierTimer1(int Value) {																//��ֹ� Ÿ�̸�1

	if (START == 1) {

		srand(time(NULL));
		Random = rand() % 10;
		//cout << Random << endl;
		if (Random == 4) {
			Chk = 1;
		}
		if (Random == 6) {
			Chk = 1;
		}
		if (Random == 9) {
			Chk = 1;
		}
		if (Chk == 1) {
			if (3.0 + X4 > -3.0) {
				X4 = X4 - 0.01;
			}
		}
		if (X4 < -6.0) {
			Chk = 2;
			X4 = X4 + 6.0;
		}


		glutPostRedisplay();
	}
	glutTimerFunc(10, BarrierTimer1, 1);
}

void BarrierTimer2(int Value) {																//��ֹ� Ÿ�̸�2

	if (START == 1) {

		srand(time(NULL));
		Random = rand() % 10;
		//cout << Random << endl;
		if (Random == 1) {
			Chk1 = 3;
		}
		if (Random == 5) {
			Chk1 = 3;
		}
		if (Random == 7) {
			Chk1 = 3;
		}
		if (Chk1 == 3) {
			if (3.0 + X5 > -3.0) {
				X5 = X5 - 0.01;
			}
		}
		if (X5 < -6.0) {
			Chk1 = 2;
			X5 = X5 + 6.0;
		}


		glutPostRedisplay();
	}

		glutTimerFunc(10, BarrierTimer2, 1);
	
	}

void ScoreTimer(int Value) {														//���� Ÿ�̸�
	if (START == 1) {
		Tim++;
		Tim1 = Tim % 10;																	//����1���ڸ�
		Tim10 = (Tim % 100) / 10;																	//����10���ڸ�
		Tim100 = (Tim % 1000) / 100;																//����100���ڸ�
		Tim1000 = (Tim % 10000) / 1000;
		glutPostRedisplay();
	}
	
		glutTimerFunc(300, ScoreTimer, 1);

}
void MyKeyboard(unsigned char Key, int x, int y) {
	if (num == 0) {													//num==0�϶� �����̽��ٸ� ������ �۵���
		if (Key == 32) {													//�����̽��ٸ� �������� num=0.01�� �ٲ��ùٰ��� �ٽ� �����Ѵ�
			num = 0.01;													
		}
	}
}
void MenuProc(int entryID) {																										//�޴� �Լ�

	if (entryID == 1)
		START = 1;
	else if(entryID == 2){
		exit(0);
	}
	glutPostRedisplay();
}
void MenuFunc() {																																	//�޴��Լ�
	GLint MainMenuID = glutCreateMenu(MenuProc);													//���� �޴�
	glutAddMenuEntry("���� ����", 1);
	glutAddMenuEntry("���� ����", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("����");
	glClearColor(0.0, 0.8, 1.0,0.0);

	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);
	glutKeyboardFunc(MyKeyboard);
	glutMouseFunc(MyMouseClick);
	glutMotionFunc(MyMouseMove);
	glutIdleFunc(MyIdle); 
	
	MenuFunc();
		glutTimerFunc(10, CloudTimer1, 1);
		glutTimerFunc(10, CloudTimer2, 1);
		glutTimerFunc(10, CloudTimer3, 1);
		glutTimerFunc(10, JumpTimer, 1);
		glutTimerFunc(300, ScoreTimer, 1);
		glutTimerFunc(10, BarrierTimer1, 1);
		glutTimerFunc(10, BarrierTimer2, 1);

	
	
	glutMainLoop();
	return 0;
}