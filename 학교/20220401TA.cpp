#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
온라인 저지 1078: [문법-조건/선택실행구조] 달 입력 받아 계절 출력하기
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1078
*/

#define _CRT_SECURE_NO_WARNINGS

#if 1
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	switch (n) {
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;

	case 6:
	case 7:
	case 8:
		printf("summer");
		break;

	case 9:
	case 10:
	case 11:
		printf("fall");
		break;

	case 12:
	case 1:
	case 2:
		printf("winter");
		break;

	}

	return 0;
}
#endif


//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	if (n == 12 || n == 1 || n == 2) {
//		printf("winter");
//	}
//	else if (n == 3 || n == 4 || n == 5) {
//		printf("spring");
//	}
//	else if (n == 6 || n == 7 || n == 8) {
//		printf("summer");
//	}
//	else if (n == 9 || n == 10 || n == 11) {
//		printf("fall");
//	}
//
//	return 0;
//} 
25  Week 05 / OJ1085.c
@@ - 0, 0 + 1, 25 @@
/*
온라인 저지 1085: [문법-반복실행구조] 정수 한 개 입력받아 그 수까지 출력하기
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1085
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("%d\n", i);
	}/*
온라인 저지 1085: [문법-반복실행구조] 정수 한 개 입력받아 그 수까지 출력하기
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1085
*/

#define _CRT_SECURE_NO_WARNINGS

	return 0;
}

23  Week 05 / OJ1097.c
@@ - 0, 0 + 1, 23 @@
/*
온라인 저지 1097: [문법-종합] 3의 배수는 통과?
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1097
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
163  Week 05 / ch6.c
@@ - 0, 0 + 1, 163 @@
/*
	============================================
	chapter6. 조건문
	2022-04-01
	=============================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// 정수 하나를 입력받아 홀수와 짝수를 구별하는 프로그램 
// p.234
#if 0
int main() {
	int number;

	scanf("%d", &number);

	// ==============================
	if (number % 2 == 0) {
		printf("짝수입니다\n");
	}
	else {
		printf("홀수입니다.\n");
	}
	// ==============================

	return 0;
}
#endif




// 연속 if문 p.239
// 정수 타입의 성적을 입력받아 학점을 결정하는 프로그램
#if 0
int main() {
	int score;

	scanf("%d", &score);

	// ==============================
	if (score >= 90) {
		printf("당신의 학점은 A\n");
	}
	else if (score >= 80) {
		printf("당신의 학점은 B\n");
	}
	else {
		printf("아악 귀찮으니까 이 아래는 그냥 F받아!\n");
	}
	// ==============================

	return 0;
}
#endif



// 문자 분류 프로그램 p.240
// char 타입의 문자를 하나 입력받아 대문자, 소문자, 숫자, 기타문자로 구분하기
#if 0
int main() {
	char ch;

	scanf("%c", &ch);

	// ==============================
	if (ch >= 'A' && ch <= 'Z') {
		printf("대문자에오!");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("소문자에오!");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("숫자에오!");
	}
	else {
		printf("기타문자에오!");
	}
	// ==============================

	return 0;
}
#endif



// switch 문으로 산술계산기 만들기 p.251
#if 1
int main() {
	char op;
	int x, y, result = 0;

	printf("수식을 입력하시오 (예: 2+5) : \n >>");

	// ==================================================
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		printf("지원되지 않는 연산자 입니다.\n");
		break;

	}
	printf("%d %c %d = %d", x, op, y, result);

	// ==================================================
	return 0;
}
#endif


// switch 문으로 산술계산기 만들기 p.251
#if 1
int main() {
	char op;
	int x, y, result = 0;

	printf("수식을 입력하시오 (예: 2+5) : \n >>");

	// ==================================================
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		printf("지원되지 않는 연산자 입니다.\n");
		break;

	}
	printf("%d %c %d = %d", x, op, y, result);

	// ==================================================
	return 0;
}
#endif 
101  Week 05 / ch7.c
@@ - 0, 0 + 1, 101 @@
/*
	============================================
	chapter7. 반복문
	2022-04-01
	=============================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//  while 에서 더망쳐~
#if 0
int main() {
	int i = 0;

	while (i < 10) {
		printf("i는 %d!\n", i);
		i++;
	}

	return 0;
}
#endif




// 두 수를 입력받아 최대공약수 찾기 (p.276)
// 큰 수가 먼저 입력된다고 가정한다!
#if 0
int main() {
	int x, y; //입력받을 두 수 ( x >= y 라고 가정)
	int r;

	scanf("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대 공약수는 %d\n", x);
	return 0;
}
#endif


// do-while
#if 0
int main() {
	int i = 1000;

	do {
		//printf("일단 한번은 실행해준다!\n");
		printf("i의 값은 %d\n", i);
		i++;
	} while (i < 3);

	return 0;
}
#endif


// for 문
// 정수 하나를 입력받아 팩토리얼 값 계산하기
// n! = 1*2*3* ...* n
#if 0
int main() {

	double fact = 1;
	int n; // 입력받을 정수

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	printf("%d!은 %d입니다.\n", n, fact);

	return 0;
}
#endif


// break, continue
int main() {

	for (int i = 1; i < 10; i++)
	{
		if (i % 3 == 0) {
			printf("%d 는 3의 배수입니다\n", i);
			//break;
			//continue;
		}
		printf("%d는 3의배수가 아닙니다!\n", i);
	}
}