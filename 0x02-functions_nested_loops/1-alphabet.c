#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabets
 *
 * This function prints the lowercase alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
/**
 * main - calls for the print_alphabet function
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
