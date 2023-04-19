#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add- Add two numbers
  *@a: first number
  *@b: second number
  *
  *Return: Sum
  */

int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
  *op_sub- subtract two numbers
  *@a: first number
  *@b: second number
  *
  *Return: Results
  */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
  *op_mul- Multiply two numbers
  *@a: first number
  *@b: second number
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
  *op_div- Divides two numbers
  *@a: 1st number
  *@b: 2nd number
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
  *@a: 1st number
  *@b: 2nd number
  *
  *Return: Modular
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
