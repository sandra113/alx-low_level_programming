#include "main.h"

/**
 * rot13 - encodes a string; rotates by 13 places
 * @str: - the string
 * Return: str
 */

char *rot13(char *str)
{
	char *string1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *Rot_string = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == string1[j])
			{
				str[i] = Rot_string[j];
				break;
			}
		}
	}
	return (str);
}

