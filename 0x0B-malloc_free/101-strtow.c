#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @s: the string
 *
 * Return: number of words
 */

int word_count(char *s)
{
	int count;
	int word;
	int i;

	count = 0;
	word = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!word && s[i] != ' ')
		{
			word = 1;
			count++;
		}
		if (word && s[i] == ' ')
		{
			word = 0;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: - string
 * Return: - pointer to array of strings (success)
 */
char **strtow(char *str)
{
	char **wds, *sss;
	int i, a = 0, j = 0, len = 0, words, start, end;

	while (*(str + len))
		len++; /* calculates the length of the string */
	words = word_count(str); /*calculates number of words */
	if (words == 0)
		return (NULL);
	wds = (char **) malloc(sizeof(char *) * (words + 1));
	if (wds == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0') /* determines the end of a word */
		{
			if (a)
			{
				end = i;
				sss = (char *) malloc(sizeof(char) * (a + 1));

				if (sss == NULL)
					return (NULL);

				while (start < end)
					*sss++ = str[start++];
				*sss = '\0';
				wds[j] = sss - a;
				j++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}
	wds[j] = NULL;
	return (wds);
}




