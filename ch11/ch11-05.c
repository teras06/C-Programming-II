/* 파일명: ch11-05.c

 * 내용: 예제 11-5. 재귀 함수의 정의 및 호출

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_factorial(int num);

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %7d\n", i, get_factorial(i));
	}
	
	return 0;
}


int get_factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * get_factorial(num - 1);
}