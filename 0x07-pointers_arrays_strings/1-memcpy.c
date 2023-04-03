#include "main.h"

/**
 * _memcpy- A function that copies memory area
 * @dest:destination momery block
 * @src: source memory block
 * @n: value
 *
 * Return: a pointer to destinatiom
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k, j;

	k = 0;
	j = n;
	for (; k < j; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
