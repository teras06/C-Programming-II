/* 파일명: Assignment12.c

 * 내용: PA12. 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전(rotate)한 결과를 출력하는 프로그램을 작성하라
               예를 들어 "abcdef"를 오른쪽으로 2글자 회전하면 "efabcd"가 된다 
               이동할 글자 수가 음수면 왼쪽으로, 양수면 오른쪽으로 이동한다 
               이동할 글자수로 0이 입력되면 프로그램을 종료한다  (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Print(void);
void rotate(char* s, int n);

int main() 
{
    Print();
    return 0;
}

void Print(void)
{
    char str[100] = "";
    int n;

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (1) 
    {
        printf("이동할 글자수? ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        rotate(str, n);

        printf("%s\n", str);
    }
}

void rotate(char* s, int n) 
{
    int len = strlen(s);
    if (len == 0)
    {
        return;
    }

    int shift;
    if (n > 0)
    {
        shift = len - (n % len);
    }
    else
    {
        shift = (-n) % len;
    }

    char temp[100] = "";

    strcpy(temp, s + n);
    strncat(temp, s, n);
    temp[len] = '\0';

    strcpy(s, temp);
}