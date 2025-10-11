/* 파일명: Assignment04.c

 * 내용: PA04. 연월일을 나타내는 DATE 구조체와 DATE 구조체를 매개변수로 전달받아 날짜는 "2019/1/1" 처럼 출력하는 print_date 함수를 정의하라
               DATE 구조체와 print_data 함수를 이용해서 입력받은 날짜를 출력하는 프로그램을 작성하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

void print_date(DATE d);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    DATE time;

    printf("연? ");
    scanf("%d", &time.year);
    printf("월? ");
    scanf("%d", &time.month);
    printf("일? ");
    scanf("%d", &time.day);

    print_date(time);
}


void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}