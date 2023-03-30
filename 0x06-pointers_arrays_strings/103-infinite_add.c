#include "main.h"

/**
 *rev_string - reverse array
 * @n: integer params
 *Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp1;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp1 = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp1;
	}
}

/**
 *infinite_add - add two  numbers
 *@n1: string number to add to n2
 *@n2: string number to add to n1
 *@r: buffer to store the sum
 *@size_r: size of buffer
 *Return: pointer to sum or 0 if it does not fit in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;

	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp = val1 + val2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
