#include "main.h"
#include <stdlib.h>

/**
 *array_range- A function to create array of integers
 *@min: Min range of numbers
 *@max: Max range of number
 *
 *Return: Pointer or NULL
 */

int *array_range(int min, int max)
{
	int x;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		p[x] = min++;
	}
	return (p);
}
