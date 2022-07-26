#include <stdio.h>
#include <stdlib.h> //난수 생성 라이브러리
#include<time.h> // seed값 초기화를 위함 (난수를 초기화)



int main() {

	int lotto77[5][6] = {NULL, NULL}; //5번 x  7개의 숫자 출력

	//변수 생성
	int temp; //중복 확인용

	//난수 생성을 위한 시간 함수 , seed값 초기화
	srand((unsigned int)time(NULL));   // int a = rand() 변수 생성

	//로또 번호 생성
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			lotto77[i][j] = (rand() % 45) + 1;
			
		}
	}


	//정렬



	//5줄 6개 출력
	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 6; l++) {
			printf("%3d ", lotto77[k][l]);
		}
		printf("\n");
	}
	

	return 0;
}

// (조건)
// 7개를 출력하고
// 0 ~ 5번까지는 정렬을 하고 마지막 6번째는 보너스 번호로 인식
// 연속되는 숫자 3개가 있으면 다시 만들기
// 전체적으로 짝수 이거나 홀수 이면 다시 만들기
// 
