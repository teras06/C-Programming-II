/* ���ϸ�: Assignment03.c

 * ����: PA03. �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�,�빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char str[100] = "";

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

	int len = strlen(str);

	int i;
	for (i = 0; i < len; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	fputs(str, stdout);
}