/* ���ϸ�: ch07-04.c

 * ����: ���� 7-4. �迭�� ũ�⺸�� �ʱⰪ�� ���� �����ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int amount[5] = { 1, 1, 5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", amount[i]);
	}
	printf("\n");

	printf("price  = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", price[i]);
	}
	printf("\n");

	return 0;
}