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

		printf("(x, y) ��ǥ: ");
		scanf("%d %d", &y, &x);

		if (board[x][y] == ' ')
			board[x][y] = 'X';

		else {
			printf("�ű⿡�� ���� ���� �����~\n");
			k -= 1;
			continue;
		}                                                                                 // ��������
		if (k == 0) {
			if (board[1][1] != ' ') {

				board[0][0] = 'O';

				//ù���� ������� ��밡 �����̿� ���°� �߾ӿ� ���°� �ƴϸ� �鿡 ���°��� ���� ����� ���� ������ ��밡 �����̿��� �����Ѵٸ� �߾��� �����Ͽ� ������ �����Ѵ�. ��밡 �߾ӿ��� �����Ѵٸ� �����̿� ���� �ϴ� ������ �õ��غ���, �ȵȴٸ� ����. ��밡 �鿡�� �����ϸ� ������ �õ��Ѵ�.


			}


			else if (board[1][1] == ' ')
				board[1][1] = 'O';
		}



		if (k == 1) {
			for (z = 0; z < 1; z++) {
				if ((board[1][1] == 'O') && (board[1][0] == 'X') && (board[2][1] == 'X')) {                            	       // Ư���� ���1
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][0] == 'X') && (board[0][1] == 'X')) {                              // Ư���� ���1
					board[2][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][2] == 'X') && (board[0][1] == 'X')) {                              // Ư���� ���1
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[1][2] == 'X') && (board[2][1] == 'X')) {                              // Ư���� ���1
					board[2][0] = 'O';
					break;
				}

				if ((board[0][0] == 'O') && (board[1][1] == 'X') && (board[2][2] == 'X')) {			      // Ư���� ��� 2
					board[2][0] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[2][0] == 'X') && (board[0][2] == 'X')) {                            	       // Ư���� ��� 3
					board[0][1] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[0][0] == 'X') && (board[2][2] == 'X')) {                            	       // Ư���� ��� 3
					board[0][1] = 'O';
					break;
				}

				if ((board[1][1] == 'O') && (board[0][1] == 'X') && (board[2][0] == 'X')) {                            	       // Ư���� ��� 4
					board[0][0] = 'O';
					break;
				}

				else if ((board[1][1] == 'O') && (board[0][1] == 'X') && (board[2][2] == 'X')) {                               // Ư���� ��� 4
					board[0][2] = 'O';
					break;
				}


				if ((board[0][0] != 'O') && (board[0][1] != 'O') && (board[0][2] != 'O')) {
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
						board[2][2] = 'O';			                       	//���� ���ǿ� �ش����� ���� ���
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
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(���μ�)
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
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(���μ�)
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
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'O')) {                                  // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(�밢��)
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
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(�밢��)
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
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(���μ�)
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
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(���μ�)
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
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'O')) {                                  // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(�밢��)
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
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'O')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ �����ϱ� �ڵ�(�밢��)
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
					if ((board[0][0] == board[0][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[1][0] == board[1][1]) && (board[1][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[2][0] == board[2][1]) && (board[2][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][0]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(���μ�)
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
					if ((board[0][1] == board[1][1]) && (board[0][1] == 'X')) {                                  // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][2] == board[1][2]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�
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
					if ((board[0][0] == board[1][1]) && (board[0][0] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
					if ((board[0][2] == board[1][1]) && (board[0][2] == 'X')) {                                   // ������� ���ٷ� ���� 3���� ����� ������ ����ϱ� �ڵ�(�밢��)
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
			printf("���׿�...\n");


		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}

		printf("---|---|---|\n");



		if (board[0][0] != ' ') {
			if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[0][0]);
				break;

			}

			else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[0][0]);
				break;
			}
		}

		if (board[2][2] != ' ') {
			if ((board[2][2] == board[2][1]) && (board[2][2] == board[2][0])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[2][2]);
				break;

			}

			else if ((board[2][2] == board[1][2]) && (board[2][2] == board[0][2])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[2][2]);
				break;
			}
		}


		if (board[1][1] != ' ') {
			if ((board[1][1] == board[0][1]) && (board[1][1] == board[2][1])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[1][1]);
				break;

			}

			else if ((board[1][1] == board[1][2]) && (board[1][1] == board[1][0])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[1][1]);
				break;
			}

			else if ((board[1][1] == board[0][0]) && (board[1][1] == board[2][2])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[1][1]);
				break;
			}
			else if ((board[1][1] == board[0][2]) && (board[1][1] == board[2][0])) {
				printf("���� ��, %c�� �̰���ϴ�. \n", board[1][1]);
				break;
			}
		}
	}

	return 0;
}