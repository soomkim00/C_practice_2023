#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	printf("\n\n === 아빠는 대머리 게임 == \n\n");
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제 선택(0~3)

	int cntShowBottle = 0; // 이번 게임에 보여줄 병 개수
	int prevCntShowBottle = 0; // 앞선 게임에 보여준 병 개수
	// 보여주는 병 개수 다르게 해서 정답률 올리기 (2개, 3개 ...)

	// 3번 기회 부여
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };

		// 이전 병 개수와 이번 개수 다르게 하는 장치
		do {
			cntShowBottle = rand() % 2 + 2; // 보여줄 병 개수 2 or 3
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0;
		printf(" > %d 번째 시도 : ", i);

		// 보여줄 병 종류 선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; // 0 ~ 3

			// 아직 선택되지 않은 병이면, 선택처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				j--;
			}
		}

		// 사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf(" 물약을 머리에 바릅니다\n\n");

		if (isIncluded == 1) {
			printf(" >> 성공! 자라나라 머리머리! \n");
		}
		else {
			printf(" >> 실패! 머리가 나지 않았다.. \n");
		}

		printf("\n... 계속하려면 아무 키나 누르세요..");
		getchar();
	}

	printf("\n\n 발모제는?? ");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> 정답!\n");
	}
	else {
		printf("\n >> 땡! 정답은 %d!\n", treatment + 1);
	}

	return 0;
}