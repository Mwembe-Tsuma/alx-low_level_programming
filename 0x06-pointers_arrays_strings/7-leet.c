#include "main.h"

/**
 * leet- Encoded to 1337
 * @n: elements in array
 *Return: encoded array
 */
char *leet(char *n)
{
	char *r = n;
	char s1[] = {'a', 'e', 'o', 't', 'l'};
	char s2[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == s1[i] || *s == s1[i] - 32)
			{
				*s = s2[i] + '0';
			}
		}
	}
	return (r);
}
