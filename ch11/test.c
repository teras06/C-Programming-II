#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

//extern int get_id(void);   #include "function.h" �ۼ����� ���� �ʿ���� ��밡��
//extern int last_id;

int main(int argc, char* argv[])
{
	printf("�߼� �� ���¾��\n");

	printf("ȸ��1�� id = %d\n", get_id()); //1001
	printf("ȸ��2�� id = %d\n", get_id()); //1002
	printf("ȸ��3�� id = %d\n", get_id()); //1003

	//printf("last_id = %d", last_id);

	return 0;
}