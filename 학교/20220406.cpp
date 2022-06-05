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
//소수 구하기
int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int cnt = 0;

	for (n = 2000000000; n > 100; n--) {
		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				//소수 아님
				break;

			}

		}
		if (i == n) {
			printf("소수입니다:%d\n",n);
			cnt++;
		}
		
		
	}
	printf("전체 개수는 %d\n", cnt);
	return 0;
}
#endif
#if 0
int isPrime(int k) { //+ k에 n이 대입됨

	int i;
	for (i = 2; i < k; i++) {
		if (k % i == 0) {
			break;
		}
	}

	if (i == k) { //끝까지 돌고 나왔으니 =소수일 때
		return 1;
	}
	else {
		return 0; //isPrime 완성!!
	}
}

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int cnt = 0;
	int result = 0;

	for (n = 20000000000; n > 1999999000; n--) {
		result = isPrime(n); // result <-- 1,0 // + 위에서 돌려진 result값이 돌려짐
		if (result == 1) {
			printf("%d는 소수입니다.\n", n);
		}
		else {
			printf("%d는 아니요...\n",n);
		}
	}

	return 0;
} //장점: 가독성이 좋음,
#endif
#if 0
void funA(void) {
	printf("안내사항입니다...");
	//.......
}

void funB(int n) {
	
	int i;
	for (i = 0; i < n; i++) {
		printf("안녕...\n");
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
n!을 계산한다.
*/
int calcFactorial(int _n) {
	//....김철수씨 작성하세요..
	int result = 1;
	int i;
	for (i = _n; i >= 1; i--) {
		result *= i;
	}
	return result;
}
/*
두 개의 정수 곱을 계산
*/
int doMul(int a, int b) {
	return a * b;

}
/*
C(n, r)을 계산
*/
int calcComb(int n, int r) {

	return calcFactorial(n) / doMul(calcFactorial(n - r), calcFactorial(r));
	
}
int main(void) {
	printf("C(10,3) ===> %d\n", calcComb(10, 3));
	return 0;
}
#endif