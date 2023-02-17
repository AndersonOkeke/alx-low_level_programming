#include<stdio.h>

/**
 * main - Print alphabets.
 * Return: Always 0 (success)
 */

int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;
	int j;

	for (a = 0, j = 0; a < 26, j < 26; a++, j++)
	{
		putchar(low[a]);
		putchar(upper[j]);
	}
	putchar('\n');
	return (0);
}
