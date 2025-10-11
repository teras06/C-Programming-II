/* 파일명: ch10-03.c

 * 내용: 예제 10-3. 구조체 변수 간의 초기화와 대입

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

int main(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}