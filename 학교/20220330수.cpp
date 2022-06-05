#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// p.230, 경고 2
//		  경고 1
//		  경고 3
int main() {
	int i = 0;
	int a = 20;

	if (a == 10) {
		printf("a는 20입니다");
	}

	int b = 0;

	//p.237
	//다중 if문, nested if
	if ((a > 0) && (a % 2 == 0)) {
		printf("짝수 양수");
	}
	if (a > 0) {
		if (a % 2 == 0) {
			printf("짝수 여여수");
		}
	}

	//연속 if 문
	if (a > 0) {

	}
	else if (a == 0) {

	}
	else if (a < 0) {

	}

	// 244. switch -- if문의 특이한 형태

	switch (a) {
	case 10:
		printf("10");
		break;
	case 20:
		printf("20");
		break;
	case 30:
		printf("30");
		break;
	default:
		break;
	}

	/*
	int main(void){

		int a = 10;

		if (a > 0){
			printf("양수입니다."); // {}안에 한 라인 밖에 없으면 {}칠 필요 없다는 예외사항이 있음(그래도 치는게 좋음)

			}
			return 0;

	}
	*/
	/*
	int main(void) {
		int a = 20;
		int b = 0;

		//1.
		if (a == 10) {
			b = 15;
		}
		else {
			b = 30;
		}

		//2. 1과 같은 표현임.
		b= a==10?15:30 // a=10 -> T:F

		return 0;
	}
	*/
	/* p.231
	int main(void) {

		int a = 20;
		int b = 0;

		 //1. nested if_and문으로 연결됨
		if ((a > 0) && (a % 2 == 0)) {
			printf("짝수 양수");

		}
		//2. 1과 같은 표현, 다중 if문
		if (a > 0) {
			if (a % 2 == 0) {
				printf("짝수 양수");
			}
		}

		//3. 연속 if문_이 중에서 한 if문만 실행됨

		if (a > 0) {

		}
		else if (a == 0) {

		}
		else if (a < 0) {

		}
		//else문이 없으면 연속 if문 중 어느 if문이라도 실행 안될 수 O
		else {

		}

		return 0;

	}
	*/
	//p.244. switch -- if문의 특이한 형태

	switch (a) {

	case 10: // a가 10이면 "10" 출력
		printf("10");
		break; // 그만!
	case 20:
		printf("20");
		break;
	case 30:
		printf("30");
		break;
	default: // 위에 있는 3개가 모두 아닌 경우
		break;

	}
	//switch가 하는 건 if문도 할 수 있다.
	//그러나 반대는 안돼...

	char c;
	scanf("%c", &c);

	switch (c) {
	case 'w':

		break;
	case'a':

		break;
	case's':

		break;
	case'd':

		break;
	}

	//chap.8
	//while


		//무한반복, 무한루프, infinite loop
	while (a > 20) {
		printf("hello");

	}
	//0부터 9까지 1씩 증가시키면서 출력
	while (i < 10) {
		printf("%d", i);
		i++;
	}

	//just do it!!!

	do{
	  printf("10이야");
	} while (a == 10);

	while (a == 10) {
		printf("10이야");
	}

	// for
	for (i = 0; i < 10; i++) {
		printf("%d\n", i);
	}
	// for(;;){} - infinite loop

	//p.295
	int j = 0;
	for (i = 1; i < 10; i++) {

		for (j = 1; j < 10; j++) {
			printf("%d %d\n", i, j);
		}
	}

	//p.295
	//
	//p.291....7.7 : break, continue
	for (i = 1; i < 10; i++) {

		if (i % 2 == 0) {
			continue;
		}
		printf("%d", i);
	}

	return 0;
}
