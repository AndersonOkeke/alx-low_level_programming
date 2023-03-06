#include "main.h"
#include <unistd.h>
/*
 * _putchar - Writes the character c to the stdout
 * @c: the character to print
 * Return: on successfull 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
