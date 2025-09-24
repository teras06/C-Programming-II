/* 파일명: ch07-09.c

 * 내용: 예제 7-9. 배열의 탐색

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int deta[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;

	size = sizeof(deta) / sizeof(deta[0]);
	printf("deta = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", deta[i]);
	}
	printf("\n");

	printf("찾을 값(키)? ");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (deta[i] == key)
		{
			printf("찾은 원소의 인덱스: %d\n", i);
		}
	}
	return 0;
}

