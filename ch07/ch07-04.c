/* 파일명: ch07-04.c

 * 내용: 예제 7-4. 배열의 크기보다 초기값을 적게 지정하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.24
 */

#include <stdio.h>

int main()
{
	int amount[5] = { 1, 1, 5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", amount[i]);
	}
	printf("\n");

	printf("price  = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", price[i]);
	}
	printf("\n");

	return 0;
}