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

	for (a = 0; a < 26; a++)
	{
		putchar(low[a]);
		putchar(upper[a]);
	}
	putchar('\n');
	return (0);
}
