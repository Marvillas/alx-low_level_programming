#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to print the times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= 15; i++)
		printf("%d x %d = %d\n", n, i, n * i);
}
