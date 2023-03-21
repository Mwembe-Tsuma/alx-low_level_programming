#include "main.h"

/**
 *_isalpha - Checks for laphabetic characters
 *Return: 1 if success or 0 if not
 *@c: character to be checked
 */

int _isalpha(int c)
{
	for (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
