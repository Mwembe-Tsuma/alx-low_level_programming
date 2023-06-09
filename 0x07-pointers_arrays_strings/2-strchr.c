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
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
