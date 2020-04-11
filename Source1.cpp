#include<iostream>
#include <cstdlib>

using namespace std;

char board[9] = { '-','-' ,'-' ,'-' ,'-' ,'-' ,'-' ,'-' ,'-' };
int i, j;

//������� ������ ��������� �����
void board_cout() {
	cout << "#############" << endl;
	cout << "# 1 # 2 # 3 #" << endl;
	cout << "#############" << endl;
	cout << "# 4 # 5 # 6 #" << endl;
	cout << "#############" << endl;
	cout << "# 7 # 8 # 9 #" << endl;
	cout << "#############" << endl;
}


//������� ������ ����� � ������
int move() {
	int nomer;
	cout << "#############" << endl;
	cout << "# " << board[0] << " # " << board[1] << " # " << board[2] << " # " << endl;
	cout << "#############" << endl;
	cout << "# " << board[3] << " # " << board[4] << " # " << board[5] << " # " << endl;
	cout << "#############" << endl;
	cout << "# " << board[6] << " # " << board[7] << " # " << board[8] << " # " << endl;
	cout << "#############" << endl;
	cout << "\n� ����� ������ �� ������ ��������� �?-";
	cin >> nomer;
	while (nomer > 9 || nomer < 1 || board[nomer - 1] != '-') {
		cout << "���������� ������� ���������� ����� (1-9):";
		cin >> nomer;
	}
	return nomer;
}



int main() {
	setlocale(LC_ALL, "RUS");
	int** a;
	int n = 3, m = 3, proverka;

	//������ ������ � ��������� ������
	a = new int* [n];
	for (i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = 0;
		}
	}

	//�������� 2 ������� � �������� ���
	board_cout();
	cout << endl;
	int nomer = move();
	board[nomer - 1] = 'X'; //�������� � � ��������� �������

	//������� ��� ���������� �������
	if (nomer == 1) {
		a[0][0] = 1;
	}
	if (nomer == 2) {
		a[0][1] = 1;
	}
	if (nomer == 3) {
		a[0][2] = 1;
	}
	if (nomer == 4) {
		a[1][0] = 1;
	}
	if (nomer == 5) {
		a[1][1] = 1;
	}
	if (nomer == 6) {
		a[1][2] = 1;
	}
	if (nomer == 7) {
		a[2][0] = 1;
	}
	if (nomer == 8) {
		a[2][1] = 1;
	}
	if (nomer == 9) {
		a[2][2] = 1;
	}

	//��������� ������ ������ ���
	for (i = 0; i < n; i++)
	{

		for (j = 0; j < m; j++) {
			//���� ������� ����, �� ������ ���� ������ ������� � � ��������� ���� �������� �
			if (a[i][j] == 0) {
				a[i][j] = 1;

				//������� ����� ���� ����� �� ������ �����
				if (i == 0 && j == 0) {
					board[0] = 'O';
				}
				if (i == 0 && j == 1) {
					board[1] = 'O';
				}
				if (i == 0 && j == 2) {
					board[2] = 'O';
				}
				if (i == 1 && j == 0) {
					board[3] = 'O';
				}
				if (i == 1 && j == 1) {
					board[4] = 'O';
				}
				if (i == 1 && j == 2) {
					board[5] = 'O';
				}
				if (i == 2 && j == 0) {
					board[6] = 'O';
				}
				if (i == 2 && j == 1) {
					board[7] = 'O';
				}
				if (i == 2 && j == 2) {
					board[8] = 'O';
				}
				proverka = 1; //�������� �����, ����� �������� �� �����
				break;
			}
		}
		if (proverka == 1)break;
	}


	//������� ���� ���������� ���� ������ � ����������
	for (int k = 1; k < 5; k++) {
		system("cls");  //������� ��������
		proverka = 0;   //�������� �������� ������ ���


		//���������� �������� ��������� ����
		board_cout();
		cout << endl;
		int nomer = move();
		board[nomer - 1] = 'X';


		if (nomer == 1) {
			a[0][0] = 1;
		}
		if (nomer == 2) {
			a[0][1] = 1;
		}
		if (nomer == 3) {
			a[0][2] = 1;
		}
		if (nomer == 4) {
			a[1][0] = 1;
		}
		if (nomer == 5) {
			a[1][1] = 1;
		}
		if (nomer == 6) {
			a[1][2] = 1;
		}
		if (nomer == 7) {
			a[2][0] = 1;
		}
		if (nomer == 8) {
			a[2][1] = 1;
		}
		if (nomer == 9) {
			a[2][2] = 1;
		}


		//������ ��� ����� ���� ���������� ���� �������� ��������
		if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}
		if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
			cout << "\n�������� ��������!\n" << endl;
			system("pause");
			exit(0);
		}


		//������������ �������, ����� � ������ ������� ��������� �������� �����
		if (proverka == 0) {
			for (i = 0; i < n; i++)
			{

				for (j = 0; j < m; j++) {
					if (a[i][j] == 0) {
						a[i][j] = 1;


						if (i == 0 && j == 0) {
							board[0] = 'O';
						}
						if (i == 0 && j == 1) {
							board[1] = 'O';
						}
						if (i == 0 && j == 2) {
							board[2] = 'O';
						}
						if (i == 1 && j == 0) {
							board[3] = 'O';
						}
						if (i == 1 && j == 1) {
							board[4] = 'O';
						}
						if (i == 1 && j == 2) {
							board[5] = 'O';
						}
						if (i == 2 && j == 0) {
							board[6] = 'O';
						}
						if (i == 2 && j == 1) {
							board[7] = 'O';
						}
						if (i == 2 && j == 2) {
							board[8] = 'O';
						}


						//�������� �� ������� ����� ���� ��������
						if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
							cout << "\n�������� ������!\n" << endl;
							system("pause");
							exit(0);
						}
						proverka = 1;
					}
					if (proverka == 1)break;
				}
				if (proverka == 1)break;
			}
		}
	}

	//���� ����� �� �������, ��������� �������� � ��������� ������������ ����

	cout << "\n�����\n" << endl;
	system("pause");
}