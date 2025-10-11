/* ���ϸ�: Assignment05.c

 * ����: PA05. ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.10
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

    printf("ù ��° ���ڿ� ? ");
    fgets(str1, sizeof(str1), stdin);
    printf("�� ��° ���ڿ� ? ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp_ic(str1, str2);

    if (result == 0)
    {
        printf("%s�� %s�� �����ϴ�.\n", str1, str2);
    }
    else
    {
        printf("�� ���ڿ��� �ٸ��ϴ�.\n");
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