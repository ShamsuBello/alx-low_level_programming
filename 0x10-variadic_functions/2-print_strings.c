#include "variadic_functions.h"

/**
 * print_strings - function that print strings, followed by a new line
 * @seperator: this is the input seperator
 * @n: this is the number of strings
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *str;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(li, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(li);
}
