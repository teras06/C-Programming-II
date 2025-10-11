/* 파일명: ch10-01.c

 * 내용: 예제 10-1. 구조체의 정의

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

int main(void)
{
	printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));
	//printf("contact 구조체의 크기 = %d\n, sizeof(contact)); 컴파일 에러

	return 0;
}

void test()
{
	struct contact c1;
}
