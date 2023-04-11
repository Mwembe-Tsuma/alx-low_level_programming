#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- A function of 2D array of int
 * @width: Width
 * @height: Height
 *
 * Return: Pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		i[n] = malloc(sizeof(int) * width);
		if (i[n] == NULL)
		{
			for (; n >= 0; n--)
				free(i[n]);
			free(i);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			i[n][m] = 0;
	}
	return (i);
}
