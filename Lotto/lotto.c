#include <stdio.h>
#include <stdlib.h>		//���� ���� ���̺귯��
#include<time.h>		// seed�� �ʱ�ȭ�� ���� (������ �ʱ�ȭ)



int main() {

	int lotto77[5][7] = { NULL, NULL };	 //5�� x  7���� ���� ���

	srand((unsigned int)time(NULL));	 //���� ������ ���� �ð� �Լ� , seed�� �ʱ�ȭ

	int stemp;				// ���� Ȯ�ο�
	int temp = 0;				// �ߺ� Ȯ�ο�
	int continue_count = 0;		//���� ���� Ȯ�ο�
	int even = 0;
	int odd = 0;


	for (int i = 0; i < 5; i++) {
		//���� ����
		even = 0;
		odd = 0;
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = rand() % 45 + 1;
			// �ߺ�����
			for (temp = 0; temp < j; temp++) {
				if (lotto77[i][j] == lotto77[i][temp]) {
					j--;
					break;
					if (abs(lotto77[i][j] - lotto77[i][temp]) == 1)
						continue_count++;
				}
			}
			if (lotto77[i][j] % 2 == 0)
				even++;
			else
				odd++;
		}
		if (continue_count > 2) {
			i--;
			continue;
		}
		if (odd >= 5 || even >= 5)
			i--;
	}

	//���� ����
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