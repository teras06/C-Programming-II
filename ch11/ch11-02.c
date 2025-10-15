/* 파일명: ch11-02.c

 * 내용: 예제 11-2. static 지역 변수

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_static(void)
{
	int local = 0;
	static int s_local = 0;

	printf("local = %d, ", local++);
	printf("s_local = %d\n", s_local++);
}

int main(void)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test_static();
	}

	return 0;
}