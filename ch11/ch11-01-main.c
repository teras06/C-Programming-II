/* ���ϸ�: ch11-01-main.c

 * ����: ���� 11-1. ���� ������ extern ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_global(void);

extern int global;

int main(void)
{
	test_global();
	printf("global = %d\n", global);

	return 0;
}