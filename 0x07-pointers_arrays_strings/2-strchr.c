#include "main.h"
/*
 * _strchr - Finds the character value of what is pass in c from s
 * @*s: The pointer variable
 * @c: The character we are looking for
 * Return: Alwaya 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
