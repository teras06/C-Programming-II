/* ���ϸ�: ch11-03.c

 * ����: ���� 11-3. accumulator �Լ��� ���� �� ȣ��

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
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
		printf("�����ڿ� ������ �Է��ϼ���(. 0 �Է½� ����): ");
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