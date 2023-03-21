#include "main.h"
/**
 *print_sign- Prints a sing
 *@n:Character to be printed
 *Return:1 for positive, 0 for zero and -1 for anything
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
