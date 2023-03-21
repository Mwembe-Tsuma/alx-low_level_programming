#iclude "main.h"

/**
 * print_last_digit- a function that prints the last digit of a number.
 * @n: The character to be computed
 * Return: Value of las digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * (-1);
	}
	_putchar(last + '0');
	return (last);
}
