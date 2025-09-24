/* 파일명: ch07-06.c

 * 내용: 예제 7-6. 잘못된 인덱스를 사용하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);
	arr[5] = 100;

	return 0;
}
