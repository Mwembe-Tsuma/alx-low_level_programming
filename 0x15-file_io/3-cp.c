#include "main.h"
#include <stdio.h>

char *create_buff(char *file);
void close_(int fp);

/**
  *create_buff - Create a buffer of 1024 bytes
  *@file: File name
  *
  *Return: A poimter to buffer
  */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(1024 * sizeof(char));

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
  *close_- Close filr desc
  *@fp: Descriptor
  *
  *Return: Nothing
  */

void close_(int fp)
{
	int i;

	i = close(fp);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Caanot close fp %d\n", fp);
		exit(100);
	}
}

/**
  *main - Copies the contents
  *@argc: The number of args
  *@argv: Array of pointers to the args
  *
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	int src, dest, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(dest, buff, rd);
		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_(src);
	close_(dest);

	return (0);
}
