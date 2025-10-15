/* ���ϸ�: ch11-04-main.c

 * ����: ���� 11-4. �ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_gcd(int x, int y);
extern int get_factorial(int num);

int main(void)
{
	int i;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 5; i++)
	{
		int num = rand() % 10;
		printf("%2d! = %7d\n", num, get_factorial(num));
	}

	for (i = 0; i < 5; i++)
	{
		int a = rand() % 100;
		int b = rand() % 100;
		printf("%2d�� %2d�� GCD = %2d\n", a, b, get_gcd(a, b));
	}

	return 0;
}