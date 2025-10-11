/* 파일명: Assignment05.c

 * 내용: PA05. 대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);
int strcmp_ic(const char* lhs, const char* rhs);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char str1[100] = "";
    char str2[100] = "";

    printf("첫 번째 문자열 ? ");
    fgets(str1, sizeof(str1), stdin);
    printf("두 번째 문자열 ? ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp_ic(str1, str2);

    if (result == 0)
    {
        printf("%s와 %s가 같습니다.\n", str1, str2);
    }
    else
    {
        printf("두 문자열이 다릅니다.\n");
    }
}

int strcmp_ic(const char* lhs, const char* rhs)
{
    while (*lhs && *rhs)
    {
        char a = tolower((unsigned char)*lhs);
        char b = tolower((unsigned char)*rhs);

        if (a != b)
        {
            return (a - b);
        }

        lhs++;
        rhs++;
    }

    return (unsigned char)*lhs - (unsigned char)*rhs;
}