#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on Suceess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t textlen;
	size_t writtenbytes;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	file = fopen(filename, "a");
		if (file == NULL)
			return (-1);

	textlen = strlen(text_content);
	writtenbytes = fwrite(text_content, sizeof(char), textlen, file);

	fwrite("\n", sizeof(char), 1, file);

	fclose(file);

	if (writtenbytes != textlen)
		return (-1);

	return (1);
}


