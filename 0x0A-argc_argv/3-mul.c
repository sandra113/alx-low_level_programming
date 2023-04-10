#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: Result
 */

int _atoi(char *s)
{
	int i, j, n, l, f, dgt;

	i = 0;
	j = 0;
	n = 0;
	l = 0;
	f = 0;
	dgt = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (j % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
