/* 파일명: ch09-02.c

 * 내용: 예제 9-2. strlen 함수의 사용 예

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "";
	int len = 0;

	printf("s1의 길이: %d\n", strlen(s1));
	printf("s2의 길이: %d\n", strlen(""));
	printf("bye bye의 길이: %d\n", strlen("bye bye"));

	printf("s1의 크기: %d\n", sizeof(s1));;

	len = strlen(s1);
	if (len > 0)
	{
		s1[len - 1] = '\0';
	}
	printf("s1 = %s\n", s1);

	return 0;
}