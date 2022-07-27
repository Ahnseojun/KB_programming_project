#include <stdio.h>
#include <stdlib.h>		//난수 생성 라이브러리
#include<time.h>		// seed값 초기화를 위함 (난수를 초기화)

//변수 생성
int temp;				// 중복 확인용
int stemp;				// 정렬 확인용
int continue_count;		//연속 숫자 확인용


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

	int lotto77[5][7] = { NULL, NULL };	 //5번 x  7개의 숫자 출력

	srand((unsigned int)time(NULL));	 //난수 생성을 위한 시간 함수 , seed값 초기화


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			lotto77[i][j] = (rand() % 45) + 1;
			// 중복제거
			for (temp = 0; temp < j; temp++) {
				if (lotto77[i][j] == lotto77[i][temp]) {
					j--;
				}
				if (abs(lotto77[i][j]) - lotto77[i][temp] == 1) {  // 연속된 숫자 있으면 +1
					continue_count += 1;
				}
			}

			if (continue_count > 2) {
				i--;
				continue; //가끔 나오다 안나옴
			}

		}
	}


	lotto_sort(lotto77);  //번호 정렬


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

// (조건)
// 7개를 출력하고
// 0 ~ 5번까지는 정렬을 하고 마지막 6번째는 보너스 번호로 지정
// 연속되는 숫자 3개가 있으면 다시 만들기
// 전체적으로 짝수 이거나 홀수 이면 다시 만들기
// 

	// 3번호 연속 되면  
	// count를 세어서 count = 2가 되면 
	// 다시 돌리도록 만든다 / 그렇게 할라면 함수로 (정렬), (랜덤생성)을 함수로 만들어야함
	// 



//랜덤번호 생성

	//로또 번호 생성
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 7; j++) {
	//		lotto77[i][j] = (rand() % 45) + 1;
	//
	//		// 중복제거
	//		for (temp = 0; temp < j; temp++) {
	//			if (lotto77[i][j] == lotto77[i][temp]) {
	//				j--;
	//			}
	//		}
	//	}
	//}

//버블정렬

	//버블정렬
	//0 ~ 6사이만 정렬 0 < 6
	// 마지막부터 i를 1씩 감소, 처음 배열의 i-1까지
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
