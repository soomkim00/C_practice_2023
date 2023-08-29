#include <stdio.h>
#include <time.h>s

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int level;
int arrayFish[6];
int* cursor; // �̼Ǹ� ����

int main(void) {
	long startTime = 0; // ���� ���۽ð�
	long totalElapsedTime = 0; // �� ����ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱ� �� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ���ΰ�? ����� �Է�
	initData();

	cursor = arrayFish; // cursor[0]...

	startTime = clock();
	while (1) {
		printfFishes();
		printf("�� �� ���׿� ���� �ֽðڳ���? ");
		scanf_s("%d", &num);

		// �Է°� üũ
		if (num < 1 || num > 6) {
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		// �� ����ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �� �ð� (���������� �� �� �ð�) ���� �帥 �ð�;
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		// ���� �� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����� �Է� ���׿� ���� �ش�.
		// 1. ���� �� 0 > �� ����
		if (cursor[num - 1] <= 0) {
			printf("%d�� ������ �̹� �׾���.\n", num);
		}
		// 2. ���� �� 100 ���� �ʴ��� üũ. (���� ���� �� + 1 <= 100)
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d�� ���׿� ���� �ش�\n", num);
			cursor[num - 1] += 1;
		}
		
		// ������ �� ���� Ȯ�� (20�ʸ��� ����)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf(" * ������! %d Lv > %d Lv * \n\n", level - 1, level);

			// ���� ���� 5 �޼�
			if (level == 5) {
				printf(" \n\n * �ְ� ���� �޼�! ���� ��\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�..\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ���Ҵ�!\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1; // ���� ����(1~5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // ���� �� ���� �ִ�(0~100);
	}
}

void printfFishes() {
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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