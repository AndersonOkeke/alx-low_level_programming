#include "main.h"

/**
 * print_alphabet - Print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		_putchar(alp[a]);
	}
	_putchar('\n');
}
