/* 파일명: Assignment03.c

 * 내용: PA03. 입력받은 문자열의 소문자는 대문자로,대문자는 소문자로 변환하는 프로그램을 작성하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char str[100] = "";

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

	int len = strlen(str);

	int i;
	for (i = 0; i < len; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	fputs(str, stdout);
}