/*=============================
20220318
�ۼ��� : ������
Chapter4. ������ �ڷ���
=============================
*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
#define S 9,000 //;(x)
int main(void) {

	int a = 10;
	a = 20;

	a = S * 100;
	float temp;
	scanf("%f, %d", &temp, a);

	printf("���� �̷��� ����Ұž�~ \n%.3f\n", temp);
	printf("���¹ٺ���\n \t");

	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	float a;
	printf("%d", sizeof(a));

	return 0;
}
#endif

#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int x, y, z;
	x = 440;
	y = 50;
	z = 0;

	printf("x=%d y=%d\n", x, y);
	z = y;

	y = x;

	x = z;

	printf("x=%d y=%d", x, y);

	return 0;
}
#endif