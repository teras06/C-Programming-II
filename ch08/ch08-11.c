/* 파일명: ch08-11.c

 * 내용: 예제 8-11. 포인터 배열의 선언 및 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);
	}
	printf("\n");

	return 0;
}