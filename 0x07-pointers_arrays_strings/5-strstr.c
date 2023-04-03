#include "main.h"

/**
 *_strstr- a function that locates a substring
 *@haystack: String to be checked
 *@needle: the input string
 *
 * Return: pointer to the beginning of the substring NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *j = needle;

		while (*k == *j && *k != '\0')
		{
			k++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
