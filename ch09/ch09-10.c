/* ���ϸ�: ch09-10.c

 * ����: ���� 9-10. count_space �Լ��� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_space(const char* s);

int main(void)
{
	char str[64] = "this program\ttest const pointer to string\n";

	puts(str);
	printf("���� ������ ����: %d\n", count_space(str));

	return 0;
}

int count_space(const char* s)
{
	int count = 0;
	while (s[0] != '\0') 
	{
		if (isspace(s[0]))
		{
			count++;
		}
		s++;
	}

	//s[0] = 'A';		// s�� ����Ű�� ���ڿ��� ������ �� �����Ƿ� ������ ����
	//strcpy(s, "xyz");	// strcpy�� �Ű������� ���������� �ٸ��Ƿ� ������ ���
	return count;
}