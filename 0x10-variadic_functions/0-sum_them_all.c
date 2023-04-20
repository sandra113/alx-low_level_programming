#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the count if the remaining arguments
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int arg, sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		arg = va_arg(list, int);
		sum += arg;
	}
	va_end(list);
	return (sum);
}

