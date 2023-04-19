#include "function_pointers.h"

/**
  *array_iterator - Executes a function given as a parameter
  *@array: The array
  *@size: The array size
  *@action: Function pointer
  *
  *return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && size > 0 && action != NULL)
	{

		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
