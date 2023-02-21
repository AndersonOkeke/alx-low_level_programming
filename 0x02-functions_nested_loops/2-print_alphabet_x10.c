#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	char alp;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
