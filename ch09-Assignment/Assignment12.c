/* ���ϸ�: Assignment12.c

 * ����: PA12. �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ��(rotate)�� ����� ����ϴ� ���α׷��� �ۼ��϶�
               ���� ��� "abcdef"�� ���������� 2���� ȸ���ϸ� "efabcd"�� �ȴ� 
               �̵��� ���� ���� ������ ��������, ����� ���������� �̵��Ѵ� 
               �̵��� ���ڼ��� 0�� �ԷµǸ� ���α׷��� �����Ѵ�  (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.11
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

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (1) 
    {
        printf("�̵��� ���ڼ�? ");
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