/* ���ϸ�: ch10-07.c

 * ����: ���� 10-7. ����ü ������

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
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
	CONTACT ct = { "�輮��", "01011112222", 0 };
	CONTACT* p = &ct;

	p->ringtone = 5;
	strcpy(p->phone, "01011112223");
	printf("��    ��: %s\n", p->name);
	printf("��ȭ��ȣ: %s\n", p->phone);
	printf("�� �� ��: %d\n", p->ringtone);

	return 0;
}