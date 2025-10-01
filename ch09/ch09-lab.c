/*
   문제 : 레코드를 입력받아 필드를 구분하여 구조체 배열에 저장한 후 출력
   레코드 형식 : 이름 | 학번 | 학과 | 학년 (정수)
   입력 종료 조건 : "exit" 입력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct student {
	char name[24];
	char id[16];
	char major[32];
	int year;
} STUDENT;

void Print(void);
char* ltrim(char* str);
char* rtrim(char* str);
char* trim(char* str);

int main()
{
	Print();

	return 0;
}

void Print(void)
{
	STUDENT HUMAN[10];
	char human[100] = "";
	char *token;
	char *context = NULL;

	int size = sizeof(HUMAN) / sizeof(HUMAN[0]);

	int i = 0;

	while (1)
	{
		printf("이름, 학번, 학과, 학년으로 이루어진 레코드를 입력하세요: ");
		fgets(human, sizeof(human), stdin);

		token = strtok_s(human, "|", &context);

		if (strcmp(token, "exit") == 0)
		{
			break;
		}

		int x = 0;
		while (token != NULL)
		{
		    trim(human);
			if (x == 0)
			{
				strcpy(HUMAN[i].name, token);
			}
			else if (x == 1)
			{
				strcpy(HUMAN[i].id, token);
			}
			else if (x == 2)
			{
				strcpy(HUMAN[i].major, token);
			}
			else if (x == 3)
			{
				sscanf(token, "%d", &HUMAN[i].year);
			}
			token = strtok_s(NULL, "|", &context);

			x++;
		}

		int j;
		for (j = 0; j < i + 1; j++)
		{
			printf("%d번 학생\n", j + 1);
			printf("이름 : %s\n", HUMAN[j].name);
			printf("학번 : %s\n", HUMAN[j].id);
			printf("학과 : %s\n", HUMAN[j].major);
			printf("학년 : %d\n", HUMAN[j].year);
		}

		i++;
	}

	return 0;
}

char* ltrim(char* str)
{
	if (str == NULL)
	{
		return NULL;
	}

	while (*str && isspace(*str))
	{
		str++;
	}
	return str;
}

char* rtrim(char* str)
{
	if (str == NULL)
	{
		return NULL;
	}

	int len = strlen(str);
	if (len == 0)
	{
		return str;
	}

	char* end = str + len - 1;
	while (end >= str && isspace(*end))
	{
		*end = '\0';
		end--;
	}
	return str;
}

char* trim(char* str)
{
	if (str == NULL)
	{
		return NULL;
	}

	rtrim(str);
	return ltrim(str);
}