#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: array size
 * @c: char to initizlize
 * Return: pointer to array or Null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
