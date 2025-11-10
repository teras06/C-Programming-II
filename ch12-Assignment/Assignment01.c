/* 파일명: Assignment01.c

 * 내용: PA01. 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램을 작성하시오

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    FILE* fp;

    char filename[100];
    int ch;

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    int line_number = 1;
    printf("%d: ", line_number);

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);

        if (ch == '\n')
        {
            line_number++;
            printf("%d: ", line_number);
        }
    }

    fclose(fp);
}