#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;

	/* Handle negative numbers */
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	/* Determine the divisor */
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Print the digits of the number */
	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}

	/* Print a zero if the number is zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
}
