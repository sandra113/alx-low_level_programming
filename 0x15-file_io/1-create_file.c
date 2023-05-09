#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Returns 1 success
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
