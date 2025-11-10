/* 파일명: Assignment12.c

 * 내용: PA12. 11번 프로그램에 연락처 검색이 실패하는 경우 새로운 연락처를 추가하는 기능을 구현하라 
               또한, 프로그램이 종료될 때 CONTACT 구조체의 내용을 텍스트 파일로 저장하도록 처리하라

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.10
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME  64
#define PHONE 32

typedef struct Contact
{
    char name[NAME];
    char phone[PHONE];
} CONTACT;

void Print(void);
void trim_newline(char* s);
int load_contacts(const char* filename, CONTACT** out_arr, int* out_n);
int save_all_contacts(const char* filename, const CONTACT* list, int count);


int main()
{
    Print();
    return 0;
}

void Print(void)
{
    char fname[256];
    CONTACT* list = NULL;
    int count = 0;

    printf("연락처 파일 명? ");
    if (!fgets(fname, sizeof(fname), stdin))
    {
        fprintf(stderr, "파일 이름을 읽지 못했습니다.\n");
        return;
    }
    trim_newline(fname);

    if (load_contacts(fname, &list, &count) != 0)
    {
        printf("새 연락처 파일을 시작합니다: %s\n", fname);
    }
    else
    {
        printf("%d개의 연락처를 로딩했습니다\n", count);
    }

    char search_name[NAME];
    while (1)
    {
        printf("이름 (. 입력 시 종료): ");
        if (!fgets(search_name, sizeof(search_name), stdin))
        {
            break;
        }
        trim_newline(search_name);

        if (strcmp(search_name, ".") == 0)
        {
            break;
        }

        int i = 0;
        int found = 0;
        for (i = 0; i < count; i++)
        {
            if (strcmp(search_name, list[i].name) == 0)
            {
                printf("%s의 전화번호 %s로 전화를 겁니다....\n", list[i].name, list[i].phone);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까?(y/n) ");

            char response[10];
            fgets(response, sizeof(response), stdin);
            trim_newline(response);

            if (strcmp(response, "y") == 0 || strcmp(response, "Y") == 0)
            {
                char new_phone[PHONE];

                printf("전화번호? ");

                fgets(new_phone, sizeof(new_phone), stdin);
                trim_newline(new_phone);

                CONTACT* tmp = realloc(list, sizeof(CONTACT) * (count + 1));

                if (!tmp)
                {
                    fprintf(stderr, "오류: 메모리를 할당할 수 없습니다.\n");
                    continue;
                }
                list = tmp;

                strncpy(list[count].name, search_name, NAME);
                list[count].name[NAME - 1] = '\0';
                strncpy(list[count].phone, new_phone, PHONE);
                list[count].phone[PHONE - 1] = '\0';

                count++;
            }
        }
    }

    if (save_all_contacts(fname, list, count) == 0)
    {
        printf("%s로 %d개의 연락처를 저장했습니다.\n", fname, count);
    }
    else
    {
        fprintf(stderr, "오류: 최종 연락처를 파일에 저장하는 데 실패했습니다.\n");
    }

    free(list);
}

void trim_newline(char* s)
{
    if (!s)
    {
        return;
    }
    s[strcspn(s, "\r\n")] = '\0';
}

int load_contacts(const char* filename, CONTACT** out_arr, int* out_n)
{
    FILE* fp = fopen(filename, "r");

    if (!fp)
    {
        return -1;
    }

    CONTACT* arr = NULL;
    int cap = 0;
    int n = 0;
    char line[256];

    while (fgets(line, sizeof(line), fp))
    {
        trim_newline(line);

        char* p = line;
        while (*p == ' ' || *p == '\t')
        {
            p++;
        }

        if (*p == '\0' || *p == '#')
        {
            continue;
        }

        char name[NAME], phone[PHONE];
        int m = sscanf(p, "%63s %31s", name, phone);

        if (m != 2)
        {
            continue;
        }

        if (n == cap)
        {
            int new_cap = (cap == 0) ? 8 : cap * 2;
            CONTACT* tmp = realloc(arr, sizeof(CONTACT) * new_cap);
            if (!tmp) { fclose(fp); free(arr); return -1; }
            arr = tmp;
            cap = new_cap;
        }
        strncpy(arr[n].name, name, NAME);      arr[n].name[NAME - 1] = '\0';
        strncpy(arr[n].phone, phone, PHONE);  arr[n].phone[PHONE - 1] = '\0';
        n++;
    }

    fclose(fp);
    *out_arr = arr;
    *out_n = n;
    return 0;
}

int save_all_contacts(const char* filename, const CONTACT* list, int count)
{
    FILE* fp = fopen(filename, "w");
    if (!fp)
    {
        return -1;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%s %s", list[i].name, list[i].phone);

        if (i < count - 1)
        {
            fprintf(fp, "\n");
        }
    }

    fclose(fp);
    return 0;
}