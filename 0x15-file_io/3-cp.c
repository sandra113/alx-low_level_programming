#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: arguments passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	FILE *file_from;
	FILE *file_to;
	unsigned char buffer[1024];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "wb");
	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[2]);
		fclose(file_from);
		exit(99);
	}
	while ((bytes_read = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, file_to);
		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			exit(99);
		}
	}

	fclose(file_from);
	fclose(file_to);
	return (0);
}
