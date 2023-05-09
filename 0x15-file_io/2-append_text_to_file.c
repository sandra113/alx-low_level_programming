#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be appended to the file
 * Return: 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len, bytes;

	if (filename == NULL)
		return (-1);
	
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = fwrite(text_content, 1, len, file);

		if (bytes < len)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}

