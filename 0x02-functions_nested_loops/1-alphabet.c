#include<stdio.h>

/**
 * main - check the code
 * print_alphabet - is a Function
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
}
