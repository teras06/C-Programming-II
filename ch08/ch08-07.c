/* 파일명: ch08-07.c

 * 내용: 예제 8-7. 배열의 0번 원소를 가리키는 포인터와 '포인터+정수' 연산의 결과

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("p + %d = %p, ", i, p + i);
		printf("*(p + %d) = %d\n", i, *(p + i));
	}

	return 0;
}