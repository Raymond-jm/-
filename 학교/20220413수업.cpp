#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Chap. 8 함수

// p.342

// random number generator
// rand()
#include <stdlib.h> // standard library
#include <time.h> // Epoch

// seed

// 로또
#if 0
int main(void) {

	int i;

	srand(time(0));

	for (i = 0; i < 7; i++) {
	printf("%d\n", rand()%45+1);
	}
	return 0;
}
#endif

// random number의 분포
#if 0
int main(void) {

	int i;
	int cnt_0 = 0;
	int cnt_1 = 0;
	int cnt_2 = 0;
	int v = 0;

	srand(time(0));

	for (i = 0; i < 1000000; i++) {
		v = rand() % 3;
		switch (v) {
		case 0:
			cnt_0++;
			break;
		case 1:
			cnt_1++;
			break;
		case 2:
			cnt_2++;
			break;
		}
	}
	printf("%d      %d      %d\n", cnt_0, cnt_1, cnt_2);
	return 0;
}
#endif

// 게임
#if 0
void whoWin(int _me, int _cmptr) {

	if (_me == _cmptr) {
		printf("비겼어..\n");
		return;
	}
	if (_me == 0) { // 사람이 가위를 냈음.
		if (_cmptr == 1) { // 바위 냈네..
			printf("사람 졌어...");
			return;
		}
		else { // 보 냈네..
			printf("사람 이겼네..");
			return;
		}
	}
	if (_me == 1) { // 사람이 바위를 냈음.
		if (_cmptr == 2) { // 보 냈네..
			printf("사람 졌어...");
			return;
		}
		else { // 가위 냈네..
			printf("사람 이겼네..");
			return;
		}
	}
	if (_me == 2) { // 사람이 보를 냈음.
		if (_cmptr == 0) { // 가위 냈네..
			printf("사람 졌어...");
			return;
		}
		else { // 바위 냈네..
			printf("사람이겼네..");
			return;
		}
	}

}


int main(void) {

	// 컴퓨터와 가위, 바위, 보
	// 가위 : 0
	// 바위 : 1
	// 보 : 2

	int me = 0; // 내가 무엇을 낼 것인가?
	int cmptr = 0;

	srand(time(0));

	scanf("%d", &me);

	// 컴퓨터가 뭘 낼 것인가?
	cmptr = rand() % 3;

	// 사람과 컴퓨터 중 누가 이겼는지를 판단해서 메시지 출력
	// void whoWin(int _me, int _cmptr)
	whoWin(me, cmptr);

	return 0;
}
#endif



// p.349 수학함수.
#include <math.h>

#if 0
double cvtDegreeToRadian(double _x) {
	return _x * 3.141592 / 180.0;
}

int main(void) {

	// m의 n승
	// pow ==> power
	// pow(2, 3);
	printf("%f\n", pow(2.0, 3.0));
	
	// sqrt ==> square root --> 근의 공식
	printf("%f\n", sqrt(16.0));

	// sin, cos, tan
	// degree 단위가 아니라, radian을 입력
	// degree --> radian 방법
	// degree * PI / 180.0

	printf("sin 30도 %.2f\n", sin(cvtDegreeToRadian(30.0)));

	return 0;
}
#endif



// 중요!!
#if 1
double cvtDegreeToRadian(double _x) {
	return _x * 3.141592 / 180.0;
}


double calcTreeHeight(double h, double d, double angle) {
	// 이 함수를 짜는 것이 시험문제
	return h + (tan(cvtDegreeToRadian(angle)) * d);
}

int main(void) {

	// p.353 --> 시험문제에 출제하겠음.

	double h = 170.0; // cm
	double d = 600.0; // cm
	double angle = 60.0; // 60도

	// 나무의 높이는?

	printf("나무의 높이는 %.2f cm입니다.\n", calcTreeHeight(h, d, angle));

	return 0;
}
#endif