#include "main.h"
#include <stdlib.h>

/**
*_realloc-Reallocates memory block
*@ptr: Pointer to memmory block
*@old_size: Old memory size
*@new_size: New memory size
*
*Return: Pointer or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
