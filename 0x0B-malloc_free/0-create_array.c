#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars and initialize with a specific char
 * @size: size of array
 * @c: char to initizlize array
 *
 * Return: pointer to the array or Null otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) *size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
