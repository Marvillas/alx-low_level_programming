#include "main.h"
/**
 * print_last_digit - checks for lowercase character
 * @n: the character to check
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("%d\n", last_digit);
	return (last_digit);
}
