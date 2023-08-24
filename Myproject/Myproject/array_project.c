#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	printf("\n\n === �ƺ��� ��Ӹ� ���� == \n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ����(0~3)

	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �ռ� ���ӿ� ������ �� ����
	// �����ִ� �� ���� �ٸ��� �ؼ� ����� �ø��� (2��, 3�� ...)

	// 3�� ��ȸ �ο�
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };

		// ���� �� ������ �̹� ���� �ٸ��� �ϴ� ��ġ
		do {
			cntShowBottle = rand() % 2 + 2; // ������ �� ���� 2 or 3
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0;
		printf(" > %d ��° �õ� : ", i);

		// ������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; // 0 ~ 3

			// ���� ���õ��� ���� ���̸�, ����ó��
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

		// ����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf(" ������ �Ӹ��� �ٸ��ϴ�\n\n");

		if (isIncluded == 1) {
			printf(" >> ����! �ڶ󳪶� �Ӹ��Ӹ�! \n");
		}
		else {
			printf(" >> ����! �Ӹ��� ���� �ʾҴ�.. \n");
		}

		printf("\n... ����Ϸ��� �ƹ� Ű�� ��������..");
		getchar();
	}

	printf("\n\n �߸�����?? ");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> ����!\n");
	}
	else {
		printf("\n >> ��! ������ %d!\n", treatment + 1);
	}

	return 0;
}