/* ���ϸ�: ch09-04.c

 * ����: ���� 9-4. ���ڿ��� ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)
	{
		printf("same address");
	}

	if (strcmp(s1, s2) == 0)
	{
		printf("same string\n");
	}

	printf("�н�����? ");
	scanf("%s", password);

	if (strcmp(password, "abcd1234") == 0)
	{
		printf("login succeeded\n");
	}
	else
	{
		printf("login failed\n");
	}

	return 0;
}
