#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @str: This is my input string
 *
 * Return: String converted to string
 */

char *rot13(char *str)
{
	int index, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; ++index)
	{
		for (count = 0; minus[count] != '\0'; count++)
		{
			if (str[index] == minus[count])
			{
				str[index] = mayus[count];
				break;
			}
		}
	}
	str[index] = '\0';
	return (str);
}
	
