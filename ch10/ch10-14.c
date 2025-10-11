/* 파일명: ch10-14.c

 * 내용: 예제 10-14. 열거체와 열거 상수의 정의 및 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int main(void)
{
	enum direction d1 = NORTH;

	d1 = EAST;
	printf("d1 = %d\n", d1);

	switch (d1)
	{
	case NORTH:
		printf("북쪽으로 이동합니다.\n");
		break;
	case SOUTH:
		printf("남쪽으로 이동합니다.\n");
		break;
	case EAST:
		printf("동쪽으로 이동합니다.\n");
		break;
	case WEST:
		printf("서쪽으로 이동합니다.\n");
		break;
	}

	return 0;
}
