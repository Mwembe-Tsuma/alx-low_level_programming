#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all- Sum all arguments passed
  *@n: Number of orgs
  *
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
