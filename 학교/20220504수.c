#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 배열은 메모리의 연속된 공간

// p. 418
//int aaa[10];
// 잘못된 에
/*int aaa[]; //크기가 없음

int size = 10;
char aaa[size]; //변수를 쓰면 안됨

int aaa[-1]; // 음수 안됨
int aaa[2.0]; // 정수만 가능/
*/

#if 0
int main(void) {

	int a, b, c;
	// 배열 요소 접근, 419 쪽
	// array element
	int k[3]; //3개의 int변수를 만든다.
			  //k[0], k[1], k[2]
			  // k[?] <-----int
	k[2] = 10;//write
	k[0] = k[2]; // 2 read => 0 write
	printf("%d\n", k[0]) //read

	return 0;
}
#endif
// p.423 인덱스의 범위
//
// int a[100] : 0 ~ 99
// a[102] a[101] = ??
#if 0
int main(void) {
	//배열과 반복문
	int a[100];
	int i;
	for (i = 0; i < 100; i++) {
		a[i] = i; // write 배열 사용때는 변수 사용가능
	}
	for (i = 0; i < 100; i++) {
		printf("%d\n", a[i+3]); //read 
								// int a[100] : 0 ~ 99
								// a[102] a[101] = ??
	}
}
#endif
#if 0 
int a[3]; //자동 초기화 서비스(globla)
int main(void) {
	
	int a[3] = { 1, 2, 3 };
	int a[] = { 1, 2, 3 };
	int a[3] = { 0 };

	int i;

	// p.427... 배열 요소 개수를 계산하는 방법
	int cnt = sizeof(a) / sizeof(a[0]);

	return 0;
	
}
#endif
#if 0
int main(void) {

	// p. 428
	// 배열의 복사, 비교!!
	int a[3] = { 10, 20, 30 };
	int b[3];

	// b = a; //복사 안됨.
	// if( a == b) //이거도 안됨.
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
	printf("%d %d %d\n", a[0], a[1], a[2]); // a = 10; 반환을 안해서 함수랑 상관없음..
	return 0;
}
#endif
#if 0
int main(void) {
	// 1차원 배열

	// p. 445 2차원...
	int a[10][10]; //100개 0~9
	a[5][5] = 10;
	//2 차원 배열의 초기화
	int a[3][3] = {
		1,2,3,
		4,5,6,
		7,8,9
	}
}
#endif
//tic tac toe
//pass or fial
//이번 주 금요일까지
// 숙제 1. 승패를 판정해서, 누가 이겼는지 출력하고, 프로그램 종료
// 숙제 2. 컴퓨터가 상대하도록 만든다.

#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
