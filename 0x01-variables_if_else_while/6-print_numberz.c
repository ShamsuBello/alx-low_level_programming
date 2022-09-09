#include <stdio.h>

/**
 * main - print all single digit of base 10
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
