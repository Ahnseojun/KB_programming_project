#include <stdio.h>
#include <stdlib.h>		//���� ���� ���̺귯��
#include<time.h>		// seed�� �ʱ�ȭ�� ���� (������ �ʱ�ȭ)


int main() {

	int lotto77[5][7] = {0,0}; //5�� x  7���� ���� ���

	//���� ����
	int temp;  // �ߺ� Ȯ�ο�
	int stemp; // ���� Ȯ�ο�


	//���� ������ ���� �ð� �Լ� , seed�� �ʱ�ȭ
	srand((unsigned int)time(NULL));   // int a = rand() ���� ����

	//�ζ� ��ȣ ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = (rand() % 45) + 1;
			
			// �ߺ�����
			for (temp = 0; temp < j; temp++) {				
				if (lotto77[i][j] == lotto77[i][temp]) {
					i--;
				}  //�ߺ����� �κп��� ���  run-time check failure #2 - stack around the variable ���� //���ָ� �ȶ� // �ڵ忡 ���� �ִµ�
			}
		}
	}

	//��������


	//5�� 7�� ���
	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 7; l++) {
			printf("%4d ", lotto77[k][l]);
		}
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
