/* ���ϸ�: ch07-07.c

 * ����: ���� 7-7. �迭�� ����
 
 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
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
