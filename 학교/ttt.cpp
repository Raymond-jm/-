#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int a, b, x, y;
	char board[3][3];

	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			board[x][y] = ' ';
	printf("X = You O = opponent\n");

	for (int k = 0; k < 9; k++) {

		printf("좌표 입력(0~2,0~2): ");
		scanf("%d %d", &y, &x);

		if (board[x][y] == ' ') {
			board[x][y] = 'X';
		}

		else {
			printf("같은 곳에는 못놓습니다^^\n");
			k -= 1;
			continue;
		}

		for (int z = 0; z < 1; z++) {

			srand(time(0));

			a = rand() % 3;
			b = rand() % 3;

			if (board[a][b] == ' ') { //a,b 는 (0~2, 0~2) 랜덤 좌표
				board[a][b] = 'O';    //상대방이 자동으로 O를 놓음
				break;
			}
			else if (board[a][b] != ' ') {
				z -= 1;
			}
		}

		for (int i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
				if (board[1][1] != ' ') { //(1,1)에 놓여있을때 놓은 사람이 이길 경우의 수)
					if ((board[1][1] == board[0][1]) && (board[1][1] == board[2][1])) {
						printf("\n%c의 승리 \n", board[1][1]);
						break;
					}

					else if ((board[1][1] == board[1][2]) && (board[1][1] == board[1][0])) {
						printf("\n%c의 승리 \n", board[1][1]);
						break;
					}
					else if ((board[1][1] == board[0][0]) && (board[1][1] == board[2][2])) {
						printf("\n%c의 승리 \n", board[1][1]);
						break;
					}
					else if ((board[1][1] == board[0][2]) && (board[1][1] == board[2][0])) {
						printf("\n%c의 승리 \n", board[1][1]);
						break;
					}
				}

				if (board[0][0] != ' ') {
					if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2])) {
						printf("\n%c의 승리 \n", board[0][0]);
						break;
					}

					else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0])) {
						printf("\n%c의 승리 \n", board[0][0]);
						break;
					}
				}

				if (board[2][2] != ' ') {
					if ((board[2][2] == board[2][1]) && (board[2][2] == board[2][0])) {
						printf("\n%c의 승리 \n", board[2][2]);
						break;
					}

					else if ((board[2][2] == board[1][2]) && (board[2][2] == board[0][2])) {
						printf("\n%c의 승리 \n", board[2][2]);
						break;
					}
				}
				else if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //판이 꽉찼을 때 비겼다고 판단
					printf("비겼습니다~ \n");
					break;
				}
	}
	return 0;
}

