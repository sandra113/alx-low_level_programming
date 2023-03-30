#include "main.h"

/**
 * leet - encodes a string
 * @str: - the string
 * Return: str
 */

char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
			}
		}
	}
	return (str);
}

