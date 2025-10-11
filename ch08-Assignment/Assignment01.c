/* 파일명: Assignment01.c

 * 내용: PA01. 크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하라
			   단, 주소 구하기 연산자를 사용하지 마라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double arr[3];
	double *p = arr;

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("x[%d]의 주소: %X\n", i, p + i);
	}
}