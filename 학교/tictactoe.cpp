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

		printf("��ǥ �Է�(0~2,0~2): ");
		scanf("%d %d", &y, &x);

		if (board[x][y] == ' ') {
			board[x][y] = 'X';
		}

		else {
			printf("���� ������ �������ϴ�^^\n");
			k -= 1;
			continue;
		}

		if (board[1][1] != ' ') {
			for (int z = 0; z < 1; z++) {

				srand(time(0));

				a = rand() % 3;
				b = rand() % 3;
				
				if (board[a][b] == ' ') { //a,b �� (0~2, 0~2) ���� ��ǥ
					board[a][b] = 'O';    //������ �ڵ����� O�� ����
					break; 
				}

				if (board[1][1] != ' ') { //(1,1)�� ���������� ���� ����� �̱� ����� ��)
					if ((board[1][1] == board[0][1]) && (board[1][1] == board[2][1])) {
						printf("\n%c�� �¸� \n", board[1][1]);
						k = 9;
					}

					else if ((board[1][1] == board[1][2]) && (board[1][1] == board[1][0])) {
						printf("\n%c�� �¸� \n", board[1][1]);
						k = 9;
					}
					else if ((board[1][1] == board[0][0]) && (board[1][1] == board[2][2])) {
						printf("\n%c�� �¸� \n", board[1][1]);
						k = 9;
					}
					else if ((board[1][1] == board[0][2]) && (board[1][1] == board[2][0])) {
						printf("\n%c�� �¸� \n", board[1][1]);
						k = 9;
					}
				}

				if (board[0][0] != ' ') {
					if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2])) {
						printf("\n%c�� �¸� \n", board[0][0]);
						k = 9;
					}

					else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0])) {
						printf("\n%c�� �¸� \n", board[0][0]);
						k = 9;
					}
				}

				if (board[2][2] != ' ') {
					if ((board[2][2] == board[2][1]) && (board[2][2] == board[2][0])) {
						printf("\n%c�� �¸� \n", board[2][2]);
						k = 9;
					}

					else if ((board[2][2] == board[1][2]) && (board[2][2] == board[0][2])) {
						printf("\n%c�� �¸� \n", board[2][2]);
						k = 9;
					}
				}
				else if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //���� ��á�� �� ���ٰ� �Ǵ�
					printf("�����ϴ�~ \n");
					k = 9;
				}
			
				else if (board[a][b] != ' ') {
					z -= 1;
				}

			}// ���� ���ؾ��� ������� ��? ����?


		}
		else if (board[1][1] == ' ')
			board[1][1] = 'O';

		for (int i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
	}
	return 0;
}

	