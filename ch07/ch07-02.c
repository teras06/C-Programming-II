/* ���ϸ�: ch07-02.c

 * ����: ���� 7-2. ��ũ�� ����� �迭�� ũ�⸦ �����ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++)
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}