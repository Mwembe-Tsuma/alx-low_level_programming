#include "main.h"

int is_prime_number_check(int n, int m);

/**
 *is_prime_number-A function to check for a prime number
 *@n: The given integer to check
 *
 *Return: 1 if is prime or 0 if is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_check(n, n - 1));
}
/**
 *is_prime_number_check- A function to test for prime number
 *@n: The given int eger to check
 *@m: The integer to test agains n
 *
 *Return: 1 if is prime or 0 if is not prime
 */

int is_prime_number_check(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (is_prime_number_check(n, m - 1));
}
