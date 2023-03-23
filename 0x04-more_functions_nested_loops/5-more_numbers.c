#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
			_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}


