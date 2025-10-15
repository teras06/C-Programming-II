/* ���ϸ�: ch11-09.c

 * ����: ���� 11-9. �Լ� ������ �迭�� ���

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void open_file(void)
{
	printf("������ �����մϴ�....\n");
}

void save_file(void)
{
	printf("������ �����մϴ�....\n");
}

void options(void)
{
	printf("�ɼ��� �����մϴ�....\n");
}

void print_file(void)
{
	printf("������ �μ��մϴ�....\n");
}

typedef void(*PFUNC)(void);

int main(void)
{
	PFUNC pf_arr[] = { open_file, save_file, options, print_file };

	const char* menu_str[] = {
		"���� ����", "���� ����", "�ɼ�", "�μ�", "����"
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
		printf("����? ");
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
			printf("�߸� �����ϼ̽��ϴ�.\n");
		}
	}
	return 0;
}