/* 파일명: ch07-01.c

 * 내용: 예제 7-1. 배열의 바이트 크기와 크기 구하기

 * 작성자: 김영재
 
 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int arr[5];
	int byte_size = 0;
	int size = 0;
	int i;

	byte_size = sizeof(arr);
	printf("배열의 바이트 크기: %d\n", byte_size);

	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size ; i++)
	{
		arr[i] = 0;
	}

	return 0;
}