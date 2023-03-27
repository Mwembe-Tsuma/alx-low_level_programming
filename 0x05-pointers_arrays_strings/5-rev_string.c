#include "main.h"

/**
 * rev_string- Print a string in reverse
 * @s: The strings to be printed
 *
 * Return: 0 Success
 */

void rev_string(char *s)
{
	int counter = 0, i;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
