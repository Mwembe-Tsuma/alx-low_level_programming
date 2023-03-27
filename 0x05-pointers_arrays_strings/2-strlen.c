#include "main.h"

/**
 * _strlen- Finds the lenght of a string
 * @*s: The strings
 *
 * Return: 0 Success
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
