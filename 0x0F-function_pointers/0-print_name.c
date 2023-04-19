#include "function_pointers.h"

/**
  *print_name - Prints a name
  *@name: string name to print
  *@f: a function pointer of char argument
  *
  *return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
