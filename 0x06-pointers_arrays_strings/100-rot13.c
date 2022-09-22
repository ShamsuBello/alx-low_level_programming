#include "main.h"

/**
 * rot13 - rot13 encoder
 *
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */

char *rot13(char *str)
{
	int index, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; ++index)
	{
		for (count = 0; minus[count] != '\0'; count++)
		{
			if (str[index] == minus[count])
			{
				str[index] = mayus[count]
				break;
			}
		}
	}
	str[index] = '\0';
	return (str);
}
	
