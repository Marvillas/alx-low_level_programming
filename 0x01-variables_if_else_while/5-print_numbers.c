#include <stdio.h>
/**
 * main - This prints out digits from 0-9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
