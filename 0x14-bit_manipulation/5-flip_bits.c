#include "main.h"

/**
  *flip_bits - Flip bits to get from one number to another
  *@n: The 1st number
  *@m: The 2nd number
  *
  *Return: 0 success
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int curr, diff = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = diff >> i;

		if (curr & 1)
			count++;
	}
	return (count);
}
