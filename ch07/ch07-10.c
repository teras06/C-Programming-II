/* ���ϸ�: ch07-10.c

 * ����: ���� 7-10. Ž���� ����, ���и� Ȯ���ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int deta[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;
	int found;

	size = sizeof(deta) / sizeof(deta[0]);
	printf("arr = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", deta[i]);
	}
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf("%d", &key);
	found = 0;
	for (i = 0; i < size; i++)
	{
		if (deta[i] == key)
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		printf("ã�� ������ �ε���: %d\n", i);
	}
	else
	{
		printf("Ž�� ����\n");
	}
	return 0;
}
