#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() 
{
    int a;
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int answer;
    int chance;

    printf("��ȸ�� �� �� �ٱ��?: ");
    scanf("%d", &a);
    chance = a;

    while (chance > 0)
    {
        chance--;
        printf("���ڸ� �Է��ϼ���(1~100): ");
        scanf("%d", &answer);


        if (answer > num && answer >= 1 && answer <= 100) {
            printf("DOWN \n");
        }
        else if (answer < num && answer >= 1 && answer <= 100) {
            printf("UP\n");
        }
        else if (answer == num && answer >= 1 && answer <= 100) {
            printf("YOU WIN!!!. \n");
            break;
        }
        else if (answer > 100 || answer < 0) {
            printf("�߸� �Է��߽��ϴ�. \n");
            chance++;
        }
        else {
            printf("�� �� ���� ������ �߻��߽��ϴ�. \n");
        }

        if (chance == 0) {
            printf("\n��! ���� \n������ %d", num);
            break;
        }
    }
    return 0;

}
