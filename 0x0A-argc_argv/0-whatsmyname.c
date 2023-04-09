#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main- a program that prints its name
 *@argc: Number of commands in command line
 *@argv: Array of commands in command line
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
