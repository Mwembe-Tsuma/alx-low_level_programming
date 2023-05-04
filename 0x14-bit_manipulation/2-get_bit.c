#include "main.h"

/**
  *get_bit - Print the value of a bit at given index
  *@n: The number
  *@index: The index
  *
  *Return: Value o -1 otherwise
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	return ((n >> index) & 1);
}
