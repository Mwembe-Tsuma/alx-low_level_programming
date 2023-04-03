#include "main.h"

/**
 * print_chessboard- A function that  prints chaseboard
 * @a:Input number of rows
 *
 * Return: 0 success
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
