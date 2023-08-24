#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// 함수 선언
void p(int num);
void funtion_without_return();
int funtion_with_return();
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
	// funtion
	// 계산기 예제
	//int num = 2;
	//p(num);
	//num = num + 3;
	//p(num);
	//num -= 1;
	//p(num);
	//num *= 3;
	//p(num);
	//num /= 6;
	//p(num);

	// 반환값 없는 함수
	//funtion_without_return();

	//// 반환값 있는 함수
	//int ret = funtion_with_return();
	//p(ret);

	// 계산기 함수
	//int num = 2;
	//num = add(num, 3);
	//p(num);
 	//num = sub(num, 1);
	//p(num);
	//num = mul(num, 3);
	//p(num);
	//num = div(num, 6);
	//p(num);

	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램 종료합니다\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n 당신은 5개 중 %d 개를 맞췄습니다\n", count);

	return 0;
}

// 함수 정의
int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n### % 번째 비밀번호 ###\n", level);
	printf("\n\t%d x %d 는?\n\n", num1, num2);
	printf("#############\n");
	printf("\n 비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success() {
	printf("\n >> Good! 정답!\n");
}

void fail() {
	printf("\n >> Oh.. 실패입니다\n");
}

void funtion_without_return() {
	printf("반환값 없는 함수\n");
}

int funtion_with_return() {
	printf("반환값 있는 함수\n");
	return 10;
}

void p(int num) {
	printf("num 은 %d 입니다\n", num);
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int divi(int num1, int num2) {
	return num1 / num2;
}