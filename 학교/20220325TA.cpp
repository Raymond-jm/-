/*
   ============================================
   chapter5. ���İ� ������
   2022-03-25
   =============================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���������, ����������
#if 0
int main() {

	//���������

	//����������
	int x = 10;
	int y = 20;

	y = ++x; //���� �� ���� y�� ���Ե� (x = 11 y = 11)
	printf("%d\n", x);
	y = x++; //y�� ���Ե� �� ������ (x = 11 y = 10)
	printf("x = %d y = %d", x, y);



}
#endif
// ===================================================================================
// �Ž����� ����ϱ� p.180
// ���������� ������ �����ϰ� ������ ���� ��, �����ؾ��� �Ž������� ȭ��� ���� ���� ����ϴ� ���α׷�
// 1. ����ڷκ��� ���� ���� �Է¹���(���� ���� 100�������� �������ٰ� ����)
// 2. ������ ���־�� �� ��õ����, õ����, �����¥�� ����, ���¥�� ������ ������ ���
#if 0
int main() {

	int price = 0;
	printf("������ ����:");
	scanf("%d", &price);


	int change = 10000 - price;
	printf("��� �� �Ž�����: %d", change);
	int c5000 = change / 5000; //5000���� ����
	change = change % 5000; //���� �ܵ�
	
	int c1000 = change / 1000; //1000���� ����
	change = change % 1000; //���� �ܵ�
	
	int c500 = change / 500; //500��¥�� ����
	change = change % 500; //���� �ܵ�
	
	int c100 = change / 100; //100��¥�� ����

	printf("\n�Ž������ �� �ܵ���\n5õ����: %d��, 1000����: %d��, 500��¥��: %d��, 100��¥��: %d�� �Դϴ�", c5000, c1000, c500, c100);

	return 0;
}
#endif
// ======================================================================


// ���迬����
#if 0
int main() {
	int x = 10, y = 20;
	
	printf("%d\n", x != y);

	return 0;
}
#endif

//��������
#if 0
int main() {
	int x = 1, y = 0;

	//printf("%d", x && y);

	int age, score;
	
	scanf("%d %d", &age, &score);

	printf("%d", (age >= 20) && (score > 80));
}
#endif
// �����Ǵ�
// ������ 4�� ������ ��������
// 100���� ������ �������� ������ ����
// 400���� ������ �������� ������ ������
#if 0

int main() {

	int year = 0;

	scanf("%d", &year);
	printf("%d\n", (year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0));

	return 0;
}
#endif

//���ǿ�����(���׿�����)
#if 0
int main() {

	int bigger;
	int x = 10, y = 20;

	bigger = (x > y) ? x : y; //������ ������ x Ʋ���� y ���

	printf("%d\n", bigger);

	int a = (2 * 3, 5 - 2);
	printf("%d\n", a);

	return 0;
}
#endif
// ===================================
// 10������ 2������ ����ϱ� (0~127 ������ ���)
// ������ �ݺ��� ��� ���ϰ� �밡�ٷ�~
// ��Ʈ : ��Ʈ ����
#if 0
int main() {

	unsigned int x = 32; //0010 0000
	unsigned int mask = 1 << 7; //1000 0000
	printf("10���� : %d\n", x);

	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;(���⼭ 1�� ����)
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1");

	return 0;
}
#endif

//����ȯ
#if 1
int main() {

	char data = 'a';
	char key = 0xff;

	char encrypted_data = data ^ key;

	printf("��ȣȭ�� ���� : %c\n", encrypted_data);

	char origin_data = encrypted_data ^ key;

	printf("���� ������ : %c", origin_data);

	return 0;
}
#endif

