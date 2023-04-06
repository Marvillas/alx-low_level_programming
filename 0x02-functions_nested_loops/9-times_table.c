#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	/* Print the table header */
	_putchar('0');
	for (i = 1; i <= 9; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(i + '0');
	}
	_putchar('\n');

	/* Print the table rows */
	for (i = 1; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
