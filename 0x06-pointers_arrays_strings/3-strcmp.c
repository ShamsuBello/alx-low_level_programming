#include "main.h"

/**
 * _strcmp - functions which compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 
 * 		returns zero if s1 == s2
 * 		returns negative number if s1 < s2
 * 		returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
