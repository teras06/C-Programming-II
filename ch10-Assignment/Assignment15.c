/* 파일명: Assignment11.c

 * 내용: PA11. 점의 좌표를 나타내는 POINT 구조체에 대해서 두 점의 좌표를 맞바꾸는 swap_point 함수를 정의하시오 
               크기가 10인 POINT 구조체 배열에 대하여 x 좌표를 기준으로 선택 정렬하는 프로그램을 작성하라 
               POINT 구조체 배열의 초기값은 마음대로 정한다 (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
    int x;
    int y;
} POINT;

void Print(void);
void swap_point(POINT* a, POINT* b);
void print_points(POINT arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    POINT arr[10] = {
        {30, 40}, {10, 20}, {50, 10}, {5, 5}, {70, 25},
        {20, 80}, {60, 30}, {90, 15}, {15, 60}, {35, 10}
    };

    int i, j, min_idx;

    printf("<<정렬 전>>\n");
    print_points(arr, 10);

    for (i = 0; i < 9; i++)
    {
        min_idx = i;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[j].x < arr[min_idx].x)
                min_idx = j;
        }

        if (min_idx != i)
        {
            swap_point(&arr[i], &arr[min_idx]);
        }
    }

    printf("<<정렬 후>>\n");
    print_points(arr, 10);

}

void swap_point(POINT* a, POINT* b)
{
    POINT temp = *a;
    *a = *b;
    *b = temp;
}

void print_points(POINT arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("(%d, %d) ", arr[i].x, arr[i].y);
    }
    printf("\n");
}