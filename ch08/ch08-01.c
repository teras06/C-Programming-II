/* ���ϸ�: ch08-01.c

 * ����: ���� 8-1. �������� ����Ʈ ũ�� ���ϱ�

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.24
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));
	printf("sizeof(pd) = %zd\n", sizeof(pd));
	printf("sizeof(pc) = %zd\n", sizeof(pc));

	printf("sizeof(int*) = %zd\n", sizeof(int*));
	printf("sizeof(double*) = %zd\n", sizeof(double*));
	printf("sizeof(char*) = %zd\n", sizeof(char*));

	return 0;
}




