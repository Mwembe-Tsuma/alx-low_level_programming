#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 * @a: the imput array
 * @size: size of input array
 *
 * Return: 0 success
 */

void print_diagsums(int *a, int size)
{
	int m = 0;
	int n = 0;
	int p;

	for (p = 0; p < size; p++)
	{
		m = m + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		n += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", m, n);
}
