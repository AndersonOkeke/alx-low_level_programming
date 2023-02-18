#include<stdio.h>

/**
 * main - Prints the alphabet
 * Return: Alway 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 25; a >= 0; a--)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);

}
