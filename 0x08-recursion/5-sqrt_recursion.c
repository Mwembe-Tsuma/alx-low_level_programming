#include "main.h"

int sqr_root(int n, int m);

/**
 *_sqrt_recursion-A function to find the square root of a number n
 *@n: The number to get it square root
 *
 *Return: 1 if is prime or 0 if is not prime
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_root(n, 0));
}
/**
 *sqr_root- A function to test for square root of a number n
 *@n: The given number to get its square root
 *@m: The integer to test agains n
 *
 *Return: 1 if is prime or 0 if is not prime
 */

int sqr_root(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (sqr_root(n, m + 1));
}
