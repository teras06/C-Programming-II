/* 파일명: ch08-05.c

 * 내용: 예제 8-5. const 포인터의 의미

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	const int* p1 = &a;
	int* const p2 = &a;
	const int* const p3 = &a;


	printf("*p1 = %d\n", *p1);
	p1 = &b;
	printf("*p1 = %d\n", *p1);

	*p2 = 100;
	printf("*p2 = %d\n", *p2);


	printf("*p3 = %d\n", *p3);

	return 0;
}