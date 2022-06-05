#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int a, b;
	int x, y, z, i, j, k;
	char board[3][3];

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	for (k = 0; k < 9; k++) {

		printf("(x, y) 좌표: ");
		scanf("%d %d", &y, &x);

		if (board[x][y] == ' ')
			board[x][y] = 'X';

		else {
			printf("거기에는 놓을 수가 없어요~\n");
			k -= 1;
			continue;
		}                                                                                 // 변동없음
		if (k == 0) {
			if (board[1][1] != ' ') {

				board[0][0] = 'O';

				//첫번쨰 페이즈에선 상대가 모퉁이에 놓는가 중앙에 놓는가 아니면 면에 놓는가에 따라 경우의 수를 나눈다 상대가 모퉁이에서 시작한다면 중앙을 선점하여 동점을 유도한다. 상대가 중앙에서 시작한다면 모퉁이에 놓고 일단 공격을 시도해본다, 안된다면 비긴다. 상대가 면에서 시작하면 공격을 시도한다.


			}


			else if (board[1][1] == ' ')
				board[1][1] = 'O';
		}



		if (k == 1) {
			for (z = 0; z < 1; z++) {
				if ((board[1][1] == 'O') && (board[1][0] == 'X') && (board[2][1] == 'X')) {                            	       // 특수한 경우1
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][0] == 'X') && (board[0][1] == 'X')) {                              // 특수한 경우1
					board[2][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][2] == 'X') && (board[0][1] == 'X')) {                              // 특수한 경우1
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][2] == 'X') && (board[2][1] == 'X')) {                              // 특수한 경우1
					board[2][0] = 'O';
					break;
				}

				if ((board[0][0] == 'O') && (board[1][1] == 'X') && (board[2][2] == 'X')) {			      // 특수한 경우 2
					board[2][0] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[2][0] == 'X') && (board[0][2] == 'X')) {                            	       // 특수한 경우 3
					board[0][1] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[0][0] == 'X') && (board[2][2] == 'X')) {                            	       // 특수한 경우 3
					board[0][1] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[0][1] == 'X') && (board[2][0] == 'X')) {                            	       // 특수한 경우 4
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[0][1] == 'X') && (board[2][2] == 'X')) {                               // 특수한 경우 4
					board[0][2] = 'O';
					break;
				}


				if ((board[0][0] != 'O') && (board[0][1] != 'O') && (board[0][2] != 'O')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(가로선)
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][0] == board[0][2]) && (board[0][0] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[0][2]) && (board[0][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
				}

				if ((board[1][0] != 'O') && (board[1][1] != 'O') && (board[1][2] != 'O')) {
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[1][2] = 'O';
						break;
					}
					else if ((board[1][0] == board[1][2]) && (board[1][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[1][2]) && (board[1][1] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}

				if ((board[2][0] != 'O') && (board[2][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[2][0] == board[2][2]) && (board[2][0] == 'X')) {
						board[2][1] = 'O';
						break;
					}
					else if ((board[2][1] == board[2][2]) && (board[2][1] == 'X')) {
						board[2][0] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][0] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(세로선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][0] == board[2][0]) && (board[1][0] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][0]) && (board[0][0] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}


				if ((board[0][1] != 'O') && (board[1][1] != 'O') && (board[2][1] != 'O')) {
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][1]) && (board[1][1] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[2][1]) && (board[0][1] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][2] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][2] == board[2][2]) && (board[1][2] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][2]) && (board[0][2] == 'X')) {
						board[1][2] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][2]) && (board[1][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][2]) && (board[0][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][1] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][0]) && (board[1][1] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][0]) && (board[0][2] == 'X')) {
						board[1][1] = 'O';
						break;
					}

				}


				else {
					if (board[2][2] == ' ') {
						board[2][2] = 'O';			                       	//위의 조건에 해당하지 않은 경우
						break;
					}

					else if (board[2][2] != ' ') {
						board[2][0] = 'O';
						break;
					}
				}


			}
		}


		if (k == 2) {
			for (z = 0; z < 1; z++) {
				if ((board[0][0] != 'X') && (board[0][1] != 'X') && (board[0][2] != 'X')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(가로선)
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][0] == board[0][2]) && (board[0][0] == 'O')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[0][2]) && (board[0][1] == 'O')) {
						board[0][0] = 'O';
						break;
					}
				}

				if ((board[1][0] != 'X') && (board[1][1] != 'X') && (board[1][2] != 'X')) {
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[1][2] = 'O';
						break;
					}
					else if ((board[1][0] == board[1][2]) && (board[1][0] == 'O')) {
						board[1][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[1][2]) && (board[1][1] == 'O')) {
						board[1][0] = 'O';
						break;
					}
				}

				if ((board[2][0] != 'X') && (board[2][1] != 'X') && (board[2][2] != 'X')) {
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[2][0] == board[2][2]) && (board[2][0] == 'O')) {
						board[2][1] = 'O';
						break;
					}
					else if ((board[2][1] == board[2][2]) && (board[2][1] == 'O')) {
						board[2][0] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'X') && (board[1][0] != 'X') && (board[2][0] != 'X')) {
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(세로선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][0] == board[2][0]) && (board[1][0] == 'O')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][0]) && (board[0][0] == 'O')) {
						board[1][0] = 'O';
						break;
					}
				}


				if ((board[0][1] != 'X') && (board[1][1] != 'X') && (board[2][1] != 'X')) {
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'O')) {                                  // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][1]) && (board[1][1] == 'O')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[2][1]) && (board[0][1] == 'O')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'X') && (board[1][2] != 'X') && (board[2][2] != 'X')) {
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][2] == board[2][2]) && (board[1][2] == 'O')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][2]) && (board[0][2] == 'O')) {
						board[1][2] = 'O';
						break;
					}
				}
				if ((board[0][0] != 'X') && (board[1][1] != 'X') && (board[2][2] != 'X')) {
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(대각선)
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][2]) && (board[1][1] == 'O')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][2]) && (board[0][0] == 'O')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'X') && (board[1][1] != 'X') && (board[2][0] != 'X')) {
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(대각선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][0]) && (board[1][1] == 'O')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][0]) && (board[0][2] == 'O')) {
						board[1][1] = 'O';
						break;
					}

				}



				if ((board[0][0] != 'O') && (board[0][1] != 'O') && (board[0][2] != 'O')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(가로선)
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][0] == board[0][2]) && (board[0][0] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[0][2]) && (board[0][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
				}

				if ((board[1][0] != 'O') && (board[1][1] != 'O') && (board[1][2] != 'O')) {
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[1][2] = 'O';
						break;
					}
					else if ((board[1][0] == board[1][2]) && (board[1][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[1][2]) && (board[1][1] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}

				if ((board[2][0] != 'O') && (board[2][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[2][0] == board[2][2]) && (board[2][0] == 'X')) {
						board[2][1] = 'O';
						break;
					}
					else if ((board[2][1] == board[2][2]) && (board[2][1] == 'X')) {
						board[2][0] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][0] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(세로선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][0] == board[2][0]) && (board[1][0] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][0]) && (board[0][0] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}


				if ((board[0][1] != 'O') && (board[1][1] != 'O') && (board[2][1] != 'O')) {
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][1]) && (board[1][1] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[2][1]) && (board[0][1] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][2] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][2] == board[2][2]) && (board[1][2] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][2]) && (board[0][2] == 'X')) {
						board[1][2] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][2]) && (board[1][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][2]) && (board[0][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][1] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][0]) && (board[1][1] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][0]) && (board[0][2] == 'X')) {
						board[1][1] = 'O';
						break;
					}

				}

				else {
					for (j = 0; j < 1; j++) {

						srand(time(0));

						a = rand() % 3;
						b = rand() % 3;

						if (board[a][b] == ' ')
							board[a][b] = 'O';

						else if (board[a][b] != ' ')
							j -= 1;
					}
				}


			}
		}
		if (k == 3) {
			for (z = 0; z < 1; z++) {
				if ((board[0][0] != 'X') && (board[0][1] != 'X') && (board[0][2] != 'X')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(가로선)
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][0] == board[0][2]) && (board[0][0] == 'O')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[0][2]) && (board[0][1] == 'O')) {
						board[0][0] = 'O';
						break;
					}
				}

				if ((board[1][0] != 'X') && (board[1][1] != 'X') && (board[1][2] != 'X')) {
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[1][2] = 'O';
						break;
					}
					else if ((board[1][0] == board[1][2]) && (board[1][0] == 'O')) {
						board[1][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[1][2]) && (board[1][1] == 'O')) {
						board[1][0] = 'O';
						break;
					}
				}

				if ((board[2][0] != 'X') && (board[2][1] != 'X') && (board[2][2] != 'X')) {
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[2][0] == board[2][2]) && (board[2][0] == 'O')) {
						board[2][1] = 'O';
						break;
					}
					else if ((board[2][1] == board[2][2]) && (board[2][1] == 'O')) {
						board[2][0] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'X') && (board[1][0] != 'X') && (board[2][0] != 'X')) {
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(세로선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][0] == board[2][0]) && (board[1][0] == 'O')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][0]) && (board[0][0] == 'O')) {
						board[1][0] = 'O';
						break;
					}
				}


				if ((board[0][1] != 'X') && (board[1][1] != 'X') && (board[2][1] != 'X')) {
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'O')) {                                  // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][1]) && (board[1][1] == 'O')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[2][1]) && (board[0][1] == 'O')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'X') && (board[1][2] != 'X') && (board[2][2] != 'X')) {
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][2] == board[2][2]) && (board[1][2] == 'O')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][2]) && (board[0][2] == 'O')) {
						board[1][2] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'X') && (board[1][1] != 'X') && (board[2][2] != 'X')) {
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(대각선)
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][2]) && (board[1][1] == 'O')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][2]) && (board[0][0] == 'O')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'X') && (board[1][1] != 'X') && (board[2][0] != 'X')) {
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'O')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 공격하기 코드(대각선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][0]) && (board[1][1] == 'O')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][0]) && (board[0][2] == 'O')) {
						board[1][1] = 'O';
						break;
					}

				}


				if ((board[0][0] != 'O') && (board[0][1] != 'O') && (board[0][2] != 'O')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(가로선)
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][0] == board[0][2]) && (board[0][0] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[0][2]) && (board[0][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
				}

				if ((board[1][0] != 'O') && (board[1][1] != 'O') && (board[1][2] != 'O')) {
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[1][2] = 'O';
						break;
					}
					else if ((board[1][0] == board[1][2]) && (board[1][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[1][2]) && (board[1][1] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}

				if ((board[2][0] != 'O') && (board[2][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[2][0] == board[2][2]) && (board[2][0] == 'X')) {
						board[2][1] = 'O';
						break;
					}
					else if ((board[2][1] == board[2][2]) && (board[2][1] == 'X')) {
						board[2][0] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][0] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(세로선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][0] == board[2][0]) && (board[1][0] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][0]) && (board[0][0] == 'X')) {
						board[1][0] = 'O';
						break;
					}
				}


				if ((board[0][1] != 'O') && (board[1][1] != 'O') && (board[2][1] != 'O')) {
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][1] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][1]) && (board[1][1] == 'X')) {
						board[0][1] = 'O';
						break;
					}
					else if ((board[0][1] == board[2][1]) && (board[0][1] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][2] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][2] == board[2][2]) && (board[1][2] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][2]) && (board[0][2] == 'X')) {
						board[1][2] = 'O';
						break;
					}
				}


				if ((board[0][0] != 'O') && (board[1][1] != 'O') && (board[2][2] != 'O')) {
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][2] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][2]) && (board[1][1] == 'X')) {
						board[0][0] = 'O';
						break;
					}
					else if ((board[0][0] == board[2][2]) && (board[0][0] == 'X')) {
						board[1][1] = 'O';
						break;
					}
				}


				if ((board[0][2] != 'O') && (board[1][1] != 'O') && (board[2][0] != 'O')) {
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // 페이즈마다 한줄로 묶고 3가지 경우의 수마다 방어하기 코드(대각선)
						board[2][0] = 'O';
						break;
					}
					else if ((board[1][1] == board[2][0]) && (board[1][1] == 'X')) {
						board[0][2] = 'O';
						break;
					}
					else if ((board[0][2] == board[2][0]) && (board[0][2] == 'X')) {
						board[1][1] = 'O';
						break;
					}

				}

				else {
					for (j = 0; j < 1; j++) {

						srand(time(0));

						a = rand() % 3;
						b = rand() % 3;

						if (board[a][b] == ' ')
							board[a][b] = 'O';

						else if (board[a][b] != ' ')
							j -= 1;
					}
				}

			}
		}

		if (k == 4)
			printf("비겼네요...\n");


		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}

		printf("---|---|---|\n");



		if (board[0][0] != ' ') {
			if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[0][0]);
				break;

			}

			else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[0][0]);
				break;
			}
		}

		if (board[2][2] != ' ') {
			if ((board[2][2] == board[2][1]) && (board[2][2] == board[2][0])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[2][2]);
				break;

			}

			else if ((board[2][2] == board[1][2]) && (board[2][2] == board[0][2])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[2][2]);
				break;
			}
		}


		if (board[1][1] != ' ') {
			if ((board[1][1] == board[0][1]) && (board[1][1] == board[2][1])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[1][1]);
				break;

			}

			else if ((board[1][1] == board[1][2]) && (board[1][1] == board[1][0])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[1][1]);
				break;
			}

			else if ((board[1][1] == board[0][0]) && (board[1][1] == board[2][2])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[1][1]);
				break;
			}
			else if ((board[1][1] == board[0][2]) && (board[1][1] == board[2][0])) {
				printf("게임 끝, %c가 이겼습니다. \n", board[1][1]);
				break;
			}
		}
	}

	return 0;
}