#include "main.h"

/**
 *swap_int- Swap integers
 *@a: Firts integer
 *@b: Second integer
 *
 * Return: Always 0 success
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
