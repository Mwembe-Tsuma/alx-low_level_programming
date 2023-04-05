#include "main.h"

/**
 * _puts_recursion- Print a string using recursion
 * @s: the string
 *
 * Return: 0 success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
