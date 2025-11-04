#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test_io(void);

int main(int argc, char* argv[])
{
	printf("Hello, World!\n");

	fprintf(stdout, "Hello, World!\n");

	fprintf(stderr, "Hello, World!\n");

	test_io();
}

#define FNAME "BTS.txt"

int test_io(void)
{
	int x = 0;

	int res = fscanf(stdin, "%d", &x);
	fprintf(stdout, "입력값: %d 반환값: %d\n", x, res);

	FILE* fBTS = NULL;


	fBTS = fopen("C:/Temp/BTS.txt" /* FNAME 사용시 파일 생성은 안됨 */, "w"); //#define _CRT_SECURE_NO_WARNINGS 사용 안할 시 fopen_s 사용

	if (fBTS == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다\n");
		//exit(0);
	}
	else
	{
		int res = fscanf(stdin, "%d", &x);
		fprintf(stdout, "입력값: %d 반환값: %d\n", x, res);
		fprintf(fBTS, "입력값: %d 반환값: %d\n", x, res);
	}
	fflush(fBTS);
	fclose(fBTS);

}