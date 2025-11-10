/* 파일명: ch12-03.c

 * 내용: 예제 12-3. 파일 열기와 닫기

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.11.09
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fout = NULL;
	FILE* fin = NULL;

	fout = fopen("a.txt", "w");
	if (fout == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	fclose(fout);

	fin = fopen("a.txt", "r");
	if (fin == NULL)
	{
		printf("파일 열기 실패\n");
	}
	printf("파일 열기 성공\n");
	fclose(fin);

	return 0;
}