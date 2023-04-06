#include "main.h"
int check_palindrome(char *s, int n, int m);
int string_len(char *s);

/**
 * is_palindrome- A function that checks if a string is palindrome
 * @s: The string to check
 *
 * Return 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, string_len(s)));
}
/**
 * string_len- A function to check lenght of the string s
 * @s: the string to check
 *
 * Return: The lenght of string s
 */

int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}
/**
 * check_palindrome- A function to check for palindrome
 * @s: The string to check
 * @n: Integer to test
 * @m: Integer to store string length
 *
 * Return: 1if palindrome or 0 otherwise
 */

int check_palindrome(char *s, int n, int m)
{
	if (*(s + n) != *(s + m - 1))
		return (0);
	if (n >= m)
		return (1);
	return (check_palindrome(s, n + 1, m - 1));
}
