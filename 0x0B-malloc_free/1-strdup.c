#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ab;
	int i, j = 0;

	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;

	ab = malloc(sizeof(char) * (i + 1));

	if (ab == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		ab[j] = str[j];

	return (ab);

}
