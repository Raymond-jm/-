#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x = 10;

void aaa() {
	static int p = 0;
	p++;
	printf("%d ", p);
}
#if 0
int main() {

	static int a; //�������� (���� ����)
	int x = 20;
	
	//printf("%d", x); // 20

	volatile int n;

	for (int i = 0; i < 10; i++)
	{
		n = i;
	}

	aaa();
	aaa();
	aaa();
	aaa();

	return 0;
}
#endif

// �ϳ���ž
#if 1
char via;
static int count;

void move(int n, char start, char via) {
	printf("%d�� ������ %c���� %c�� �̵�\n", n, start, via);
}
void hanoi(int n, char start, char to, char via ) {
	if (n <= 1) {
		move(1, start, to);
		count++;
	}
	else {
		hanoi(n - 1, start, via, to);
		move(n, start, to);
		hanoi(n - 1, via, to, start);
		count++;
	}
}
int main(){
	int n;
	printf("ž�� ����:");
	scanf("%d", &n);
	hanoi(n, 'A', 'C', 'B');
	printf("�ű� Ƚ�� = %d", count);

	
	return 0;
}
#endif
#if 0
int add(int n) {
	if (n == 1) {
		return 1;
	}
	return n + add(n - 1);
}

int factorial(int n) {
	printf("���� n��: %d\n", n);

	if (n <= 1)
	{
		return 1;
	}

	return n * factorial(n - 1); // n * (n-1) * (n-2) * (n-3) * ... * 1
}
#endif