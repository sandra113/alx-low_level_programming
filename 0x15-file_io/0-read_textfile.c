#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: the file to be read.
 * @letters: the number of letters it should read and print
 * Return:the number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bytesread;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	bytesread = fread(buf, sizeof(char), letters, file);
	if (bytesread <= 0)
	{
		free(buf);
		fclose(file);
		return (0);
	}

	buf[bytesread] = '\0';
	printf("%s", buf);

	free(buf);
	fclose(file);

	return (bytesread);
}
