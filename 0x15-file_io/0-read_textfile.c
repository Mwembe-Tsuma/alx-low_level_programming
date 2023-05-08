#include "main.h"

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
	ssize_t fp;
	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	read_bytes = read(fp, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fp);
	return (write_bytes);
}
