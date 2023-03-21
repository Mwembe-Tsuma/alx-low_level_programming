#include "main.h"

/**
 * _abs- computes the absolute value of an integer.
 *@n: The number to be computed
 *Return: Absolute value or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = (-1) * n;

		return (abs_val);
	}
	return (n);
}
