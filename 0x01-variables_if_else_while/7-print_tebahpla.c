#include <stdio.h>

/**
 * main - print alphabet in reverse order
 *
 * Return: aLways 0(sucesss)
 */

int main(void)
{
	char c;

	for (c = 'z'; c>= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
