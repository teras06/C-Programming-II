#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

//extern int get_id(void);   #include "function.h" 작성으로 선언 필요없이 사용가능
//extern int last_id;

int main(int argc, char* argv[])
{
	printf("추석 잘 보냈어요\n");

	printf("회원1의 id = %d\n", get_id()); //1001
	printf("회원2의 id = %d\n", get_id()); //1002
	printf("회원3의 id = %d\n", get_id()); //1003

	//printf("last_id = %d", last_id);

	return 0;
}