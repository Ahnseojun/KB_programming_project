#include <stdio.h>
#include <stdlib.h> //���� ���� ���̺귯��
#include<time.h> // seed�� �ʱ�ȭ�� ���� (������ �ʱ�ȭ)



int main() {

	int lotto77[5][6] = {NULL, NULL}; //5�� x  7���� ���� ���

	//���� ����
	int temp; //�ߺ� Ȯ�ο�

	//���� ������ ���� �ð� �Լ� , seed�� �ʱ�ȭ
	srand((unsigned int)time(NULL));   // int a = rand() ���� ����

	//�ζ� ��ȣ ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			lotto77[i][j] = (rand() % 45) + 1;
			
		}
	}


	//����



	//5�� 6�� ���
	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 6; l++) {
			printf("%3d ", lotto77[k][l]);
		}
		printf("\n");
	}
	

	return 0;
}

// (����)
// 7���� ����ϰ�
// 0 ~ 5�������� ������ �ϰ� ������ 6��°�� ���ʽ� ��ȣ�� �ν�
// ���ӵǴ� ���� 3���� ������ �ٽ� �����
// ��ü������ ¦�� �̰ų� Ȧ�� �̸� �ٽ� �����
// 
