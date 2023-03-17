#include <stdio.h>
/* more header goes there */
/**
 * main - Positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i % 3 + '0');
				putchar(j % 3 + '0');
				putchar(k % 3 + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
return (0);

}


