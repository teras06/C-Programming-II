/* ���ϸ�: ch08-10.c

 * ����: ���� 8-10. �迭�� �������� ������

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x[5] = { 1, 2, 3, 4, 5 };
	int y[5];
	int *p = x;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	p = y;
	for (i = 0; i < 5; i++)
	{
		p[i] = x[i];
	}

	for (i = 0; i < 5; i++, p++)
	{
		printf("%d ", *p);
	}
	printf("\n");

	return 0;
}