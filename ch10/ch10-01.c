/* ���ϸ�: ch10-01.c

 * ����: ���� 10-1. ����ü�� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
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
	printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));
	//printf("contact ����ü�� ũ�� = %d\n, sizeof(contact)); ������ ����

	return 0;
}

void test()
{
	struct contact c1;
}
