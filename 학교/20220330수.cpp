#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// p.230, ��� 2
//		  ��� 1
//		  ��� 3
int main() {
	int i = 0;
	int a = 20;

	if (a == 10) {
		printf("a�� 20�Դϴ�");
	}

	int b = 0;

	//p.237
	//���� if��, nested if
	if ((a > 0) && (a % 2 == 0)) {
		printf("¦�� ���");
	}
	if (a > 0) {
		if (a % 2 == 0) {
			printf("¦�� ������");
		}
	}

	//���� if ��
	if (a > 0) {

	}
	else if (a == 0) {

	}
	else if (a < 0) {

	}

	// 244. switch -- if���� Ư���� ����

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
			printf("����Դϴ�."); // {}�ȿ� �� ���� �ۿ� ������ {}ĥ �ʿ� ���ٴ� ���ܻ����� ����(�׷��� ġ�°� ����)

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

		//2. 1�� ���� ǥ����.
		b= a==10?15:30 // a=10 -> T:F

		return 0;
	}
	*/
	/* p.231
	int main(void) {

		int a = 20;
		int b = 0;

		 //1. nested if_and������ �����
		if ((a > 0) && (a % 2 == 0)) {
			printf("¦�� ���");

		}
		//2. 1�� ���� ǥ��, ���� if��
		if (a > 0) {
			if (a % 2 == 0) {
				printf("¦�� ���");
			}
		}

		//3. ���� if��_�� �߿��� �� if���� �����

		if (a > 0) {

		}
		else if (a == 0) {

		}
		else if (a < 0) {

		}
		//else���� ������ ���� if�� �� ��� if���̶� ���� �ȵ� �� O
		else {

		}

		return 0;

	}
	*/
	//p.244. switch -- if���� Ư���� ����

	switch (a) {

	case 10: // a�� 10�̸� "10" ���
		printf("10");
		break; // �׸�!
	case 20:
		printf("20");
		break;
	case 30:
		printf("30");
		break;
	default: // ���� �ִ� 3���� ��� �ƴ� ���
		break;

	}
	//switch�� �ϴ� �� if���� �� �� �ִ�.
	//�׷��� �ݴ�� �ȵ�...

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


		//���ѹݺ�, ���ѷ���, infinite loop
	while (a > 20) {
		printf("hello");

	}
	//0���� 9���� 1�� ������Ű�鼭 ���
	while (i < 10) {
		printf("%d", i);
		i++;
	}

	//just do it!!!

	do{
	  printf("10�̾�");
	} while (a == 10);

	while (a == 10) {
		printf("10�̾�");
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
