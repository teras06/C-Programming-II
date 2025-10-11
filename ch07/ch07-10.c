/* 파일명: ch07-10.c

 * 내용: 예제 7-10. 탐색의 성공, 실패를 확인하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int deta[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;
	int found;

	size = sizeof(deta) / sizeof(deta[0]);
	printf("arr = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", deta[i]);
	}
	printf("\n");

	printf("찾을 값(키)? ");
	scanf("%d", &key);
	found = 0;
	for (i = 0; i < size; i++)
	{
		if (deta[i] == key)
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		printf("찾은 원소의 인덱스: %d\n", i);
	}
	else
	{
		printf("탐색 실패\n");
	}
	return 0;
}
