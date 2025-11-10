/* 파일명: ch12-08.c

 * 내용: 예제 12-8. 콘솔 출력과 파일 출력을 공통의 코드로 처리하는 경우
 * 
 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20

int compare_int(const void* e1, const void* e2);
void print_array(const int arr[], int size, FILE* fp);

int main(void)
{
    int arr[ARR_SIZE];
    int i;
    char filename[BUFSIZ] = "";
    FILE* fp = NULL;

    srand((unsigned int)time(NULL));

    for (i = 0; i < ARR_SIZE; i++)
    {
        arr[i] = rand() % 100;
    }

    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));

    if (strcmp(filename, ".") == 0)
    {
        fp = stdout;
    }
    else
    {
        fp = fopen(filename, "w");
        if (fp == NULL)
        {
            fp = stdout;
        }
    }

    fputs("정렬 전: ", fp);
    print_array(arr, ARR_SIZE, fp);

    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);

    fputs("정렬 후: ", fp);
    print_array(arr, ARR_SIZE, fp);

    if (fp != stdout)
    {
        fclose(fp);
    }

    return 0;
}

int compare_int(const void* e1, const void* e2)
{
    const int* p1 = (const int*)e1;
    const int* p2 = (const int*)e2;

    return (*p1 - *p2);
}

void print_array(const int arr[], int size, FILE* fp)
{
    int i;
    for (i = 0; i < size; i++)
    {
        fprintf(fp, "%2d ", arr[i]);
    }
    fprintf(fp, "\n");
}