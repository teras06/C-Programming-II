/* 파일명: ch11-01-main.c

 * 내용: 예제 11-1. 전역 변수의 extern 선언

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_global(void);

extern int global;

int main(void)
{
	test_global();
	printf("global = %d\n", global);

	return 0;
}