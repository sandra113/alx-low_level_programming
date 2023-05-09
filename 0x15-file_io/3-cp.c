#include <stdio.h>
#include "main.h"

/**
 * _cp - copies the content of a file to another
 * @file_from: original file
 * @file_to: the copy of the file
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		exit_with_error("Usage: cp file_from file_to", 97);
	}


