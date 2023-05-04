#include "main.h"

/**
  *get_endianness - Check the endianness
  *
  *Return: 0 or 1
  *
  */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr);
}
