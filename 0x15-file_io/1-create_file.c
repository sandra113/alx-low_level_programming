#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	file = fopen(filename, "rw");
	if (file == NULL)
		return (-1);
	if (filename == NULL)
		return (-1);

	fprintf(file, "%s", text_content);

	fclose(file);
	return (0);
}
