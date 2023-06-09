#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the integer argument to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - checks prime number
 * @n: integer argument number
 * @i: int argument
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime(n, i + 1));
}
