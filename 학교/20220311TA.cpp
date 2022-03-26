#define _CRT_SECURE_NO_WARNINGS

// 07] inchfmf mm로 변환하는 프로그램
// inch *25.4 == mm
#if 0
#include <stdio.h>

int main(void) {
	float inch = 0, mm = 0;

	printf("인치 단위로 입력:");
	scanf("%f", &inch); //inch = 10
	mm = inch * 25.4;
	printf("%f 인치 = %f mm", inch, mm);

	return 0;
}
#endif
#if 0

#include <stdio.h>

int main(void) {

	int x = 0, y = 0, prod = 0;
    
	scanf("%d", &x); 
	scanf("%d", &y); 

	prod = x * y;
	printf("곱셈의 결과 = %d", prod);
	
	return 0;
}
#endif

#if 1
#include <stdio.h>

int main(void) {

	float height = 0, base = 0, area = 0;

	scanf("%f", &base);
	scanf("%f", &height);

	area = base * height * 1/2;
	printf("삼각형의 넓이 = %f", area);

	return 0;
}
#endif

#if 1
#include <stdio.h>

int main(void) {

	float F, C;
	printf("화씨값을 입력하시오:");
	scanf("%f", F)
}
#if end



