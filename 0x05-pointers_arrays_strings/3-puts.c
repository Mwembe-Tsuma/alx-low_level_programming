#include "main.h"

/**
 * _puts- Print a string to the standard output
 * @str: The strings to be checked
 *
 * Return: 0 Success
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
