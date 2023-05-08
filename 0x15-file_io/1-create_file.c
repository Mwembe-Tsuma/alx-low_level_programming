#include "main.h"

/**
  *create_file - Create a file
  *@filename: File to be created
  *@text_content: Content to add to file
  *
  *Return: 1 success or -1 otherwise
  */

int create_file(const char *filename, char *text_content)
{
	int fd, write_bytes;
	int len = 0;
	int flags = O_WRONLY | O_APPEND;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, flags, mode);
	write_bytes = write(fd, text_content, len);

	if (fd == -1 || write_bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
