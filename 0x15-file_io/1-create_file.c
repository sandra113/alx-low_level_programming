#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 on Success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t writtenbytes;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		writtenbytes = write(file, text_content, strlen(text_content));
		if (writtenbytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
