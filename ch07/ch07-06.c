/* ���ϸ�: ch07-06.c

 * ����: ���� 7-6. �߸��� �ε����� ����ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);
	arr[5] = 100;

	return 0;
}
