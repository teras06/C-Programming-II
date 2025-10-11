/* 파일명: ch10-05.c

 * 내용: 예제 10-5. 구조체 배열

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
	CONTACT arr[] = { {"김석진", "01011112222", 0}, {"전정국", "01012345678", 1}, {"박지민", "01077778888", 2} };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("이름   전화번호    벨\n");
	for (i = 0; i < size; i++)
	{
		printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}

	return 0;
}