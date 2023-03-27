#include "main.h"

/**
 * puts2- Print every other character of a  string to the standard output
 * @str: The strings to be checked
 *
 * Return: 0 Success
 */

void puts2(char *str)
{
	int longi = 0;
	char *y = str;
	int t = 0;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}

	_putchar('\n');
}
