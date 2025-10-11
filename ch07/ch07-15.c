/* ���ϸ�: ch07-15.c

 * ����: ���� 7-15. copy_array �Լ��� ���� �� ȣ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7

void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);

	copy_array(x, y, 5);

	printf("y = ");
	print_array(y, SIZE);

	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		target[i] = source[i];
	}
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