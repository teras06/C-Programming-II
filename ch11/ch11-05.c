/* ���ϸ�: ch11-05.c

 * ����: ���� 11-5. ��� �Լ��� ���� �� ȣ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_factorial(int num);

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %7d\n", i, get_factorial(i));
	}
	
	return 0;
}


int get_factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * get_factorial(num - 1);
}