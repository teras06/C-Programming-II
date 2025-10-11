/* 파일명: ch09-09.c

 * 내용: 예제 9-9. 문자열 포인터가 문자 배열을 가리키는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[64] = "";
	char* p = str;

	strcpy(p, "test string");

	if (islower(p[0]))
	{
		p[0] = toupper(p[0]);

	}
	p = strchr(p, ' ');

	if (islower(p[1]))
	{
		p[1] = toupper(p[1]);
	}
	puts(str);

	return 0;
}