/* ���ϸ�: ch08-14.c

 * ����: ���� 8-14. �Լ��� ó�� ����� �Ű������� �����ϴ� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_product(int x, int y, int* sum, int* product);

int main(void)
{
	int result1, result2;

	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);

	return 0;
}

/* ��ɸ�: ���ϱ�, ���ϱ�

 * ����: �� ���� ���� �� ���� ��� ������ ���޹޾� ��� ������ ���� ���� ���� ���� ���� �����ϴ� �Լ� 

 * �Է�: int* x, int* y, int* sum, int* product

 * ���: ����

 * ����: ����
*/

void get_sum_product(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}