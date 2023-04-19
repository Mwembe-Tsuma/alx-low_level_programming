#include "function_pointers.h"

/**
  *int_index - Searches for an integer
  *@array: The array
  *@size: The array size
  *@cmp: Function pointer
  *
  *Return: 0 success
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
