/* ���ϸ�: ch10-14.c

 * ����: ���� 10-14. ����ü�� ���� ����� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int main(void)
{
	enum direction d1 = NORTH;

	d1 = EAST;
	printf("d1 = %d\n", d1);

	switch (d1)
	{
	case NORTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case SOUTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case EAST:
		printf("�������� �̵��մϴ�.\n");
		break;
	case WEST:
		printf("�������� �̵��մϴ�.\n");
		break;
	}

	return 0;
}
