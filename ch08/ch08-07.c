/* ���ϸ�: ch08-07.c

 * ����: ���� 8-7. �迭�� 0�� ���Ҹ� ����Ű�� �����Ϳ� '������+����' ������ ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("p + %d = %p, ", i, p + i);
		printf("*(p + %d) = %d\n", i, *(p + i));
	}

	return 0;
}