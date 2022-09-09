#include <stdio.h>
/**
 * main - print numbers from 0 to 9
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}


