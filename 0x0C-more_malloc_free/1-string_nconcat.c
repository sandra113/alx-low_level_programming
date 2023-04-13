#includei "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pp;
	unsigned int i;
	unsigned int j;


	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	if (n < strlen(s2))
	{
		pp = malloc(sizeof(char) * (strlen(s1) + n + 1));
	}
	else
	{
		pp = malloc(sizeof(char) * (strlen(s1) + (strlen(s2)) + 1));
	}
	if (pp == NULL)
		return (NULL);
	i = 0;
	pp = s1;
	while (pp[i] < '\0')
	{
		i++;
	}
	for (j = 0; s2[j] < '\0'; j++)
	{
		if (n > strlen(s2))
		{
			pp[i] = s2[j];
		}
		else
		{
			for (j = 0; j <= n; j++)
			{
				pp[i] = s2[j];
			}
		}
	}
	return (pp);
}
