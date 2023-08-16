#include <stdio.h>
int main(void) 
{
	// 정수형 변수 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수 예제
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%lf\n", d);*/

	// 상수 예제
	/*const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	return 0;*/

	// printf
	// 연산
	//int add = 3 + 7; // 10
	////printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);

	// scanf : 키보드 값 입력 받아 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input);
	//printf("%d\n", input);

	//int one, two, three;
	//printf("3개 정수 입력 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("첫번째 값 : %d\n", one);
	//printf("두번째 값 : %d\n", two);
	//printf("세번째 값 : %d\n", three);

	// 문자(한 글자), 문자열
	//char c = 'A';
	//printf("%c\n", c);

	// 문자열
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);

	return 0;
}