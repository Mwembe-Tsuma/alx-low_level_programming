#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- A function to allocate memory
 * @b: the size
 *
 * Return: Pointer or Null
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
