#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// �迭�� �޸��� ���ӵ� ����

// p. 418
//int aaa[10];
// �߸��� ��
/*int aaa[]; //ũ�Ⱑ ����

int size = 10;
char aaa[size]; //������ ���� �ȵ�

int aaa[-1]; // ���� �ȵ�
int aaa[2.0]; // ������ ����/
*/

#if 0
int main(void) {

	int a, b, c;
	// �迭 ��� ����, 419 ��
	// array element
	int k[3]; //3���� int������ �����.
			  //k[0], k[1], k[2]
			  // k[?] <-----int
	k[2] = 10;//write
	k[0] = k[2]; // 2 read => 0 write
	printf("%d\n", k[0]) //read

	return 0;
}
#endif
// p.423 �ε����� ����
//
// int a[100] : 0 ~ 99
// a[102] a[101] = ??
#if 0
int main(void) {
	//�迭�� �ݺ���
	int a[100];
	int i;
	for (i = 0; i < 100; i++) {
		a[i] = i; // write �迭 ��붧�� ���� ��밡��
	}
	for (i = 0; i < 100; i++) {
		printf("%d\n", a[i+3]); //read 
								// int a[100] : 0 ~ 99
								// a[102] a[101] = ??
	}
}
#endif
#if 0 
int a[3]; //�ڵ� �ʱ�ȭ ����(globla)
int main(void) {
	
	int a[3] = { 1, 2, 3 };
	int a[] = { 1, 2, 3 };
	int a[3] = { 0 };

	int i;

	// p.427... �迭 ��� ������ ����ϴ� ���
	int cnt = sizeof(a) / sizeof(a[0]);

	return 0;
	
}
#endif
#if 0
int main(void) {

	// p. 428
	// �迭�� ����, ��!!
	int a[3] = { 10, 20, 30 };
	int b[3];

	// b = a; //���� �ȵ�.
	// if( a == b) //�̰ŵ� �ȵ�.
}
#endif
#if 0
void foo_1(_k) {
	_k = _k * 2; 
		return;
}
void foo_2(int k[]) {
	k[0] = k[0] * 2;
	k[1] = k[1] * 3;
	k[2] = k[2] * 10;

	return;
}
int main(void) {
	int a[3] = { 1,2,3 };
	foo_2(a);
	printf("%d %d %d\n", a[0], a[1], a[2]); // a = 10; ��ȯ�� ���ؼ� �Լ��� �������..
	return 0;
}
#endif
#if 0
int main(void) {
	// 1���� �迭

	// p. 445 2����...
	int a[10][10]; //100�� 0~9
	a[5][5] = 10;
	//2 ���� �迭�� �ʱ�ȭ
	int a[3][3] = {
		1,2,3,
		4,5,6,
		7,8,9
	}
}
#endif
//tic tac toe
//pass or fial
//�̹� �� �ݿ��ϱ���
// ���� 1. ���и� �����ؼ�, ���� �̰���� ����ϰ�, ���α׷� ����
// ���� 2. ��ǻ�Ͱ� ����ϵ��� �����.

#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
