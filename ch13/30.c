#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define LEN 14

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

void set_as_today(DATE* d);

int main()
{
    DATE today;

    set_as_today(&today);

    printf("생년월일과 성별, 띠, 만나이 계산\n\n");
    printf("주민 등록번호 13자리 빈칸없이 입력하고 Enter\n");
    printf("주민번호>");

    int num[LEN];
    char ch;

    int i;
    for (i = 0; i < LEN - 1; i++)
    {
        ch = _getch();

        if (ch >= '0' && ch <= '9')
        {
            num[i] = ch - '0';

            if (i < 6)
            {
                printf("%c", ch);

                if (i == 5)
                {
                    printf("-");
                }
            }
            else
            {
                printf("*");
            }
        }
    }

    printf("\n현재 연월일 : %d년 %d월 %d일\n", today.year, today.month, today.day);

    int year_f = 0;
    int gender_digith = num[6];

    if (gender_digith == 1 || gender_digith == 2)
    {
        year_f = 1900;
    }
    else if (gender_digith == 3 || gender_digith == 4)
    {
        year_f = 2000;
    }
    else
    {
        year_f = 1800;
    }

    int birth_year = year_f + (num[0] * 10 + num[1]);
    int birth_month = num[2] * 10 + num[3];
    int birth_day = num[4] * 10 + num[5];

    const char* gender = (gender_digith % 2 != 0 ? "남성" : "여성");

    printf("생년월일    : %d년 %월 %d일\n", birth_year, birth_month, birth_day);
    printf("")

}

void set_as_today(DATE* d)
{
    time_t now = time(NULL);
    struct tm* t = localtime(&now);

    d->year = t->tm_year + 1900;
    d->month = t->tm_mon + 1;
    d->day = t->tm_mday;
}
