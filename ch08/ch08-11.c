/* ���ϸ�: ch08-11.c

 * ����: ���� 8-11. ������ �迭�� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);
	}
	printf("\n");

	return 0;
}