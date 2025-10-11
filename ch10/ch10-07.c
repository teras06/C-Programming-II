/* 파일명: ch10-07.c

 * 내용: 예제 10-7. 구조체 포인터

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
} CONTACT;

int main(void)
{
	CONTACT ct = { "김석진", "01011112222", 0 };
	CONTACT* p = &ct;

	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("이    름: %s\n", p->name);
	printf("전화번호: %s\n", p->phone);
	printf("벨 소 리: %d\n", p->ringtone);

	return 0;
}