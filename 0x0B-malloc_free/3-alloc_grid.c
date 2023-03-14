#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **con;
	int i, j;

	if ((width || height) <= 0)
	{
		return (NULL);
	}
	con = malloc(sizeof(int *) * height);

	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		con[i] = malloc(sizeof(int) * width);
		if (con[i] == NULL)
		{
			for (; i >= 0; i--)
				free(con[i]);

			free(con);

			return (NULL);

		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			con[i][j] = 0;

	}
	return (con);
}
