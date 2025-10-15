/* 파일명: ch11-03.c

 * 내용: 예제 11-3. accumulator 함수의 정의 및 호출

 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void accumulator(char op, int operand);

int main(void)
{
	while (1)
	{
		char op;
		int num;
		printf("연산자와 정수를 입력하세요(. 0 입력시 종료): ");
		scanf(" %c %d", &op, &num);
		if (op == '.' && num == 0)
		{
			break;
		}
		accumulator(op, num);
	}

	return 0;
}

void accumulator(char op, int operand)
{
	static int result = 0;
	switch (op)
	{
	case '+':
		result += operand;
		break;
	case '-':
		result -= operand;
		break;
	case '*':
		result *= operand;
		break;
	case '/':
		result /= operand;
		break;
	default:
		return;
	}
	printf("%c %d = %d\n", op, operand, result);
}