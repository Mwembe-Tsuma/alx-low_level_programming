#include "search_algos.h"
#include <stdio.h>

/**
  *advanced_binary_recursive- Implementation of  advanced binary search
  *@array: The array to search
  *@left: The left size of the array
  *@right: The rigth size of the array
  *@value: The value to search
  *
  *Return: Value or -1 if value not present or array
  *is empty
  *
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] < value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left, mid - 1, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive(array, mid + 1, right, value));
		}
		else
		{
			return (advanced_binary_recursive(array, left, mid - 1, value));
		}
	}
	return (-1);
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
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
