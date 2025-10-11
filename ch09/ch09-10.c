/* 파일명: ch09-10.c

 * 내용: 예제 9-10. count_space 함수의 정의

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_space(const char* s);

int main(void)
{
	char str[64] = "this program\ttest const pointer to string\n";

	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));

	return 0;
}

int count_space(const char* s)
{
	int count = 0;
	while (s[0] != '\0') 
	{
		if (isspace(s[0]))
		{
			count++;
		}
		s++;
	}

	//s[0] = 'A';		// s가 가리키는 문자열을 변경할 수 없으므로 컴파일 에러
	//strcpy(s, "xyz");	// strcpy의 매개변수와 데이터형이 다르므로 컴파일 경고
	return count;
}