/* ���ϸ�: ch09-09.c

 * ����: ���� 9-9. ���ڿ� �����Ͱ� ���� �迭�� ����Ű�� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[64] = "";
	char* p = str;

	strcpy(p, "test string");

	if (islower(p[0]))
	{
		p[0] = toupper(p[0]);

	}
	p = strchr(p, ' ');

	if (islower(p[1]))
	{
		p[1] = toupper(p[1]);
	}
	puts(str);

	return 0;
}