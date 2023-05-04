#include "main.h"

/**
  *clear_bit - Set value of a bit at given index to 0
  *@n: Pointer to the number
  *@index: The index
  *
  *Return: 1 or -1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
