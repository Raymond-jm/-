#if 0
#include <stdio.h>

int main(void)
{
    printf("Hello world!\nKim Chulsoo");
	printf("���\n������\n����");
	
    return 0;
}
#endif

/*���� ������
%d ������ 10������ �Է�
%f �Ǽ�
%lf double float
%c ���� ���·� �Է��Ѵ�.
%s ���ڿ� ���·� �Է��Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#if 0
//�μ����� ���α׷�
#include <stdio.h>
int main(void)
{
	int x, y, sum;
	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	sum = x + y;
	printf("�� ���� ��: %d\n", sum);
	return 0;
}
#endif

#if 0
//����������α׷�
#include <stdio.h>

int main(void) {

	int ysalary, msalary;

	printf("������ �Է��Ͻÿ�(����: ����):");
	scanf("%d", &ysalary);

	msalary = ysalary/12;
	printf("�����ɾ�(����: ����): %d", msalary);
	
	
	return 0;
}
#endif
#if 0
//���� ���� ���α׷�
#include <stdio.h>

int main(void) {

	float radius, area = 0.0;
	float pi = 3.141592;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%f", &radius);

	area = radius * radius * pi;

	printf("���� ����:%f\n", area);
	return 0;
}
#endif

#if 0
//ȯ����� ���α׷�
#include <stdio.h>

int main(void)
{
	double rate, usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ�:");
	scanf("%lf", &rate);

	printf("��ȭ�ݾ��� �Է��Ͻÿ�:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);

	return 0;
}
#endif
#if 0
#include <stdio.h>

int main(void) {
//�簢���� �ѷ��� ����
	double w, h, area, perimeter;

	printf("�غ�:");
	scanf("%lf", &w);

	printf("����:");
	scanf("%lf", &h);

	perimeter = (w + h) * 2;
	area = w * h;

	printf("�簢���� �ѷ�: %lf\n�簢���� ����:%lf", perimeter, area);

	return 0;
}
#endif
/* #�� ��ó����, #include <�������>
���� ���ϰ� �������� �鿩����, ���� �� �� �� ����
*/
