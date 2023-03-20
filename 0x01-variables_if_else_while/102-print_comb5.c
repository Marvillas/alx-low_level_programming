#include <stdio.h>
/**
 *  main -  program that prints all possible combinations of 2 2-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int one_digit = 0;
	int sec_digit;

	while (one_digit <= 98)
	{
		sec_digit = one_digit + 1;
		while (sec_digit <= 99)
		{
			putchar(one_digit / 10 + '0');
			putchar(one_digit % 10 + '0');
			putchar(' ');
			putchar(sec_digit / 10 + '0');
			putchar(sec_digit % 10 + '0');
			if (one_digit != 98 || sec_digit != 99)
			{
				putchar(',');
				putchar(' ');
			}
			sec_digit++;
		}
		one_digit++;
	}

	putchar('\n');
	return (0);
}
