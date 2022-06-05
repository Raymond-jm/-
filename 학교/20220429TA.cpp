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

	static int a; //지역변수 (로컬 변수)
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

// 하노이탑
#if 1
char via;
static int count;

void move(int n, char start, char via) {
	printf("%d번 원반을 %c에서 %c로 이동\n", n, start, via);
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
	printf("탑의 층수:");
	scanf("%d", &n);
	hanoi(n, 'A', 'C', 'B');
	printf("옮긴 횟수 = %d", count);

	
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
	printf("지금 n값: %d\n", n);

	if (n <= 1)
	{
		return 1;
	}

	return n * factorial(n - 1); // n * (n-1) * (n-2) * (n-3) * ... * 1
}
#endif