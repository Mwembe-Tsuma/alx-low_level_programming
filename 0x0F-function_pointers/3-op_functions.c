#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add- Add two integers
  *@a: 1st integer
  *@b: 2nd integer
  *
  *Return: Sum
  */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
  *op_sub- subtract two integers
  *@a: 1st integer
  *@b: 2nd integer
  *
  *Return: Results
  */

int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

/**
  *op_mul- Multiply two integers
  *@a: 1st integer
  *@b: 2nd integer
  *
  *Return: Results
  */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
  *op_div- Divides two integers
  *@a: 1st integer
  *@b: 2nd integer
  *
  *Return: Results
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod- Modular
  *@a: 1st integer
  *@b: 2nd integer
  *
  *Return: mod
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
