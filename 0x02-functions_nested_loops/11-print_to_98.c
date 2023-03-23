#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by a comma and a space.
 */
void print_to_98(int n)
{
	int i;

	if (n != 98)
	{
		printf("%d", n);
		for (i = n + ((n < 98) ? 1 : -1); i != 98; i += ((n < 98) ? 1 : -1))
		{
			printf(", %d", i);
		}
	}
	printf(", 98\n");
}
