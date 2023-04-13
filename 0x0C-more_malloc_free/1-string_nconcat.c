#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat-Concatenates two strings
 * @s1: dest string
 * @s2: Source string
 * @n: bytes to conct
 *
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0;
	unsigned int ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		str = malloc(sizeof(char) * (ln1 + n + 1));
	else
		str = malloc(sizeof(char) * (ln1 + ln2 + n + 1));
	if (!str)
		return (NULL);
	while (x < ln1)
	{
		str[x] = s1[x];
		x++;
	}
	while (n < ln2 && x < (ln1 + n))
		str[x++] = s2[y++];

	while (n >= ln2 && x < (ln1 + ln2))
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}


