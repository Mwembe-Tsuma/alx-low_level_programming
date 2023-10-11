#include "search_algos.h"
#include <stdio.h>

/**
  *advanced_binary_recursive- Implementation of  advanced binary search
  *@array: The array to search
  *@size: The size of the array
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t idx;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (idx = 0; idx < size; idx++)
		printf("%s %d", (idx == 0) ? ":" : ",", array[idx]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (advanced_binary_recursive(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (advanced_binary_recursive(array, mid + 1, value));

	mid++;
	return (advanced_binary_recursive(array + mid, size - mid, value) + mid);
}

/**
  *advanced_binary- Implementation of advanced binary search
  *@array: The array to search
  *@size: The size of the array
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */

int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = advanced_binary_recursive(array, size, value);
	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
