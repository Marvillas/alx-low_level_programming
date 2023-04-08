#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Integer argument to find the square root of
 *
 * Return: If n does not have a natural square root, the function should
 * return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_recursion_helper(n,1));
	}
}

/**
 * sqrt_recursion_helper - helper function to recursively find the square
 * root of a number.
 * @n: integer number to find the square root of
 * @i: 
 *
 * Return: If n does not have a natural square root, the function should
 * return -1
 */
int sqrt_recursion_helper(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (sqrt_recursion_helper(n, i + 1));
}
