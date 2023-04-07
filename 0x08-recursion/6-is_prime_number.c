#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the integer argument to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}

	return (1);
}