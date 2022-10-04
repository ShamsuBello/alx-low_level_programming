#include "main.h"

/**
 * create_array - creating an array
 * @size: size of array to be created
 * @c: character an aray is initialiazed with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(c));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		a = 0;
		while (a < size)
		{
			*(s + a) = c;
			a++;
		}
		return (s);
	}
}

