#include <stdio.h>
/* more header goes there */
/**
 * main - Positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int n1 = i / 10, n2 = i % 10, n3 = j / 10, n4 = j % 10;
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(' ');
				putchar(n3 + '0');
				putchar(n4 + '0');
				if (i != 99 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	return (0);
}

