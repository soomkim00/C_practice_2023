#include <stdio.h>

int main(void)
{
	//printf("Hello World\n");

	// ++
	//int a = 10;
	//printf("a 는 %d\n", a);
	//a++;
	//printf("a 는 %d\n", a);

	// 반복문 : for, while, do while

	// for (선언; 조건; 증감)
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World%d\n", i);
	//}
	
	// while (조건) {}
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World%d\n", i);
	//	i++;
	//}

	// do while
	// do {} while (조건);
	//int i = 1;
	//do {
	//	printf("Hello World%d\n", i++);
	//} while (i <= 10);

	// 2중 반복문 : 구구단
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문 : %d\n", i);
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("	두 번째 반복문 : %d\n", j);
	//	}
	//}

	// 구구단을 외자
	//for (int i = 2; i <= 9; i++)
	//{
	//	printf("%d단\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf(" %d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	/*
	* 
	**
	***
	****
	*****
	*/
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 -1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}