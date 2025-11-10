/* 파일명: ch12-07.c

 * 내용: 예제 12-7. 텍스트 파일의 백업 파일 생성

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char in_fname[128] = "";
	char out_fname[128] = "";
	char str[BUFSIZ];
	FILE* fin = NULL;
	FILE* fout = NULL;

	printf("파일 이름? ");
	gets_s(in_fname, sizeof(in_fname));

	fin = fopen(in_fname, "r");

	if (fin == NULL)
	{
		printf("%s 파일 열기 실패\n", in_fname);
		return 1;
	}

	strcpy(out_fname, in_fname);
	strcat(out_fname, ".bak");
	fout = fopen(out_fname, "w");

	if (fout == NULL)
	{
		printf("%s 파일 열기 실패\n", out_fname);
		fclose(fin);
		return 1;
	}

	while (fgets(str, BUFSIZ, fin) != NULL)
	{
		fputs(str, fout);
	}
	fclose(fin);
	fclose(fout);

	printf("파일 백업 성공\n");

	return 0;
}