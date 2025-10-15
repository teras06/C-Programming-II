/* 파일명: ch11-09.c

 * 내용: 예제 11-9. 함수 포인터 배열의 사용

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void open_file(void)
{
	printf("파일을 오픈합니다....\n");
}

void save_file(void)
{
	printf("파일을 저장합니다....\n");
}

void options(void)
{
	printf("옵션을 저장합니다....\n");
}

void print_file(void)
{
	printf("파일을 인쇄합니다....\n");
}

typedef void(*PFUNC)(void);

int main(void)
{
	PFUNC pf_arr[] = { open_file, save_file, options, print_file };

	const char* menu_str[] = {
		"파일 열기", "파일 저장", "옵션", "인쇄", "종료"
	};
	enum { OPEN_FILE, CLOSE_FILE, OPTIONS, PRINT, QUIT };
	int size = sizeof(pf_arr) / sizeof(pf_arr[0]);

	while (1)
	{
		int i;
		int selected = 0;
		for (i = 0; i < size; i++)
		{
			printf("%d. %s\n", i, menu_str[i]);
		}
		printf("선택? ");
		scanf("%d", &selected);
		if (selected == QUIT)
		{
			break;
		}
		if (selected >= 0 && selected < size)
		{
			pf_arr[selected]();
		}
		else
		{
			printf("잘못 선택하셨습니다.\n");
		}
	}
	return 0;
}