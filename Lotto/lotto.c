#include <stdio.h>
#include <stdlib.h>		//���� ���� ���̺귯��
#include<time.h>		// seed�� �ʱ�ȭ�� ���� (������ �ʱ�ȭ)

//���� ����
int temp;				// �ߺ� Ȯ�ο�
int stemp;				// ���� Ȯ�ο�
int continue_count;		//���� ���� Ȯ�ο�


void lotto_sort(int lotto77[][7]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j >= 0; j--) {
			for (int k = 0; k < j; k++) {
				if (lotto77[i][j] < lotto77[i][k]) {
					stemp = lotto77[i][j];
					lotto77[i][j] = lotto77[i][k];
					lotto77[i][k] = stemp;
				}
			}
		}
	}
}


int main() {

	int lotto77[5][7] = { NULL, NULL };	 //5�� x  7���� ���� ���

	srand((unsigned int)time(NULL));	 //���� ������ ���� �ð� �Լ� , seed�� �ʱ�ȭ


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = (rand() % 45) + 1;
			// �ߺ�����
			for (temp = 0; temp < j; temp++) {
				if (lotto77[i][j] == lotto77[i][temp]) {
					j--;
				}
				if (abs(lotto77[i][j]) - lotto77[i][temp] == 1) {  // ���ӵ� ���� ������ +1
					continue_count += 1;
				}
			}

			if (continue_count > 2) {
				i--;
				continue; //���� ������ �ȳ���
			}

		}
	}


	lotto_sort(lotto77);  //��ȣ ����


	//5�� 7�� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%4d ", lotto77[i][j]);
		}
		printf("  ���ʽ� ��ȣ : %3d", lotto77[i][6]);
		printf("\n");
	}


	return 0;
}

// (����)
// 7���� ����ϰ�
// 0 ~ 5�������� ������ �ϰ� ������ 6��°�� ���ʽ� ��ȣ�� ����
// ���ӵǴ� ���� 3���� ������ �ٽ� �����
// ��ü������ ¦�� �̰ų� Ȧ�� �̸� �ٽ� �����
// 

	// 3��ȣ ���� �Ǹ�  
	// count�� ��� count = 2�� �Ǹ� 
	// �ٽ� �������� ����� / �׷��� �Ҷ�� �Լ��� (����), (��������)�� �Լ��� ��������
	// 



//������ȣ ����

	//�ζ� ��ȣ ����
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 7; j++) {
	//		lotto77[i][j] = (rand() % 45) + 1;
	//
	//		// �ߺ�����
	//		for (temp = 0; temp < j; temp++) {
	//			if (lotto77[i][j] == lotto77[i][temp]) {
	//				j--;
	//			}
	//		}
	//	}
	//}

//��������

	//��������
	//0 ~ 6���̸� ���� 0 < 6
	// ���������� i�� 1�� ����, ó�� �迭�� i-1����
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 5; j >= 0; j--) {
	//		for (int k = 0; k < j; k++) {
	//			if (lotto77[i][j] < lotto77[i][k]) {
	//				stemp = lotto77[i][j];
	//				lotto77[i][j] = lotto77[i][k];
	//				lotto77[i][k] = stemp;
	//			}
	//		}
	//	}
	//}
