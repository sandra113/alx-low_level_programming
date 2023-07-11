#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_err - prints the error message
 * @message: - message to be printed
 */

void print_err(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * err_exit - exits with an error
 * @code: the exit code
 * @message: the error message
 */
void err_exit(int code, const char *message)
{
	print_err(message);
	exit(code);
}

/**
 * copy_file - copies the  content of one file into another
 * @file_from: the file whose content are copied
 * @file_to: the file where the copied content are pasted
 * Return: 0 success
 */

int copy_file(const char *file_from, const char *file_to)
{
	int first_file, second_file;
	ssize_t bytesread, writtenbytes;
	char buf[BUFFER_SIZE];

	first_file = open(file_from, O_RDONLY); /* Openning the source file */
	if (first_file == -1)
		err_exit(98, "Can't read from file");
	/* Opening the destination file */
	second_file = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (second_file == -1)
	{
		close(first_file);
		err_exit(99, "Can't write to file");
	}
	while ((bytesread = read(first_file, buf, BUFFER_SIZE)) > 0)
	{
		writtenbytes = write(second_file, buf, bytesread);
		if (writtenbytes == -1)
		{
			close(first_file);
			close(second_file);
			err_exit(99, "Can't write to file");
		}
	}
	if (bytesread == -1)
	{
		close(first_file);
		close(second_file);
		err_exit(98, "Can't read from file");
	}

	if (close(first_file) == -1)
		err_exit(100, "Can't close the file");
	if (close(second_file) == -1)
		err_exit(100, "Can't close the file");

	return (0);
}

/**
 * main - copies the content of a file to another
 * @argc: arguments count
 * @argv: arguments passed
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		print_err("Usage: cp file_from file_to");
		exit(97);
	}

	if (copy_file(file_from, file_to) == -1)
	{
		exit(1);
	}

	return (0);
}



