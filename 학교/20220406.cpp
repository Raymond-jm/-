//for loop : 
// break, continue
#include <stdio.h>
#if 0
int main() {
	int i = 0;

	for (i = 10; i < 10; i--) {
		printf("%d \n", i);
	}

	return 0;
}
#endif
#if 0
int main() {
	int i = 0;
	int j = 0;

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (i >= 5)
			{
				break;
			}
			printf("%d x %d = %d\n", i, j, i * j);

		}
	}
	return 0;
}
#endif
#if 0
//�Ҽ� ���ϱ�
int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int cnt = 0;

	for (n = 2000000000; n > 100; n--) {
		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				//�Ҽ� �ƴ�
				break;

			}

		}
		if (i == n) {
			printf("�Ҽ��Դϴ�:%d\n",n);
			cnt++;
		}
		
		
	}
	printf("��ü ������ %d\n", cnt);
	return 0;
}
#endif
#if 0
int isPrime(int k) { //+ k�� n�� ���Ե�

	int i;
	for (i = 2; i < k; i++) {
		if (k % i == 0) {
			break;
		}
	}

	if (i == k) { //������ ���� �������� =�Ҽ��� ��
		return 1;
	}
	else {
		return 0; //isPrime �ϼ�!!
	}
}

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int cnt = 0;
	int result = 0;

	for (n = 20000000000; n > 1999999000; n--) {
		result = isPrime(n); // result <-- 1,0 // + ������ ������ result���� ������
		if (result == 1) {
			printf("%d�� �Ҽ��Դϴ�.\n", n);
		}
		else {
			printf("%d�� �ƴϿ�...\n",n);
		}
	}

	return 0;
} //����: �������� ����,
#endif
#if 0
void funA(void) {
	printf("�ȳ������Դϴ�...");
	//.......
}

void funB(int n) {
	
	int i;
	for (i = 0; i < n; i++) {
		printf("�ȳ�...\n");
	}
}
int funC(void) {
	return 0;
}
int funcD(int a) {
	//-----------------hyo ja
	return 0;
}
#endif
#if 1
/*
n!�� ����Ѵ�.
*/
int calcFactorial(int _n) {
	//....��ö���� �ۼ��ϼ���..
	int result = 1;
	int i;
	for (i = _n; i >= 1; i--) {
		result *= i;
	}
	return result;
}
/*
�� ���� ���� ���� ���
*/
int doMul(int a, int b) {
	return a * b;

}
/*
C(n, r)�� ���
*/
int calcComb(int n, int r) {

	return calcFactorial(n) / doMul(calcFactorial(n - r), calcFactorial(r));
	
}
int main(void) {
	printf("C(10,3) ===> %d\n", calcComb(10, 3));
	return 0;
}
#endif