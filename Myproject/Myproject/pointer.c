#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main(void) {

	// 각 집의 주소 > 메모리 상 변수(철수, 영희, 민수)의 주소
	// 변수 값 = 암호
	//int 철수 = 1;
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("철수네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("철수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//// 미션맨!
	//// 첫 번째 미션 : 아파트 각 집 방문 후 암호(변수) 확인

	//int* 미션맨; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨의 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//printf("미션맨의 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//printf("미션맨의 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//// 두 번째 미션 : 각 암호에 3을 곱해라

	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 변경 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 변경 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨의 변경 방문 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//// 스파이
	//// 미션맨이 바꾼 암호에서 2를 빼라
	//int* 스파이 = 미션맨;
	//printf("\n\n 스파이 미션수행중\n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2;
	//printf("스파이 방문 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이 방문 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이 방문 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//printf("\n.. 철수, 영희, 민수가 집에 왔다\n");

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("철수네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("철수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	////참고로.. 미션맨, 스파이가 사는 곳의 주소도 있음 > &미션맨, &스파이 로 확인
	//printf("미션맨 주소 : %d, 암호 : %d\n", &미션맨, 미션맨);
	//printf("스파이 주소 : %d, 암호 : %d\n\n\n", &스파이, 스파이);

	//int* 이중스파이 = &스파이;
	//*이중스파이 += 5;
	//printf("철수네 주소 : %d, 암호 : %d\n", &민수, 민수);
	//printf("스파이 주소 : %d, 암호 : %d\n", &스파이, 스파이);
	//printf("이중스파이 주소 : %d, 암호 : %d\n", &이중스파이, 이중스파이);

	// 배열과 포인터?
	//int arr[3] = { 5, 10, 15 };
	//int* ptr = arr;
	////for (int i = 0; i < 3; i++) {
	////	printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i)); // == arr[i]
	////}
	////for (int i = 0; i < 3; i++) {
	////	printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	////}

	////ptr[0] = 100;
	////ptr[1] = 200;
	////ptr[2] = 300;
	////for (int i = 0; i < 3; i++) {
	////	printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	////}
	////for (int i = 0; i < 3; i++) {
	////	printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	////}
	// //*(arr + i) == arr[i]
	// //arr == arr 배열 첫 번째 값의 주소값
	//printf("arr 자체 값 : %d\n", arr);
	//printf("arr[0] 의 주소 : %d\n", &arr[0]);
	//printf("arr 자체 값을 주소로 가지는 값 : %d\n", *arr);
	//printf("arr[0] 의 실제 값 : %d\n", *&arr[0]);
	//// *& == 상쇄, & == 주소, * == 주소 값 즉, *&arr[0] == arr[0]
	//printf("arr[0] 의 실제 값 : %d\n", arr[0]);

	// swap
	//int a = 10;
	//int b = 20;
	//// a와 b 값을 바꿈
	//printf("Swap 함수 전 : a = %d, b = %d\n", a, b);
	//swap(a, b);
	//printf("Swap 함수 후 : a = %d, b = %d\n", a, b);
	//// 바뀌지 않았다. ?? call by value 값만 넘기는 함수기때문에, 변수가 변하지 않음
	//// how? 주소 값을 전달하는 함수로 변형
	//printf("Swap(주소) 함수 전 : a = %d, b = %d\n", a, b);
	//swap_addr(&a, &b);
	//printf("Swap(주소) 함수 후 : a = %d, b = %d\n", a, b);

	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr2 + i));
	}

	return 0;
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void changeArray(int* ptr) {
	ptr[2] = 50;
}