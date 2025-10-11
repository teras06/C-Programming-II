/* 파일명: ch08-03.c

 * 내용: 예제 8-3. 포인터의 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10;
	int* p = &x;

	printf(" x = %d\n", x);
	printf("&x = %p\n", &x);

	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);

	*p = 20;
	printf("*p = %d\n", *p);

	return 0;
}