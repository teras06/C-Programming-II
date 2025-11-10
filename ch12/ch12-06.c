/* 파일명: ch12-06.c

 * 내용: 예제 12-6. fgetc, fputc를 이용해서 파일의 내용을 콘솔로 출력하기

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char str[BUFSIZ];

	fp = fopen("ch12-06.c", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	while (fgets(str, sizeof(str), fp) != NULL)
	{
		fputc(str, stdout);
	}
	fclose(fp);

	return 0;
}