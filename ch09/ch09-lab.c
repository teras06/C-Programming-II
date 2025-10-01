/*
   ���� : ���ڵ带 �Է¹޾� �ʵ带 �����Ͽ� ����ü �迭�� ������ �� ���
   ���ڵ� ���� : �̸� | �й� | �а� | �г� (����)
   �Է� ���� ���� : "exit" �Է�
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
		printf("�̸�, �й�, �а�, �г����� �̷���� ���ڵ带 �Է��ϼ���: ");
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
			printf("%d�� �л�\n", j + 1);
			printf("�̸� : %s\n", HUMAN[j].name);
			printf("�й� : %s\n", HUMAN[j].id);
			printf("�а� : %s\n", HUMAN[j].major);
			printf("�г� : %d\n", HUMAN[j].year);
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