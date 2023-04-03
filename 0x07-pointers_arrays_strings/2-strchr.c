#include "main.h"

/**
 * _strchr- A function that locates a character in a string
 * @s:the string to be searched
 * @c: the character to be searched
 *
 * Return: A pointer to the first occurence of character c.
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
		j++;
	}
	return (0);
}
