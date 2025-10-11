/* 파일명: ch08-12.c

 * 내용: 예제 8-12. 배열에 대한 포인터의 선언 및 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data[3][5] = { {1, 2, 3, 4, 5}, {6, 7 ,8 ,9, 10}, {11, 12, 13, 14, 15} };
	int(*p)[5] = &data[0];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}