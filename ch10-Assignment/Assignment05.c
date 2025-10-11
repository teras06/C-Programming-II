/* ���ϸ�: Assignment05.c

 * ����: PA05. DATE ����ü�� �Ű������� ���޹޾� ��¥�� ���� ��¥�� �����ϴ� set_as_today �Լ��� �����϶�
               �ý������κ��� ���� ��¥�� �ð��� ���� ���� <time.h>�� time �Լ��� localtime �Լ��� �̿��Ѵ�
               DATE ����ü�� set_as_today, print_date �Լ��� �̿��ؼ� ���� ��¥�� ����ϴ� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.08
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
    printf("���� ��¥�� %d/%d/%d �Դϴ�.", d.year, d.month, d.day);
}