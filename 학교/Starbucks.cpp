#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0
void print_stars() {
	for (int i = 0; i < 30; i++)
		printf("*");
}
int main()
{
	print_stars();
	printf("\nHello World!\n");
	print_stars();
	printf("\n");
	return 0;
}
#endif
#if 0
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	printf("%d", max(10, 30));

	return 0;
}
#endif
#if 0
double maxlf(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	printf("%lf", maxlf(1.029, 2.193));

	return 0;
}
#endif
#if 0
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main() {
	int d_1, d_2;
	printf("정수를 입력하시오: ");
	scanf("%d", &d_1);
	printf("정수를 입력하시오: ");
	scanf("%d", &d_2);

	printf("더 큰값은 %d입니다", max(d_1, d_2));

	return 0;
}
#endif
#if 0
void happyBirthday()
{
	printf("생일축하 합니다!\n생일축하 합니다\n사랑하는 친구의\n생일축하 합니다!\n");
}
int main(void)
{
	happyBirthday();
	return 0;
}
#endif
#if 0
int get_integer()
{
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	return value;
}

int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = get_integer();
	int b = get_integer();
	printf("두수의 합은 %d 입니다", add(a, b));

	return 0;
}
#endif
//** 주목 **
#if 0
int factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}
int main()
{
	int n;
	printf("알고싶은 팩토리얼의 값은? ");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다.", n, factorial(n));
	return 0;
}
#endif
#if 0
void printOptions() //프린트까지만
{
	printf("'c' 섭씨온도에서 화씨온도로 변환\n");
	printf("'f' 화씨온도에서 섭씨온도로 변환\n");
	printf("'q' 종료\n");
}
double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
	char Choice;
	double temp;

	while (1) 
	{
		printOptions();
		printf("메뉴에서 선택하세요. ");
		
		Choice = getchar();

		if (Choice == 'q') 
		{
			break;
		}
		else if (Choice == 'f')
		{
			printf("화씨온도: ");
			scanf("%lf", &temp);
			printf("섭씨온도: %lf\n", F2C(temp));
		}
		else if (Choice == 'c')
		{
			printf("섭씨온도: ");
			scanf("%lf", &temp);
			printf("화씨온도: %lf\n", C2F(temp));
		}
		getchar();
	}
	return 0;
}

#endif
//** 주목 **
#if 0
int factorial(int n){
	long fact = 1;

	for (int i = 1; i <= n; i++) 
	{
		fact = fact * i;
	}
	return fact;
}
int main(void)
{
	int n;
	printf("알고 싶은 팩토리얼의 값은?: ");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다. \n", n, factorial(n));
	return 0;
}
#endif
#if 0
long long factorial(int f)
{

	int result = 1;
		for (int i = 1; i <= f; i++)
			result *= i;
		return result;
}
long long Combination(int n, int r)
{
	return (factorial(n) / factorial(r) * factorial(n - r));
}
int get_integer()
{
	int z;
	printf("정수를 입력하세요: ");
	scanf("%d", &z);
	return z;
}
int main() 
{

	
	int a = get_integer();
	int b = get_integer();
	printf("%dC%d = %lld", a, b, Combination(a, b));

	return 0;
}
#endif
#if 0
#define SEED_MONEY 1000000
int main()
{
	int Money = SEED_MONEY;
	int year = 0;
	while (1)
	{
		year++;
		Money = Money * 1.3;
		if (Money > 10 * SEED_MONEY)
		{
			break;
	}
}
	printf("%d년 후에는 %d원이 됩니다 \n", year, Money);
	return 0;
}
#endif
#if 0
int get_integer()
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	return n;
}
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	n = get_integer();
	if (is_prime(n) == 1 && n != 1)
		printf("%d : 소수입니다\n", n);
	else printf("%d : 소수가 아닙니다.\n", n);

	return 0; // **뜬금포로 음수 출력시 오버플로우** 
}
#endif
#if 0
int get_integer()
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	return n;
}
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0 && n != 1)
			return 0;
	}
	return 1;
}
int main()
{
	int a, b = 0;
	a = get_integer();
	b = get_integer();
	for (int i = 2; a <= i && i <= b; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
#endif

#if 0
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 0; i++)
	{
		if (i % 3 == 0)
			continue;
        
		else
		{
			printf("%d ", i);
			continue;
		}
		
	}
	return 0;
}
#endif

//1501 문제
#if 0
#include <stdio.h>
int num_multiple(int a, int b)
{
	int cnt = 0;
		for (int i = 1; i <= 20; i++)
		{
			if (i % a == 0 && i % b != 0)
				cnt += 1;
		}
			return cnt;
}
int main() 
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", num_multiple(a, b));

}
#endif
//1502
#if 0
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 2; i <= n; i++)
	{
		if (i<8)
			cnt += 1;
		else if (i >= 8)
			cnt -= 1;
	}
	printf("%d", cnt);
	
	return 0;
}
#endif
//1503
#if 0
int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int num_prime(int n)
{
	int cnt = 0;

	for (int i = 2; i <=n; i++)
	{
		if (is_prime(i) != 0)
			cnt += 1;
	}
	return cnt;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", num_prime(n));
	
	return 0;
}
#endif
#if 0
int main()
{
	int n;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n - i >= 0);
		n = n - i;
		cnt += 1;
	}
	printf("%d", cnt);
	
	return 0;
}
#endif
//1503 wiser way
#if 0
int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)//1.i=2  2.i=3 4.i=4 5.i=5
	{
		for (int j = 2; j <= i; j++)//1.j=2 2.j=2 3.j=3 4.j=2 5.j=2
		{
			if (j == i) //cnt=1 이게 왜 소수에요
			{
				cnt++; //1.+1 3.+1
				break;
			}
			else if (i % j == 0) // 2. 4.
			{
				break; //첫번째 for문으로 ㄱㄱㅆ
			}
	}
		}
	printf("%d", cnt);
	return 0;
}

#endif
#if 0
int main()
{
printf("%e", 31203.214213); //float 형식만 가능
//(한자리수).(어쩌구)e+10의지수 3.120321(6자리)e+04


return 0;
}

#endif
//7단원
//02
#if 0
int main()
{
	int n, result = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			result += i;
	}
	printf("%d", result);

	return 0;
}
#endif
//03
#if 0
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1, i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}
	return 0;

}
if switch
for while
#endif

#if 0

#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif