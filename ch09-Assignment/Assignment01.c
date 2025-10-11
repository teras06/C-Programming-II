/* 파일명: Assignment01.c

 * 내용: PA01. 한 줄의 문자열을 입력받아서 공백 문자(' ', '\n', '\t', '\f', '\r', '\v')의 개수를 세는 프로그램을 작성하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	char str[100] = "";
	int count = 0;

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	int size = strlen(str);

	int i;
	for (i = 0; i < size ;i++)
	{
		if (isspace(str[i]))
		{
			count++;
		}
	}

	printf("공백 문자의 개수 : %d\n", count - 1);
}