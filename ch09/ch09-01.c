/*
   ���� : ���ڵ带 �Է¹޾� �ʵ带 �����Ͽ� ����ü �迭�� ������ �� ���
   ���ڵ� ���� : �̸� | �й� | �а� | �г�(����)
   �Է� ���� ���� : "exit" �Է�
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
	    printf("�̸��� �Է��ϼ���: ");
        scanf("%s", &human[i].name);

		if (strcmp(human[i].name, "exit") == 0)
		{
			break;
		}

		printf("�й��� �Է��ϼ���: ");
		scanf("%s", &human[i].id);
		printf("�а��� �Է��ϼ���: ");
		scanf("%s", &human[i].major);
		printf("�г��� �Է��ϼ���: ");
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