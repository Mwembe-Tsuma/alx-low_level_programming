#include "main.h"

/**
 * print_rev- Print a string in reverse
 * @s: The strings to be printed
 *
 * Return: 0 Success
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (*s != '\0')
	{

		len++;
		s++;
	}

	for (index = len; index >= 0; index--)
		_putchar(*s--);
}
