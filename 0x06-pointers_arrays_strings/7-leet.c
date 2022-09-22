#include "main.h"

/**
 * leet - leet encoder
 * @changed: string to be encoded
 *
 * Return: address of the encoded string
 */

char *leet(char *changed)
{
	int index, j;
	char minus[] = {'a', 'e', 'o', 't', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L','\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};


	for (j = 0; changed[index] != '\0'; ++index)
		{
			for (j = 0; j < 5; j++)
			{
				if (changed[index] == minus[j] || changed[index] == mayus[j])
				{
					changed[index] = numbers[j];
				}
			}
		}
		return (changed);
}
