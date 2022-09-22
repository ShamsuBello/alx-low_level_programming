#include "main.h"

/**
 * _strcat - concartinate the string pointed to by @src to
 * the ebd of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concartinate upon
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
