#include "main.h"

/**
 * _print_rev_recursion- Print a string using recursion in reverse
<F6> * @s: the string
 *
 * Return: 0 success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
