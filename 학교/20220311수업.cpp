#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
��¥ 20220311
�ۼ��� : Ray
*/
int main(void) {

	
	
	//����: char
	//����: int, short, long(2��), long long(long���� �� ����x)
	//�Ǽ�: float, double(2��;����), long double(double���� �� ����x)
	//������ ���Ǳ� ���� ����Ǿ�� �Ѵ�.
	int x, y, sum;

	int x; //<----����
	x = 100; //<---���

	//�����ʱ�ȭ
	//���� �� ��������� ������ ��(garbage value)�� ������...

	y = 20 * x;

	x = 10; // �̷��� y�� �����Ⱚ... ���� ������ ������ ���� �ʱ�ȭ�� �ڵ����� �ȴ�...

	int x = 0; //�����ʱ�ȭ
	
	// +, -, *, /, %(modulo)
	
	printf("%d", x); // %d: format specifier, ���� ������
	// %f, float
	// %c, character 
	// %s, string ���ڿ�

	//scanf <-----> printf
    // scanf
	int x = 0;
	scanf("%d", &x) //&��ȣ �ٿ�����

	//\n : newline character
	printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", x)
	return 0;
}