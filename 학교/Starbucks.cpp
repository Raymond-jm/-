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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &d_1);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &d_2);

	printf("�� ū���� %d�Դϴ�", max(d_1, d_2));

	return 0;
}
#endif
#if 0
void happyBirthday()
{
	printf("�������� �մϴ�!\n�������� �մϴ�\n����ϴ� ģ����\n�������� �մϴ�!\n");
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
	printf("������ �Է��Ͻÿ�: ");
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
	printf("�μ��� ���� %d �Դϴ�", add(a, b));

	return 0;
}
#endif
//** �ָ� **
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
	printf("�˰���� ���丮���� ����? ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�.", n, factorial(n));
	return 0;
}
#endif
#if 0
void printOptions() //����Ʈ������
{
	printf("'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf("'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf("'q' ����\n");
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
		printf("�޴����� �����ϼ���. ");
		
		Choice = getchar();

		if (Choice == 'q') 
		{
			break;
		}
		else if (Choice == 'f')
		{
			printf("ȭ���µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf\n", F2C(temp));
		}
		else if (Choice == 'c')
		{
			printf("�����µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf\n", C2F(temp));
		}
		getchar();
	}
	return 0;
}

#endif
//** �ָ� **
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
	printf("�˰� ���� ���丮���� ����?: ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
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
	printf("������ �Է��ϼ���: ");
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
	printf("%d�� �Ŀ��� %d���� �˴ϴ� \n", year, Money);
	return 0;
}
#endif
#if 0
int get_integer()
{
	int n;
	printf("������ �Է��ϼ���: ");
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
		printf("%d : �Ҽ��Դϴ�\n", n);
	else printf("%d : �Ҽ��� �ƴմϴ�.\n", n);

	return 0; // **������� ���� ��½� �����÷ο�** 
}
#endif
#if 0
int get_integer()
{
	int n;
	printf("������ �Է��ϼ���: ");
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

//1501 ����
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
			if (j == i) //cnt=1 �̰� �� �Ҽ�����
			{
				cnt++; //1.+1 3.+1
				break;
			}
			else if (i % j == 0) // 2. 4.
			{
				break; //ù��° for������ ������
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
printf("%e", 31203.214213); //float ���ĸ� ����
//(���ڸ���).(��¼��)e+10������ 3.120321(6�ڸ�)e+04


return 0;
}

#endif
//7�ܿ�
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