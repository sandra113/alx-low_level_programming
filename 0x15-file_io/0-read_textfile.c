#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	size_t bytes_read;
	char buffer[1024];  /* the buffer will hold the content of our file*/

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r"); /*opens the file for read only*/
	if (file == NULL)
		return (0);

	bytes_read = fread(buffer, 1, sizeof(buffer), file);

	while (bytes_read > 0 && bytes_read < letters)
	{
		fwrite(buffer, 1, bytes_read, stdout);
		letters -= bytes_read;
		bytes_read = fread(buffer, 1, sizeof(buffer), file);
	}

	fclose(file);
	return (bytes_read);
}




