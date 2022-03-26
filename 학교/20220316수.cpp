#if 0
#include <stdio.h>

//sizeof 연산자.,+,-,*,/
int main(void) {
	printf("short% d\n", sizeof(short));
	printf("int %d\n", sizeof(int));
	printf("long %d\n", sizeof(long));

	return 0;
}
#endif
/* 8bit - 1byte - 1024 byte ->> KB, 1024KB ->> MB - GB - TB
short (2byte): -32,768 ~ 32,767
unsigned short - 기호가 없음: 양수
int (4byte = 32bit)
long (8byte = 64bit)
음수가 하나 더 많은 이유(자세하게~)

3bit: 8개 000 001 010 011 100 101 110 111 (-4 ~ 3 matching)
4bit: 16개
8bit: 256개 (-128 ~ 127) 256/2 
16bit: 64 * 1024개: -32,768 ~ 32,767
x64: 64비트
x86: 32비트, 인텔사의 8086*/

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

/*정수상수: p.138
10진수 : 20
16진수 : 0,1,2,3,4,....9,a,b,c,d,e,f 0x10 0X10 0xff FF
8진수 : 0,1,....,7 010
*/
/* symbolic constant --> literal constant 10, 0xff
const int a = 10;
#define PI 3.14
const float pi = 3.14
#define NUM_STUDENTS 130*/
/* ******* p.142 **********_______
|내부적인 정수표현 방식 142~ 147p|
|2's complement (145상단)        |
|                                |
|-2를 어떻게 만들까              |
|[1] 양수를 생각 2, 010          |
|[2] flip : 101                  |
|[3] 101 +1: 110                 |
----------------------------------
3bit: 8개 (-4 ~ 3)

000 = 0
001 = 1
010 = 2
011 = 3
100 = -4 (음의 0은 없기때문에...)
101 = -1
110 = -2
111 = -3

4.4 부동소수점 p147

고정소수점: fixed point number
ex) 31.4 2.4567
부동소수점: floating point number : float, double
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
