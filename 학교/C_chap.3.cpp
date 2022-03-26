#if 0
#include <stdio.h>

int main(void)
{
    printf("Hello world!\nKim Chulsoo");
	printf("사과\n오렌지\n포도");
	
    return 0;
}
#endif

/*형식 지정자
%d 정수를 10진수로 입력
%f 실수
%lf double float
%c 문자 형태로 입력한다.
%s 문자열 형태로 입력한다.*/
#define _CRT_SECURE_NO_WARNINGS
#if 0
//두수의합 프로그램
#include <stdio.h>
int main(void)
{
	int x, y, sum;
	printf("첫 번째 숫자를 입력하시오:");
	scanf("%d", &x);

	printf("두 번째 숫자를 입력하시요:");
	scanf("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d\n", sum);
	return 0;
}
#endif

#if 0
//연봉계산프로그램
#include <stdio.h>

int main(void) {

	int ysalary, msalary;

	printf("연봉을 입력하시오(단위: 만원):");
	scanf("%d", &ysalary);

	msalary = ysalary/12;
	printf("월수령액(단위: 만원): %d", msalary);
	
	
	return 0;
}
#endif
#if 0
//원의 넓이 프로그램
#include <stdio.h>

int main(void) {

	float radius, area = 0.0;
	float pi = 3.141592;

	printf("반지름을 입력하시오:");
	scanf("%f", &radius);

	area = radius * radius * pi;

	printf("원의 면적:%f\n", area);
	return 0;
}
#endif

#if 0
//환율계산 프로그램
#include <stdio.h>

int main(void)
{
	double rate, usd;
	int krw;

	printf("환율을 입력하시오:");
	scanf("%lf", &rate);

	printf("원화금액을 입력하시오:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main(void) {
//사각형의 둘레와 면적
	double w, h, area, perimeter;

	printf("밑변:");
	scanf("%lf", &w);

	printf("높이:");
	scanf("%lf", &h);

	perimeter = (w + h) * 2;
	area = w * h;

	printf("사각형의 둘레: %lf\n사각형의 넓이:%lf", perimeter, area);

	return 0;
}
#endif
/* #은 전처리기, #include <헤더파일>
보기 편하게 언제든지 들여쓰기, 띄어쓰기 및 빈 줄 가능
*/
