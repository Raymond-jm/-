#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
�¶��� ���� 1078: [����-����/���ý��౸��] �� �Է� �޾� ���� ����ϱ�
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1078
*/

#define _CRT_SECURE_NO_WARNINGS

#if 1
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	switch (n) {
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;

	case 6:
	case 7:
	case 8:
		printf("summer");
		break;

	case 9:
	case 10:
	case 11:
		printf("fall");
		break;

	case 12:
	case 1:
	case 2:
		printf("winter");
		break;

	}

	return 0;
}
#endif


//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	if (n == 12 || n == 1 || n == 2) {
//		printf("winter");
//	}
//	else if (n == 3 || n == 4 || n == 5) {
//		printf("spring");
//	}
//	else if (n == 6 || n == 7 || n == 8) {
//		printf("summer");
//	}
//	else if (n == 9 || n == 10 || n == 11) {
//		printf("fall");
//	}
//
//	return 0;
//} 
25  Week 05 / OJ1085.c
@@ - 0, 0 + 1, 25 @@
/*
�¶��� ���� 1085: [����-�ݺ����౸��] ���� �� �� �Է¹޾� �� ������ ����ϱ�
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1085
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("%d\n", i);
	}/*
�¶��� ���� 1085: [����-�ݺ����౸��] ���� �� �� �Է¹޾� �� ������ ����ϱ�
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1085
*/

#define _CRT_SECURE_NO_WARNINGS

	return 0;
}

23  Week 05 / OJ1097.c
@@ - 0, 0 + 1, 23 @@
/*
�¶��� ���� 1097: [����-����] 3�� ����� ���?
http://eseoj.inu.ac.kr/JudgeOnline/problem.php?id=1097
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
163  Week 05 / ch6.c
@@ - 0, 0 + 1, 163 @@
/*
	============================================
	chapter6. ���ǹ�
	2022-04-01
	=============================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// ���� �ϳ��� �Է¹޾� Ȧ���� ¦���� �����ϴ� ���α׷� 
// p.234
#if 0
int main() {
	int number;

	scanf("%d", &number);

	// ==============================
	if (number % 2 == 0) {
		printf("¦���Դϴ�\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
	// ==============================

	return 0;
}
#endif




// ���� if�� p.239
// ���� Ÿ���� ������ �Է¹޾� ������ �����ϴ� ���α׷�
#if 0
int main() {
	int score;

	scanf("%d", &score);

	// ==============================
	if (score >= 90) {
		printf("����� ������ A\n");
	}
	else if (score >= 80) {
		printf("����� ������ B\n");
	}
	else {
		printf("�ƾ� �������ϱ� �� �Ʒ��� �׳� F�޾�!\n");
	}
	// ==============================

	return 0;
}
#endif



// ���� �з� ���α׷� p.240
// char Ÿ���� ���ڸ� �ϳ� �Է¹޾� �빮��, �ҹ���, ����, ��Ÿ���ڷ� �����ϱ�
#if 0
int main() {
	char ch;

	scanf("%c", &ch);

	// ==============================
	if (ch >= 'A' && ch <= 'Z') {
		printf("�빮�ڿ���!");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("�ҹ��ڿ���!");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("���ڿ���!");
	}
	else {
		printf("��Ÿ���ڿ���!");
	}
	// ==============================

	return 0;
}
#endif



// switch ������ ������� ����� p.251
#if 1
int main() {
	char op;
	int x, y, result = 0;

	printf("������ �Է��Ͻÿ� (��: 2+5) : \n >>");

	// ==================================================
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		printf("�������� �ʴ� ������ �Դϴ�.\n");
		break;

	}
	printf("%d %c %d = %d", x, op, y, result);

	// ==================================================
	return 0;
}
#endif


// switch ������ ������� ����� p.251
#if 1
int main() {
	char op;
	int x, y, result = 0;

	printf("������ �Է��Ͻÿ� (��: 2+5) : \n >>");

	// ==================================================
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		printf("�������� �ʴ� ������ �Դϴ�.\n");
		break;

	}
	printf("%d %c %d = %d", x, op, y, result);

	// ==================================================
	return 0;
}
#endif 
101  Week 05 / ch7.c
@@ - 0, 0 + 1, 101 @@
/*
	============================================
	chapter7. �ݺ���
	2022-04-01
	=============================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//  while ���� ������~
#if 0
int main() {
	int i = 0;

	while (i < 10) {
		printf("i�� %d!\n", i);
		i++;
	}

	return 0;
}
#endif




// �� ���� �Է¹޾� �ִ����� ã�� (p.276)
// ū ���� ���� �Էµȴٰ� �����Ѵ�!
#if 0
int main() {
	int x, y; //�Է¹��� �� �� ( x >= y ��� ����)
	int r;

	scanf("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ� ������� %d\n", x);
	return 0;
}
#endif


// do-while
#if 0
int main() {
	int i = 1000;

	do {
		//printf("�ϴ� �ѹ��� �������ش�!\n");
		printf("i�� ���� %d\n", i);
		i++;
	} while (i < 3);

	return 0;
}
#endif


// for ��
// ���� �ϳ��� �Է¹޾� ���丮�� �� ����ϱ�
// n! = 1*2*3* ...* n
#if 0
int main() {

	double fact = 1;
	int n; // �Է¹��� ����

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}

	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}
#endif


// break, continue
int main() {

	for (int i = 1; i < 10; i++)
	{
		if (i % 3 == 0) {
			printf("%d �� 3�� ����Դϴ�\n", i);
			//break;
			//continue;
		}
		printf("%d�� 3�ǹ���� �ƴմϴ�!\n", i);
	}
}