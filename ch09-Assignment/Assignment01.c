/* ���ϸ�: Assignment01.c

 * ����: PA01. �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����(' ', '\n', '\t', '\f', '\r', '\v')�� ������ ���� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	char str[100] = "";
	int count = 0;

	printf("���ڿ�? ");
	fgets(str, sizeof(str), stdin);

	int size = strlen(str);

	int i;
	for (i = 0; i < size ;i++)
	{
		if (isspace(str[i]))
		{
			count++;
		}
	}

	printf("���� ������ ���� : %d\n", count - 1);
}