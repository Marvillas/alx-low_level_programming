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
		return (sqrt_recursion_helper(n, 1, n));
	}
}

/**
 * sqrt_recursion_helper - helper function to recursively find the square
 * root of a number.
 * @n: integer number to find the square root of
 * @low: the lowest value for the square root.
 * @high: the highest value for the square root.
 *
 * Return: If n does not have a natural square root, the function should
 * return -1
 */
int sqrt_recursion_helper(int n, int low, int high)
{
	/* using binary search to find square root */
	int mid;

	if (high < low)
	{
		return (-1);
	}

	mid = ((high + low) / 2);
	if ((mid * mid) == n)
	{
		return (mid);
	}
	else if ((mid * mid) > n)
	{
		return (sqrt_recursion_helper(n, low, mid - 1));
	}
	else
	{
		return (sqrt_recursion_helper(n, mid + 1, high));
	}
}
