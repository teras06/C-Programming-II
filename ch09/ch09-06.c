/* 파일명: ch09-06.c

 * 내용: 예제 9-6. 문자열의 검색

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
	{
		printf("file extension: %s\n", p + 1);
	}

	p = strstr(filename, ".txt");
	if (p != NULL)
	{
		printf("file type: TEXT file\n");
	}

	return 0;
}