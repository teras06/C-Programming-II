/* 파일명: ch12-09.c

 * 내용: 예제 12-9. int 배열을 2진 파일로 저장하고 읽어오기
 
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

int is_equal_array(int source[], int target[], int size);

int main(void)
{
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE* fout = NULL;
    FILE* fin = NULL;
    int res = 0;

    srand((unsigned int)time(NULL));

    for (i = 0; i < ARR_SIZE; i++)
    {
        arr1[i] = rand() % 100;
    }

    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));
    fout = fopen(filename, "wb");

    if (fout == NULL)
    {
        printf("출력용 파일 열기 실패\n");
        return 1;
    }

    fwrite(arr1, sizeof(arr1[0]), ARR_SIZE, fout);
    fclose(fout);
    fout = NULL;

    fin = fopen(filename, "rb");

    if (fin == NULL)
    {
        printf("입력용 파일 열기 실패\n");
        return 1;
    }

    fread(arr2, sizeof(arr2[0]), ARR_SIZE, fin);
    fclose(fin);
    fin = NULL;

    if (is_equal_array(arr1, arr2, ARR_SIZE))
    {
        printf("2진 파일 입출력 성공\n");
    }
    else
    {
        printf("2진 파일 입출력 실패\n");
    }

    return 0;
}

int is_equal_array(int source[], int target[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (source[i] != target[i])
        {
            return 0;
        }
    }
    return 1;
}