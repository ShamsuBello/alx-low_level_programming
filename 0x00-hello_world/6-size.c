#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	printf("Size of a char: %Id byte(s)\n", sizeof(char));
	printf("Size of an int: %Id byte(S)\n", sizeof(int));
	printf("Size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(long long));
	printf("Size of a float: %Id byte(s)\n", sizeof(float));
	return (0);
}
