/* 파일명: ch10-12.c

 * 내용: 예제 10-12. 비트필드의 정의 및 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct data {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
	DATE dday;
	dday.year = 18;
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}