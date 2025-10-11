/* 파일명: ch09-04.c

 * 내용: 예제 9-4. 문자열의 비교

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)
	{
		printf("same address");
	}

	if (strcmp(s1, s2) == 0)
	{
		printf("same string\n");
	}

	printf("패스워드? ");
	scanf("%s", password);

	if (strcmp(password, "abcd1234") == 0)
	{
		printf("login succeeded\n");
	}
	else
	{
		printf("login failed\n");
	}

	return 0;
}
