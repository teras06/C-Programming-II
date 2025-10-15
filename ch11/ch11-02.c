/* ���ϸ�: ch11-02.c

 * ����: ���� 11-2. static ���� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_static(void)
{
	int local = 0;
	static int s_local = 0;

	printf("local = %d, ", local++);
	printf("s_local = %d\n", s_local++);
}

int main(void)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test_static();
	}

	return 0;
}