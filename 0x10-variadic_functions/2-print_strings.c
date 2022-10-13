#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings, followed by a new line
 * @seperator: this is the input seperator
 * @n: this is the number of items
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(ap, char *);
		if (s == NULL)
			printf("%s", s);
		if (seperator != NULL && (count + 1) != n)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
