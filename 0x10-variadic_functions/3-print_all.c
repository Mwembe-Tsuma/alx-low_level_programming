#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_all- Print everything
  *@format: Arguments passed
  *
  *Return: Nothing
  */

void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s, *p = "";
	int i, x = 0;
	float f;

	va_start(args, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					c = va_arg(args, int);
					printf("%s%c", p, c);
					break;
				case 'i':
					i = va_arg(args, int);
					printf("%s%d", p, i);
					break;
				case 'f':
					f = (float)va_arg(args, double);
					printf("%s%f", p, f);
					break;
				case 's':
					s = va_arg(args, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					x++;
					continue;
			}
			p = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(args);
}
