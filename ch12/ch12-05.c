/* 파일명: ch12-05.c

 * 내용: 예제 12-5. fgetc, fputc를 이용해서 파일의 내용을 콘솔로 출력하기

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

	fp = fopen("ch12-05.c", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
	}
	fclose(fp);

	return 0;
}