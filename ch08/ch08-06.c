/* ���ϸ�: ch08-06.c

 * ����: ���� 8-6. '������+����' ������ ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int* p = (int*)0x100;
	double* q = (double*)0x100;
	char* r = (char*)0x100;

	printf("int*  : %p, %p, %p\n", p, p + 1, p + 2);
	printf("double*: %p, %p, %p\n", q, q + 1, q + 2);
	printf("char* : %p, %p, %p\n", r, r + 1, r + 2);

	return 0;
}