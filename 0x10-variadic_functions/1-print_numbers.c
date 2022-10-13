#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @seperator: this is input seperator
 * @n: this is the input number
 */

void print_numbers(const char *seprator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_list(valist, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (seperator != NULL && count != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
