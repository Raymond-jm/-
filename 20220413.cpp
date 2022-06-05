#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Chap. 8 �Լ�

// p.342

// random number generator
// rand()
#include <stdlib.h> // standard library
#include <time.h> // Epoch

// seed

// �ζ�
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

// random number�� ����
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

// ����
#if 0
void whoWin(int _me, int _cmptr) {

	if (_me == _cmptr) {
		printf("����..\n");
		return;
	}
	if (_me == 0) { // ����� ������ ����.
		if (_cmptr == 1) { // ���� �³�..
			printf("��� ����...");
			return;
		}
		else { // �� �³�..
			printf("��� �̰��..");
			return;
		}
	}
	if (_me == 1) { // ����� ������ ����.
		if (_cmptr == 2) { // �� �³�..
			printf("��� ����...");
			return;
		}
		else { // ���� �³�..
			printf("��� �̰��..");
			return;
		}
	}
	if (_me == 2) { // ����� ���� ����.
		if (_cmptr == 0) { // ���� �³�..
			printf("��� ����...");
			return;
		}
		else { // ���� �³�..
			printf("����̰��..");
			return;
		}
	}

}


int main(void) {

	// ��ǻ�Ϳ� ����, ����, ��
	// ���� : 0
	// ���� : 1
	// �� : 2

	int me = 0; // ���� ������ �� ���ΰ�?
	int cmptr = 0;

	srand(time(0));

	scanf("%d", &me);

	// ��ǻ�Ͱ� �� �� ���ΰ�?
	cmptr = rand() % 3;

	// ����� ��ǻ�� �� ���� �̰������ �Ǵ��ؼ� �޽��� ���
	// void whoWin(int _me, int _cmptr)
	whoWin(me, cmptr);

	return 0;
}
#endif



// p.349 �����Լ�.
#include <math.h>

#if 0
double cvtDegreeToRadian(double _x) {
	return _x * 3.141592 / 180.0;
}

int main(void) {

	// m�� n��
	// pow ==> power
	// pow(2, 3);
	printf("%f\n", pow(2.0, 3.0));
	
	// sqrt ==> square root --> ���� ����
	printf("%f\n", sqrt(16.0));

	// sin, cos, tan
	// degree ������ �ƴ϶�, radian�� �Է�
	// degree --> radian ���
	// degree * PI / 180.0

	printf("sin 30�� %.2f\n", sin(cvtDegreeToRadian(30.0)));

	return 0;
}
#endif



// �߿�!!
#if 1
double cvtDegreeToRadian(double _x) {
	return _x * 3.141592 / 180.0;
}


double calcTreeHeight(double h, double d, double angle) {
	// �� �Լ��� ¥�� ���� ���蹮��
	return h + (tan(cvtDegreeToRadian(angle)) * d);
}

int main(void) {

	// p.353 --> ���蹮���� �����ϰ���.

	double h = 170.0; // cm
	double d = 600.0; // cm
	double angle = 60.0; // 60��

	// ������ ���̴�?

	printf("������ ���̴� %.2f cm�Դϴ�.\n", calcTreeHeight(h, d, angle));

	return 0;
}
#endif