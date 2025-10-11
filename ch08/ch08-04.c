/* 파일명: ch08-04.c

 * 내용: 예제 8-4. 포인터가 필요한 경우
 
 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test1(int x)
{
	x = 20;
}

void test2(int* p)
{
	*p = 20;
}

int main(void)
{
	int x = 10;

	test1(x);
	printf("test1 호출 후 x = %d\n", x);

	test2(&x);
	printf("test2 호출 후 x = %d\n", x);

	return 0;
}