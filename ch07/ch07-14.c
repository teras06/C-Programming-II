/* ���ϸ�: ch07-14.c

 * ����: ���� 7-14. print_array �Լ��� ���� �� ȣ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

void print_array(int arr[], int size);

int main(void)
{
	int scores[] = { 99, 98, 67, 72, 90, 82 };
	int size = sizeof(scores) / sizeof(scores[0]);
	int arr[MAX] = { 0 };

	print_array(scores, size);
	print_array(arr, MAX);

	return 0;
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}