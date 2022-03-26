#if 0
#include <stdio.h>

//sizeof ������.,+,-,*,/
int main(void) {
	printf("short% d\n", sizeof(short));
	printf("int %d\n", sizeof(int));
	printf("long %d\n", sizeof(long));

	return 0;
}
#endif
/* 8bit - 1byte - 1024 byte ->> KB, 1024KB ->> MB - GB - TB
short (2byte): -32,768 ~ 32,767
unsigned short - ��ȣ�� ����: ���
int (4byte = 32bit)
long (8byte = 64bit)
������ �ϳ� �� ���� ����(�ڼ��ϰ�~)

3bit: 8�� 000 001 010 011 100 101 110 111 (-4 ~ 3 matching)
4bit: 16��
8bit: 256�� (-128 ~ 127) 256/2 
16bit: 64 * 1024��: -32,768 ~ 32,767
x64: 64��Ʈ
x86: 32��Ʈ, ���ڻ��� 8086*/

//p.137
//overflow

#if 0
#include <stdio.h>
#include <limits.h>
int main(void) {

	short a = SHRT_MAX;
	unsigned short b = USHRT_MAX;

	a = a + 1;
	b = b + 1;

	printf("a %d\n", a);
	printf("b %d\n", b);

	return 0;
}
#endif

/*�������: p.138
10���� : 20
16���� : 0,1,2,3,4,....9,a,b,c,d,e,f 0x10 0X10 0xff FF
8���� : 0,1,....,7 010
*/
/* symbolic constant --> literal constant 10, 0xff
const int a = 10;
#define PI 3.14
const float pi = 3.14
#define NUM_STUDENTS 130*/
/* ******* p.142 **********_______
|�������� ����ǥ�� ��� 142~ 147p|
|2's complement (145���)        |
|                                |
|-2�� ��� �����              |
|[1] ����� ���� 2, 010          |
|[2] flip : 101                  |
|[3] 101 +1: 110                 |
----------------------------------
3bit: 8�� (-4 ~ 3)

000 = 0
001 = 1
010 = 2
011 = 3
100 = -4 (���� 0�� ���⶧����...)
101 = -1
110 = -2
111 = -3

4.4 �ε��Ҽ��� p147

�����Ҽ���: fixed point number
ex) 31.4 2.4567
�ε��Ҽ���: floating point number : float, double
ex) 3.14 * 10^2 3.14e+2
*/
//p.153
#if 0
#include <stdio.h>
int main(void) {

	double x;

	x = (1.0e20 + 5.0) - 1.0e20;
	printf("\n", x);
	
	return 0;
}
#endif

//ASCII: American Standard Code for Information Interchange
char c;
c = 'A';
//A = 65(ASCII Code)
