#include "main.h"
/**
 * _isupper(- Prints a lowercase alphabet
 *@c: Character to be checked
 * Return: 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
