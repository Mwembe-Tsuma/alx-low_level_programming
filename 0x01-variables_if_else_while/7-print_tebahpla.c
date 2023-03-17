#include <stdio.h>

/**
 * main- Entry point of a program
 * Return: Always 0 success
 */

int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}
