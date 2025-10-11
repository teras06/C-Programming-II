/* ���ϸ�: Assignment17.c

 * ����: PA17. ���п��� ��������(multiset)�� ������ �ߺ��� ����Ѵ�
               ������ �迭�� �迭�� ũ��, ���� ����ִ� ������ ������ �Ű������� �����ؼ� ���Ҹ� �߰��ϴ� add_to_multiset �Լ��� �ۼ��϶�
               add_to_multiset�� ȣ��ǰ� ���� ���� ����ִ� ������ ������ �����Ǿ�� �Ѵ�, ���Ҵ� �ִ� �迭�� ũ�⸸ŭ�� �߰��� �� �ִ�
               ���� �� �̻� ���Ҹ� �߰��� �� ������ 0�� �����ϰ�, ���Ҹ� �߰��ϴ� ��쿡�� 1�� �����Ѵ�
               add_to_multiset �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����ϴ� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 10
#include <stdio.h>

void Print(void);
int add_to_multiset(int arr[], int size, int* addition, int value);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE];
    int value = 0;
    int add = 0;

    while (1)
    {
        if (add >= ARR_SIZE)
        {
            printf("�� �̻� �߰��� �� �����ϴ�.\n");
            break;
        }

        printf("�迭�� �߰��� ����? ");
        scanf("%d", &value);

        if (add_to_multiset(arr, ARR_SIZE, &add, value))
        {
            int i;
            for (i = 0; i < add; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("�߰� ����\n");
        }
    }
}

int add_to_multiset(int arr[], int size, int* addition, int value)
{
    if (*addition >= size)
    {
        return 0;
    }

    arr[*addition] = value;
    (*addition)++;

    return 1;
}