/* 파일명: Assignment14.c

 * 내용: PA14.  13번 프로그램을 실행해서 크기가 다른 2진 파일을 2개 생성한 다음 두 파일을 읽어서
                하나의 int 배열을 생성한 다음 정렬 후에 다시 2진 파일로 저장하는 프로그램을 작성하라

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Print(void);
int compare_int(const void* a, const void* b);
int* read_binary_file(const char* filename, int* out_count);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    char fname1[128], fname2[128], fout_name[128];
    int* arr1 = NULL, * arr2 = NULL;
    int n1 = 0, n2 = 0;

    printf("첫 번째 파일명? ");
    scanf("%127s", fname1);

    arr1 = read_binary_file(fname1, &n1);
    if (arr1 == NULL)
    {
        return;
    }
    printf("정수 %d개를 읽었습니다.\n", n1);

    printf("두 번째 파일명? ");
    scanf("%127s", fname2);

    arr2 = read_binary_file(fname2, &n2);
    if (arr2 == NULL)
    {
        free(arr1);
        return;
    }
    printf("정수 %d개를 읽었습니다.\n", n2);

    int n = n1 + n2;
    int* combined_arr = (int*)realloc(arr1, sizeof(int) * n);
    if (combined_arr == NULL)
    {
        fprintf(stderr, "메모리 재할당 실패\n");
        free(arr1);
        free(arr2);
        return;
    }

    memcpy(combined_arr + n1, arr2, sizeof(int) * n2);
    free(arr2);

    qsort(combined_arr, n, sizeof(int), compare_int);

    printf("저장할 파일명? ");
    scanf("%127s", fout_name);

    FILE* fp_out = fopen(fout_name, "wb");
    if (fp_out == NULL)
    {
        fprintf(stderr, "%s 파일 쓰기 실패 (열기)\n", fout_name);
        free(combined_arr);
        return;
    }

    if (fwrite(&n, sizeof(int), 1, fp_out) != 1)
    {
        fprintf(stderr, "%s 파일 쓰기 실패 (개수)\n", fout_name);
        fclose(fp_out);
        free(combined_arr);
        return;
    }

    if (fwrite(combined_arr, sizeof(int), n, fp_out) != n)
    {
        fprintf(stderr, "%s 파일 쓰기 실패 (데이터)\n", fout_name);
        fclose(fp_out);
        free(combined_arr);
        return;
    }

    fclose(fp_out);
    printf("정수 %d개를 저장했습니다.\n", n);

    free(combined_arr);
}


int compare_int(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int* read_binary_file(const char* filename, int* out_count)
{
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "%s 파일 열기 실패\n", filename);
        return NULL;
    }

    int n = 0;
    if (fread(&n, sizeof(int), 1, fp) != 1 || n <= 0)
    {
        fprintf(stderr, "%s 파일 읽기 실패 (유효한 개수 없음)\n", filename);
        fclose(fp);
        return NULL;
    }

    int* arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        fprintf(stderr, "메모리 할당 실패\n");
        fclose(fp);
        return NULL;
    }

    if (fread(arr, sizeof(int), n, fp) != n)
    {
        fprintf(stderr, "%s 파일 읽기 실패 (데이터)\n", filename);
        fclose(fp);
        free(arr);
        return NULL;
    }

    fclose(fp);
    *out_count = n;
    return arr;
}