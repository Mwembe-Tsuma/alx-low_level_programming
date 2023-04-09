#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main- a program that prints the number of arguments passed to it
 *@argc: Number of commands in command line
 *@argv: Array of commands in command line
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
