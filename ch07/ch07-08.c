/* ���ϸ�: ch07-08.c

 * ����: ���� 7-8. �迭�� ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 10, 20, 30, 40, 50 };
	int i;
	int is_equal;

	if (x == y)
	{
		printf("�� �迭�� �ּҰ� �����ϴ�.\n");
	}

	is_equal = 1;
	for (i = 0; i < 5; i++)
	{
		if (x[i] != y[i])
		{
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1)
	{
		printf("�� �迭�� ������ �����ϴ�.\n");
	}

	return 0;
}