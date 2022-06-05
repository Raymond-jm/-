/*
	Chap 9.
*/
// variable

// scope : 나와바리, 구역,

// lifetime : 생존시간...
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
	//d = 쓰레기값
	printf("%d\n", k);
	i = 30; // write
	printf("%d\n", i); // read

	return 0;
} // i's lifetime end
#endif
#if 0

int i; //global variable, 자동초기화 서비스(0으로)
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
// p.384... auto는 생략!!

// static : local variable의 꿈!!! 작은 소망
// global variable 에서의 static: extern 안해 나만쓸거야..
#if 0
void foo(void)
{

	static int d = 10; //함수 종료 시에도 살아남음 zombie

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
// p.386, register 지정자(레지스터에 저장), volatile 지정자(메모리로 다시 가서 가져옴)
// p.391 extern => 다른파일에서 불러올때
#if 0
int main()
{
	register int i = 10;
}
#endif
//397쪽 ,,, 순화호출, recursion, 재귀호출

//함수가 그 안에서 자기 자신을 호출하는것
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