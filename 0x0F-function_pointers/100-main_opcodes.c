#include <stdio.h>
#include <stdlib.h>

/**
  *main- Print opcodes
  *@argc: Argument count
  *@argv: argument array
  *
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	int byte, i;
	unsigned char opcode;
	int (*addr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);
		if (i == byte - 1)
		continue;
		printf(" ");
		addr++;
	}
	printf("\n");
	return (0);
}
