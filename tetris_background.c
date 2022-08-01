#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define Block_kind 7  // 
#define Block_size 4  // 4���� �迭�� �� ��� ���¸� �迭�� 
//Block[Bolck_kind][Block_size][Block_size][Block_size]

#define Board_Width 12
#define Board_Height 22
#define BoardX 10  // X ��ġ - background
#define BoardY 0   // Y ��ġ - background


#define Next_Board_Width 5    // Next_Board
#define Next_Board_Height 10  // Next_Board
#define Next_BoardX 60		  // Next_Board
#define Next_BoardY 0		  // Next_Board


void textcolor(int colorNum) { //���� �� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}


void GotoXY(int x, int y) { //GotoXY  // cmdâ�� x y ��ǥ �Է�
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}


int board[Board_Height][Board_Width]; //board[����][����] �迭

//���� ���� Ʋ ����
void creatBoard() {
	for (int y = 0; y < Board_Height; y++) {     // #define Borad_Height 22
		board[y][0] = 1;
		board[y][Board_Width - 1 ] = 1;
		for (int x = 0; x < Board_Width; x++) {  // #define Borad_Width 12
			if (y == 0) {
				board[y][x] = 0;
			}
			board[Board_Height - 1][x] = 1;
			if (y > 0 && y < Board_Height - 1) {
				if (x > 0 && x < Board_Width - 1) {
					board[y][x] = 0;
				}
			}
		}
	}
}


//���� ���� ��� ���
void printBoard() {
	for (int x = 1; x < 12; x++) {				// �� �� ��輱  // x < 12 = '_' ��� ���
		GotoXY(BoardX + x * 2, BoardY + 1);		// x, y ��ǥ ��ġ 
		textcolor(14);
		printf("_");
	}

	for (int y = 0; y < Board_Height; y++) {	// ���� ���� // y++ �̱� ������ x�� ���� , y�� �Ʒ��� ������
		GotoXY(BoardX, BoardY + y);
		if (board[y][0] == 1) {
			textcolor(5);
			printf("��");
		}
		if (board[y][Board_Width - 1] == 1) {	// ������ ����
			GotoXY(BoardX + Board_Width * 2 - 2, BoardY + y);		// ������ �� x,y ��ǥ
			textcolor(5);
			printf("��");
		}		
	}

	for (int x = 0; x < Board_Width; x++) { //�� �� ��
		GotoXY(BoardX + x * 2, BoardY + Board_Height - 1);  // x ĭ�� ��ǥ x�� 1�� �ϳ��� ��� * 2  // �� �� �� x,y ǥ��
		if (board[Board_Height - 1][x] == 1) {
			textcolor(5);
			printf("��");
		}
	}
	printf("\n");
	textcolor(10); // �̻��� ���� �� ���� <- �� â�� ��������..
}


// Next �� ǥ��ĭ - �̿ϼ� //
void print_Next_Board() {
	for (int x = 1; x < 14; x++) {	// �� �� ��輱
		GotoXY(Next_BoardX + x * 2, Next_BoardY + 1);
		textcolor(14);
		printf("��");
	}

	for (int y = 0; y < Board_Height; y++) {	// ���� ����
		GotoXY(Next_BoardX, Next_BoardY + y);
		if (board[y][0] == 1) {
			textcolor(5);
			printf("��");
		}
		if (board[y][Board_Width - 1] == 1) {	// ������ ����
			GotoXY(Next_BoardX + Board_Width * 2 - 2, Next_BoardY + y);
			textcolor(5);
			printf("��");
		}
	}

	for (int x = 0; x < Board_Width; x++) { //�� �� ��
		GotoXY(Next_BoardX + x * 2, Next_BoardY + Board_Height - 1);
		if (board[Board_Height - 1][x] == 1) {
			textcolor(5);
			printf("��");
		}
	}
	textcolor(10); // �̻��� ���� �� ���� <- �� â�� ��������..
}




int main() {

	creatBoard(); // ���κ��� Ʋ �ҷ�����
	printBoard(); // ���κ��� ���


	return 0;
}