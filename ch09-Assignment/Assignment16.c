/* ���ϸ�: Assignment16.c

 * ����: PA16. ���ͳ� ����Ʈ�� �α����Ϸ��� ����ڷκ��� ���̵�� �н����带 �Է¹޾� �α��� ������ ó���Ϸ��� �Ѵ� 
               ����� 5���� ���̵�� �н����尡 �̹� ��ϵǾ� ���� ��, �Է¹��� ���̵� �ش��ϴ� �н������ /
               ����ڰ� �Է��� �н����尡 ��ġ�ϸ� �α����� ����ϴ� ���α׷��� �ۼ��϶�
               ����ڰ� �Է��� ���̵� �������� �ʰų�, ���̵� �ش��ϴ� �н����尡 ��ġ���� ������ ���� �޽��� ��� �� ���̵�� �н����带 �ٽ� �Է¹ް� �Ѵ� 
               3���� ��õ� �Ŀ��� �ùٸ� ���̵�� �н����带 �Է����� ���ϸ� �α��� ���� ���� �޽����� ����Ѵ� 
               ���̵� ���ڿ� �迭�� �н����� ���ڿ� �迭�� ������� ���ؼ� ����Ѵ�. (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int login(char* id, char* pw);
void Print(void);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char input_id[20];
    char input_pw[30];
    int result;

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("ID: ");
        scanf("%s", input_id);

        printf("PW: ");
        scanf("%s", input_pw);

        result = login(input_id, input_pw);

        if (result == 1)
        {
            printf("\n�α��� ����!\n");
            return;
        }
        else if (result == 0)
        {
            printf("�н����尡 Ʋ�Ƚ��ϴ�.\n\n");
        }
        else
        {
            printf("�ش� id�� �����ϴ�.\n\n");
        }
    }

    printf("�α��� ����!\n");
}


int login(char* id, char* pw)
{
    char ids[5][20] = { "rm", "jin", "suuga", "jhope", "parkjimin" };
    char pws[5][30] = { "rm", "jin", "suuga", "jhope", "@BestOfMe@" };

    int i;
    for (i = 0; i < 5; i++)
    {
        if (strcmp(id, ids[i]) == 0)
        {
            if (strcmp(pw, pws[i]) == 0)
            {
                return 1; //�α��� ����
            }
            else
            {
                return 0; //�н����� Ʋ��
            }
        }
    }

    return -1; //���̵� ����
}
