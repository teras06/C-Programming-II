/* ���ϸ�: ch11-01-test.c

 * ����: ���� 11-1. ���� ������ extern ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int global = 123;

void test_global(void)
{
	global++;
}