#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main- a program that multiply two integers
 *@argc: Number of commands in command line
 *@argv: Array of commands in command line
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int count, i, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]);
	res = 0;

	if (count < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && count >= 0; i++)
	{
		while (count >= coins[i])
		{
			res++;
			count = count - coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
