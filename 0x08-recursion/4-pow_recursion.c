#include "main.h"

/**
 *_pow_recursion- A function that returns x to power y
 *@x:The base integer
 *@y:The power
 *
 *Return: X to power Y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
