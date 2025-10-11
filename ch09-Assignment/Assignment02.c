/* 파일명: Assignment02.c

 * 내용: PA02. 문자 배열을 매개변수로 전달받아 공백문자(' ','\n','\t','\f','\r','\v')를 모두 제거하는 remove_space 함수를 작성하라
               remove_space 함수를 이용해서 입력받은 문자열에서 빈칸을 모두 제거하고 출력하는 프로그램을 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);
void remove_space(char* str);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char str[100] = "";

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

    remove_space(str);

    printf("공백 문자 제거후: %s", str);

}

void remove_space(char* str)
{
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (!isspace(str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
