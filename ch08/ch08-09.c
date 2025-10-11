/* 파일명: ch08-09.c

 * 내용: 예제 8-9. 포인터를 배열인 것처럼 사용하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);
	}

	return 0;
}