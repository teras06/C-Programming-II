/* 파일명: Assignment16.c

 * 내용: PA16. 인터넷 사이트에 로그인하려는 사용자로부터 아이디와 패스워드를 입력받아 로그인 과정을 처리하려고 한다 
               사용자 5명의 아이디와 패스워드가 이미 등록되어 있을 때, 입력받은 아이디에 해당하는 패스워드와 /
               사용자가 입력한 패스워드가 일치하면 로그인을 허용하는 프로그램을 작성하라
               사용자가 입력한 아이디가 존재하지 않거나, 아이디에 해당하는 패스워드가 일치하지 않으면 에러 메시지 출력 후 아이디와 패스워드를 다시 입력받게 한다 
               3번의 재시도 후에도 올바른 아이디와 패스워드를 입력하지 못하면 로그인 실패 에러 메시지를 출력한다 
               아이디 문자열 배열과 패스워드 문자열 배열은 마음대로 정해서 사용한다. (난이도 상)

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.11
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int login(char* id, char* pw);
void Print(void);

int main(void)
{
    Print();
    return 0;
}

void Print(void)
{
    char input_id[20];
    char input_pw[30];
    int result;

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("ID: ");
        scanf("%s", input_id);

        printf("PW: ");
        scanf("%s", input_pw);

        result = login(input_id, input_pw);

        if (result == 1)
        {
            printf("\n로그인 성공!\n");
            return;
        }
        else if (result == 0)
        {
            printf("패스워드가 틀렸습니다.\n\n");
        }
        else
        {
            printf("해당 id가 없습니다.\n\n");
        }
    }

    printf("로그인 실패!\n");
}


int login(char* id, char* pw)
{
    char ids[5][20] = { "rm", "jin", "suuga", "jhope", "parkjimin" };
    char pws[5][30] = { "rm", "jin", "suuga", "jhope", "@BestOfMe@" };

    int i;
    for (i = 0; i < 5; i++)
    {
        if (strcmp(id, ids[i]) == 0)
        {
            if (strcmp(pw, pws[i]) == 0)
            {
                return 1; //로그인 성공
            }
            else
            {
                return 0; //패스워드 틀림
            }
        }
    }

    return -1; //아이디 없음
}
