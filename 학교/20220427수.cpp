/*
	Chap 9.
*/
// variable

// scope : ���͹ٸ�, ����,

// lifetime : �����ð�...
#include <stdio.h>

#if 0
int main() {

	int i = 10;

	
	{
		int k = 20;

		k = i;

		printf("%d\n", k);
	}
	i = 30; // write
	printf("%d\n", i); // read
	
	return 0;
} // i's lifetime end
#endif
#if 0
int main() {

	int i = 10;
	int k = 0;
	int d;

	for (int k = 0; k < 10; k++)
	{
		printf("%d\n", k);
		int d;

		d = 10;
		printf("%d\n", d);
	}
	//d = �����Ⱚ
	printf("%d\n", k);
	i = 30; // write
	printf("%d\n", i); // read

	return 0;
} // i's lifetime end
#endif
#if 0

int i; //global variable, �ڵ��ʱ�ȭ ����(0����)
int foo(int k)
{

	int d = 10; //local variable

	return d;
}

int main()
{
	printf("%d\n", i);
	int i = 10;
	int k = 0;
	printf("%d\n", foo(30));

}
#endif
// p.384... auto�� ����!!

// static : local variable�� ��!!! ���� �Ҹ�
// global variable ������ static: extern ���� �������ž�..
#if 0
void foo(void)
{

	static int d = 10; //�Լ� ���� �ÿ��� ��Ƴ��� zombie

	static int i = 10;
	i++;
	printf("%d\n", i);
	return;
}

int main(void)
{
	foo();
	foo();
	foo();

	return 0;
}
#endif
// p.386, register ������(�������Ϳ� ����), volatile ������(�޸𸮷� �ٽ� ���� ������)
// p.391 extern => �ٸ����Ͽ��� �ҷ��ö�
#if 0
int main()
{
	register int i = 10;
}
#endif
//397�� ,,, ��ȭȣ��, recursion, ���ȣ��

//�Լ��� �� �ȿ��� �ڱ� �ڽ��� ȣ���ϴ°�
#if 1
int calcSum(int _n)
{

	if (_n == 1)
	{
		return 1;
	}
		return _n + calcSum(_n - 1);
}
int twoPower(int n)
{
	if (n == 0) 
	{
		return 1;
	
	}
	return 2 * twoPower(n - 1);
}
int fibo(int n) 
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	printf("%d", fibo(1));
	return 0;
}
#endif