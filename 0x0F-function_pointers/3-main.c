#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - performs operations
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i, j;
	char *p;

	p = argv[2];

	if (argc != 4 || p[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	p = argv[2];

	if (get_op_func(p) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == '%' && j == 0) || (*p == '/' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(p)(i, j));
	return (0);
}
