#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_string - checks if a string contains only digits
 * @str: the string
 *
 * Return: 0 success
 */

int is_digit_string(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		if (isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two digits
 * @num1: first number
 * @num2: second number
 * Return: the product
 */

int multiply(char *num1, char *num2)
{
	int i, j, d1, d2, len1, len2, mult;

	len1 = strlen(num1);
	len2 = strlen(num2);

	for (i = 0; i < len1 - 1; i++)
	{
		d1 = num1[i] - '0';
		for (j = 0; j < len2 - 1; j++)
		{
			d2 = num2[j] - '0';
		}
		mult = d1 * d2;
	}
	return (mult);
}

/**
 * main - multiplies two arguments passed
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	res = multiply(argv[1], argv[2]);
	printf("%d\n", res);
	return (0);
}


