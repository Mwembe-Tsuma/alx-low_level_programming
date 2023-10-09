#include "search_algos.h"
#include <stdio.h>

/**
  *binary_search- Implementation of binary search
  *@array: The array to search
  *@size: The size of the array
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
