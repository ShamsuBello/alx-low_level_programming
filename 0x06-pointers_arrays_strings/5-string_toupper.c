#include "main.h"

/**
 * string_toupper - changes all lowercase letter to uppercase
 * @str: string to be changed
 *
 * Return: address to the string
 */

char *string_toupper(char *str)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; str[index] != 0; ++index)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - desp;
		}
	}
	retyrn (str);
}
