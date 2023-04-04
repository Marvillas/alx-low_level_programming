#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints out the sum of 2 diags of
 * square matrix of integers
 *
 * @a: the square matrix of integers
 * @size: the size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
