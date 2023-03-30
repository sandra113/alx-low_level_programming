#include "main.h"

/**
 * reverse_array - reverses the conten of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * return: result
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i -  1];
		a[n - i - 1] = t;
	}
}
