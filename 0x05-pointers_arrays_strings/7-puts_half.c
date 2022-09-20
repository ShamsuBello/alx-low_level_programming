#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that print half of a string
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
