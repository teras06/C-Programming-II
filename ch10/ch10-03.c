/* ���ϸ�: ch10-03.c

 * ����: ���� 10-3. ����ü ���� ���� �ʱ�ȭ�� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
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
	struct contact ct = { "�輮��", "01011112222", 0 };
	struct contact ct1 = { "������", "01012345678", 1 };
	struct contact ct2 = ct1;
	printf("ct1���� �ʱ�ȭ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;
	printf("ct�� ������ ���� ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}