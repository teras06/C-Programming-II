/* 파일명: ch07-08.c

 * 내용: 예제 7-8. 배열의 비교

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 10, 20, 30, 40, 50 };
	int i;
	int is_equal;

	if (x == y)
	{
		printf("두 배열의 주소가 같습니다.\n");
	}

	is_equal = 1;
	for (i = 0; i < 5; i++)
	{
		if (x[i] != y[i])
		{
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1)
	{
		printf("두 배열의 내용이 같습니다.\n");
	}

	return 0;
}