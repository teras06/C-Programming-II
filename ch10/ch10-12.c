/* ���ϸ�: ch10-12.c

 * ����: ���� 10-12. ��Ʈ�ʵ��� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct data {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int main(void)
{
	DATE dday;
	dday.year = 18;
	dday.month = 11;
	dday.day = 30;

	printf("DATE�� ũ�� = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}