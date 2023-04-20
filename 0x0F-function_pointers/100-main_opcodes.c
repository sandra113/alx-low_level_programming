#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints its own opcodes
 * @argc: - arguments count
 * @argv: - arguments array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, b;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]); /*b is the number of bytes*/

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx", p[i]);
	}
	return (0);
}





