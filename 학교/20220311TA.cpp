#define _CRT_SECURE_NO_WARNINGS

// 07] inchfmf mm�� ��ȯ�ϴ� ���α׷�
// inch *25.4 == mm
#if 0
#include <stdio.h>

int main(void) {
	float inch = 0, mm = 0;

	printf("��ġ ������ �Է�:");
	scanf("%f", &inch); //inch = 10
	mm = inch * 25.4;
	printf("%f ��ġ = %f mm", inch, mm);

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
	printf("������ ��� = %d", prod);
	
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
	printf("�ﰢ���� ���� = %f", area);

	return 0;
}
#endif

#if 1
#include <stdio.h>

int main(void) {

	float F, C;
	printf("ȭ������ �Է��Ͻÿ�:");
	scanf("%f", F)
}
#if end



