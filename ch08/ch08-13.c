/* ���ϸ�: ch08-13.c

 * ����: ���� 8-13. �����Ϳ� ���� ���� ������� ������ swap �Լ�

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

/* ��ɸ�: ��ȯ�ϱ�

 * ����: �� ���� ���� ���޹޾� ���� ��ȯ�ϴ� �Լ�
   
 * �Է�: int* x, int* y

 * ���: ����
   
 * ����: ����
*/

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
};