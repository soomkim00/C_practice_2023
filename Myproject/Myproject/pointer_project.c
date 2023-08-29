#include <stdio.h>
#include <time.h>s

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int level;
int arrayFish[6];
int* cursor; // 미션맨 역할

int main(void) {
	long startTime = 0; // 게임 시작시간
	long totalElapsedTime = 0; // 총 경과시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근 물 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인가? 사용자 입력
	initData();

	cursor = arrayFish; // cursor[0]...

	startTime = clock();
	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 주시겠나요? ");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num > 6) {
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		// 총 경과시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 (마지막으로 물 준 시간) 이후 흐른 시간;
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		// 어항 물 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자 입력 어항에 물을 준다.
		// 1. 어항 물 0 > 물 안줌
		if (cursor[num - 1] <= 0) {
			printf("%d번 물고기는 이미 죽었다.\n", num);
		}
		// 2. 어항 물 100 넘지 않는지 체크. (현재 어항 물 + 1 <= 100)
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d번 어항에 물을 준다\n", num);
			cursor[num - 1] += 1;
		}
		
		// 레벨업 할 건지 확인 (20초마다 수행)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf(" * 레벨업! %d Lv > %d Lv * \n\n", level - 1, level);

			// 최종 레벨 5 달성
			if (level == 5) {
				printf(" \n\n * 최고 레벨 달성! 게임 끗\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다..\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 남았다!\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1; // 게임 레벨(1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 어항 물 높이 최대(0~100);
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		}
	}
	return 0;
}