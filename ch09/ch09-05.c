/* ���ϸ�: ch09-05.c

 * ����: ���� 9-5. ���ڿ��� ����

 * �ۼ���: �迵��

 * �й�: 202511211

 * ��¥: 2025.10.05
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);

	printf("%s\n", sentence);

	return 0;
}