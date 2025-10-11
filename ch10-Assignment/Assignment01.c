/* 파일명: Assignment01.c

 * 내용: PA01. 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하라
               아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다
               LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하라
			   패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하라 (난이도 하)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.08
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

typedef struct login
{
	char id[21];
	char password[21];

} LOGIN;

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	LOGIN name;

	printf("ID? ");
	scanf("%s", name.id);
	printf("Password? ");
	scanf("%s", name.password);

	printf("ID: %s\n", name.id);
	printf("PW: ");

	int i;
	for (i = 0; i < 20; i++)
	{
		if (name.password[i] == '\0')
		{
			break;
		}
		printf("*");
	}
}