#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
날짜 20220311
작성자 : Ray
*/
int main(void) {

	
	
	//문자: char
	//정수: int, short, long(2배), long long(long보다 긺 지원x)
	//실수: float, double(2배;정밀), long double(double보다 긺 지원x)
	//변수는 사용되기 전에 선언되어야 한다.
	int x, y, sum;

	int x; //<----선언
	x = 100; //<---사용

	//변수초기화
	//선언 후 사용전에는 쓰레기 값(garbage value)을 가진다...

	y = 20 * x;

	x = 10; // 이러면 y는 쓰레기값... 요즘 나오는 언어들은 변수 초기화가 자동으로 된다...

	int x = 0; //변수초기화
	
	// +, -, *, /, %(modulo)
	
	printf("%d", x); // %d: format specifier, 형식 지정자
	// %f, float
	// %c, character 
	// %s, string 문자열

	//scanf <-----> printf
    // scanf
	int x = 0;
	scanf("%d", &x) //&기호 붙여야함

	//\n : newline character
	printf("입력하신 숫자는 %d입니다.\n", x)
	return 0;
}