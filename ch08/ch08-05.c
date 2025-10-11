/* ���ϸ�: ch08-05.c

 * ����: ���� 8-5. const �������� �ǹ�

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	const int* p1 = &a;
	int* const p2 = &a;
	const int* const p3 = &a;


	printf("*p1 = %d\n", *p1);
	p1 = &b;
	printf("*p1 = %d\n", *p1);

	*p2 = 100;
	printf("*p2 = %d\n", *p2);


	printf("*p3 = %d\n", *p3);

	return 0;
}