/* 파일명: ch08-02.c

 * 내용: 예제 8-2. 포인터의 선언 및 초기화

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int* p2 = (int*)0x12345678;

	int a = 10;
	int* p3 = &a;

	int* p4 = 0;
	int* p5 = NULL;

	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p5 = %p\n", p5);

	return 0;
}