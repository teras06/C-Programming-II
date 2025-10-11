/* 파일명: ch10-09.c

 * 내용: 예제 10-9. 구조체를 값으로 전달하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct point
{
	int x, y;
} POINT;

void print_point_1(POINT pt);

int main(void)
{
	POINT arr[] = { {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point_1(arr[i]);
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point_1(POINT pt)
{
	printf("(%d, %d)", pt.x, pt.y);
}