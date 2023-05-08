#include "main.h"

/**
  *append_text_to_file - Append a file
  *@filename: File to be appended
  *@text_content: Content to add to file
  *
  *Return: 1 success or -1 otherwise
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, write_bytes;
	int len = 0;

	/* int flags O_WRONLY | O_APPEND; */

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	write_bytes = write(fp, text_content, len);

	if (fp == -1 || write_bytes == -1)
		return (-1);

	close(fp);
	return (1);
}
