/* 파일명: ch12-04.c

 * 내용: 예제 12-4. fgetc, fputc를 이용해서 콘솔 입력을 파일로 저장하기

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int ch;

	fp = fopen("a.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	while (ch = fgetc(stdin) != EOF)
	{
		fputc(ch, fp);
	}
	fclose(fp);

	return 0;
}