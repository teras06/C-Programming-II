/* ���ϸ�: ch09-02.c

 * ����: ���� 9-2. strlen �Լ��� ��� ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "";
	int len = 0;

	printf("s1�� ����: %d\n", strlen(s1));
	printf("s2�� ����: %d\n", strlen(""));
	printf("bye bye�� ����: %d\n", strlen("bye bye"));

	printf("s1�� ũ��: %d\n", sizeof(s1));;

	len = strlen(s1);
	if (len > 0)
	{
		s1[len - 1] = '\0';
	}
	printf("s1 = %s\n", s1);

	return 0;
}