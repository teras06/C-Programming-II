/* ���ϸ�: ch10-09.c

 * ����: ���� 10-9. ����ü�� ������ �����ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
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