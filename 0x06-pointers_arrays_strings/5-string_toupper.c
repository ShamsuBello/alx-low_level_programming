#include "main.h"

/**
 * string_toupper - changes all lowercase letter to uppercase
 *
 * @hi: string to be changed
 *
 * Return: address to the string
 */

char *string_toupper(char *hi)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; hi[index] != '\0'; ++index)
	{
		if (hi[index] >= 'a' && hi[index] <= 'z')
		{
			hi[index] = hi[index] - desp;
		}
	}
	return (hi);
}
