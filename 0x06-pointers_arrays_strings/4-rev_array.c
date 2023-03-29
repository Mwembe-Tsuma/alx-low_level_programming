#include "main.h"

/**
 *reverse_array- Reverse an array
 *@a: The array
 *@n: Number of  elements in array
 *
 *Return: Reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}