#include "main.h"

/**
 *_strpbrk- a function that searches for a set of bytes
 *@s: String to be checked
 *@accept: the input character to be accepted
 *
 * Return: pointer to matching bytes in accept or NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (0);
}
