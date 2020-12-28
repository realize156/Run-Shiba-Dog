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


void Score0() {							//점수0

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
void Score1() {							//점수1
	PixelB(0,0.4);
	PixelB(0, 0.2);
	PixelB(0, 0);
	PixelB(0, -0.2);
	PixelB(0, -0.4);

}
void Score2() {									//점수2

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
void Score3() {									//점수3

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
void Score4() {									//점수4

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
void Score5() {									//점수5

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
void Score6() {							//점수6

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
void Score7() {							//점수7

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
void Score8() {							//점수8

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
void Score9() {							//점수9

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
	glPushMatrix();													//점수 총괄 푸쉬

	glPushMatrix();												//점수1 푸쉬

	glTranslatef(0.9, 0.9, 0.0);									//점수1 위치
	glScalef(0.1, 0.1, 0.1);													//점수1 크기

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

	glPopMatrix();												//점수1 팝

	glPushMatrix();												//점수10 푸쉬

	glTranslatef(0.83, 0.9, 0.0);									//점수10 위치
	glScalef(0.1, 0.1, 0.1);													//점수10 크기

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



	glPopMatrix();												//점수10 팝

	glPushMatrix();												//점수100 푸쉬

	glTranslatef(0.76, 0.9, 0.0);									//점수100 위치
	glScalef(0.1, 0.1, 0.1);													//점수100 크기

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
	glPopMatrix();												//점수100 팝

	glPushMatrix();												//점수1000 푸쉬

	glTranslatef(0.69, 0.9, 0.0);									//점수1000 위치
	glScalef(0.1, 0.1, 0.1);													//점수1000 크기

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
	glPopMatrix();												//점수1000 팝
	
	glPopMatrix();					//점수 총괄 팝


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

	if ((((-0.7 + X) <= (3.0 + X4))&&((3.0 + X4) <= (-0.3 + X)))&& (-0.43+Y<=-0.35)) {					//시바견 충돌시 멈춤
		START = 0;
		glPushMatrix();
		glTranslatef(-0.9, -0.9, -0.9);									
		glScalef(10, 10, 10);
		ScoreBig();
		glPopMatrix();
		cout << "GAME OVER " << endl << "YOUR SCORE : " << Tim << endl;
	}
	if ((((-0.7 + X) <= (3.0 + X5)) && ((3.0 + X5) <= (-0.3 + X))) && (-0.43 + Y <= -0.35)) {						//시바견 충돌시 멈춤
		START = 0;
		cout << "GAME OVER " << endl << "YOUR SCORE : " << Tim << endl;
	}
	//cout << int(((-0.4 + X)*0.08) * 100) << "\t" << int((3.0 + X4) * 100);
	
		glPushMatrix();			//시바견 푸시
		glTranslatef(-0.4 + X, -0.43 + Y, 0.0);//시바견  위치
		glScalef(0.08, 0.08, 0.08);				//시바견 크기
		PixelB(0, 0);


		//시바견 얼굴 중앙
		PixelY(0, 0.2);
		PixelY(0, 0.4);
		PixelY(0, 0.6);
		PixelY(0, 0.8);
		PixelB(0, -0.2);
		PixelG(0, -0.4);
		PixelG(0, -0.6);
		PixelG(0, -0.8);
		//시바견 몸통
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

		//시바견 다리
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

		//시바견 꼬리
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
		glPopMatrix();				//시바견 팝

		glPushMatrix();	//구름1 푸쉬
		glTranslatef(-0.8 + X1, 0.3, 0.0);   //구름1 이동
		glScalef(0.08, 0.08, 0.08);			//구름1 크기
		Cloud();
		glPopMatrix();						//구름1 팝

		glPushMatrix();	//구름2 푸쉬
		glTranslatef(-0.2 + X2, 0.6, 0.0);   //구름2 이동
		glScalef(0.08, 0.08, 0.08);			//구름2 크기
		Cloud();
		glPopMatrix();						//구름2 팝

		glPushMatrix();	//구름3 푸쉬
		glTranslatef(0.4 + X3, 0.4, 0.0);   //구름3 이동
		glScalef(0.08, 0.08, 0.08);			//구름3 크기
		Cloud();
		glPopMatrix();						//구름3 팝

		glPushMatrix();							//땅 푸쉬

		glBegin(GL_POLYGON);
		glColor3f(0.2, 1, 0.6);
		glVertex3f(-10, -0.55, 0);
		glVertex3f(10, -0.55, 0);
		glVertex3f(10, -3, 0);
		glVertex3f(-10, -3, 0);
		glEnd();

		glPopMatrix();								//땅 팝

		if (Chk == 1) {											//Chk==1일때 장애물 생성

			glPushMatrix();				//장애물 푸쉬
			glTranslatef(3.0 + X4, 0.0, 0.0);						//장애물 위치
			glScalef(1, 1, 1);							//장애물 크기

			glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(-0.1, -0.35, 0);
			glVertex3f(0.1, -0.35, 0);
			glVertex3f(0.1, -0.55, 0);
			glVertex3f(-0.1, -0.55, 0);
			glEnd();
			glPopMatrix();								//장애물 팝

		}

		if (Chk1 == 3) {											//Chk==3일때 장애물2 생성

			glPushMatrix();				//장애물2 푸쉬
			glTranslatef(3.0 + X5, 0.0, 0.0);						//장애물2 위치
			glScalef(1, 1, 1);							//장애물2 크기

			glBegin(GL_POLYGON);
			glColor3f(1, 0, 0);
			glVertex3f(-0.1, -0.35, 0);
			glVertex3f(0.1, -0.35, 0);
			glVertex3f(0.1, -0.55, 0);
			glVertex3f(-0.1, -0.55, 0);
			glEnd();
			glPopMatrix();								//장애물2 팝

		}

		glPushMatrix();															//점수총괄 푸쉬
		if (START == 0) {														//마지막 점수표시
			glTranslatef(-2.36, -2.7, -0.9);								
			glScalef(3.0, 3.0, 3.0);
		}
		ScoreBig();
		glPopMatrix();														//점수 총괄 팝

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
void JumpTimer(int Value) {															//시바견이 타이머값으로 뜀
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
void CloudTimer1(int Value) {																//구름1 타이머					
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
void CloudTimer2(int Value) {													//구름2 타이머
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
void CloudTimer3(int Value) {														//구름3 타이머
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

void BarrierTimer1(int Value) {																//장애물 타이머1

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

void BarrierTimer2(int Value) {																//장애물 타이머2

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

void ScoreTimer(int Value) {														//점수 타이머
	if (START == 1) {
		Tim++;
		Tim1 = Tim % 10;																	//점수1의자리
		Tim10 = (Tim % 100) / 10;																	//점수10의자리
		Tim100 = (Tim % 1000) / 100;																//점수100의자리
		Tim1000 = (Tim % 10000) / 1000;
		glutPostRedisplay();
	}
	
		glutTimerFunc(300, ScoreTimer, 1);

}
void MyKeyboard(unsigned char Key, int x, int y) {
	if (num == 0) {													//num==0일때 스페이스바를 누르면 작동함
		if (Key == 32) {													//스페이스바를 눌렸을때 num=0.01로 바껴시바견이 다시 점프한다
			num = 0.01;													
		}
	}
}
void MenuProc(int entryID) {																										//메뉴 함수

	if (entryID == 1)
		START = 1;
	else if(entryID == 2){
		exit(0);
	}
	glutPostRedisplay();
}
void MenuFunc() {																																	//메뉴함수
	GLint MainMenuID = glutCreateMenu(MenuProc);													//메인 메뉴
	glutAddMenuEntry("게임 시작", 1);
	glutAddMenuEntry("게임 종료", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("제목");
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