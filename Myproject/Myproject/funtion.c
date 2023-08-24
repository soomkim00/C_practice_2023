#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// �Լ� ����
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
	// ���� ����
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

	// ��ȯ�� ���� �Լ�
	//funtion_without_return();

	//// ��ȯ�� �ִ� �Լ�
	//int ret = funtion_with_return();
	//p(ret);

	// ���� �Լ�
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
			printf("���α׷� �����մϴ�\n");
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

	printf("\n\n ����� 5�� �� %d ���� ������ϴ�\n", count);

	return 0;
}

// �Լ� ����
int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n### % ��° ��й�ȣ ###\n", level);
	printf("\n\t%d x %d ��?\n\n", num1, num2);
	printf("#############\n");
	printf("\n ��й�ȣ�� �Է��ϼ��� (���� : -1) >> ");
}

void success() {
	printf("\n >> Good! ����!\n");
}

void fail() {
	printf("\n >> Oh.. �����Դϴ�\n");
}

void funtion_without_return() {
	printf("��ȯ�� ���� �Լ�\n");
}

int funtion_with_return() {
	printf("��ȯ�� �ִ� �Լ�\n");
	return 10;
}

void p(int num) {
	printf("num �� %d �Դϴ�\n", num);
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