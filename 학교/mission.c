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

    printf("기회를 몇 번 줄까요?: ");
    scanf("%d", &a);
    chance = a;

    while (chance > 0)
    {
        chance--;
        printf("숫자를 입력하세요(1~100): ");
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
            printf("잘못 입력했습니다. \n");
            chance++;
        }
        else {
            printf("알 수 없는 오류가 발생했습니다. \n");
        }

        if (chance == 0) {
            printf("\n컷! ㅈㅈ \n정답은 %d", num);
            break;
        }
    }
    return 0;

}
