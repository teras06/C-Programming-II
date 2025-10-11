/* 파일명: ch08-14.c

 * 내용: 예제 8-14. 함수의 처리 결과를 매개변수로 전달하는 경우

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_product(int x, int y, int* sum, int* product);

int main(void)
{
	int result1, result2;

	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);

	return 0;
}

/* 기능명: 더하기, 곱하기

 * 내용: 두 개의 값과 두 개의 결과 변수를 전달받아 결과 변수에 각각 더한 값과 곱한 값을 저장하는 함수 

 * 입력: int* x, int* y, int* sum, int* product

 * 출력: 없음

 * 오류: 없음
*/

void get_sum_product(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}