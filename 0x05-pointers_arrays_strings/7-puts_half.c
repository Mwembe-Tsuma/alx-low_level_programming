#include "main.h"

/**
 * puts_half- Print half of a string
 * @str: The strings to be printed
 *
 * Return: 0 Success
 */

void puts_half(char *str)
{
	int longi = 0;
	int a;
	int n;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = longi / 2;
	if (longi % 2 == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
