#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - calculates the sum two integers
 * @a: the first integer
 * @b: the second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: results
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: results
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: the first integer
 * @b: the second integer
 * Return: results
 */

int op_mod(int a, int b)
{
	return (a % b);
}
