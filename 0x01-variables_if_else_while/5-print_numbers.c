#include <stdio.h>
/**
 * main - This prints out digits from 0-9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
