/* 파일명: Assignment04.c

 * 내용: PA04. 배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하라
               실수형 배열은 크기가 10이고 마음대로 초기화해서 사용하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.09.27
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
double average(double* arr, int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };

    int i;

    printf("배열: ");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", *(arr + i));
    }

    double avg = average(arr, 10);
    printf("\n평균: %f", avg);
}

double average(double* arr, int size)
{
    double sum = 0.0;

    int i;
    for (i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum / size;
}