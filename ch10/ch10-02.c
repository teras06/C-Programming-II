/* 파일명: ch10-02.c

 * 내용: 예제 10-2. 구조체 변수의 선언 및 사용

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
	struct contact ct1 = { 0 }, ct2 = { 0 };

	ct.ringtone = 5;
	strcpy(ct.phone, "01011112223");
	printf("이    름:%s\n", ct.name);
	printf("전화번호:%s\n", ct.phone);
	printf("벨 소 리:%d\n", ct.ringtone);

	strcpy(ct1.name, "전정국");
	strcpy(ct1.phone, "01012345678");
	ct1.ringtone = 1;
	printf("이    름:%s\n", ct1.name);
	printf("전화번호:%s\n", ct1.phone);
	printf("벨 소 리:%d\n", ct1.ringtone);

	printf("이름? ");
	scanf("%s", ct2.name);
	printf("전화번호? ");
	scanf("%s", ct2.phone);
	printf("벨 소리(0~9)? ");
	scanf("%d", &ct2.ringtone);
	printf("이    름:%s\n", ct2.name);
	printf("전화번호:%s\n", ct2.phone);
	printf("벨 소 리:%d\n", ct2.ringtone);

	return 0;
}