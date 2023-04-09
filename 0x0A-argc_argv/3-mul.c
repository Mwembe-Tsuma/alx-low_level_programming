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
	int mul = 0;
	int count;

	if (argc <= 1)
	{
		printf("Error\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
		mul = atoi(argv[count - 1]) * atoi(argv[count]);
		}
		printf ("%d\n", mul);
	}
	return (0);
}
