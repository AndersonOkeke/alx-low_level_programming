#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * 0 if b is NULL
 * 0 if b is not 0 or 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_num = 2 * decimal_num + (b[i] - '0');
	}

	return (decimal_num);

}
