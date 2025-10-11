/* 파일명: Assignment18.c

 * 내용: PA18. 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다
               정수형 배열과 배열의 크기, 현재 들어있는 원소의 개수를 매개변수로 전달해서 원소를 추가하는 add_to_set 함수를 작성하라
               add_to_set이 호출되고 나면 현재 들어있는 원소의 개수가 증가되어야 한다 원소는 최대 배열의 크기만큼만 추가할 수 있다
               만일 더 이상 원소를 추가할 수 없거나 이미 같은 값의 원소가 있으면 0을 리턴하고, 원소를 추가하는 경우에는 1을 리턴한다
               add_to_set 함수를 이용해서 입력받은 정수를 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하는 프로그램을 작성하라 (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 10
#include <stdio.h>

int add_to_set(int arr[], int size, int* addition, int value);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[MAX_SIZE];
    int value = 0;
    int add = 0;

    while (1)
    {
        if (add >= MAX_SIZE)
        {
            printf("더 이상 추가할 수 없습니다.\n");
            break;
        }

        printf("집합에 추가할 정수? ");
        scanf("%d", &value);

        if (add_to_set(arr, MAX_SIZE, &add, value))
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
            int j;
            for (j = 0; j < add; j++)
            {
                if (arr[j] == value)
                {
                    printf("해당 원소가 이미 [%d]에 존재합니다.\n", j);
                }
            }
        }
    }
}

int add_to_set(int arr[], int size, int* addition, int value)
{
    if (*addition >= size)
    {
        return 0;
    }

    for (int i = 0; i < *addition; i++)
    {
        if (arr[i] == value)
            return 0;
    }

    arr[*addition] = value;
    (*addition)++;

    return 1;
}