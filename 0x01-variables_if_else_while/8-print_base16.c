#include<stdio.h>

/**
 * main - Print alphabets.
 * Return: Always 0 (success)
 */

int main(void)
{
	char num[10] = "0123456789";
	char alp[6] = "abcdef";
	int a;
	int j;

	for (a = 0; a < 10; a++)
	{
		putchar(num[a]);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
