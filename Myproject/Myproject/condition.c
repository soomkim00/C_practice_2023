#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	// if else 조건문
	//int age = 15;
	//if (age >= 20)
	//	printf("일반인입니다\n");
	//else
	//	printf("학생입니다\n");

	// if / else if / else 조건문
	//int age = 55;
	//if (age >= 8 && age <= 13) {
	//	printf("초등학생입니다\n");
	//}
	//else if (age > 13 && age <= 16) {
	//	printf("중학생입니다\n");
	//}
	//else if (age > 16 && age <= 19) {
	//	printf("고등학생입니다\n");
	//}
	//else {
	//	printf("어른입니다\n");
	//}

	// break / continue
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6) {
	//		printf("수업 마칠게요\n");
	//		break;
	//	}
	//	printf("%d번 학생 발표하세요\n", i);
	//}

	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6 && i <= 10) {
	//		printf("%d번 학생은 발표하세요\n", i);
	//		if (i == 7) {
	//			printf("%d번 학생 결석\n", i);
	//			continue;
	//		}
	//	}
	//}

	// and / or && ||
	//int a = 10;
	//int b = 10;
	//int c = 12;
	//int d = 13;
	//if (a == b || c == d) {
	//	printf("a=b or c=d\n");
	//}
	//else {
	//	printf("다르네요");
	//}

	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0) {
	//	printf("가위\n");
	//}
	//else if (i == 1) {
	//	printf("바위\n");
	//}
	//else if (i == 2) {
	//	printf("보\n");
	//}
	//else {
	//	printf("모르겠습니다\n");
	//}

	// switch / case
	//srand(time(NULL));
	//int i = rand() % 3;

	//switch (i) {
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;
	//}

	// 숫자 맞추기 - 프로젝트

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 랜덤 수
	printf("%d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0) {
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞춰보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer < num) {
			printf("UP \n\n");
		}
		else if (answer == num) {
			printf("정답! \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류 발생 \n\n");
		}

		if (chance == 0) {
			printf("실패!\n");
			break;
		}
	}

	return 0;
}