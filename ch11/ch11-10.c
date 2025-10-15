/* 파일명: ch11-10.c

 * 내용: 예제 11-10. qsort 함수를 이용한 int 배열의 정렬

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
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

	puts("<< 정렬 전 >>");
	print_array(arr, ARR_SIZE);

	qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);

	puts("<< 정렬 후 >>");
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