#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check-Checks for alphabet
 * @s: the string to check
 *
 * Return: 0 sucess
 */

int check(char *s)
{
	unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 *main- a program that adds positive numbers
 *@argc: Number of commands in command line
 *@argv: Array of commands in command line
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int count = 1;

	while (count < argc)
	{
		if (check(argv[count]))
		{
		add += atoi(argv[count]);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\n", add);
	return (0);
}
