/* ���ϸ�: Assignment02.c

 * ����: PA02. ���� �迭�� �Ű������� ���޹޾� ���鹮��(' ','\n','\t','\f','\r','\v')�� ��� �����ϴ� remove_space �Լ��� �ۼ��϶�
               remove_space �Լ��� �̿��ؼ� �Է¹��� ���ڿ����� ��ĭ�� ��� �����ϰ� ����ϴ� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.10
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

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

    remove_space(str);

    printf("���� ���� ������: %s", str);

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
