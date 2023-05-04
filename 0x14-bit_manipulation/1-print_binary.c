#include "main.h"
#include <stdlib.h>

/**
  *print_binary - print binary rep of a number
  *@n: The number to convert to binary
  *
  *Return: Nothing
  */

void print_binary(unsigned long int n)
{
	int bit;
	int count = 0;
	unsigned long int curr;

	for (bit = 63; b >= 0; bi--)
	{
		curr = n >> bit;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == NULL)
		_putchar('0');
}
