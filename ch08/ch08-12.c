/* ���ϸ�: ch08-12.c

 * ����: ���� 8-12. �迭�� ���� �������� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
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