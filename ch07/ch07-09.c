/* ���ϸ�: ch07-09.c

 * ����: ���� 7-9. �迭�� Ž��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int deta[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;

	size = sizeof(deta) / sizeof(deta[0]);
	printf("deta = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", deta[i]);
	}
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (deta[i] == key)
		{
			printf("ã�� ������ �ε���: %d\n", i);
		}
	}
	return 0;
}

