#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, result;

	for (i = 0; i <= 10; i++)
	{
		result = i * 9;

		/* Print the equation and result */
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
		_putchar('\n');
	}
}

