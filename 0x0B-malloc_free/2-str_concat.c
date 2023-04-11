#include "main.h"
#include <stdlib.h>

/**
 * str_concat- A function to Concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 success or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	k = 0;

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	s = malloc(sizeof(char) * (j + k + 1));
	if (s == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (s1[j] != '\0')
	{
		s[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		s[j] = s2[k];
		j++, k++;
	}
	s[j] = '\0';
	return (s);
}
