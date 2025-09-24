/*
   문제 : 레코드를 입력받아 필드를 구분하여 구조체 배열에 저장한 후 출력
   레코드 형식 : 이름 | 학번 | 학과 | 학년(정수)
   입력 종료 조건 : "exit" 입력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[24];
	char id[16];
	char major[32];
	int year;
} STUDENT;

void Print(void);

int main()
{
	Print();

	return 0;
}

void Print(void)
{
	STUDENT human[10];

    int i = 0;

	while (1)
	{
	    printf("이름을 입력하세요: ");
        scanf("%s", &human[i].name);

		if (strcmp(human[i].name, "exit") == 0)
		{
			break;
		}

		printf("학번을 입력하세요: ");
		scanf("%s", &human[i].id);
		printf("학과를 입력하세요: ");
		scanf("%s", &human[i].major);
		printf("학년을 입력하세요: ");
		scanf("%d", &human[i].year);

		int j = 0;
		for (j = 0; j < i + 1; j++)
		{
	        printf("%s %s %s %d\n", human[j].name, human[j].id, human[j].major, human[j].year);
		}

		i++;
	}

	return;
}