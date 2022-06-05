#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20220519 새벽스터디
//교재연습
//304
#if 0
#include <stdlib.h>
#include <time.h>

int main(void) {

	int x, y, answer, i;

	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0;
}

#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int initial_money = 250
	int goal = 250;
	int wins = 0;
	float posb = 0.1;


		for (int i = 1; i < 10000; i++) {
			int cash = initial_money;
			while (cash > 0 && cash < goal) {
				if ((double)rand() / RAND_MAX < posb) cash++;
				else cash--;
			}
			if (cash == goal) wins++;
		}
		printf("초기금액: %d", initial_money);
		printf("목표금액: %d", goal);
		printf("100번 중 %d번 성공", wins);

		return 0;
}

#endif
//pi 계산 1
#if 0
int main() {
	int loop_cnt;
	double son = 4.0;
	double mom = 1.0;
	double sum = 0;
	printf("반복횟수: ");
	scanf("%d", &loop_cnt);
	while (loop_cnt > 0) {
		sum = sum + son / mom;
		son = son * -1.0;
		mom = mom + 2.0;
		--loop_cnt;
	}
	printf("%.70f", sum);

	return 0;
}
#endif
//pi 계산 2
#if 0
int main() {

	int divisor;
	double sum;
	int loop_cnt;
	divisor = 2.00;
	sum = 3.00;
	scanf("%d", &loop_cnt);

	while (loop_cnt > 0) {
		sum += 4.00 / (double)(divisor * (divisor+1) * (divisor+2));
		divisor += 2;
		--loop_cnt;
		printf("%0.10f\n", sum);
	}
	printf("pi = %lf", sum);
	
	return 0;
}
#endif
//동전던지기게임
#if 0
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main() {
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));
	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1)
			heads++;
		else tails++;
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d\n", tails);
	return 0;
}
int coin_toss() {
	if (rand() % 2 == 1)
		return 0;
	else
		return 1;
}
#endif
//나무 높이 측정
#if 0
#include <math.h>
#define pi 3.141592
int main() {
	
	double A, B, C, H, rad;

	printf("나무와의 거리(m): ");
	scanf("%lf", &C);
	printf("측정자의 키(m): ");
	scanf("%lf", &B);
	printf("각도(degree): ");
	scanf("%lf", &A);
	rad = A * (pi / 180);
	H = B + tan(rad) * C;
	printf("나무의 높이는: %lf", H);

	return 0;
}
#endif
//궁금해서 해보는 삼각함수 그리기
#if 0
#include <windows.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592
double rad(double);
int main() {
	int degree, x, y;
	double radian, result;

	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 500, 200);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);

	for (degree = 0; degree <= 360; degree++)
	{
		result = sin(rad((double)degree));
		x = degree + 30;
		y = 200 - (int)(100.0 * result);
		SetPixel(hdc, x, y, RGB(255, 051, 102));
	}
	return 0;

}

double rad(double degree)
{
	return PI * degree / 180.0;
}
#endif
//통장잔고
#if 0
void save(int amount) {

	static long balance = 0;

	if (amount >= 0)
		printf("%d \t\t", amount);
	else
		printf("\t %d \t", -amount);

	balance += amount;
	printf("%d \n", balance);
}

int main() {
	printf("=========================\n");
	printf("입금\t 출금\t 잔고\t\n");
	printf("=========================\n");
	save(10000);
	save(-1000);
	save(20000);
	save(-30000);
	save(20000);
	printf("=========================\n");

	return 0;
}
#endif
//극장예약프로그램
#if 0
#define SIZE 10

int main() {
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 }; // 모든 배열 요소 초기화

	while (1) {
		printf("좌석을 예약하시겠습니까? (y 또는 n) ");
		scanf(" %c", &ans1); //y or n 문자 입력받음

		if (ans1 == 'n') {
			break;
		}


		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10 \n");
		printf("----------------------\n");

		for (i = 0; i < SIZE; i++) {
			printf(" %d", seats[i]);
		}
		printf("\n");
		// 자리 예약 여부 확인(0 / 1)

		printf("몇번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans2);

		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("예약 완료\n");
		}
		else {
			printf("이미 예약된 자리입니다.\n");
		}

		//while문이어서 다시 처음으로 반복
	}
	return 0;
}
#endif
//p. 434 학생성적 평균 저장
#if 0
#include <stdio.h>
#define STUDENTS 10

int get_average(int scores[], int size);

int main() {

	int scores[STUDENTS] = { 1,2,3,4,5,30,40,50,60,70};
	int avg;

	avg = get_average(scores, STUDENTS);
	printf("평균은 %d입니다.\n", avg);

	return 0;
}
int get_average(int scores[], int size) {

	int i;
	int sum = 0;

	for (i = 0; i < size; i++) sum += scores[i];

	return sum / size;
}
#endif
#if 0
int main() {

	int list[7] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < 7; i++)
		++list[i];

	for (int i = 0; i < 7; i++)
		printf("%d", list[6]);

	return 0;
}
#endif
//9 - 1 written by Tim
#if 0
#if 1
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("덧셈 총 %d번 실행.\n", cnt);
	printf("연산 결과 : %d\n", a + b);
}

void sub(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("뺼셈 총 %d번 실행.\n", cnt);
	printf("연산 결과 : %d\n", a - b);
}

void mul(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("곱셈 총 %d번 실행.\n", cnt);
	printf("연산 결과 : %d\n", a * b);
}

void divide(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("나눗셈 총 %d번 실행.\n", cnt);
	printf("연산 결과 : %d\n", a / b);
}


int main(void) {

	int x, y;
	char z;

	while (1) {
		printf("값을 입력하시오. : ");
		scanf("%d %c %d", &x, &z, &y);
		switch (z) {

		case'+':
			add(x, y);
			break;

		case'-':
			sub(x, y);
			break;

		case'*':
			mul(x, y);
			break;

		case'/':
			divide(x, y);
			break;

		}

	}

	return 0;
}
#endif
#endif
//☆☆☆☆☆☆☆selection sort ☆☆☆☆☆☆☆
#if 1
#include <stdio.h>
#define SIZE 10
int main() {

	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least]) least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);

	return 0;
}
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif