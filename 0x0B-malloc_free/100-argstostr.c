#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates a string
 * @ac: number of arguments
 * @av: arguments passed
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;


	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++; /*total length of the concatenated string*/
		}
		len++; /*for the new line character add 1*/
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j]; /* concatenate the arguments */
		}
		str[k++] = '\n'; /* add a new line after each argument */
	}
	str[k] = '\0';
	return (str);
}
