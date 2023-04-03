#include "main.h"

/**
 * _memset- A function that fills a memory with a contant byte b
 * @s:character s (memory area)
 * @b: the constant byte
 * @n: itss value
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k;

	k = 0;
	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
