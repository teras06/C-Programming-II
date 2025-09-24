/* 파일명: ch07-02.c

 * 내용: 예제 7-2. 매크로 상수로 배열의 크기를 지정하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++)
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}