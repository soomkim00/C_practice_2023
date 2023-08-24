#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	// if else ���ǹ�
	//int age = 15;
	//if (age >= 20)
	//	printf("�Ϲ����Դϴ�\n");
	//else
	//	printf("�л��Դϴ�\n");

	// if / else if / else ���ǹ�
	//int age = 55;
	//if (age >= 8 && age <= 13) {
	//	printf("�ʵ��л��Դϴ�\n");
	//}
	//else if (age > 13 && age <= 16) {
	//	printf("���л��Դϴ�\n");
	//}
	//else if (age > 16 && age <= 19) {
	//	printf("����л��Դϴ�\n");
	//}
	//else {
	//	printf("��Դϴ�\n");
	//}

	// break / continue
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6) {
	//		printf("���� ��ĥ�Կ�\n");
	//		break;
	//	}
	//	printf("%d�� �л� ��ǥ�ϼ���\n", i);
	//}

	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6 && i <= 10) {
	//		printf("%d�� �л��� ��ǥ�ϼ���\n", i);
	//		if (i == 7) {
	//			printf("%d�� �л� �Ἦ\n", i);
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
	//	printf("�ٸ��׿�");
	//}

	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0) {
	//	printf("����\n");
	//}
	//else if (i == 1) {
	//	printf("����\n");
	//}
	//else if (i == 2) {
	//	printf("��\n");
	//}
	//else {
	//	printf("�𸣰ڽ��ϴ�\n");
	//}

	// switch / case
	//srand(time(NULL));
	//int i = rand() % 3;

	//switch (i) {
	//case 0: printf("����\n"); break;
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����\n"); break;
	//}

	// ���� ���߱� - ������Ʈ

	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ���� ��
	printf("%d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (chance > 0) {
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���纸���� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer < num) {
			printf("UP \n\n");
		}
		else if (answer == num) {
			printf("����! \n\n");
			break;
		}
		else {
			printf("�� �� ���� ���� �߻� \n\n");
		}

		if (chance == 0) {
			printf("����!\n");
			break;
		}
	}

	return 0;
}