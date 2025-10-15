/* ���ϸ�: ch11-10.c

 * ����: ���� 11-10. qsort �Լ��� �̿��� int �迭�� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int compare_int(const void* e1, const void* e2);
void print_array(const int arr[], int size);

int main(void)
{
	int arr[ARR_SIZE] = { 0 };
	int i;

	srand((unsigned int)time(NULL));

	for (i = 0; i < ARR_SIZE; i++)
	{
		arr[i] = rand() % 100;
	}

	puts("<< ���� �� >>");
	print_array(arr, ARR_SIZE);

	qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);

	puts("<< ���� �� >>");
	print_array(arr, ARR_SIZE);

	return 0;
}

int compare_int(const void* e1, const void* e2)
{
	const int* p1 = (const int*)e1;
	const int* p2 = (const int*)e2;
	return (*p1 - *p2);
}

void print_array(const int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}