#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checkn - checks if a string is a digit
 * @s: string
 * Return: 0 Success
 */
int checkn(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - calculates the sum of arguments passed
 * @argc: counts the number of arguments
 * @argv: arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int count;
	int str;
	int sum;

	count = 1;
	while (count < argc)
	{
		if (checkn(argv[count]))
		{
			str = atoi(argv[count]);
			sum += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
