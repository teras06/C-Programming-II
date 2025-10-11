/* 파일명: Assignment07.c

 * 내용: PA07. 실수형 배열에 대해서 원소들을 역순으로 만드는 reverse_array 함수를 작성하라
               크기가 10인 double 배열에 대해서 원하는 값으로 초기값을 채운 다음 reverse_array 함수의 호출 결과를 확인하는 프로그램을 작성하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void reverse_array(double* arr, int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("배열: ");

    int i;
    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }

    reverse_array(arr, size);

    printf("\n역순: ");

    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
}

void reverse_array(double* arr, int size)
{
    double* first = arr;
    double* last = arr + size - 1;
    double temp;

    while (first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }
}