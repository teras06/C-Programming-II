/* 파일명: ch10-15.c

 * 내용: 예제 10-15. 공용체의 정의 및 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
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

	printf("t1.i의 주소 = %p\n", &t1.i);
	printf("t1.c의 주소 = %p\n", &t1.c);
	printf("t1.s의 주소 = %p\n", &t1.s);

	printf("t1.i = %x\n", t1.i);
	printf("t1.c = %x\n", t1.c);
	printf("t1.s = %x\n", t1.s);

	return 0;
}