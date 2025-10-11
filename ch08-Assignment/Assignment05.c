/* 파일명: Assignment05.c

 * 내용: PA05. 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다
               배열과 배열의 크기, 공차(common difference)를 매개변수로 받아서 등차수열로 배열을 채우는 arith_seq 함수를 정의하라
               첫 번째 항의 값은 배열의 0번 원소에 넣어서 전달한다
               arith_seq 함수를 이용해서 입력받은 첫 번째 항과 공차로 크기가 10인 정수형 배열에 대하여 등차수열을 구하고 출력하는 프로그램을 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void arith_seq(int* arr, int size, int diff);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[10];
    int a, d, i;

    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &d);

    arr[0] = a;
    arith_seq(arr, 10, d);

    printf("등차수열: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void arith_seq(int* arr, int size, int diff)
{
    int i;
    for (i = 1; i < size; i++)
    {
        *(arr + i) = *(arr + i - 1) + diff;
    }
}