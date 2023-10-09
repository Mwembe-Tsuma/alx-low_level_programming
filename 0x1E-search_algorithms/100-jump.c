#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
  *jump_search- Implementation of jump search
  *@array: The array to search
  *@size: The size of the array
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */
int jump_search(int *array, size_t size, int value)
{
	int idx;
	int n = 0;
	int prev = idx = 0;
	int jump_step = (int)sqrt((double)size);

	if (array == NULL || size == 0)
		return (-1);

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		n++;
		prev = idx;
		idx = n * jump_step;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
