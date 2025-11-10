/* 파일명: ch12-02.c

 * 내용: 예제 12-2. 파일 열기와 닫기

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	fp = fopen("a.txt", "r");	// "a.txt"가 없으므로 파일 열기 실패

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	printf("파일 열기 성공\n");
	fclose(fp);

	return 0;
}