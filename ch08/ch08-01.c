/* 파일명: ch08-01.c

 * 내용: 예제 8-1. 포인터의 바이트 크기 구하기

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));
	printf("sizeof(pd) = %zd\n", sizeof(pd));
	printf("sizeof(pc) = %zd\n", sizeof(pc));

	printf("sizeof(int*) = %zd\n", sizeof(int*));
	printf("sizeof(double*) = %zd\n", sizeof(double*));
	printf("sizeof(char*) = %zd\n", sizeof(char*));

	return 0;
}




