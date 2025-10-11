/* ���ϸ�: ch10-15.c

 * ����: ���� 10-15. ����ü�� ���� �� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union test {
	int i;
	char c;
	short s;
};

int main(void)
{
	union test t1 = { 0x12345678 };

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i�� �ּ� = %p\n", &t1.i);
	printf("t1.c�� �ּ� = %p\n", &t1.c);
	printf("t1.s�� �ּ� = %p\n", &t1.s);

	printf("t1.i = %x\n", t1.i);
	printf("t1.c = %x\n", t1.c);
	printf("t1.s = %x\n", t1.s);

	return 0;
}