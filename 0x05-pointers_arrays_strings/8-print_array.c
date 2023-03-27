#include <stdio.h>
#include "main.h"

/**
 * print_array- prints n elements of an array of integers
 * @a: Array of elements
 * @n: Integer to be checke
 *
 * Return: 0 success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d, ", a[n - 1]);
	}
	printf("\n");
}
