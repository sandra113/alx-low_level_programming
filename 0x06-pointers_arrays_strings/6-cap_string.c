#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: results
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
		{
			if ((str[i] >= 'a') & (str[i] <= 'z'))
			{
				str[i] -= 'a' - 'A';
			}
		}
	}
	return (str);
}
