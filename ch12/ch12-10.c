/* 파일명: ch12-10.c

 * 내용: 예제 12-10. 2진 파일의 복사

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char buff[BUFSIZ];
    char in_file[128];
    char out_file[128] = "backup";
    FILE* fout = NULL;
    FILE* fin = NULL;
    size_t cnt_read = 0;

    printf("복사할 파일 이름? ");
    gets_s(in_file, sizeof(in_file));

    strcat(out_file, strchr(in_file, '.'));
    fin = fopen(in_file, "rb");
    if (fin == NULL)
    {
        goto cleanup;
    }
    fout = fopen(out_file, "wb");
    if (fout == NULL)
    {
        goto cleanup;
    }

    while ((cnt_read = fread(buff, 1, sizeof(buff), fin)) > 0)
    {
        int cnt_written = fwrite(buff, 1, cnt_read, fout);
        if (cnt_written < cnt_read)
        {
            goto cleanup;
        }
    }

cleanup:
    if (fin == NULL || fout == NULL)
    {
        printf("파일 열기 실패\n");
    }
    else if (ferror(fin))
    {
        printf("파일 읽기 실패\n");
    }
    else if (ferror(fout))
    {
        printf("파일 쓰기 실패\n");
    }
    else
    {
        printf("파일 복사 성공 (%s -> %s)\n", in_file, out_file);
    }

    if (fin) fclose(fin);
    if (fout) fclose(fout);

    return 0;
}