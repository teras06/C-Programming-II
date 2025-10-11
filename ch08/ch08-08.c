/* 파일명: ch08-08.c

 * 내용: 예제 8-8. 배열의 0번 원소를 가리키는 포인터에 증감 연산을 수행한 결과

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
	for (i = 0; i < 5; i++, p++)
	{
		printf("p= %p, ", p);
		printf("*p = %d\n", *p);
	}

	return 0;
}