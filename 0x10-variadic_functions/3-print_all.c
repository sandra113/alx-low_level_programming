#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: function pointer
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str, *s;

	va_list arguments;

	va_start(arguments, format);
	i = 0;
	s = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(arguments, double));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
				s = ", ";
				i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
