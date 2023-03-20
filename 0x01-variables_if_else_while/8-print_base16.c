#include <stdio.h>
/**
 * main - Program that print numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex_digit;

	for (hex_digit = 0; hex_digit < 10; hex_digit++)
	{
		putchar(hex_digit + '0');
	}
	for (hex_digit = 0; hex_digit < 6; hex_digit++)
	{
		putchar(hex_digit + 'a');
	}
	putchar('\n');
	return (0);
}
