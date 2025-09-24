/* 파일명: ch07-07.c

 * 내용: 예제 7-7. 배열의 복사
 
 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };
	int i;

	//y = x;

	for (i = 0; i < 5; i++)
	{
		y[i] = x[i];
	}

	printf("y = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", y[i]);
	}
	printf("\n");

	return 0;
}
