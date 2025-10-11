/* 파일명: Assignment05.c

 * 내용: PA05. DATE 구조체를 매개변수로 전달받아 날짜를 오늘 날짜로 지정하는 set_as_today 함수를 정의하라
               시스템을로부터 현재 날짜와 시간을 구할 때는 <time.h>의 time 함수와 localtime 함수를 이용한다
               DATE 구조체와 set_as_today, print_date 함수를 이용해서 오늘 날짜를 출력하는 프로그램을 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

void set_as_today(DATE* d);
void print_date(DATE d);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    DATE today;

    set_as_today(&today);
    print_date(today);
}

void set_as_today(DATE* d)
{
    time_t now = time(NULL);
    struct tm* t = localtime(&now);

    d->year = t->tm_year + 1900;
    d->month = t->tm_mon + 1;
    d->day = t->tm_mday;
}

void print_date(DATE d)
{
    printf("오늘 날짜는 %d/%d/%d 입니다.", d.year, d.month, d.day);
}