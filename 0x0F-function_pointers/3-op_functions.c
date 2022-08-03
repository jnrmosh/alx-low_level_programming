#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf ("Error\n");
	exit (100);
}

/**
 * op_mod - modulus
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit (100);
}
