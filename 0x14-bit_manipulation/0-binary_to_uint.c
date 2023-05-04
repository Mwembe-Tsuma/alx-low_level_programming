#include "main.h"
#include <stdlib.h>

/**
  *binary_to_uint - Converts a binary number to an unsigned int
  *@b: String to check
  *
  *Return: Number
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bit;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (bit = 0; b[bit]; bit++)
	{
		if (b[bit] < '0' || b[bit] > '1')
			return (0);
		res = 2 * res + (b[bit] - '0');
	}
	return (res);
}
