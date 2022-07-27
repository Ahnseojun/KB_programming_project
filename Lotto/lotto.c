#include <stdio.h>
#include <stdlib.h>		//���� ���� ���̺귯��
#include<time.h>		// seed�� �ʱ�ȭ�� ���� (������ �ʱ�ȭ)


int main() {

	int lotto77[5][7] = { NULL, NULL }; //5�� x  7���� ���� ���

	//���� ����
	int temp;  // �ߺ� Ȯ�ο�
	int stemp = 0; // ���� Ȯ�ο�


	//���� ������ ���� �ð� �Լ� , seed�� �ʱ�ȭ
	srand((unsigned int)time(NULL));

	//�ζ� ��ȣ ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = (rand() % 45) + 1;

			// �ߺ�����
			for (temp = 0; temp < j; temp++) {
				if (lotto77[i][j] == lotto77[i][temp]) {
					j--;
				}
			}
		}
	}

	//��������
	//0 ~ 6���̸� ���� 0 < 6
	// ���������� i�� 1�� ����, ó�� �迭�� i-1����
	for (int k = 0; k < 5; k++) {
		for (int i = 5; i >= 0; i--) {
			for (int j = 0; j < i; j++) {
				if (lotto77[k][i] < lotto77[k][j]) {
					stemp = lotto77[k][i];
					lotto77[k][i] = lotto77[k][j];
					lotto77[k][j] = stemp;
				}
			}
		}
	}

	// 3��ȣ ���� �Ǹ�  
	// count�� ��� count = 2�� �Ǹ� 
	// �ٽ� �������� ����� / �׷��� �Ҷ�� �Լ��� (����), (��������)�� �Լ��� ��������
	// 

	//5�� 7�� ���
	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 6; l++) {
			printf("%4d ", lotto77[k][l]);
		}
		printf("  ���ʽ� ��ȣ : %3d", lotto77[k][6]);
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
