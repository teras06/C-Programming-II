/* ���ϸ�: ch09-06.c

 * ����: ���� 9-6. ���ڿ��� �˻�

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
	{
		printf("file extension: %s\n", p + 1);
	}

	p = strstr(filename, ".txt");
	if (p != NULL)
	{
		printf("file type: TEXT file\n");
	}

	return 0;
}