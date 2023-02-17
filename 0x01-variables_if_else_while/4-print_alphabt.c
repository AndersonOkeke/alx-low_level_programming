#include<stdio.h>

/**
 * main - Print alphabets.
 * Return: Always 0 (success)
 */

int main(void)
{
	char low[24] = "abcdfghijklmnoprstuvwxyz";

	int a;


	for (a = 0; a < 24; a++)
	{
		putchar(low[a]);
	}
	putchar('\n');
	return (0);
}

