#include <stdio.h>
/**
 * main - This program print the lower case of alphabet in reverse.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
