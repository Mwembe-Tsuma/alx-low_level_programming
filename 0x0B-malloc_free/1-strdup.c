#include "main.h"
#include <stdlib.h>

/**
 * _strdup-a fuction to return a pointer to allocated space in memory
 * @str: the string
 *
 * Return: A pointer or Null otherwise
 */

char *_strdup(char *str)
{
	char *s;
	int n, m = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;
	s = malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		s[m] = str[m];
	return (s);
}
