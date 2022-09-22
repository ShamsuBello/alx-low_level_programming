#include "main.h"

/**
 * _strncat - concartinate two strings but add inputted numbers of byte
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
		dest[index] = '\0';
	}
	return (dest);
}
