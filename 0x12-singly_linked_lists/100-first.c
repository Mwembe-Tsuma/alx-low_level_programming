#include <stdio.h>

void my_Function(void) __attribute__ ((constructor));

/**
  *my_Function- Prints a sentense
  *
  *Return: Nothing
  */
void my_Function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
