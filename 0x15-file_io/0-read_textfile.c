#include "main.h"
#include <stdio.h>

/**
  *read_textfile - Read from a file and print to stdout
  *@filename: File to read from
  *@letters: Letters to read
  *
  *Return: Number of letters read or 0 otherwise
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	read_bytes = fread(fp, buffer sizeof(char), letters);
	if (read_bytes == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	free(buffer);
	fclose(fp);
	return (write_bytes);
}
