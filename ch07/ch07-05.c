/* ���ϸ�: ch07-05.c

 * ����: ���� 7-5. �迭 ������ ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int arr[ARR_SIZE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("������ �ΰ� �Է��ϼ���: ");
	scanf("%d %d", &arr[3], &arr[4]);

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

