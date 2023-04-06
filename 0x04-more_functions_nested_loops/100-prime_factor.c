#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);

	return (0);
}
