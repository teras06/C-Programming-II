/* 파일명: Assignment07.c

 * 내용: PA07. 날짜에서 월은 1~12사이의 값이다 월을 나타내는 열거체와 열거 상수를 정의하고, 이 열거체를 이용하도록 DATE 구조체의 정의를 변경하라 
               날짜를 "Jan 1 2019" 형식으로 출력하는 print_date_eng 함수를 정의하라
               set_as_today 함수와 print_date_eng 함수를 이용해서 오늘 날짜를 영어식 표기법으로 출력하는 프로그램을 작성하라 (난이도 중)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef enum {
    Jan = 1, Feb, Mar, Apr, May, Jun,
    Jul, Aug, Sep, Oct, Nov, Dec
} MONTH;

typedef struct {
    int year;
    MONTH month;
    int day;
} DATE;

void set_as_today(DATE* d);
void print_date_eng(const DATE* d);
const char* get_month_name(MONTH m);
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
    print_date_eng(&today);
}

void set_as_today(DATE* d)
{
    time_t t = time(NULL);
    struct tm* now = localtime(&t);

    d->year = now->tm_year + 1900;
    d->month = (MONTH)(now->tm_mon + 1);
    d->day = now->tm_mday;
}

void print_date_eng(const DATE* d)
{
    printf("Todat is %s %d %d\n", get_month_name(d->month), d->day, d->year);
}

const char* get_month_name(MONTH m)
{
    static const char* month_names[] =
    {
        "Invalid", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (m < Jan || m > Dec)
    {
        return "Invalid";
    }

    return month_names[m];
}