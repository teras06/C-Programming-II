/* ���ϸ�: ch10-11.c

 * ����: ���� 10-11. ����ü���� ��� �Ű������� ���� �Լ��� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point
{
	int x, y;
} POINT;

void print_point_3(const POINT* pt);
void set_point(POINT* pt, int x, int y);

int main(void)
{
	POINT arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < sz; i++)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		set_point(&arr[i], x, y);
	}
	for (i = 0; i < sz; i++)
	{
		print_point_3(&arr[i]);
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point_3(const POINT* pt)
{
	printf("(%d, %d)", pt->x, pt->y);
}

void set_point(POINT* pt, int x, int y)
{
	pt->x = x;
	pt->y = y;
}