#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* Find length of string */
	while (str[len] != '\0')
		len++;

	/* Print second half of string */
	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
