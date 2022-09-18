#include <stdio.h>
#include <stdlib.h>		//난수 생성 라이브러리
#include<time.h>		// seed값 초기화를 위함 (난수를 초기화)



int main() {

	int lotto77[5][7] = { NULL, NULL };	 //5번 x  7개의 숫자 출력

	srand((unsigned int)time(NULL));	 //난수 생성을 위한 시간 함수 , seed값 초기화

	int stemp;				// 정렬 확인용
	int temp = 0;				// 중복 확인용
	int continue_count = 0;		//연속 숫자 확인용
	int even = 0;
	int odd = 0;


	for (int i = 0; i < 5; i++) {
		//변수 생성
		even = 0;
		odd = 0;
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = rand() % 45 + 1;
			// 중복제거
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

	//버블 정렬
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

	//5줄 7개 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%4d ", lotto77[i][j]);
		}
		printf("  보너스 번호 : %3d", lotto77[i][6]);
		printf("\n");
	}


	return 0;
}