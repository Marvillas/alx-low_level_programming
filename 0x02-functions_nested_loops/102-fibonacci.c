#include <stdio.h>
#include "main"
/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers.
 */
void print_fibonacci(void)
{
	int count, term1 = 0, term2 = 1, next_term;

	for (count = 1; count <= 50; count++)
	{
		printf("%d", term2);
		if (count != 50)
			printf(", ");
		next_term = term1 + term2;
		term1 = term2;
		term2 = next_term;
	}
	putchar('\n');
}
