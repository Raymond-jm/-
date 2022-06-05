#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//p.88
#if 0
int main(void) {

	printf("이름: 홍길동\n나이: 21살\n주소: 서울 200번지\n");
	printf("Hello\nC\nProgrammers!\n");
	printf("**********************************************\n\t\t리포트\n**********************************************\n\n**********************************************\n\t\t학과: 컴퓨터공학과\n\t\t학번: 20180001\n\t\t성명: 홍길동\n*******************************************\n");
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
	
	printf("실수를 입력하시오: ");
	scanf("%d", &x);
	printf("실수를 입력하시오: ");
	scanf("%d", &y); 
	printf("실수를 입력하시오: ");
	scanf("%d", &z);
	float sum = x + y + z;	
	float avg= (x + y + z) / 3;
	printf("합은 %f이고 평균은 %f 입니다", sum, avg);

	return 0;
}
#endif
//02
#if 0
int main(void) {

	float mile = 0;
	printf("마일을 입력하시오: ");
	scanf("%f", &mile);
	
	float meter = mile * 1609;
	printf("%f마일은 %f미터입니다", mile, meter);
	
	return 0;
}
#endif
//03
#if 0
int main(void) {
	
	float base, area, height = 0;
	printf("삼각형의 밑변: ");
	scanf("%f", &base);
	printf("삼각형의 높이: ");
	scanf("%f", &height);

	area = base * height * 0.5;
	printf("삼각형의 넓이: %f", area);
}
#endif
//04
#if 0
int main(void) {
	double F, C;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &F);
	
	C = 5.0 / 9.0 * (F - 32.0);
	printf("섭씨값은 %lf도 입니다", C);

	return 0;
}
#endif
//05
#if 0
int main(void) {
	float x;
	printf("실수를 입력하세요: ");
	scanf("%f", &x);

	float result = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %f", result);

	return 0;
}
#endif
//06
#if 0
int main(void) {
	double weight_on_earth;
	printf("몸무게를 입력하세요(단위: Kg): ");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon = weight_on_earth * 0.17;
	printf("달에서의 몸무게는 %lfkg입니다", weight_on_moon);

	return 0;
}
#endif
//p.168,169
//01
#if 0
int main(void) {

	float a;
	printf("실수를 입력하시오: ");
	scanf("%f", &a);
	printf("실수형식으로는 %f입니다", a);
	printf("지수형식으로는 %e입니다", a);

	return 0;
}
#endif
//02
#if 0
int main(void) {
	
	int data = 0;
	printf("16진수 정수를 입력하시오: ");
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
	
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &garo, &sero, &nopi);
	
	double V = garo * sero * nopi;
	printf("상자의 부피는 %lf", V);

	return 0;
}
#endif
//05
#if 0
int main(void) {

	double pyeong = 0;
	const double SQMETER_PER_PYEONG = 3.3058;
	printf("평을 입력하세요: ");
	scanf("%lf", &pyeong);

	double PSQmeter = SQMETER_PER_PYEONG * pyeong;
	printf("%lf평방미터입니다.", PSQmeter);

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
	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);

	E_k = m * v * v /2.0;
	printf("운동에너지: %lf", E_k);

	return 0;
}
#endif
//08
#if 0
int main(void) {
	int Ascii = 0;
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &Ascii);

	printf("문자:%c입니다", Ascii);
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
	printf("\a화재가 발생하였습니다.\a");
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
	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("몫:%d 나머지:%d", a / b, a % b);

	return 0;
}
#endif
//02
#if 0
int main(void) {
	double a, b;
	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &a, &b);

	printf("%lf %lf %lf %lf", a + b, a - b, a * b, a / b);

	return 0;
}
#endif
//03
#if 0
int main(void) {
	int a, b, c, max;
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
	printf("최대값:%d", max);
	return 0;
}
#endif
//03 조건문으로 풀이
#if 0
int main(void) {
	int a, b, c;
	printf("3개의 정수를 입력하시오: ");
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
	printf("키를 입력하시오(cm): ");
	scanf("%lf", &height);
	inch = height/2.54;
	feet = inch / 12;
	
	printf("%lfcm는 %lf피트 %lf인치입니다", height, feet, inch);

	return 0;
}
#endif
//05
#if 0
int main(void) {
	int a;
	printf("정수를 입력하시오: ");
	scanf("%int",&a);
	printf("십의 자리: %d ", a / 10);
	printf("일의 자리: %d", a % 10);

	return 0;
}
#endif
//06
#if 0
int main(void) {
	int a;
	int a_2;
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	a_2 = ~a + 1;
	printf("2의 보수:%d", a_2);

	return 0;
}
#endif
//07
#if 0
int main(void) {
	int x, y, a;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &y);
	a = x << y;
	printf("%d<<%d의 값: %d", x, y, a);

	return 0;
}
#endif
//08
#if 0
#define Pi 3.141592
int main(void) {
	float r,S,V;
	printf("구의 반지름을 입력하시오: ");
	scanf("%f", &r);
	S = 4.0 * Pi * r * r;
	V = 4.0 / 3.0 * Pi * r * r * r;

	printf("표면적은 %f 입니다.\n체적은 %f 입니다.", S, V);

	return 0;
}
#endif
//09
#if 0
int main(void) {
	double AC, AE, BC, DE;
	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &BC);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &AC);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &AE);

	DE = AE * BC / AC;
	printf("피라미드의 높이는 %lf입니다.", DE);

	return 0;
}
#endif
//10
#if 0
int main(void) {
	double x, y;
	printf("x 좌표를 입력하시오: ");
	scanf("%lf", &x);
	printf("y 좌표를 입력하시요: ");
	scanf("%lf", &y);

	(x > 0 && y > 0) ? printf("1사분면") : ((x < 0 && y>0) ? printf("2사분면") : ((x < 0 && y < 0) ? printf("3사분면") : printf("4사분면")));
	
	return 0;
}
#endif
//11
#if 0
#define pi 3.141592
int main(void) {
	double d, angle, r;
	printf("거리를 입력하시오: ");
	scanf("%lf",&d);
	printf("각도를 입력하시오: ");
	scanf("%lf", &angle);
	r = 360/angle*d / (2 * pi);

	printf("지구의 반지름은 %lf입니다", r);

	return 0;
}
#endif
//258, 259, 260
//01
#if 0

int main(void) {
	
	char vowel;
	printf("문자를 입력하시오: ");
	scanf("%c", &vowel);

	switch (vowel)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("모음입니다");
		break;
	default:
		printf("자음입니다");
	}
	return 0;
}
#endif
//02
#if 0
int main(void) {
	int a, b;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	printf("정수를 입력하시오: ");
	scanf("%d", &b);

	if (a % b == 0) {
		printf("약수입니다.");
	}
	else printf("약수가 아닙니다");
	
	return 0;
}
#endif
//03
#if 0
int main(void) {
	int a, b, c, d;
	printf("3개의 정수를 입력하시오: ");
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
	printf("제일 작은 정수는 %d", d);
	return 0;
}
#endif
#include <stdlib.h>
//04 (imcomp)
#if 0
int main(void) {
	int a;
	printf("선택하시오(1- 가위 2- 바위 3- 보) : ");
	scanf("%d", &a);

	int random = rand() % 3;
		if (random == a)
			printf("비겼습니다\n");
		else if (random > a && random != 3)
				printf("졌습니다\n");
		else 
				printf("이겼습니다\n");
		printf("컴퓨터가 낸 거: %d\n", random);
	return 0;
}
#endif
//05
#if 0
int main(void){
	double height, age;
	printf("키를 입력하시오(cm): ");
	scanf("%lf", &height);
	printf("나이를 입력하시오: ");
	scanf("%lf", &age);

	if (height >= 140 && age >= 10) {
		printf("타도 좋습니다");
	}
	else {
		printf("죄송합니다");
	}
		
	return 0;
}
#endif
//06
#if 0
int main(void) {
	int month;
	printf("월번호를 입력하시오: ");
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
	printf("체중과 키를 입력하세요: ");
	scanf("%lf %lf", &h, &w);

	if (w > (h - 100) * 0.9) {
		printf("과체중입니다");
}
	else printf("정상입니다");
	
	return 0;
}
#endif
//08
#if 0
int main(void) {
	int time, age, price;
	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);
	if (time < 17 && age>12 && age < 65) {
		printf("요금은 34000입니다");
	}
	else if (time < 17 && age >= 3 && age <= 12 || age >= 65) {
		printf("요금은 25000입니다");
	}
	else if (time >= 17)
		printf("요금은 10000입니다");

	return 0;
}
#endif
//09
#if 0
int main(void) {
	double x;
	printf("x의 값을 입력하시오:");
	scanf("%lf", &x);
	if (x <= 0)
		printf("f(x)의 값은 %lf", x * x - 9 * x + 2);
	else printf("f(x)의 값은 %lf", 7 * x + 2);
	
	return 0;
}
#endif
//11
#if 0
int main(void) {
	char a;
	printf("문자를 입력하시오: ");
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
	printf("종료하려면 음수를 입력하시오\n");

	while (grade >= 0) {
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
		
	}
	sum = sum - grade;
	n--;
	average = sum / n;

	printf("학생수는 %d명이며, 평균은 %lf입니다", n, average);
	
	return 0;
}
#endif
#if 0
int main(void) {
	int x, y, r;

	printf("두개의 정수를 입력하시오(큰수, 작은수): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.\n", x);
}
#endif
//315
//1
#if 0
int main(void) {
	int i, n = 0;
	printf("카초입: ");
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


