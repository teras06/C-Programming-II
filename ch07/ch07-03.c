/* 파일명: ch07-03.c

 * 내용: 예제 7-3. 가장 기본적인 배열의 초기화

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}