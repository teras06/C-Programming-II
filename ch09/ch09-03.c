/* ���ϸ�: ch09-03.c

 * ����: ���� 9-3. ���ڿ��� ��ȯ

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 32

int main(void)
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	char temp[SIZE];

	printf("2���� ���ڿ�? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);

	return 0;
}
