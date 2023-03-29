#include "main.h"

/**
 *string_toupper- Change a string to upper
 *@str: The string
 *
 *Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
