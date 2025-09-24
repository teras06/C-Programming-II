/* 파일명: ch07-05.c

 * 내용: 예제 7-5. 배열 원소의 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int arr[ARR_SIZE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("정수를 두개 입력하세요: ");
	scanf("%d %d", &arr[3], &arr[4]);

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

