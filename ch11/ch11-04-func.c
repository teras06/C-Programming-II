/* 파일명: ch11-04-func.c

 * 내용: 예제 11-4. 다른 소스 파일에 정의된 함수의 호출
 
 * 작성자: 김영재

 * 학번: 202511211

 * 날짜: 2025.10.15
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