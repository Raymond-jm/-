#include <stdio.h>

#if 0
int main() {

	int a = 10;
	//& : address-of operator
	printf("a�� ����ִ� ��: %p \n", &a);

	int* pa; //pointer ���� pa
	
	printf("a�� ��: %d\n", a);
	pa = &a;

	*pa = 0; //*�� ������, read or write

	printf("a�� ��: %d\n", a);


	return 0;
}
#endif
#if 0
int main() {

	char* pc = 0;
	float* pf = 0;
	double* pd = 0;
	int* pi = 0;
	
	int a = 10;
	int b = 100;
	
	int* pa;
	
	*pa = 30000;
	
	//471. ������ �ʱ�ȭ
	int* pa = NULL; //Null poninter,
	int* pb = 0;

	int* pa = (int*)10000;
	// & : address-of operator
	// * : dereference operator, 417��

	/*
	int* pa = &a;
	int* pb = &b;

	int temp = *pa;
	*pa = *pb;
	*pb = temp;*/
}
#endif
#if 0
int main() {
	// p. 484 �������������ڿ� ����������
	int i = 10;
	int* pi = &i;

	printf("i = %d pi = %p\n", i, pi);
	//(*pi)++;
	//�� = �Ʒ�
	int temp = *pi;
	temp++;
	*pi = temp;

	printf("i = %d pi = %p\n", i, pi);
	*pi++;

	pi = pi + 1;
	int temp = *pi;
		// p. 484 ������ ����ȯ
		double f;
		double* pd = &f;
		int* pi;
		pi = (int*)pd;

}
#endif
#if 0
// 485.
// call by value     : ���纻 �ѱ��
// call by reference : ���� �ѱ��

void foo2(int* a) {
	*a = 200;
	return;
}
void foo(int a) {
	a = 200;
	return;
}
void myswap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int a = 10;
	foo(a);
	foo2(&a);
	int b = 300;
	myswap(&a, &b);
	return 0;
}
#endif
#if 1

int main(void) {

	int a[] = { 10, 20, 30 };

	printf("%p\n", a); //�迭�� �̸��� �����Ϳ� ����.

	printf("%d\n", a[0]);
	printf("%d\n", *a);

	printf("%d\n", a[1]);
	printf("%d\n", *(a - 1));
}
#endif