/* 파일명: ch09-01.c

 * 내용: 예제 9-1. 문자 배열의 초기화 및 출력

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.30
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1[10] = { 'a', 'b', 'c' };
	char str2[10] = "abc";
	char str3[] = "abc";
	//char str4[10] = "very long string"; 컴파일 경고
	int size = sizeof(str1) / sizeof(str1[0]);
	int i;

	printf("str1 = ");
	for (i = 0; i < size; i++)
	{
		printf("%c", str1[i]);
	}
	printf("\n");

	printf("str2 = %s\n", str2);

	printf("str3 = ");
	printf(str3);
	printf("\n");

	//printf("str4 = %s\n", str4);

	return 0;
}