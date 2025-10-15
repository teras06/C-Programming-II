/* ���ϸ�: ch11-07.c

 * ����: ���� 11-7. �Լ� �������� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct print 
{
	int x, y;
} POINT;

void print_point(const POINT* pt)
{
	printf("(%d, %d)", pt->x, pt->y);
}

int get_gcd(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}
	return get_gcd(y, x % y);
}

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int(*pf)(int, int) = &get_gcd;
	void(*pprint)(const POINT*) = print_point;
	POINT pt = { 10, 20 };

	if (pf)
	{
		printf("GCD = %d\n", pf(10, 20));
	}
	pf = 
		add;
	printf("10 + 20 = %d\n", (*pf)(10, 20));

	pprint(&pt);

	return 0;
}