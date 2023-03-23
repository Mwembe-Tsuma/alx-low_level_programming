#include "main.h"

/**
 * print_line- Print a line on the terminal
 *@n: The paramenter
 *Return: 0 success
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
