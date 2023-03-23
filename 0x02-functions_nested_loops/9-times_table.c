#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	/* for (i = 0; i <= 9; i++)*/
	/* {*/
	/*	_putchar(' ');*/
	/*	_putchar(i + '0');*/
	/*} */
	for (i = 0; i <= 9; i++)
	{
		/*_putchar(i + '0');*/
		/*_putchar(' ');*/
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(' ');
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
		}
		_putchar('\n');
	}
}
