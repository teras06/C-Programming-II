/* ���ϸ�: ch10-16.c

 * ����: ���� 10-16. ����ü�� �̿��� RGB ���� ǥ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];
} COLOR_T;

int main(void)
{
	COLOR_T c1;

	c1.rgb[0] = 0xFF;
	c1.rgb[1] = 0xAB;
	c1.rgb[2] = 0x1F;
	c1.rgb[3] = 0x0;

	printf("rgb color = %08X\n", c1.color);

	return 0;
}