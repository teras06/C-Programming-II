/* 파일명: Assignment17.c

 * 내용: PA17. 수학에서 다중집합(multiset)은 원소의 중복을 허용한다
               정수형 배열과 배열의 크기, 현재 들어있는 원소의 개수를 매개변수로 전달해서 원소를 추가하는 add_to_multiset 함수를 작성하라
               add_to_multiset이 호출되고 나면 현재 들어있는 원소의 개수가 증가되어야 한다, 원소는 최대 배열의 크기만큼만 추가할 수 있다
               만일 더 이상 원소를 추가할 수 없으면 0을 리턴하고, 원소를 추가하는 경우에는 1을 리턴한다
               add_to_multiset 함수를 이용해서 입력받은 정수를 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하는 프로그램을 작성하라 (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
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
            printf("더 이상 추가할 수 없습니다.\n");
            break;
        }

        printf("배열에 추가할 원소? ");
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
            printf("추가 실패\n");
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