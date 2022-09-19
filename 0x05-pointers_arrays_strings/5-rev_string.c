#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *S;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[s];
		c++;
	}
}
