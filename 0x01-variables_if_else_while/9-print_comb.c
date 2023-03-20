#include <stdio.h>
/**
 * main - This program print the lower case of alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
