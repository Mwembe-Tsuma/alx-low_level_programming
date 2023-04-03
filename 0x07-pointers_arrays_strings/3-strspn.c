#include "main.h"

/**
 *_strspn- a function that gets the length of a prefix substring
 *@s: String to be checked
 *accept: the input bytes
 *
 * Return: Number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
