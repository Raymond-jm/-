#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0
int main() {

	int a = 10;

	printf("%d\n", a);
	printf("%d\n", &a); //100����

	int* p = NULL;

	p = &a;
	printf("%d\n", p); // 100����
	printf("%d\n", *p);//10 //(a�� ������!)
	printf("%d\n", &p); //500����
	// & - �ּ�, * - ��

	a = 20;
	printf("%d\n", a); //20
	printf("%d\n", p); // 100����
	printf("%d\n", *p); // 20

	*p = 50;
	printf("%d\n", a); //50
	printf("%d\n", p); //
	printf("%d\n", *p);

	// a = 50, *a = 50
	//p �� �̿��ؼ� a�� ���� 2�� ���Ѷ�

	//===================================
	*p = *p * 2;

	//===================================
	printf("%d\n", a);

	a = 10;
	int b = 20;

	p = &b; //200
	printf("%d\n", *p); //20
	b = 40;
	printf("%d\n", *p); //40

	
	return 0;
}
#endif
#if 0

int main() {

	int a = 10;
	char c = 'A';

	printf("a�� ������ : %d\n", sizeof(a));
	printf("c�� ������ : %d\n", sizeof(c));

	int* pa = &a;
	char* pc = &c;

	printf("pa�� ������ : %d\n", sizeof(pa));
	printf("pc�� ������ : %d\n", sizeof(pc));

	printf("pa : %d | pa + 1 : %d\n", pa, pa+1);
	printf("pc : %d | pa + 1 : %d\n", pc, pc+1);

	return 0;
}

#endif
#if 1

int main() {
	int a = 10, b = 20, c = NULL;
	printf("�� ] a = %d | b = %d\n", a, b);
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	*pc = *pa;
	*pa = *pb;
	*pb = *pc;

	printf("�� ] a = %d | b = %d\n", a, b);


}
#endif