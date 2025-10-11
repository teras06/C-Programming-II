/* 파일명: ch08-13.c

 * 내용: 예제 8-13. 포인터에 의한 전달 방법으로 구현한 swap 함수

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

/* 기능명: 교환하기

 * 내용: 두 개의 값을 전달받아 서로 교환하는 함수
   
 * 입력: int* x, int* y

 * 출력: 없음
   
 * 오류: 없음
*/

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
};