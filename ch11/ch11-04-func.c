/* ���ϸ�: ch11-04-func.c

 * ����: ���� 11-4. �ٸ� �ҽ� ���Ͽ� ���ǵ� �Լ��� ȣ��
 
 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.15
 */

int get_gcd(int x, int y)
{
	int r;
	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

extern int get_factorial(int num)
{
	int i;
	int result = 1;

	for (i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}