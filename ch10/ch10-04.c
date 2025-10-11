/* 파일명: ch10-04.c

 * 내용: 예제 10-4. 구조체 변수의 비교

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
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0 && ct1.ringtone == ct2.ringtone)
	{
		printf("ct1과 ct2의 값이 같습니다.\n");
	}
	else
	{
		printf("ct1과 ct2의 값이 같지 않습니다.");
	}

	return 0;
}