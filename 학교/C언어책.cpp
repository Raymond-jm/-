#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//p.88
#if 0
int main(void) {

	printf("�̸�: ȫ�浿\n����: 21��\n�ּ�: ���� 200����\n");
	printf("Hello\nC\nProgrammers!\n");
	printf("**********************************************\n\t\t����Ʈ\n**********************************************\n\n**********************************************\n\t\t�а�: ��ǻ�Ͱ��а�\n\t\t�й�: 20180001\n\t\t����: ȫ�浿\n*******************************************\n");
	printf("sun\tmon\ttue\twed\tthu\tfri\tsat\n1\t2\t3\t4\t5\t6\t7\n8\t9\t10\t11\t12\t13\t14\n15\t16\t18\t19\t20\t21\t22\n23\t24\t25\t26\t27\t28\t29\n30\t31\n");
	printf("7+8=%d \n", 7 + 8);
	printf("7-8=%d \n", 7 - 8);
	printf("7*8=%d \n", 7 * 8);
	printf("7/8=%d \n", 7 / 8);
	
	return 0;
}
#endif
//p.124, 125
//01
#if 0
int main(void) {
	
	int x, y, z;
	
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &y); 
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%d", &z);
	float sum = x + y + z;	
	float avg= (x + y + z) / 3;
	printf("���� %f�̰� ����� %f �Դϴ�", sum, avg);

	return 0;
}
#endif
//02
#if 0
int main(void) {

	float mile = 0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);
	
	float meter = mile * 1609;
	printf("%f������ %f�����Դϴ�", mile, meter);
	
	return 0;
}
#endif
//03
#if 0
int main(void) {
	
	float base, area, height = 0;
	printf("�ﰢ���� �غ�: ");
	scanf("%f", &base);
	printf("�ﰢ���� ����: ");
	scanf("%f", &height);

	area = base * height * 0.5;
	printf("�ﰢ���� ����: %f", area);
}
#endif
//04
#if 0
int main(void) {
	double F, C;
	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &F);
	
	C = 5.0 / 9.0 * (F - 32.0);
	printf("�������� %lf�� �Դϴ�", C);

	return 0;
}
#endif
//05
#if 0
int main(void) {
	float x;
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &x);

	float result = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %f", result);

	return 0;
}
#endif
//06
#if 0
int main(void) {
	double weight_on_earth;
	printf("�����Ը� �Է��ϼ���(����: Kg): ");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon = weight_on_earth * 0.17;
	printf("�޿����� �����Դ� %lfkg�Դϴ�", weight_on_moon);

	return 0;
}
#endif
//p.168,169
//01
#if 0
int main(void) {

	float a;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &a);
	printf("�Ǽ��������δ� %f�Դϴ�", a);
	printf("�����������δ� %e�Դϴ�", a);

	return 0;
}
#endif
//02
#if 0
int main(void) {
	
	int data = 0;
	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &data);
	printf("%#o\n", data);
	printf("%d\n", data);
	printf("%#x\n", data);

	return 0;
}
#endif
//03
#if 0
int main(void) {

	int x, y, z;
	x = 10;
	y = 20;
	printf("x = %d y = %d"\n, x, y);
	z = y;
	y = x;
	x = z;
	printf("x = %d y = %d", x, y);

	return 0;
	
}
#endif
//04
#if 0
int main(void) {
	
	double garo, sero, nopi;
	
	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &garo, &sero, &nopi);
	
	double V = garo * sero * nopi;
	printf("������ ���Ǵ� %lf", V);

	return 0;
}
#endif
//05
#if 0
int main(void) {

	double pyeong = 0;
	const double SQMETER_PER_PYEONG = 3.3058;
	printf("���� �Է��ϼ���: ");
	scanf("%lf", &pyeong);

	double PSQmeter = SQMETER_PER_PYEONG * pyeong;
	printf("%lf�������Դϴ�.", PSQmeter);

	return 0;

}
#endif
//06
#if 0
int main(void) {
	
	printf("%lf", 3.32e-3 + 9.76e-8);

	return 0;

}
#endif
//07
#if 0
int main(void) {
	double m, v, E_k;
	printf("����(kg): ");
	scanf("%lf", &m);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	E_k = m * v * v /2.0;
	printf("�������: %lf", E_k);

	return 0;
}
#endif
//08
#if 0
int main(void) {
	int Ascii = 0;
	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &Ascii);

	printf("����:%c�Դϴ�", Ascii);
	return 0;

}
#endif
//09
#if 0
int main(void) {
	char a = 'a';
	printf("%c %c %c", a + 1, a + 2, a + 3); //b c d
	return 0;

}
#endif
//10
#if 0
int main(void) {
	printf("\a");
	printf("\aȭ�簡 �߻��Ͽ����ϴ�.\a");
}
#endif
//11
#if 0
int main(void) {

	printf("\"ASCII code\", 'A', 'B', 'C'\n\\t \\a \\n");
}
#endif
//220, 221, 222
//01
#if 0
int main(void) {
	int a, b;
	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);
	printf("��:%d ������:%d", a / b, a % b);

	return 0;
}
#endif
//02
#if 0
int main(void) {
	double a, b;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &a, &b);

	printf("%lf %lf %lf %lf", a + b, a - b, a * b, a / b);

	return 0;
}
#endif
//03
#if 0
int main(void) {
	int a, b, c, max;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
	printf("�ִ밪:%d", max);
	return 0;
}
#endif
//03 ���ǹ����� Ǯ��
#if 0
int main(void) {
	int a, b, c;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a > b) && (a > c)) {
		printf("%d", a);
	}
	if ((b > a) && (b > c)) {
		printf("%d", b);
	}
	if ((c > a) && (c > b)) {
	printf("%d", c);
}

	return 0;
}
#endif
//04
#if 0
int main(void) {
	double height;
	double inch, feet;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%lf", &height);
	inch = height/2.54;
	feet = inch / 12;
	
	printf("%lfcm�� %lf��Ʈ %lf��ġ�Դϴ�", height, feet, inch);

	return 0;
}
#endif
//05
#if 0
int main(void) {
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%int",&a);
	printf("���� �ڸ�: %d ", a / 10);
	printf("���� �ڸ�: %d", a % 10);

	return 0;
}
#endif
//06
#if 0
int main(void) {
	int a;
	int a_2;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &a);
	a_2 = ~a + 1;
	printf("2�� ����:%d", a_2);

	return 0;
}
#endif
//07
#if 0
int main(void) {
	int x, y, a;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &y);
	a = x << y;
	printf("%d<<%d�� ��: %d", x, y, a);

	return 0;
}
#endif
//08
#if 0
#define Pi 3.141592
int main(void) {
	float r,S,V;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &r);
	S = 4.0 * Pi * r * r;
	V = 4.0 / 3.0 * Pi * r * r * r;

	printf("ǥ������ %f �Դϴ�.\nü���� %f �Դϴ�.", S, V);

	return 0;
}
#endif
//09
#if 0
int main(void) {
	double AC, AE, BC, DE;
	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &BC);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &AC);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &AE);

	DE = AE * BC / AC;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", DE);

	return 0;
}
#endif
//10
#if 0
int main(void) {
	double x, y;
	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%lf", &y);

	(x > 0 && y > 0) ? printf("1��и�") : ((x < 0 && y>0) ? printf("2��и�") : ((x < 0 && y < 0) ? printf("3��и�") : printf("4��и�")));
	
	return 0;
}
#endif
//11
#if 0
#define pi 3.141592
int main(void) {
	double d, angle, r;
	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf",&d);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &angle);
	r = 360/angle*d / (2 * pi);

	printf("������ �������� %lf�Դϴ�", r);

	return 0;
}
#endif
//258, 259, 260
//01
#if 0

int main(void) {
	
	char vowel;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &vowel);

	switch (vowel)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("�����Դϴ�");
		break;
	default:
		printf("�����Դϴ�");
	}
	return 0;
}
#endif
//02
#if 0
int main(void) {
	int a, b;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &b);

	if (a % b == 0) {
		printf("����Դϴ�.");
	}
	else printf("����� �ƴմϴ�");
	
	return 0;
}
#endif
//03
#if 0
int main(void) {
	int a, b, c, d;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c) {
		d = a;
	}
	else if (b < a && b < c) {
		d = b;
	}
	else if (c < a && c < b) {
		d = c;
	}
	printf("���� ���� ������ %d", d);
	return 0;
}
#endif
#include <stdlib.h>
//04 (imcomp)
#if 0
int main(void) {
	int a;
	printf("�����Ͻÿ�(1- ���� 2- ���� 3- ��) : ");
	scanf("%d", &a);

	int random = rand() % 3;
		if (random == a)
			printf("�����ϴ�\n");
		else if (random > a && random != 3)
				printf("�����ϴ�\n");
		else 
				printf("�̰���ϴ�\n");
		printf("��ǻ�Ͱ� �� ��: %d\n", random);
	return 0;
}
#endif
//05
#if 0
int main(void){
	double height, age;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%lf", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &age);

	if (height >= 140 && age >= 10) {
		printf("Ÿ�� �����ϴ�");
	}
	else {
		printf("�˼��մϴ�");
	}
		
	return 0;
}
#endif
//06
#if 0
int main(void) {
	int month;
	printf("����ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("Jun");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sep");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	}
	
	return 0;
}
#endif
//07
#if 0
int main(void) {
	double h, w;
	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%lf %lf", &h, &w);

	if (w > (h - 100) * 0.9) {
		printf("��ü���Դϴ�");
}
	else printf("�����Դϴ�");
	
	return 0;
}
#endif
//08
#if 0
int main(void) {
	int time, age, price;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);
	if (time < 17 && age>12 && age < 65) {
		printf("����� 34000�Դϴ�");
	}
	else if (time < 17 && age >= 3 && age <= 12 || age >= 65) {
		printf("����� 25000�Դϴ�");
	}
	else if (time >= 17)
		printf("����� 10000�Դϴ�");

	return 0;
}
#endif
//09
#if 0
int main(void) {
	double x;
	printf("x�� ���� �Է��Ͻÿ�:");
	scanf("%lf", &x);
	if (x <= 0)
		printf("f(x)�� ���� %lf", x * x - 9 * x + 2);
	else printf("f(x)�� ���� %lf", 7 * x + 2);
	
	return 0;
}
#endif
//11
#if 0
int main(void) {
	char a;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &a);

	switch (a) {
	case 't':
	case 'T':
		printf("Triangle");
		break;
	case 'C':
	case 'c':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		
	}
	return 0;
}
#endif
//average
#if 0
int main(void) {
	int grade, n;
	double sum, average;
	n = 0;
	sum = 0;
	grade = 0;
	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	while (grade >= 0) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
		
	}
	sum = sum - grade;
	n--;
	average = sum / n;

	printf("�л����� %d���̸�, ����� %lf�Դϴ�", n, average);
	
	return 0;
}
#endif
#if 0
int main(void) {
	int x, y, r;

	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);
}
#endif
//315
//1
#if 0
int main(void) {
	int i, n = 0;
	printf("ī����: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		printf("%d ", n - i);

	return 0;
}

#endif
#if 0

int main(void) {
	printf("%010.2f", 2.14);
}
#endif
#if 1
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
#endif
#if 0
int main(void)
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


